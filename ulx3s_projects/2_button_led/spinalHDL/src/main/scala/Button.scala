import spinal.core._
import spinal.lib._

class Button extends Component{
    val io = new Bundle{
        val button = in Bool
        val led = out Bool
    }
    io.button <> io.led
}

object ButtonMain{
    def main(args: Array[String]) {
        SpinalConfig(
            mode = Verilog,
            defaultClockDomainFrequency = FixedFrequency(25 MHz)
        ).generate(new Button)

        /***
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
        ***/
    }
}
