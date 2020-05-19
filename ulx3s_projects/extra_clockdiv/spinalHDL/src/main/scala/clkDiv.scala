import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.fsm._
import spinal.lib.com.uart._

import scala.util.Random

class ClkDiv extends Component{

    val io = new Bundle{
        val clk_out = out Bool
    }

    io.clk_out := False

    val counter = Counter(1 to 5)
    counter.increment()
    when(counter.willOverflow){
        io.clk_out := True
    }
}

object ClkDivMain{
    def main(args: Array[String]) {
        SpinalConfig(
            mode = Verilog,
            defaultClockDomainFrequency = FixedFrequency(25 MHz)
        ).generate(new ClkDiv)

        val spinalConfig = SpinalConfig(defaultClockDomainFrequency = FixedFrequency(25 MHz))

        SimConfig
            .withConfig(spinalConfig)
            .withWave
            .compile(new ClkDiv)
            .doSim{ clkdiv =>
                clkdiv.clockDomain.forkStimulus(2)
                var idx = 0
                while(idx < 3000){
                    clkdiv.clockDomain.waitSampling()
                    idx += 1
                }
            }
    }
}
