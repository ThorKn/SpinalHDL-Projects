// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUartLed.h for the primary calling header

#include "VUartLed.h"          // For This
#include "VUartLed__Syms.h"


//--------------------


void VUartLed::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VUartLed::eval\n"); );
    VUartLed__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VUartLed::_eval_initial_loop(VUartLed__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VUartLed::_sequent__TOP__2(VUartLed__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartLed::_sequent__TOP__2\n"); );
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__UartLed__DOT__uartfsm__DOT__fsmIn_inCounter,2,0);
    VL_SIG8(__Vdly__UartLed__DOT__uartfsm__DOT__fsmOut_outCounter,2,0);
    VL_SIG8(__Vdly__UartLed__DOT__uartfsm__DOT__fsmIn_stateReg,2,0);
    VL_SIG8(__Vdly__UartLed__DOT__uartfsm__DOT__fsmOut_stateReg,1,0);
    // Body
    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0;
    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value;
    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4;
    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter;
    __Vdly__UartLed__DOT__uartfsm__DOT__fsmIn_inCounter 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_inCounter;
    __Vdly__UartLed__DOT__uartfsm__DOT__fsmOut_outCounter 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_outCounter;
    __Vdly__UartLed__DOT__uartfsm__DOT__fsmOut_stateReg 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg;
    __Vdly__UartLed__DOT__uartfsm__DOT__fsmIn_stateReg 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg;
    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:574
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter = 0U;
    } else {
	vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
	    = (0xfffffU & (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
			   - (IData)(1U)));
	if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick) {
	    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter = 0x1aU;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:199
    if (vlTOPp->reset) {
	vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value = 0U;
	vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 0U;
	vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext = 1U;
    } else {
	if ((4U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
		if ((0U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))) {
		    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
			= ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT___zz_1_)
			    ? 1U : 0U);
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		if ((1U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
			vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 4U;
		    }
		} else {
		    if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
			if ((7U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))) {
			    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 4U;
			}
		    }
		}
	    } else {
		if ((1U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
			vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 2U;
		    }
		} else {
		    if (((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT___zz_1_) 
			 & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow))) {
			vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 1U;
		    }
		}
	    }
	}
	vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value 
	    = vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext;
	vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext 
	    = vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd;
    }
    vlTOPp->io_uart_txd = vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:823
    if (vlTOPp->reset) {
	vlTOPp->UartLed__DOT__uartfsm__DOT___zz_1_ = 0U;
	__Vdly__UartLed__DOT__uartfsm__DOT__fsmIn_inCounter = 0U;
	vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_0 = 0U;
	vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_1 = 0U;
	vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_2 = 0U;
	vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_3 = 0U;
	vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_4 = 0U;
	vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_5 = 0U;
	__Vdly__UartLed__DOT__uartfsm__DOT__fsmOut_outCounter = 0U;
	__Vdly__UartLed__DOT__uartfsm__DOT__fsmIn_stateReg = 0U;
	__Vdly__UartLed__DOT__uartfsm__DOT__fsmOut_stateReg = 0U;
    } else {
	if ((1U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    if (vlTOPp->UartLed__DOT__leddriver_1___DOT__io_fromUart_m2sPipe_valid) {
		__Vdly__UartLed__DOT__uartfsm__DOT__fsmOut_outCounter = 0U;
	    }
	} else {
	    if ((2U != (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg))) {
		if ((3U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg))) {
		    __Vdly__UartLed__DOT__uartfsm__DOT__fsmOut_outCounter 
			= (7U & ((IData)(1U) + (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_outCounter)));
		}
	    }
	}
	if (vlTOPp->UartLed__DOT__uartfsm__DOT__write_ready) {
	    vlTOPp->UartLed__DOT__uartfsm__DOT___zz_1_ 
		= vlTOPp->UartLed__DOT__uartfsm__DOT__write_valid;
	}
	if ((1U & (~ ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 2U)))) {
	    if ((2U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg))) {
		if ((1U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg))) {
		    __Vdly__UartLed__DOT__uartfsm__DOT__fsmIn_inCounter 
			= (7U & ((IData)(1U) + (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_inCounter)));
		} else {
		    if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) {
			if ((1U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT___zz_3_))) {
			    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_0 
				= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			}
			if ((2U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT___zz_3_))) {
			    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_1 
				= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			}
			if ((4U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT___zz_3_))) {
			    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_2 
				= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			}
			if ((8U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT___zz_3_))) {
			    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_3 
				= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			}
			if ((0x10U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT___zz_3_))) {
			    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_4 
				= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			}
			if ((0x20U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT___zz_3_))) {
			    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_5 
				= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			}
		    }
		}
	    }
	}
	__Vdly__UartLed__DOT__uartfsm__DOT__fsmOut_stateReg 
	    = vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateNext;
	if (((1U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg)) 
	     & (1U != (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateNext)))) {
	    __Vdly__UartLed__DOT__uartfsm__DOT__fsmIn_inCounter = 0U;
	    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_0 = 0U;
	    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_1 = 0U;
	    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_2 = 0U;
	    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_3 = 0U;
	    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_4 = 0U;
	}
	__Vdly__UartLed__DOT__uartfsm__DOT__fsmIn_stateReg 
	    = vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateNext;
    }
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_inCounter 
	= __Vdly__UartLed__DOT__uartfsm__DOT__fsmIn_inCounter;
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_outCounter 
	= __Vdly__UartLed__DOT__uartfsm__DOT__fsmOut_outCounter;
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg 
	= __Vdly__UartLed__DOT__uartfsm__DOT__fsmOut_stateReg;
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg 
	= __Vdly__UartLed__DOT__uartfsm__DOT__fsmIn_stateReg;
    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg;
    vlTOPp->UartLed__DOT__uartfsm__DOT___zz_3_ = (0xffU 
						  & ((IData)(1U) 
						     << (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_inCounter)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:673
    vlTOPp->__Vtableidx3 = vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg;
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg_string[0U] 
	= vlTOPp->__Vtable3_UartLed__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][0U];
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg_string[1U] 
	= vlTOPp->__Vtable3_UartLed__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][1U];
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg_string[2U] 
	= vlTOPp->__Vtable3_UartLed__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][2U];
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg_string[3U] 
	= vlTOPp->__Vtable3_UartLed__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][3U];
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg_string[4U] 
	= vlTOPp->__Vtable3_UartLed__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][4U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:738
    vlTOPp->UartLed__DOT__uartfsm__DOT__write_valid = 0U;
    if ((1U != (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    vlTOPp->UartLed__DOT__uartfsm__DOT__write_valid = 1U;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:653
    vlTOPp->__Vtableidx1 = vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg;
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg_string[0U] 
	= vlTOPp->__Vtable1_UartLed__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][0U];
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg_string[1U] 
	= vlTOPp->__Vtable1_UartLed__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][1U];
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg_string[2U] 
	= vlTOPp->__Vtable1_UartLed__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][2U];
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg_string[3U] 
	= vlTOPp->__Vtable1_UartLed__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][3U];
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg_string[4U] 
	= vlTOPp->__Vtable1_UartLed__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][4U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:1248
    if (vlTOPp->reset) {
	vlTOPp->UartLed__DOT__leddriver_1___DOT__io_fromUart_m2sPipe_valid = 0U;
	vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_value = 0U;
	vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_value = 0U;
	vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_value = 0U;
	vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg = 0U;
	vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg = 0U;
    } else {
	vlTOPp->UartLed__DOT__leddriver_1___DOT__io_fromUart_m2sPipe_valid 
	    = vlTOPp->UartLed__DOT__uartfsm_io_toFnct_valid;
	vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_value 
	    = vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_valueNext;
	vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_value 
	    = vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_valueNext;
	vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_value 
	    = vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_valueNext;
	vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg 
	    = vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateNext;
	vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg 
	    = vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateNext;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:988
    vlTOPp->__Vtableidx9 = vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg;
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg_string[0U] 
	= vlTOPp->__Vtable9_UartLed__DOT__leddriver_1___DOT__ledOut_stateReg_string
	[vlTOPp->__Vtableidx9][0U];
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg_string[1U] 
	= vlTOPp->__Vtable9_UartLed__DOT__leddriver_1___DOT__ledOut_stateReg_string
	[vlTOPp->__Vtableidx9][1U];
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg_string[2U] 
	= vlTOPp->__Vtable9_UartLed__DOT__leddriver_1___DOT__ledOut_stateReg_string
	[vlTOPp->__Vtableidx9][2U];
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg_string[3U] 
	= vlTOPp->__Vtable9_UartLed__DOT__leddriver_1___DOT__ledOut_stateReg_string
	[vlTOPp->__Vtableidx9][3U];
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg_string[4U] 
	= vlTOPp->__Vtable9_UartLed__DOT__leddriver_1___DOT__ledOut_stateReg_string
	[vlTOPp->__Vtableidx9][4U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:1013
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_willIncrement = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg))) {
	    if ((1U & (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg))) {
		vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_willIncrement = 1U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:1111
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_willIncrement = 0U;
    if ((1U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg))) {
	vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_willIncrement = 1U;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:1144
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_willIncrement = 0U;
    if ((1U != (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg))) {
	    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_willIncrement = 1U;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:1062
    vlTOPp->__Vtableidx12 = (((IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg) 
			      << 2U) | (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg));
    vlTOPp->UartLed__DOT__leddriver_1___05Fio_ledData 
	= vlTOPp->__Vtable12_UartLed__DOT__leddriver_1___05Fio_ledData
	[vlTOPp->__Vtableidx12];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:1030
    vlTOPp->__Vtableidx11 = (((0x2fU == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_value)) 
			      << 3U) | (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg));
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_willClear 
	= vlTOPp->__Vtable11_UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_willClear
	[vlTOPp->__Vtableidx11];
    vlTOPp->io_ledData = vlTOPp->UartLed__DOT__leddriver_1___05Fio_ledData;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:1051
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_valueNext 
	= (0x3fU & (((0x2fU == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_value)) 
		     & (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_willIncrement))
		     ? 0U : ((IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_value) 
			     + (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_willIncrement))));
    if (vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_willClear) {
	vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_valueNext = 0U;
    }
}

VL_INLINE_OPT void VUartLed::_sequent__TOP__3(VUartLed__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartLed::_sequent__TOP__3\n"); );
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value,2,0);
    VL_SIG8(__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity,0,0);
    VL_SIG8(__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter,2,0);
    // Body
    __Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity;
    __Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value;
    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity;
    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value;
    __Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:900
    if (vlTOPp->UartLed__DOT__uartfsm__DOT__write_ready) {
	vlTOPp->UartLed__DOT__uartfsm__DOT___zz_2_ 
	    = vlTOPp->UartLed__DOT__uartfsm__DOT__write_payload;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:1240
    if (vlTOPp->UartLed__DOT__uartfsm_io_toFnct_valid) {
	vlTOPp->UartLed__DOT__leddriver_1___DOT__io_fromUart_m2sPipe_payload 
	    = vlTOPp->UartLed__DOT__uartfsm_io_toFnct_payload;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:245
    if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
	__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
	    = (7U & ((IData)(1U) + (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)));
    }
    if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
	__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
	    = ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity) 
	       ^ (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
    }
    if ((1U & (~ ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    if ((1U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
		    __Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
		}
	    } else {
		if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
		    if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_) {
			__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
		    }
		}
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
		    __Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity = 0U;
		    __Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:461
    if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
	__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
	    = (7U & ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter) 
		     - (IData)(1U)));
    }
    if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
	vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
	    = (7U & ((IData)(1U) + (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value)));
    }
    if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
	vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
	    = ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity) 
	       ^ (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
    }
    if ((1U & (~ ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
	    if ((1U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
		}
	    } else {
		if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter 
			= (((~ ((IData)(1U) << (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) 
			    & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter)) 
			   | ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) 
			      << (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value)));
		    if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_) {
			vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
		    }
		}
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
		    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity = 0U;
		}
	    } else {
		if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_) {
		    __Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter = 2U;
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:1240
    if (vlTOPp->UartLed__DOT__uartfsm_io_toFnct_valid) {
	vlTOPp->UartLed__DOT__leddriver_1___DOT__buffer_1_ 
	    = vlTOPp->UartLed__DOT__uartfsm_io_toFnct_payload;
    }
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
	= __Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity;
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
	= __Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value;
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
	= __Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter;
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_ 
	= (7U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value));
}

VL_INLINE_OPT void VUartLed::_sequent__TOP__5(VUartLed__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartLed::_sequent__TOP__5\n"); );
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
	= vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:703
    vlTOPp->UartLed__DOT__uartfsm_io_toFnct_payload = VL_ULL(0);
    if ((4U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg)))) {
		vlTOPp->UartLed__DOT__uartfsm_io_toFnct_payload 
		    = (((QData)((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_5)) 
			<< 0x28U) | (((QData)((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_4)) 
				      << 0x20U) | (QData)((IData)(
								  (((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_3) 
								    << 0x18U) 
								   | (((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_2) 
								       << 0x10U) 
								      | (((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_1) 
									  << 8U) 
									 | (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_0))))))));
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:720
    vlTOPp->UartLed__DOT__uartfsm_io_toFnct_valid = 0U;
    if ((4U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg)))) {
		vlTOPp->UartLed__DOT__uartfsm_io_toFnct_valid = 1U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:753
    vlTOPp->UartLed__DOT__uartfsm__DOT__write_payload = 0U;
    if ((1U != (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    vlTOPp->UartLed__DOT__uartfsm__DOT__write_payload 
		= (0xffU & ((0x2fU >= (0x3fU & ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_outCounter) 
						<< 3U)))
			     ? (IData)((vlTOPp->UartLed__DOT__leddriver_1___DOT__io_fromUart_m2sPipe_payload 
					>> (0x3fU & 
					    ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_outCounter) 
					     << 3U))))
			     : (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT____Vxrand1)));
	}
    }
    vlTOPp->UartLed__DOT__leddriver_1___DOT___zz_1_ 
	= (1U & ((0x2fU >= (0x3fU & ((IData)(0x2fU) 
				     - (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_value))))
		  ? (IData)((vlTOPp->UartLed__DOT__leddriver_1___DOT__buffer_1_ 
			     >> (0x3fU & ((IData)(0x2fU) 
					  - (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_value)))))
		  : (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT____Vxrand1)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:158
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd = 1U;
    if ((1U & (~ ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd 
		= (1U & ((1U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))
			  ? (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity)
			  : ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT___zz_2_) 
			     >> (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))));
	} else {
	    if ((1U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd = 0U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:129
    vlTOPp->__Vtableidx6 = vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable6_UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx6];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:384
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 = 1U;
	vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 = 1U;
	vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 = 1U;
	vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 = 1U;
	vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value = 1U;
	vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick = 0U;
	vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
	vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 0U;
    } else {
	if ((0U == vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
		= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
	}
	vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick 
	    = (0U == vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter);
	vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 0U;
	if ((0U == vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
		= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
	}
	if ((4U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
	    if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) {
		    if ((0U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) {
			vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
		    }
		} else {
		    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		if ((1U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
			if (((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity) 
			     == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value))) {
			    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 4U;
			    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 1U;
			} else {
			    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
			}
		    }
		} else {
		    if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
			if ((7U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) {
			    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 4U;
			    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 1U;
			}
		    }
		}
	    } else {
		if ((1U & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
			vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 2U;
			if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) {
			    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
			}
		    }
		} else {
		    if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_) {
			vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 1U;
		    }
		}
	    }
	}
	if ((0U == vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
		= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
	}
	vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
	    = (((((((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_) 
		    | (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_)) 
		   | ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_) 
		      & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
		  | (((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_) 
		      & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
		     & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
		 | (((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
		     & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
		    & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
		| (((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1) 
		    & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
		   & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
	       | (((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2) 
		   & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
		  & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4)));
	if ((0U == vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
		= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:1090
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_wantExit = 0U;
    if ((1U != (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg))) {
	    if (vlTOPp->UartLed__DOT__leddriver_1___DOT___zz_1_) {
		if ((4U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_value))) {
		    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_wantExit = 1U;
		}
	    } else {
		if ((9U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_value))) {
		    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_wantExit = 1U;
		}
	    }
	}
    }
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
	= vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value;
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
	= vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4;
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
	= vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state 
	= vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
	= vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
	= vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg 
	= vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg;
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
	= vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:1210
    vlTOPp->__Vtableidx13 = (((IData)(vlTOPp->UartLed__DOT__uartfsm_io_toFnct_valid) 
			      << 5U) | (((IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_wantExit) 
					 << 4U) | (
						   ((0x2fU 
						     == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_value)) 
						    << 3U) 
						   | (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg))));
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateNext 
	= vlTOPp->__Vtable13_UartLed__DOT__leddriver_1___DOT__ledOut_stateNext
	[vlTOPp->__Vtableidx13];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:358
    vlTOPp->__Vtableidx8 = vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable8_UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx8];
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_ 
	= ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) 
	   & (~ (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:373
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 0U;
    if (vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
	if ((0U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter))) {
	    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 1U;
	}
    }
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_ 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:768
    vlTOPp->__Vtableidx5 = (((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) 
			     << 6U) | (((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_inCounter) 
					<< 3U) | (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg)));
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateNext 
	= vlTOPp->__Vtable5_UartLed__DOT__uartfsm__DOT__fsmIn_stateNext
	[vlTOPp->__Vtableidx5];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:63
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0 = 0U;
	vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1 = 0U;
    } else {
	vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1 
	    = vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0;
	vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0 
	    = vlTOPp->io_uart_rxd;
    }
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick 
	= (0U == vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:141
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 0U;
    if ((0U == vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 1U;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:998
    vlTOPp->__Vtableidx10 = vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateNext;
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateNext_string[0U] 
	= vlTOPp->__Vtable10_UartLed__DOT__leddriver_1___DOT__ledOut_stateNext_string
	[vlTOPp->__Vtableidx10][0U];
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateNext_string[1U] 
	= vlTOPp->__Vtable10_UartLed__DOT__leddriver_1___DOT__ledOut_stateNext_string
	[vlTOPp->__Vtableidx10][1U];
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateNext_string[2U] 
	= vlTOPp->__Vtable10_UartLed__DOT__leddriver_1___DOT__ledOut_stateNext_string
	[vlTOPp->__Vtableidx10][2U];
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateNext_string[3U] 
	= vlTOPp->__Vtable10_UartLed__DOT__leddriver_1___DOT__ledOut_stateNext_string
	[vlTOPp->__Vtableidx10][3U];
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateNext_string[4U] 
	= vlTOPp->__Vtable10_UartLed__DOT__leddriver_1___DOT__ledOut_stateNext_string
	[vlTOPp->__Vtableidx10][4U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:1177
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateNext 
	= vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg;
    if ((1U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg))) {
	if (vlTOPp->UartLed__DOT__leddriver_1___DOT___zz_1_) {
	    if ((9U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_value))) {
		vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateNext = 2U;
	    }
	} else {
	    if ((4U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_value))) {
		vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateNext = 2U;
	    }
	}
    } else {
	if ((2U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg))) {
	    if (vlTOPp->UartLed__DOT__leddriver_1___DOT___zz_1_) {
		if ((4U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_value))) {
		    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateNext = 0U;
		}
	    } else {
		if ((9U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_value))) {
		    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateNext = 0U;
		}
	    }
	}
    }
    if (((2U != (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg)) 
	 & (2U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateNext)))) {
	vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateNext = 1U;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:663
    vlTOPp->__Vtableidx2 = vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateNext;
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateNext_string[0U] 
	= vlTOPp->__Vtable2_UartLed__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][0U];
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateNext_string[1U] 
	= vlTOPp->__Vtable2_UartLed__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][1U];
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateNext_string[2U] 
	= vlTOPp->__Vtable2_UartLed__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][2U];
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateNext_string[3U] 
	= vlTOPp->__Vtable2_UartLed__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][3U];
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateNext_string[4U] 
	= vlTOPp->__Vtable2_UartLed__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][4U];
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0 
	= vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:151
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext 
	= (7U & ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
		 + (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)));
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow 
	= ((7U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value)) 
	   & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:1124
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_willClear = 0U;
    if (((1U != (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg)) 
	 & (1U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateNext)))) {
	vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_willClear = 1U;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:1157
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_willClear = 0U;
    if (((2U != (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg)) 
	 & (2U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateNext)))) {
	vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_willClear = 1U;
    }
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_ 
	= ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
	   & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_ 
	= (((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
	    & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
	   & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_ 
	= ((((((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
	       & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
	      & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	     | (((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
		 & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
		& (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3))) 
	    | (((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
		& (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	       & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3))) 
	   | (((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1) 
	       & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	      & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:177
    vlTOPp->__Vtableidx7 = (((7U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)) 
			     << 4U) | (((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) 
					<< 3U) | (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state)));
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready 
	= vlTOPp->__Vtable7_UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready
	[vlTOPp->__Vtableidx7];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:1133
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_valueNext 
	= (0xfU & (((9U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_value)) 
		    & (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_willIncrement))
		    ? 0U : ((IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_value) 
			    + (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_willIncrement))));
    if (vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_willClear) {
	vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_valueNext = 0U;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:1166
    vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_valueNext 
	= (0xfU & (((9U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_value)) 
		    & (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_willIncrement))
		    ? 0U : ((IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_value) 
			    + (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_willIncrement))));
    if (vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_willClear) {
	vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_valueNext = 0U;
    }
    vlTOPp->UartLed__DOT__uartfsm__DOT__write_ready 
	= (1U & ((~ (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT___zz_1_)) 
		 | (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:797
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateNext 
	= vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg;
    if ((1U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if (vlTOPp->UartLed__DOT__leddriver_1___DOT__io_fromUart_m2sPipe_valid) {
	    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateNext = 2U;
	}
    } else {
	if ((2U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    if (((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__write_valid) 
		 & (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__write_ready))) {
		vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateNext = 3U;
	    }
	} else {
	    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateNext 
		= ((3U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg))
		    ? ((5U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_outCounter))
		        ? 1U : 2U) : 1U);
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:682
    vlTOPp->__Vtableidx4 = vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateNext;
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateNext_string[0U] 
	= vlTOPp->__Vtable4_UartLed__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][0U];
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateNext_string[1U] 
	= vlTOPp->__Vtable4_UartLed__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][1U];
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateNext_string[2U] 
	= vlTOPp->__Vtable4_UartLed__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][2U];
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateNext_string[3U] 
	= vlTOPp->__Vtable4_UartLed__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][3U];
    vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateNext_string[4U] 
	= vlTOPp->__Vtable4_UartLed__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][4U];
}

VL_INLINE_OPT void VUartLed::_sequent__TOP__6(VUartLed__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartLed::_sequent__TOP__6\n"); );
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
	= vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity;
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
	= vlTOPp->__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value;
    vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_ 
	= (7U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value));
}

void VUartLed::_eval(VUartLed__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartLed::_eval\n"); );
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VUartLed::_change_request(VUartLed__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartLed::_change_request\n"); );
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VUartLed::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartLed::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((io_uart_rxd & 0xfeU))) {
	Verilated::overWidthError("io_uart_rxd");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG
