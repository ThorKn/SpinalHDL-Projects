import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.fsm._

import scala.util.Random

class LedDriver extends Component{
    val io = new Bundle{
        val ledData = out Bool
        val fromUart = slave Flow(Bits(48 bits))
        val toUart = master Flow(Bits(48 bits))
    }

    // val buffer := Reg(UInt(24 bits))
    val buffer = io.fromUart.toReg()
    io.fromUart >-> io.toUart

    def sendBitFsm(sendBit:Bool) = new StateMachine{
        val counterA = Counter(0 to 9)
        val counterB = Counter(0 to 9)

        val stateOne : State = new State with EntryPoint{
            onEntry{
                counterA.clear()
            }
            whenIsActive{
                io.ledData := True
                counterA.increment()
                when(sendBit){
                    when(counterA === 9){
                        goto(stateTwo)
                    }
                }.otherwise{
                    when(counterA === 4){
                        goto(stateTwo)
                    }
                }
            }
        }
        val stateTwo : State = new State{
            onEntry{
                counterB.clear()
            }
            whenIsActive{
                io.ledData := False
                counterB.increment()
                when(sendBit){
                    when(counterB === 4){
                        exit()
                    }
                }.otherwise{
                    when(counterB === 9){
                        exit()
                    }
                }
            }
        }
    }


    val ledOut = new StateMachine{
        val bitCounter = Counter(0 to 47)
        io.ledData := False

        val stateEntry : State = new State with EntryPoint{
            whenIsActive{
                when(io.fromUart.valid){
                    goto(stateA)
                }
            }
        }

        val stateA = new StateFsm(fsm=sendBitFsm(buffer(47 - bitCounter.value))) {
            whenCompleted{
                goto(stateB)
            }
        }
        val stateB : State = new State{
            whenIsActive{
                bitCounter.increment()
                when(bitCounter === 47) {
                    bitCounter.clear()
                    goto(stateC)
                }.otherwise{
                    goto(stateA)
                }
            }
        }
        val stateC : State = new State{
            whenIsActive{
                io.ledData := False
                goto(stateEntry)
            }
        }
    }
}
