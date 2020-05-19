import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.fsm._

import scala.util.Random

class Square(width: Int) extends Component{
    val io = new Bundle{
        val fromUart = slave Flow(Bits(width bits))
        val toUart = master Flow(Bits(width bits))
    }

    val fsm = new StateMachine{
        val buffer = Reg(Bits(width bits)) init(0)
        val result = Reg(UInt(width bits)) init(0)
        io.toUart.payload := 0
        io.toUart.valid := False

        val stateA : State = new State with EntryPoint{
            whenIsActive {
                when(io.fromUart.valid) {
                    buffer := io.fromUart.payload
                    goto(stateB)
                }
            }
        }
        val stateB : State = new State{
            whenIsActive {
                // result := (buffer(0 to ((width/2)-1)).asUInt * buffer(0 to ((width/2)-1)).asUInt) % (buffer((width/2) to (width-1))).asUInt
                result := mult(buffer(0 to ((width/2)-1)), buffer((width/2) to (width-1)), (width/2)).asUInt
                goto(stateC)
            }
        }
        val stateC : State = new State{
            whenIsActive {
                io.toUart.payload := result.asBits
                io.toUart.valid := Delay(True, cycleCount = 1)
                goto(stateA)
            }
        }
    }

    def mult(a: Bits, b: Bits, width: Int): Bits = {
        if (width <= 16){
            return (a.asUInt*b.asUInt).asBits.resize(width*2)
        }
        val res_1 = mult(a(0 to ((width/2)-1)), b(0 to ((width/2)-1)), (width/2))
        val res_2 = mult(a((width/2) to (width-1)), b((width/2) to (width-1)), (width/2))
        return (res_1.asUInt + res_2.asUInt).asBits.resize(width*2)
    }
}
