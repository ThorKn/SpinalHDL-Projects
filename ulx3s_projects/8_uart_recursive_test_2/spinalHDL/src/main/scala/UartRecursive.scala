import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.com.uart._

import scala.util.Random

class UartRecursive(width: Int) extends Component{
    val io = new Bundle{
        val uart = master(Uart())
    }

    val uartfsm = new UartFsmInOut(width)
    val square = new Square(width)

    uartfsm.io.uart <> io.uart
    uartfsm.io.toFnct >> square.io.fromUart
    square.io.toUart >> uartfsm.io.fromFnct
}

object UartRecursiveMain{
    def main(args: Array[String]) {
        SpinalConfig(
            mode = Verilog,
            defaultClockDomainFrequency = FixedFrequency(25 MHz)
        ).generate(new UartRecursive(512))

        /***
        val spinalConfig = SpinalConfig(defaultClockDomainFrequency = FixedFrequency(25 MHz))

        SimConfig
            .withConfig(spinalConfig)
            .withWave
            .compile(new UartRecursive(48))
            .doSim{ uartrec =>
                uartrec.clockDomain.forkStimulus(2)
                uartrec.io.uart.rxd #= true
                var encoder = fork {
                    while(true) {
                        sleep(10000)
                        //val wBuffer = Random.nextInt(256)
                        var wBuffer = Array(0, 0, 1, 0, 0 ,1)
                        for (byte <- 0 to 5) {
                            uartrec.io.uart.rxd #= false
                            sleep(433)

                            for(bit <- 0 to 7) {
                                uartrec.io.uart.rxd #= (((wBuffer(5-byte) >> (bit)) & 1) != 0)
                                println(byte + " " + bit, (((wBuffer(5-byte) >> (bit)) & 1) != 0))
                                sleep(433)
                            }

                            uartrec.io.uart.rxd #= true
                            sleep(5000)
                        }
                    }
                }
                var idx = 0
                while(idx < 100000){
                    uartrec.clockDomain.waitSampling()
                    idx += 1
                }
            }
            ***/
    }
}
