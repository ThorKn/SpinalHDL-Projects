import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.com.uart._
import spinal.sim._

import scala.util.Random

// import Vectors

class UartVdf(width: Int) extends Component{
    val io = new Bundle{
        val uart = master(Uart())
        val isLocked = in Bool
    }

    val uartfsm = new UartFsmInOut(width)
    val multmod = new MultMod(width)
    val clkIsLocked = io.isLocked

    uartfsm.io.uart <> io.uart
    uartfsm.io.toFnct >> multmod.io.fromUart
    multmod.io.toUart >> uartfsm.io.fromFnct
}

object UartVdfMain{
    def main(args: Array[String]) {
        SpinalConfig(
            mode = Verilog,
            defaultClockDomainFrequency = FixedFrequency(25 MHz)
        ).generate(new UartVdf(64))

        val spinalConfig = SpinalConfig(defaultClockDomainFrequency = FixedFrequency(25 MHz))

        SimConfig
            .withConfig(spinalConfig)
            .withWave
            .compile(new UartVdf(64))
            .doSim{ uartvdf =>
                uartvdf.clockDomain.forkStimulus(2)
                uartvdf.io.uart.rxd #= true
                var encoder = fork {
                    while(true) {
                        sleep(20000)
                        //val wBuffer = Random.nextInt(256)
                        var vectors = new Vectors()
                        var wBuffer = vectors.test_vector_5
                        for (byte <- 0 to wBuffer.length-1) {
                            uartvdf.io.uart.rxd #= false
                            sleep(1040)

                            for(bit <- 0 to 7) {
                                uartvdf.io.uart.rxd #= (((wBuffer(wBuffer.length-1-byte) >> (bit)) & 1) != 0)
                                println(byte + " " + bit, (((wBuffer(wBuffer.length-1-byte) >> (bit)) & 1) != 0))
                                sleep(1040)
                            }

                            uartvdf.io.uart.rxd #= true
                            sleep(5000)
                        }
                    }
                }
                var idx = 0
                while(idx < 500000){
                    uartvdf.clockDomain.waitSampling()
                    idx += 1
                }
            }
    }
}
