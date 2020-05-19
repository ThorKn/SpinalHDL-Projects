import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.fsm._
import spinal.lib.com.uart._
import scala.math

class UartFsmInOut(width: Int) extends Component{
    val io = new Bundle{
        val uart = master(Uart())
        val toFnct = master Flow(Bits(((3*width)+48) bits))
        val fromFnct = slave Flow(Bits(width bits))
    }

    // Setup UartCtrl
    val uartCtrl = new UartCtrl()
    uartCtrl.io.config.setClockDivider(HertzNumber(9600))
    uartCtrl.io.config.frame.dataLength := 7  //8 bits
    uartCtrl.io.config.frame.parity := UartParityType.NONE
    uartCtrl.io.config.frame.stop := UartStopType.ONE
    uartCtrl.io.uart <> io.uart

    val write = Stream(Bits(8 bits))
    write >-> uartCtrl.io.write

    // Log2 Helper
    var log2 = (x: Double) => math.log(x)/math.log(2.0)

    // Statemachine for receiving 6 bytes, storing
    // them into a buffer and then sending the buffer
    // onto the toFnct Flow
    val fsmIn = new StateMachine{
        val inCounter = Reg(UInt(math.ceil(log2(((3*width)+48)/8)).toInt bits)) init (0)
        val buffer = Reg(Bits((3*width)+48 bits)) init(0)
        io.toFnct.payload := 0
        io.toFnct.valid := False

        val inEntry : State = new State with EntryPoint{
            whenIsActive{
                goto(inReadByte)
            }
            onExit{
                inCounter := 0
                buffer := 0
            }
        }
        val inReadByte : State = new State{
            whenIsActive{
                when(uartCtrl.io.read.valid){
                    buffer(inCounter*8, 8 bits) := uartCtrl.io.read.payload.asBits
                    goto(inIncCounter)
                }
            }
        }

        val inIncCounter : State = new State{
            whenIsActive{
                inCounter := inCounter + 1
                when(inCounter === (((3*width)+48)/8-1)){
                    goto(inBufToPayload)
                }.otherwise{
                    goto(inReadByte)
                }
            }
        }
        val inBufToPayload : State = new State{
            whenIsActive{
                io.toFnct.payload := buffer.asBits
                io.toFnct.valid := True
                goto(inEntry)
            }
        }
    }

    //
    val fsmOut = new StateMachine{
        val outCounter = Reg(UInt(math.ceil(log2(width/8)).toInt bits)) init (0)
        val outBuffer = Reg(Bits(width bits)) init(0)
        write.valid := False
        write.payload := 0

        val outEntry : State = new State with EntryPoint{
            whenIsActive{
                when(io.fromFnct.valid){
                    outCounter := 0
                    outBuffer := io.fromFnct.payload
                    goto(outWriteByte)
                }
            }
        }

        val outWriteByte : State = new State {
            whenIsActive{
                write.payload := outBuffer(outCounter*8, 8 bits)
                write.valid := True
                when(write.fire) {
                    goto(outIncCounter)
                }
            }
        }

        val outIncCounter : State = new State{
            whenIsActive{
                outCounter := outCounter + 1
                when(outCounter === ((width/8)-1)){
                    goto(outEntry)
                }.otherwise{
                    goto(outWriteByte)
                }
            }
        }
    }
}
