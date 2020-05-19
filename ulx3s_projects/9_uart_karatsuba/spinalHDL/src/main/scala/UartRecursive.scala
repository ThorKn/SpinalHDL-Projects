import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.com.uart._
import spinal.sim._

import scala.util.Random

class UartKaratsuba(width: Int) extends Component{
    val io = new Bundle{
        val uart = master(Uart())
    }

    val uartfsm = new UartFsmInOut(width)
    val karatsuba = new Karatsuba(width)

    uartfsm.io.uart <> io.uart
    uartfsm.io.toFnct >> karatsuba.io.fromUart
    karatsuba.io.toUart >> uartfsm.io.fromFnct
}

object UartKaratsubaMain{
    def main(args: Array[String]) {
        SpinalConfig(
            mode = Verilog,
            defaultClockDomainFrequency = FixedFrequency(25 MHz)
        ).generate(new UartKaratsuba(128))

        /***
        val spinalConfig = SpinalConfig(defaultClockDomainFrequency = FixedFrequency(25 MHz))

        SimConfig
            .withConfig(spinalConfig)
            .withWave
            .compile(new UartKaratsuba(64))
            .doSim{ uartkara =>
                uartkara.clockDomain.forkStimulus(2)
                uartkara.io.uart.rxd #= true
                var encoder = fork {
                    while(true) {
                        sleep(20000)
                        //val wBuffer = Random.nextInt(256)
                        var wBuffer = Array(0x15, 0x63, 0xBA, 0x3F, 0x78, 0x2D, 0x93, 0x92)
                        //var wBuffer = Array(0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                        //                    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF)
                        for (byte <- 0 to 7) {
                            uartkara.io.uart.rxd #= false
                            sleep(433)

                            for(bit <- 0 to 7) {
                                uartkara.io.uart.rxd #= (((wBuffer(7-byte) >> (bit)) & 1) != 0)
                                println(byte + " " + bit, (((wBuffer(7-byte) >> (bit)) & 1) != 0))
                                sleep(433)
                            }

                            uartkara.io.uart.rxd #= true
                            sleep(2000)
                        }
                    }
                }
                var idx = 0
                while(idx < 200000){
                    uartkara.clockDomain.waitSampling()
                    idx += 1
                }
            }
            ***/
    }
}
