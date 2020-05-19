import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.fsm._
import spinal.lib.com.uart._

import scala.util.Random

class UartFsmInOut extends Component{
    val io = new Bundle{
        val uart = master(Uart())
    }

    // Setup UartCtrl
    val uartCtrl = new UartCtrl()
    uartCtrl.io.config.setClockDivider(HertzNumber(115200))
    uartCtrl.io.config.frame.dataLength := 7  //8 bits
    uartCtrl.io.config.frame.parity := UartParityType.NONE
    uartCtrl.io.config.frame.stop := UartStopType.ONE
    uartCtrl.io.uart <> io.uart

    val payload = Vec(Reg(UInt(8 bits)) init(0), 8)
    val payloadValid = Bool
    val write = Stream(Bits(8 bits))
    write >-> uartCtrl.io.write

    // Statemachine for receiving 8 bytes, storing
    // them into a Vector of Registers (payload)
    val fsmIn = new StateMachine{
        val inCounter = Reg(UInt(3 bits)) init (0)
        val buffer = Vec(Reg(UInt(8 bits)) init(0), 8)
        payloadValid := False

        val inEntry : State = new State with EntryPoint{
            whenIsActive{
                goto(inReadByte)
            }
            onExit{
                inCounter := 0
                for (i <- (0 until 8)) {
                    buffer(i) := 0
                }
            }
        }
        val inReadByte : State = new State{
            whenIsActive{
                when(uartCtrl.io.read.valid){
                    buffer(inCounter) := uartCtrl.io.read.payload.asUInt
                    goto(inIncCounter)
                }
            }
        }
        val inIncCounter : State = new State{
            whenIsActive{
                inCounter := inCounter + 1
                when(inCounter === 7){
                    goto(inBufToPayload)
                }.otherwise{
                    goto(inReadByte)
                }
            }
        }
        val inBufToPayload : State = new State{
            whenIsActive{
                payload := buffer
                payloadValid := True
                goto(inEntry)
            }
        }
    }

    val fsmOut = new StateMachine{
        val outCounter = Reg(UInt(3 bits)) init (0)
        write.valid := False
        write.payload := 0

        val outEntry : State = new State with EntryPoint{
            whenIsActive{
                when(payloadValid){
                    outCounter := 0
                    goto(outWriteByte)
                }
            }
        }
        val outWriteByte : State = new State{
            whenIsActive{
                write.payload := payload(outCounter).asBits
                write.valid := True
                when(write.fire) {
                    goto(outIncCounter)
                }
            }
        }
        val outIncCounter : State = new State{
            whenIsActive{
                outCounter := outCounter + 1
                when(outCounter === 7){
                    goto(outEntry)
                }.otherwise{
                    goto(outWriteByte)
                }
            }
        }
    }
}

object UartFsmInOutMain{
    def main(args: Array[String]) {
        SpinalConfig(
            mode = Verilog,
            defaultClockDomainFrequency = FixedFrequency(25 MHz)
        ).generate(new UartFsmInOut)

        val spinalConfig = SpinalConfig(defaultClockDomainFrequency = FixedFrequency(25 MHz))

        SimConfig
            .withConfig(spinalConfig)
            .withWave
            .compile(new UartFsmInOut)
            .doSim{ uartfsminout =>
                uartfsminout.clockDomain.forkStimulus(2)
                uartfsminout.io.uart.rxd #= true
                var encoder = fork {
                    sleep(10000)
                    while(true) {
                        sleep(5000)
                        val wBuffer = Random.nextInt(256)
                        // val wBuffer = 0x55
                        uartfsminout.io.uart.rxd #= false
                        sleep(208)

                        for(bitId <- 0 to 7) {
                            uartfsminout.io.uart.rxd #= ((wBuffer >> bitId) & 1) != 0
                            sleep(208)
                        }

                        uartfsminout.io.uart.rxd #= true
                        sleep(208)
                    }
                }
                var idx = 0
                while(idx < 100000){
                    uartfsminout.clockDomain.waitSampling()
                    idx += 1
                }
            }
    }
}
