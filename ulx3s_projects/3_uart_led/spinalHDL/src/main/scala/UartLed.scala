import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.com.uart._

import scala.util.Random

class UartLed extends Component{
    val io = new Bundle{
        val uart = master(Uart())
        val ledData = out Bool
    }

    val uartfsm = new UartFsmInOut()
    val leddriver = new LedDriver()

    uartfsm.io.uart <> io.uart
    io.ledData <> leddriver.io.ledData
    uartfsm.io.toFnct >> leddriver.io.fromUart
    leddriver.io.toUart >> uartfsm.io.fromFnct
}

object UartLedMain{
    def main(args: Array[String]) {
        SpinalConfig(
            mode = Verilog,
            defaultClockDomainFrequency = FixedFrequency(25 MHz)
        ).generate(new UartLed)

        val spinalConfig = SpinalConfig(defaultClockDomainFrequency = FixedFrequency(25 MHz))

        SimConfig
            .withConfig(spinalConfig)
            .withWave
            .compile(new UartLed)
            .doSim{ uartled =>
                uartled.clockDomain.forkStimulus(2)
                uartled.io.uart.rxd #= true
                var encoder = fork {
                    sleep(10000)
                    while(true) {
                        val wBuffer = Random.nextInt(256)
                        // val wBuffer = 0x55
                        sleep(5000)
                        uartled.io.uart.rxd #= false
                        sleep(208)

                        for(bitId <- 0 to 7) {
                            uartled.io.uart.rxd #= ((wBuffer >> bitId) & 1) != 0
                            sleep(208)
                        }

                        uartled.io.uart.rxd #= true
                        sleep(5000)
                    }
                }
                var idx = 0
                while(idx < 100000){
                    uartled.clockDomain.waitSampling()
                    idx += 1
                }
            }
    }
}
