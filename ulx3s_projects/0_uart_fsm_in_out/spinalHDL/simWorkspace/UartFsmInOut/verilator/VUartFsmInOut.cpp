// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUartFsmInOut.h for the primary calling header

#include "VUartFsmInOut.h"     // For This
#include "VUartFsmInOut__Syms.h"


//--------------------


void VUartFsmInOut::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VUartFsmInOut::eval\n"); );
    VUartFsmInOut__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VUartFsmInOut::_eval_initial_loop(VUartFsmInOut__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VUartFsmInOut::_sequent__TOP__1(VUartFsmInOut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartFsmInOut::_sequent__TOP__1\n"); );
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__UartFsmInOut__DOT__fsmIn_inCounter,2,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__fsmIn_buffer_0,7,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__fsmIn_buffer_1,7,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__fsmIn_buffer_2,7,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__fsmIn_buffer_3,7,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__fsmIn_buffer_4,7,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__fsmIn_buffer_5,7,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__fsmIn_buffer_6,7,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__fsmIn_buffer_7,7,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__fsmOut_outCounter,2,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__fsmIn_stateReg,2,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__fsmOut_stateReg,1,0);
    // Body
    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0 
	= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0;
    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
	= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value;
    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
	= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4;
    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
	= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state 
	= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
	= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
	= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter 
	= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter;
    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_0 = vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_0;
    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_1 = vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_1;
    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_2 = vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_2;
    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_3 = vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_3;
    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_4 = vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_4;
    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_5 = vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_5;
    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_6 = vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_6;
    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_7 = vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_7;
    __Vdly__UartFsmInOut__DOT__fsmIn_inCounter = vlTOPp->UartFsmInOut__DOT__fsmIn_inCounter;
    __Vdly__UartFsmInOut__DOT__fsmOut_outCounter = vlTOPp->UartFsmInOut__DOT__fsmOut_outCounter;
    __Vdly__UartFsmInOut__DOT__fsmIn_stateReg = vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg;
    __Vdly__UartFsmInOut__DOT__fsmOut_stateReg = vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg;
    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
	= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:562
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter = 0U;
    } else {
	vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter 
	    = (0xfffffU & (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter 
			   - (IData)(1U)));
	if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_tick) {
	    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter = 0x1aU;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:187
    if (vlTOPp->reset) {
	vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value = 0U;
	vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 0U;
	vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext = 1U;
    } else {
	if ((4U & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
		if ((0U == (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))) {
		    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
			= ((IData)(vlTOPp->UartFsmInOut__DOT___zz_1_)
			    ? 1U : 0U);
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		if ((1U & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
			vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 4U;
		    }
		} else {
		    if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
			if ((7U == (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))) {
			    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 4U;
			}
		    }
		}
	    } else {
		if ((1U & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
			vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 2U;
		    }
		} else {
		    if (((IData)(vlTOPp->UartFsmInOut__DOT___zz_1_) 
			 & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow))) {
			vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 1U;
		    }
		}
	    }
	}
	vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value 
	    = vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext;
	vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext 
	    = vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd;
    }
    vlTOPp->io_uart_txd = vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:829
    if (vlTOPp->reset) {
	vlTOPp->UartFsmInOut__DOT__payload_0 = 0U;
	vlTOPp->UartFsmInOut__DOT__payload_1 = 0U;
	vlTOPp->UartFsmInOut__DOT__payload_2 = 0U;
	vlTOPp->UartFsmInOut__DOT__payload_3 = 0U;
	vlTOPp->UartFsmInOut__DOT__payload_4 = 0U;
	vlTOPp->UartFsmInOut__DOT__payload_5 = 0U;
	vlTOPp->UartFsmInOut__DOT__payload_6 = 0U;
	vlTOPp->UartFsmInOut__DOT__payload_7 = 0U;
	vlTOPp->UartFsmInOut__DOT___zz_1_ = 0U;
	__Vdly__UartFsmInOut__DOT__fsmIn_inCounter = 0U;
	__Vdly__UartFsmInOut__DOT__fsmIn_buffer_0 = 0U;
	__Vdly__UartFsmInOut__DOT__fsmIn_buffer_1 = 0U;
	__Vdly__UartFsmInOut__DOT__fsmIn_buffer_2 = 0U;
	__Vdly__UartFsmInOut__DOT__fsmIn_buffer_3 = 0U;
	__Vdly__UartFsmInOut__DOT__fsmIn_buffer_4 = 0U;
	__Vdly__UartFsmInOut__DOT__fsmIn_buffer_5 = 0U;
	__Vdly__UartFsmInOut__DOT__fsmIn_buffer_6 = 0U;
	__Vdly__UartFsmInOut__DOT__fsmIn_buffer_7 = 0U;
	__Vdly__UartFsmInOut__DOT__fsmOut_outCounter = 0U;
	__Vdly__UartFsmInOut__DOT__fsmIn_stateReg = 0U;
	__Vdly__UartFsmInOut__DOT__fsmOut_stateReg = 0U;
    } else {
	if ((1U == (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg))) {
	    if (vlTOPp->UartFsmInOut__DOT__payloadValid) {
		__Vdly__UartFsmInOut__DOT__fsmOut_outCounter = 0U;
	    }
	} else {
	    if ((2U != (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg))) {
		if ((3U == (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg))) {
		    __Vdly__UartFsmInOut__DOT__fsmOut_outCounter 
			= (7U & ((IData)(1U) + (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_outCounter)));
		}
	    }
	}
	if (vlTOPp->UartFsmInOut__DOT__write_ready) {
	    vlTOPp->UartFsmInOut__DOT___zz_1_ = vlTOPp->UartFsmInOut__DOT__write_valid;
	}
	if ((4U & (IData)(vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg)))) {
		    vlTOPp->UartFsmInOut__DOT__payload_0 
			= vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_0;
		    vlTOPp->UartFsmInOut__DOT__payload_1 
			= vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_1;
		    vlTOPp->UartFsmInOut__DOT__payload_2 
			= vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_2;
		    vlTOPp->UartFsmInOut__DOT__payload_3 
			= vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_3;
		    vlTOPp->UartFsmInOut__DOT__payload_4 
			= vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_4;
		    vlTOPp->UartFsmInOut__DOT__payload_5 
			= vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_5;
		    vlTOPp->UartFsmInOut__DOT__payload_6 
			= vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_6;
		    vlTOPp->UartFsmInOut__DOT__payload_7 
			= vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_7;
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg))) {
		if ((1U & (IData)(vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg))) {
		    __Vdly__UartFsmInOut__DOT__fsmIn_inCounter 
			= (7U & ((IData)(1U) + (IData)(vlTOPp->UartFsmInOut__DOT__fsmIn_inCounter)));
		} else {
		    if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) {
			if ((1U & (IData)(vlTOPp->UartFsmInOut__DOT___zz_3_))) {
			    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_0 
				= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			}
			if ((2U & (IData)(vlTOPp->UartFsmInOut__DOT___zz_3_))) {
			    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_1 
				= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			}
			if ((4U & (IData)(vlTOPp->UartFsmInOut__DOT___zz_3_))) {
			    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_2 
				= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			}
			if ((8U & (IData)(vlTOPp->UartFsmInOut__DOT___zz_3_))) {
			    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_3 
				= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			}
			if ((0x10U & (IData)(vlTOPp->UartFsmInOut__DOT___zz_3_))) {
			    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_4 
				= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			}
			if ((0x20U & (IData)(vlTOPp->UartFsmInOut__DOT___zz_3_))) {
			    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_5 
				= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			}
			if ((0x40U & (IData)(vlTOPp->UartFsmInOut__DOT___zz_3_))) {
			    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_6 
				= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			}
			if ((0x80U & (IData)(vlTOPp->UartFsmInOut__DOT___zz_3_))) {
			    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_7 
				= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			}
		    }
		}
	    }
	}
	__Vdly__UartFsmInOut__DOT__fsmOut_stateReg 
	    = vlTOPp->UartFsmInOut__DOT__fsmOut_stateNext;
	if (((1U == (IData)(vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg)) 
	     & (1U != (IData)(vlTOPp->UartFsmInOut__DOT__fsmIn_stateNext)))) {
	    __Vdly__UartFsmInOut__DOT__fsmIn_inCounter = 0U;
	    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_0 = 0U;
	    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_1 = 0U;
	    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_2 = 0U;
	    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_3 = 0U;
	    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_4 = 0U;
	    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_5 = 0U;
	    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_6 = 0U;
	    __Vdly__UartFsmInOut__DOT__fsmIn_buffer_7 = 0U;
	}
	__Vdly__UartFsmInOut__DOT__fsmIn_stateReg = vlTOPp->UartFsmInOut__DOT__fsmIn_stateNext;
    }
    vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_0 = __Vdly__UartFsmInOut__DOT__fsmIn_buffer_0;
    vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_1 = __Vdly__UartFsmInOut__DOT__fsmIn_buffer_1;
    vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_2 = __Vdly__UartFsmInOut__DOT__fsmIn_buffer_2;
    vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_3 = __Vdly__UartFsmInOut__DOT__fsmIn_buffer_3;
    vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_4 = __Vdly__UartFsmInOut__DOT__fsmIn_buffer_4;
    vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_5 = __Vdly__UartFsmInOut__DOT__fsmIn_buffer_5;
    vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_6 = __Vdly__UartFsmInOut__DOT__fsmIn_buffer_6;
    vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_7 = __Vdly__UartFsmInOut__DOT__fsmIn_buffer_7;
    vlTOPp->UartFsmInOut__DOT__fsmIn_inCounter = __Vdly__UartFsmInOut__DOT__fsmIn_inCounter;
    vlTOPp->UartFsmInOut__DOT__fsmOut_outCounter = __Vdly__UartFsmInOut__DOT__fsmOut_outCounter;
    vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg = __Vdly__UartFsmInOut__DOT__fsmIn_stateReg;
    vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg = __Vdly__UartFsmInOut__DOT__fsmOut_stateReg;
    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg 
	= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg;
    vlTOPp->UartFsmInOut__DOT___zz_3_ = (0xffU & ((IData)(1U) 
						  << (IData)(vlTOPp->UartFsmInOut__DOT__fsmIn_inCounter)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:676
    vlTOPp->__Vtableidx1 = vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg;
    vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg_string[0U] 
	= vlTOPp->__Vtable1_UartFsmInOut__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][0U];
    vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg_string[1U] 
	= vlTOPp->__Vtable1_UartFsmInOut__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][1U];
    vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg_string[2U] 
	= vlTOPp->__Vtable1_UartFsmInOut__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][2U];
    vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg_string[3U] 
	= vlTOPp->__Vtable1_UartFsmInOut__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][3U];
    vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg_string[4U] 
	= vlTOPp->__Vtable1_UartFsmInOut__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][4U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:726
    vlTOPp->UartFsmInOut__DOT__payloadValid = 0U;
    if ((4U & (IData)(vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg)))) {
		vlTOPp->UartFsmInOut__DOT__payloadValid = 1U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:696
    vlTOPp->__Vtableidx3 = vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg;
    vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg_string[0U] 
	= vlTOPp->__Vtable3_UartFsmInOut__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][0U];
    vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg_string[1U] 
	= vlTOPp->__Vtable3_UartFsmInOut__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][1U];
    vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg_string[2U] 
	= vlTOPp->__Vtable3_UartFsmInOut__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][2U];
    vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg_string[3U] 
	= vlTOPp->__Vtable3_UartFsmInOut__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][3U];
    vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg_string[4U] 
	= vlTOPp->__Vtable3_UartFsmInOut__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][4U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:744
    vlTOPp->UartFsmInOut__DOT__write_valid = 0U;
    if ((1U != (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg))) {
	    vlTOPp->UartFsmInOut__DOT__write_valid = 1U;
	}
    }
}

VL_INLINE_OPT void VUartFsmInOut::_sequent__TOP__2(VUartFsmInOut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartFsmInOut::_sequent__TOP__2\n"); );
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value,2,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity,0,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter,2,0);
    // Body
    __Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
	= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity;
    __Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
	= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value;
    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
	= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity;
    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
	= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value;
    __Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
	= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:933
    if (vlTOPp->UartFsmInOut__DOT__write_ready) {
	vlTOPp->UartFsmInOut__DOT___zz_2_ = vlTOPp->UartFsmInOut__DOT__write_payload;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:233
    if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
	__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
	    = (7U & ((IData)(1U) + (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)));
    }
    if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
	__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
	    = ((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity) 
	       ^ (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
    }
    if ((1U & (~ ((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    if ((1U & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
		    __Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
		}
	    } else {
		if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
		    if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_) {
			__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
		    }
		}
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
		    __Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity = 0U;
		    __Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:449
    if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
	__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
	    = (7U & ((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter) 
		     - (IData)(1U)));
    }
    if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
	vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
	    = (7U & ((IData)(1U) + (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value)));
    }
    if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
	vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
	    = ((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity) 
	       ^ (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
    }
    if ((1U & (~ ((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
	    if ((1U & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
		}
	    } else {
		if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter 
			= (((~ ((IData)(1U) << (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) 
			    & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter)) 
			   | ((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) 
			      << (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value)));
		    if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_) {
			vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
		    }
		}
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
		    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity = 0U;
		}
	    } else {
		if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_) {
		    __Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter = 2U;
		}
	    }
	}
    }
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
	= __Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity;
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
	= __Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value;
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
	= __Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter;
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_ 
	= (7U == (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value));
}

VL_INLINE_OPT void VUartFsmInOut::_sequent__TOP__4(VUartFsmInOut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartFsmInOut::_sequent__TOP__4\n"); );
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:759
    vlTOPp->UartFsmInOut__DOT__write_payload = 0U;
    if ((1U != (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg))) {
	    vlTOPp->UartFsmInOut__DOT__write_payload 
		= ((4U & (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_outCounter))
		    ? ((2U & (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_outCounter))
		        ? ((1U & (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_outCounter))
			    ? (IData)(vlTOPp->UartFsmInOut__DOT__payload_7)
			    : (IData)(vlTOPp->UartFsmInOut__DOT__payload_6))
		        : ((1U & (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_outCounter))
			    ? (IData)(vlTOPp->UartFsmInOut__DOT__payload_5)
			    : (IData)(vlTOPp->UartFsmInOut__DOT__payload_4)))
		    : ((2U & (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_outCounter))
		        ? ((1U & (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_outCounter))
			    ? (IData)(vlTOPp->UartFsmInOut__DOT__payload_3)
			    : (IData)(vlTOPp->UartFsmInOut__DOT__payload_2))
		        : ((1U & (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_outCounter))
			    ? (IData)(vlTOPp->UartFsmInOut__DOT__payload_1)
			    : (IData)(vlTOPp->UartFsmInOut__DOT__payload_0))));
	}
    }
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
	= vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:146
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd = 1U;
    if ((1U & (~ ((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd 
		= (1U & ((1U & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))
			  ? (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity)
			  : ((IData)(vlTOPp->UartFsmInOut__DOT___zz_2_) 
			     >> (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))));
	} else {
	    if ((1U & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd = 0U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:117
    vlTOPp->__Vtableidx6 = vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable6_UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx6];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:372
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 = 1U;
	vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 = 1U;
	vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 = 1U;
	vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 = 1U;
	vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value = 1U;
	vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick = 0U;
	vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
	vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 0U;
    } else {
	if ((0U == vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
		= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
	}
	vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick 
	    = (0U == vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter);
	vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 0U;
	if ((0U == vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
		= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
	}
	if ((4U & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
	    if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) {
		    if ((0U == (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) {
			vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
		    }
		} else {
		    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		if ((1U & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
			if (((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity) 
			     == (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value))) {
			    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 4U;
			    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 1U;
			} else {
			    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
			}
		    }
		} else {
		    if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
			if ((7U == (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) {
			    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 4U;
			    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 1U;
			}
		    }
		}
	    } else {
		if ((1U & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
			vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 2U;
			if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) {
			    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
			}
		    }
		} else {
		    if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_) {
			vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 1U;
		    }
		}
	    }
	}
	if ((0U == vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
		= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
	}
	vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
	    = (((((((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_) 
		    | (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_)) 
		   | ((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_) 
		      & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
		  | (((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_) 
		      & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
		     & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
		 | (((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
		     & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
		    & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
		| (((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1) 
		    & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
		   & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
	       | (((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2) 
		   & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
		  & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4)));
	if ((0U == vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
		= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1;
	}
    }
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
	= vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value;
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
	= vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4;
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
	= vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state 
	= vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
	= vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
	= vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg 
	= vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg;
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter 
	= vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:346
    vlTOPp->__Vtableidx8 = vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable8_UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx8];
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_ 
	= ((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) 
	   & (~ (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:361
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 0U;
    if (vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
	if ((0U == (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter))) {
	    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 1U;
	}
    }
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_ 
	= vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:774
    vlTOPp->__Vtableidx5 = (((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) 
			     << 6U) | (((IData)(vlTOPp->UartFsmInOut__DOT__fsmIn_inCounter) 
					<< 3U) | (IData)(vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg)));
    vlTOPp->UartFsmInOut__DOT__fsmIn_stateNext = vlTOPp->__Vtable5_UartFsmInOut__DOT__fsmIn_stateNext
	[vlTOPp->__Vtableidx5];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:51
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0 = 0U;
	vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1 = 0U;
    } else {
	vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1 
	    = vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0;
	vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0 
	    = vlTOPp->io_uart_rxd;
    }
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_tick 
	= (0U == vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:129
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 0U;
    if ((0U == vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 1U;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:686
    vlTOPp->__Vtableidx2 = vlTOPp->UartFsmInOut__DOT__fsmIn_stateNext;
    vlTOPp->UartFsmInOut__DOT__fsmIn_stateNext_string[0U] 
	= vlTOPp->__Vtable2_UartFsmInOut__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][0U];
    vlTOPp->UartFsmInOut__DOT__fsmIn_stateNext_string[1U] 
	= vlTOPp->__Vtable2_UartFsmInOut__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][1U];
    vlTOPp->UartFsmInOut__DOT__fsmIn_stateNext_string[2U] 
	= vlTOPp->__Vtable2_UartFsmInOut__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][2U];
    vlTOPp->UartFsmInOut__DOT__fsmIn_stateNext_string[3U] 
	= vlTOPp->__Vtable2_UartFsmInOut__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][3U];
    vlTOPp->UartFsmInOut__DOT__fsmIn_stateNext_string[4U] 
	= vlTOPp->__Vtable2_UartFsmInOut__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][4U];
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0 
	= vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:139
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext 
	= (7U & ((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
		 + (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)));
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow 
	= ((7U == (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value)) 
	   & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_ 
	= ((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
	   & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_ 
	= (((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
	    & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
	   & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_ 
	= ((((((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
	       & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
	      & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	     | (((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
		 & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
		& (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3))) 
	    | (((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
		& (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	       & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3))) 
	   | (((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1) 
	       & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	      & (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:165
    vlTOPp->__Vtableidx7 = (((7U == (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)) 
			     << 4U) | (((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) 
					<< 3U) | (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state)));
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx_io_write_ready 
	= vlTOPp->__Vtable7_UartFsmInOut__DOT__uartCtrl_1___DOT__tx_io_write_ready
	[vlTOPp->__Vtableidx7];
    vlTOPp->UartFsmInOut__DOT__write_ready = (1U & 
					      ((~ (IData)(vlTOPp->UartFsmInOut__DOT___zz_1_)) 
					       | (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx_io_write_ready)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:803
    vlTOPp->UartFsmInOut__DOT__fsmOut_stateNext = vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg;
    if ((1U == (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg))) {
	if (vlTOPp->UartFsmInOut__DOT__payloadValid) {
	    vlTOPp->UartFsmInOut__DOT__fsmOut_stateNext = 2U;
	}
    } else {
	if ((2U == (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg))) {
	    if (((IData)(vlTOPp->UartFsmInOut__DOT__write_valid) 
		 & (IData)(vlTOPp->UartFsmInOut__DOT__write_ready))) {
		vlTOPp->UartFsmInOut__DOT__fsmOut_stateNext = 3U;
	    }
	} else {
	    vlTOPp->UartFsmInOut__DOT__fsmOut_stateNext 
		= ((3U == (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg))
		    ? ((7U == (IData)(vlTOPp->UartFsmInOut__DOT__fsmOut_outCounter))
		        ? 1U : 2U) : 1U);
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:705
    vlTOPp->__Vtableidx4 = vlTOPp->UartFsmInOut__DOT__fsmOut_stateNext;
    vlTOPp->UartFsmInOut__DOT__fsmOut_stateNext_string[0U] 
	= vlTOPp->__Vtable4_UartFsmInOut__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][0U];
    vlTOPp->UartFsmInOut__DOT__fsmOut_stateNext_string[1U] 
	= vlTOPp->__Vtable4_UartFsmInOut__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][1U];
    vlTOPp->UartFsmInOut__DOT__fsmOut_stateNext_string[2U] 
	= vlTOPp->__Vtable4_UartFsmInOut__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][2U];
    vlTOPp->UartFsmInOut__DOT__fsmOut_stateNext_string[3U] 
	= vlTOPp->__Vtable4_UartFsmInOut__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][3U];
    vlTOPp->UartFsmInOut__DOT__fsmOut_stateNext_string[4U] 
	= vlTOPp->__Vtable4_UartFsmInOut__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][4U];
}

VL_INLINE_OPT void VUartFsmInOut::_sequent__TOP__5(VUartFsmInOut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartFsmInOut::_sequent__TOP__5\n"); );
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
	= vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity;
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
	= vlTOPp->__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value;
    vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_ 
	= (7U == (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value));
}

void VUartFsmInOut::_eval(VUartFsmInOut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartFsmInOut::_eval\n"); );
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VUartFsmInOut::_change_request(VUartFsmInOut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartFsmInOut::_change_request\n"); );
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VUartFsmInOut::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartFsmInOut::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((io_uart_rxd & 0xfeU))) {
	Verilated::overWidthError("io_uart_rxd");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG
