import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.fsm._

import scala.util.Random

class Mult extends Component{
    val io = new Bundle{
        val fromUart = slave Flow(Bits(48 bits))
        val toUart = master Flow(Bits(48 bits))
    }

    val fsm = new StateMachine{
        val buffer = Reg(Bits(48 bits)) init(0)
        val result = Reg(UInt(48 bits)) init(0)
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
                result := buffer(0 to 23).asUInt * buffer(24 to 47).asUInt
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
}
