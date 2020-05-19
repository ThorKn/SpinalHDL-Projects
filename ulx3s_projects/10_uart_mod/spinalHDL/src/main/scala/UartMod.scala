import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.com.uart._
import spinal.sim._

import scala.util.Random

class UartMod(width: Int) extends Component{
    val io = new Bundle{
        val uart = master(Uart())
    }

    val uartfsm = new UartFsmInOut(width)
    val multmod = new MultMod(width)

    uartfsm.io.uart <> io.uart
    uartfsm.io.toFnct >> multmod.io.fromUart
    multmod.io.toUart >> uartfsm.io.fromFnct
}

object UartModMain{
    def main(args: Array[String]) {
        SpinalConfig(
            mode = Verilog,
            defaultClockDomainFrequency = FixedFrequency(25 MHz)
        ).generate(new UartMod(128))

        /***
        val spinalConfig = SpinalConfig(defaultClockDomainFrequency = FixedFrequency(25 MHz))

        SimConfig
            .withConfig(spinalConfig)
            .withWave
            .compile(new UartMod(128))
            .doSim{ uartmod =>
                uartmod.clockDomain.forkStimulus(2)
                uartmod.io.uart.rxd #= true
                var encoder = fork {
                    while(true) {
                        sleep(20000)
                        //val wBuffer = Random.nextInt(256)
                        var wBuffer = Array(0x02,
                                            0x01, 0x96, 0xB2, 0x25, 0x54,
                                            0xA1, 0x24, 0x7C, 0x4D,
                                            0x00, 0x00, 0x00, 0x00, 0x0D, 0xB3, 0x96, 0x25,
                                            0x00, 0x00, 0x00, 0x00, 0x3C, 0x7C, 0x5A, 0x0B)
                        //var wBuffer = Array(0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                        //                    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF)
                        for (byte <- 0 to wBuffer.length-1) {
                            uartmod.io.uart.rxd #= false
                            sleep(433)

                            for(bit <- 0 to 7) {
                                uartmod.io.uart.rxd #= (((wBuffer(wBuffer.length-1-byte) >> (bit)) & 1) != 0)
                                println(byte + " " + bit, (((wBuffer(wBuffer.length-1-byte) >> (bit)) & 1) != 0))
                                sleep(433)
                            }

                            uartmod.io.uart.rxd #= true
                            sleep(2000)
                        }
                    }
                }
                var idx = 0
                while(idx < 200000){
                    uartmod.clockDomain.waitSampling()
                    idx += 1
                }
            }
        ***/
    }
}
