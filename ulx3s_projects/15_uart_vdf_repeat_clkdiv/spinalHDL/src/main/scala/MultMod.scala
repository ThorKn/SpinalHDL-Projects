import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.fsm._
import spinal.sim._

import scala.util.Random

class MultMod(width: Int) extends Component{
    val io = new Bundle{
        val fromUart       = slave Flow(Bits(((3*width)+48) bits))
        val toUart         = master Flow(Bits(width bits))
        val temp_1_out     = out Bits(width*2 bits)
        val temp_2_out     = out Bits(width*2 bits)
        val temp_2a_out    = out Bits(width bits)
        val temp_2b_out    = out Bits(width*2 bits)
        val temp_2c_out    = out Bits(width*2 bits)
        val temp_3_out     = out Bits(width*2 bits)
        val temp_4_out     = out Bits(width*2 bits)
        val temp_5_out     = out Bits(width*2 bits)
        val temp_6_out     = out Bits(width*2 bits)
        val temp_7_out     = out Bits(width*2 bits)
        val temp_corr_flag = out UInt(3 bits)
        val temp_corr_flag_2 = out UInt(3 bits)
    }

    val fsm = new StateMachine{
        val a             = Reg(Bits(width bits)) init(0)
        val mod_n         = Reg(Bits(width bits)) init(0)
        val mue           = Reg(Bits(width + 8 bits)) init(0)
        val k             = Reg(Bits(8 bits)) init(0)
        val t             = Reg(Bits(32 bits)) init(0)
        val result_mult   = Reg(Bits(width*2 bits)) init(0)
        val result_barret = Reg(Bits(width*2 bits)) init(0)
        val mult          = new KaraMult(width)
        val temp_2        = Reg(Bits(width*2 bits)) init(0)
        val temp_3        = Reg(Bits(width*2 bits)) init(0)
        val temp_7        = Reg(SInt(width*2 bits)) init(0)
        val temp_8        = Reg(UInt(width*2 bits)) init(0)
        val mask          = Reg(Bits(width*2 bits)) init(0)
        val repeatCounter = Reg(UInt(32 bits)) init (0)

        io.toUart.payload := 0
        io.toUart.valid := False
        mult.io.a           := 0
        mult.io.b           := 0
        io.temp_1_out       := 0
        io.temp_2_out       := 0
        io.temp_2a_out      := 0
        io.temp_2b_out      := 0
        io.temp_2c_out      := 0
        io.temp_3_out       := 0
        io.temp_4_out       := 0
        io.temp_5_out       := 0
        io.temp_6_out       := 0
        io.temp_7_out       := 0
        io.temp_corr_flag   := 0
        io.temp_corr_flag_2 := 0


        val stateA : State = new State with EntryPoint{
            whenIsActive {
                when(io.fromUart.valid) {
                    a      := io.fromUart.payload.asBits(width-1 downto 0)
                    mod_n  := io.fromUart.payload.asBits((2*width)-1 downto (width))
                    mue    := io.fromUart.payload.asBits((3*width)+8-1 downto (2*width))
                    k      := io.fromUart.payload.asBits((3*width)+16-1 downto (3*width)+8)
                    t      := io.fromUart.payload.asBits((3*width)+48-1 downto (3*width)+16)
                    repeatCounter := 0
                    goto(stateB)
                }
            }
        }

        val stateB : State = new StateDelay(cyclesCount=1){
            whenIsActive {
                mult.io.a := a
                mult.io.b := a
            }
            whenCompleted {
                result_mult := mult.io.result
                goto(stateC)
            }
        }

        val stateC : State = new StateDelay(cyclesCount=1){
            whenIsActive {
                val temp_1 = result_mult >> (16*k.asUInt)
                mult.io.a := mue.resize(width)
                mult.io.b := temp_1.resize(width)
                temp_2 := mult.io.result
                io.temp_1_out := temp_1
                io.temp_2_out := temp_2
            }
            whenCompleted {
                goto(stateD)
            }
        }

        val stateD : State = new State{
            whenIsActive {
                val temp_2a = (result_mult >> (16*k.asUInt)).resize(width)
                mult.io.a := temp_2a
                mult.io.b := mue(width+7 downto width).resize(width)
                val temp_2b = (mult.io.result << width).resize(width*2)
                val temp_2c = (temp_2.asUInt + temp_2b.asUInt).asBits
                io.temp_2a_out := temp_2a
                io.temp_2b_out := temp_2b
                io.temp_2c_out := temp_2c
                temp_3 := temp_2c >> (16*k.asUInt)
                io.temp_3_out := temp_2c >> (16*k.asUInt)
                goto(stateE)
            }
        }

        val stateE : State = new StateDelay(cyclesCount=2){
            whenIsActive {
                mask := B(width*2 bits, default -> true) >> (2*width - (16*(k.asUInt+1)))
                io.temp_3_out := temp_3
                mult.io.a := temp_3.resize(width)
                mult.io.b := mod_n
                val temp_4 = mult.io.result
                val temp_5 = (result_mult & mask).asSInt
                val temp_6 = (temp_4 & mask).asSInt
                temp_7 := temp_5 - temp_6
                /***
                //result_barret := temp_7.asBits
                //io.temp_corr_flag := 6
                ***/

                io.temp_4_out := temp_4
                io.temp_5_out := temp_5.asBits
                io.temp_6_out := temp_6.asBits
                io.temp_7_out := temp_7.asBits
            }
            whenCompleted {
                goto(stateF)
            }
        }

        val stateF : State = new StateDelay(cyclesCount=1){
            whenIsActive {
                when(temp_7 < 0){
                    temp_8 := (temp_7 + mask.asSInt + 1).asUInt
                    io.temp_corr_flag := 1
                }.otherwise{
                    temp_8 := temp_7.asUInt
                    io.temp_corr_flag := 2
                }
            }
            whenCompleted{
                goto(stateG)
            }
        }

        val stateG : State = new StateDelay(cyclesCount=3){
            whenIsActive {
                when(temp_8 > 4*mod_n.asUInt){
                    result_barret := (temp_8 - 4*mod_n.asUInt).asBits
                    io.temp_corr_flag_2 := 1
                }.otherwise{
                    when(temp_8 > 3*mod_n.asUInt){
                        result_barret := (temp_8 - 3*mod_n.asUInt).asBits
                        io.temp_corr_flag_2 := 2
                    }.otherwise{
                        when(temp_8 > 2*mod_n.asUInt){
                            result_barret := (temp_8 - 2*mod_n.asUInt).asBits
                            io.temp_corr_flag_2 := 3
                        }.otherwise{
                            when(temp_8 > mod_n.asUInt) {
                                result_barret := (temp_8 - mod_n.asUInt).asBits
                                io.temp_corr_flag_2 := 4
                            }.otherwise{
                                result_barret := temp_8.asBits
                                io.temp_corr_flag_2 := 5
                            }
                        }
                    }
                }
            }
            whenCompleted{
                goto(stateH)
            }
        }

        val stateH : State = new StateDelay(cyclesCount=1){
            whenIsActive {
                repeatCounter := repeatCounter + 1
                a := result_barret.resize(width)
            }
            whenCompleted{
                when(repeatCounter === t.asUInt) {
                    goto(stateI)
                }.otherwise{
                    goto(stateB)
                }
            }
        }

        val stateI : State = new StateDelay(cyclesCount=2){
            whenIsActive {
                io.toUart.payload := result_barret.resize(width)
                io.toUart.valid := True
            }
            whenCompleted{
                goto(stateA)
            }
        }
    }
}

class KaraMult(width: Int) extends Component{
    val io = new Bundle{
        val a = in Bits(width bits)
        val b = in Bits(width bits)
        val result = out Bits(2*width bits)
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

        io.result := (result_h.asUInt +^ result_m.asUInt +^ result_l.asUInt).asBits.resize(width*2)
    }
}
