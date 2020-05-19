import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.fsm._
import spinal.sim._

import scala.util.Random

class Karatsuba(width: Int) extends Component{
    val io = new Bundle{
        val fromUart = slave Flow(Bits(width bits))
        val toUart = master Flow(Bits(width bits))
    }

    val fsm = new StateMachine{
        val buffer = Reg(Bits(width bits)) init(0)
        val result = Reg(Bits(width bits)) init(0)
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
                val mult = new KaraMult(width/2)
                mult.io.a := buffer(0 to ((width/2)-1))
                mult.io.b := buffer((width/2) to (width-1))
                result := mult.io.result

                // result := mult(buffer(0 to ((width/2)-1)), buffer((width/2) to (width-1)), (width/2))
                goto(stateC)
            }
        }
        val stateC : State = new State{
            whenIsActive {
                io.toUart.payload := result
                io.toUart.valid := Delay(True, cycleCount = 1)
                goto(stateA)
            }
        }
    }

    /***
    def mult(a: Bits, b: Bits, width: Int): Bits = {
        if (width <= 16){
            return (a.asUInt*b.asUInt).asBits.resize(width*2)
        }

        // Splitting a and b into two parts with length width/2 each (high and low)
        val al = a(0 to ((width/2)-1))
        val ah = a((width/2) to (width-1))
        val bl = b(0 to ((width/2)-1))
        val bh = b((width/2) to (width-1))

        // Calc ahl and bhl as signed integers
        val alh_int = (al.resize(width/2+1).asSInt - ah.resize(width/2+1).asSInt)
        val bhl_int = (bh.resize(width/2+1).asSInt - bl.resize(width/2+1).asSInt)

        // Recursions
        val p1 = mult(ah, bh, width/2)
        val p2 = mult(al, bl, width/2)
        val p3 = mult(alh_int.abs.asBits, bhl_int.abs.asBits, width/2)

        val result_h = p1 << width
        val result_m =  Bits ((width + (width/2) + 2) bits)
        when((alh_int < 0) ^ (bhl_int < 0)){
            result_m := (((p1.asUInt +^ p2.asUInt - p3.asUInt).asBits) << width/2).resized
        }.otherwise {
            result_m := (((p1.asUInt +^ p2.asUInt +^ p3.asUInt).asBits) << width/2).resized
        }
        val result_l = p2

        return (result_h.asUInt + result_m.asUInt + result_l.asUInt).asBits.resize(width*2)
    }
    ***/
}

class KaraMult(width: Int) extends Component{
    val io = new Bundle{
        val a = in Bits(width bits)
        val b = in Bits(width bits)
        val result = out Bits(width*2 bits)
        val high = out Bits(width*2 bits)
        val mid = out Bits(width*2 bits)
        val low = out Bits(width*2 bits)
        val alh_int_out = out SInt(width/2+1 bits)
        val bhl_int_out = out SInt(width/2+1 bits)
    }

    if (width <= 16){
        io.result := (io.a.asUInt*io.b.asUInt).asBits.resize(width*2)
    } else {
        // Splitting a and b into two parts with length width/2 each (high and low)
        val al = io.a(0 to ((width/2)-1))
        val ah = io.a((width/2) to (width-1))
        val bl = io.b(0 to ((width/2)-1))
        val bh = io.b((width/2) to (width-1))

        // Calc ahl and bhl as signed integers
        val alh_int = (al.resize(width/2+1).asSInt - ah.resize(width/2+1).asSInt)
        val bhl_int = (bh.resize(width/2+1).asSInt - bl.resize(width/2+1).asSInt)

        io.alh_int_out := alh_int
        io.bhl_int_out := bhl_int

        // Recursions
        val p1 = new KaraMult(width/2)
        p1.io.a := ah
        p1.io.b := bh
        val rh = p1.io.result

        val p2 = new KaraMult(width/2)
        p2.io.a := al
        p2.io.b := bl
        val rl = p2.io.result

        val p3 = new KaraMult(width/2)
        p3.io.a := alh_int.abs.asBits.resize(width/2)
        p3.io.b := bhl_int.abs.asBits.resize(width/2)
        val rm = p3.io.result

        // Calc the results from the recursions and return them
        val result_m =  Bits ((width + (width/2) + 2) bits)
        when((alh_int < 0) ^ (bhl_int < 0)){
            result_m := (((rh.asUInt +^ rl.asUInt - rm.asUInt).asBits) << width/2).resized
        }.otherwise {
            result_m := (((rh.asUInt +^ rl.asUInt +^ rm.asUInt).asBits) << width/2).resized
        }
        val result_h = rh << width
        val result_l = rl

        io.high := result_h.resize(width*2)
        io.mid := result_m.resize(width*2)
        io.low := result_l.resize(width*2)

        io.result := (result_h.asUInt +^ result_m.asUInt +^ result_l.asUInt).asBits.resize(width*2)
    }
}
