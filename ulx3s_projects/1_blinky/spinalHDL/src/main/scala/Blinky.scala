import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.fsm._
import spinal.lib.com.uart._

import scala.util.Random

class Blinky extends Component{
    val io = new Bundle{
        val led = out Bool
        val isLocked = in Bool
    }

    val clkIsLocked = io.isLocked

    val fsm = new StateMachine{
        val counter1 = Counter(0 to 12500000)
        val counter2 = Counter(0 to 12500000)
        io.led := False

        val stateA : State = new State with EntryPoint{
            whenIsActive {
                goto(stateB)
            }
        }

        val stateB : State = new State{
            onEntry {
                counter1.clear()
            }
            whenIsActive {
                io.led := True
                counter1.increment()
                when(counter1.willOverflow){
                    goto(stateC)
                }
            }
        }

        val stateC : State = new State{
            onEntry {
                counter2.clear()
            }
            whenIsActive {
                io.led := False
                counter2.increment()
                when(counter2.willOverflow){
                    goto(stateA)
                }
            }
        }
    }
}

object UartFsmInOutMain{
    def main(args: Array[String]) {
        SpinalConfig(
            mode = Verilog,
            defaultClockDomainFrequency = FixedFrequency(1 MHz)
        ).generate(new Blinky)

        val spinalConfig = SpinalConfig(defaultClockDomainFrequency = FixedFrequency(1 MHz))

        /*
        SimConfig
            .withConfig(spinalConfig)
            .withWave
            .compile(new Blinky)
            .doSim{ blinky =>
                blinky.clockDomain.forkStimulus(2)
                }
                var idx = 0
                while(idx < 3000000){
                    blinky.clockDomain.waitSampling()
                    idx += 1
                }
            }
        */
    }
}
