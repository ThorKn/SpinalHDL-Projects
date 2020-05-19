// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUartMult.h for the primary calling header

#include "VUartMult.h"         // For This
#include "VUartMult__Syms.h"


//--------------------


void VUartMult::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VUartMult::eval\n"); );
    VUartMult__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VUartMult* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VUartMult::_eval_initial_loop(VUartMult__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VUartMult::_sequent__TOP__2(VUartMult__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMult::_sequent__TOP__2\n"); );
    VUartMult* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__UartMult__DOT__uartfsm__DOT__fsmIn_inCounter,2,0);
    VL_SIG8(__Vdly__UartMult__DOT__uartfsm__DOT__fsmOut_outCounter,2,0);
    VL_SIG8(__Vdly__UartMult__DOT__uartfsm__DOT__fsmIn_stateReg,2,0);
    VL_SIG8(__Vdly__UartMult__DOT__uartfsm__DOT__fsmOut_stateReg,1,0);
    VL_SIG8(__Vdly__UartMult__DOT__mult_1___DOT__fsm_stateReg,1,0);
    VL_SIG64(__Vdly__UartMult__DOT__mult_1___DOT__fsm_buffer,47,0);
    // Body
    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0;
    __Vdly__UartMult__DOT__mult_1___DOT__fsm_buffer 
	= vlTOPp->UartMult__DOT__mult_1___DOT__fsm_buffer;
    __Vdly__UartMult__DOT__mult_1___DOT__fsm_stateReg 
	= vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg;
    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value;
    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4;
    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter;
    __Vdly__UartMult__DOT__uartfsm__DOT__fsmIn_inCounter 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_inCounter;
    __Vdly__UartMult__DOT__uartfsm__DOT__fsmOut_outCounter 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_outCounter;
    __Vdly__UartMult__DOT__uartfsm__DOT__fsmIn_stateReg 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg;
    __Vdly__UartMult__DOT__uartfsm__DOT__fsmOut_stateReg 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg;
    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:962
    if (vlTOPp->reset) {
	__Vdly__UartMult__DOT__mult_1___DOT__fsm_buffer = VL_ULL(0);
	vlTOPp->UartMult__DOT__mult_1___DOT__fsm_result = VL_ULL(0);
	__Vdly__UartMult__DOT__mult_1___DOT__fsm_stateReg = 0U;
    } else {
	if ((1U == (IData)(vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg))) {
	    if (vlTOPp->UartMult__DOT__uartfsm_io_toFnct_valid) {
		__Vdly__UartMult__DOT__mult_1___DOT__fsm_buffer 
		    = vlTOPp->UartMult__DOT__uartfsm_io_toFnct_payload;
	    }
	} else {
	    if ((2U == (IData)(vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg))) {
		vlTOPp->UartMult__DOT__mult_1___DOT__fsm_result 
		    = (VL_ULL(0xffffffffffff) & ((QData)((IData)(
								 (0xffffffU 
								  & (IData)(vlTOPp->UartMult__DOT__mult_1___DOT__fsm_buffer)))) 
						 * (QData)((IData)(
								   (0xffffffU 
								    & (IData)(
									      (vlTOPp->UartMult__DOT__mult_1___DOT__fsm_buffer 
									       >> 0x18U)))))));
	    }
	}
	__Vdly__UartMult__DOT__mult_1___DOT__fsm_stateReg 
	    = vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateNext;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:568
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter = 0U;
    } else {
	vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
	    = (0xfffffU & (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
			   - (IData)(1U)));
	if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick) {
	    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter = 0x1aU;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:193
    if (vlTOPp->reset) {
	vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value = 0U;
	vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 0U;
	vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext = 1U;
    } else {
	if ((4U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
		if ((0U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))) {
		    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
			= ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT___zz_1_)
			    ? 1U : 0U);
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		if ((1U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
			vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 4U;
		    }
		} else {
		    if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
			if ((7U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))) {
			    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 4U;
			}
		    }
		}
	    } else {
		if ((1U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
			vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 2U;
		    }
		} else {
		    if (((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT___zz_1_) 
			 & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow))) {
			vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 1U;
		    }
		}
	    }
	}
	vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value 
	    = vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext;
	vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext 
	    = vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd;
    }
    vlTOPp->UartMult__DOT__mult_1___DOT__fsm_buffer 
	= __Vdly__UartMult__DOT__mult_1___DOT__fsm_buffer;
    vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg 
	= __Vdly__UartMult__DOT__mult_1___DOT__fsm_stateReg;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:891
    vlTOPp->__Vtableidx9 = vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg;
    vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg_string[0U] 
	= vlTOPp->__Vtable9_UartMult__DOT__mult_1___DOT__fsm_stateReg_string
	[vlTOPp->__Vtableidx9][0U];
    vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg_string[1U] 
	= vlTOPp->__Vtable9_UartMult__DOT__mult_1___DOT__fsm_stateReg_string
	[vlTOPp->__Vtableidx9][1U];
    vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg_string[2U] 
	= vlTOPp->__Vtable9_UartMult__DOT__mult_1___DOT__fsm_stateReg_string
	[vlTOPp->__Vtableidx9][2U];
    vlTOPp->io_uart_txd = vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:811
    if (vlTOPp->reset) {
	vlTOPp->UartMult__DOT__uartfsm__DOT___zz_1_ = 0U;
	__Vdly__UartMult__DOT__uartfsm__DOT__fsmIn_inCounter = 0U;
	vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_buffer = VL_ULL(0);
	__Vdly__UartMult__DOT__uartfsm__DOT__fsmOut_outCounter = 0U;
	vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_outBuffer = VL_ULL(0);
	__Vdly__UartMult__DOT__uartfsm__DOT__fsmIn_stateReg = 0U;
	__Vdly__UartMult__DOT__uartfsm__DOT__fsmOut_stateReg = 0U;
    } else {
	if (vlTOPp->UartMult__DOT__uartfsm__DOT__write_ready) {
	    vlTOPp->UartMult__DOT__uartfsm__DOT___zz_1_ 
		= vlTOPp->UartMult__DOT__uartfsm__DOT__write_valid;
	}
	if ((1U & (~ ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 2U)))) {
	    if ((2U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg))) {
		if ((1U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg))) {
		    __Vdly__UartMult__DOT__uartfsm__DOT__fsmIn_inCounter 
			= (7U & ((IData)(1U) + (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_inCounter)));
		} else {
		    if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) {
			vlTOPp->UartMult__DOT__uartfsm__DOT____Vlvbound2 
			    = vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			if ((0x2fU >= (0x3fU & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT___zz_7_)))) {
			    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_buffer 
				= (((~ (VL_ULL(0xff) 
					<< (0x3fU & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT___zz_7_)))) 
				    & vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_buffer) 
				   | ((QData)((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT____Vlvbound2)) 
				      << (0x3fU & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT___zz_7_))));
			}
		    }
		}
	    }
	}
	if ((1U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    if (vlTOPp->UartMult__DOT__mult_1___05Fio_toUart_valid) {
		__Vdly__UartMult__DOT__uartfsm__DOT__fsmOut_outCounter = 0U;
		vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_outBuffer 
		    = vlTOPp->UartMult__DOT__mult_1___05Fio_toUart_payload;
	    }
	} else {
	    if ((2U != (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg))) {
		if ((3U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg))) {
		    __Vdly__UartMult__DOT__uartfsm__DOT__fsmOut_outCounter 
			= (7U & ((IData)(1U) + (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_outCounter)));
		}
	    }
	}
	if (((1U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg)) 
	     & (1U != (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateNext)))) {
	    __Vdly__UartMult__DOT__uartfsm__DOT__fsmIn_inCounter = 0U;
	    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_buffer = VL_ULL(0);
	}
	__Vdly__UartMult__DOT__uartfsm__DOT__fsmOut_stateReg 
	    = vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateNext;
	__Vdly__UartMult__DOT__uartfsm__DOT__fsmIn_stateReg 
	    = vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateNext;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:912
    vlTOPp->UartMult__DOT__mult_1___05Fio_toUart_payload = VL_ULL(0);
    if ((1U != (IData)(vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg))) {
	if ((2U != (IData)(vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg))) {
	    if ((3U == (IData)(vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg))) {
		vlTOPp->UartMult__DOT__mult_1___05Fio_toUart_payload 
		    = vlTOPp->UartMult__DOT__mult_1___DOT__fsm_result;
	    }
	}
    }
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_inCounter 
	= __Vdly__UartMult__DOT__uartfsm__DOT__fsmIn_inCounter;
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_outCounter 
	= __Vdly__UartMult__DOT__uartfsm__DOT__fsmOut_outCounter;
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg 
	= __Vdly__UartMult__DOT__uartfsm__DOT__fsmIn_stateReg;
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg 
	= __Vdly__UartMult__DOT__uartfsm__DOT__fsmOut_stateReg;
    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg;
    vlTOPp->UartMult__DOT__uartfsm__DOT___zz_7_ = (0x7fU 
						   & ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_inCounter) 
						      << 3U));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:693
    vlTOPp->UartMult__DOT__uartfsm_io_toFnct_payload = VL_ULL(0);
    if ((4U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg)))) {
		vlTOPp->UartMult__DOT__uartfsm_io_toFnct_payload 
		    = vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_buffer;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:643
    vlTOPp->__Vtableidx1 = vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg;
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg_string[0U] 
	= vlTOPp->__Vtable1_UartMult__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][0U];
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg_string[1U] 
	= vlTOPp->__Vtable1_UartMult__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][1U];
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg_string[2U] 
	= vlTOPp->__Vtable1_UartMult__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][2U];
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg_string[3U] 
	= vlTOPp->__Vtable1_UartMult__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][3U];
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg_string[4U] 
	= vlTOPp->__Vtable1_UartMult__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][4U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:710
    vlTOPp->UartMult__DOT__uartfsm_io_toFnct_valid = 0U;
    if ((4U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg)))) {
		vlTOPp->UartMult__DOT__uartfsm_io_toFnct_valid = 1U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:663
    vlTOPp->__Vtableidx3 = vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg;
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg_string[0U] 
	= vlTOPp->__Vtable3_UartMult__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][0U];
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg_string[1U] 
	= vlTOPp->__Vtable3_UartMult__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][1U];
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg_string[2U] 
	= vlTOPp->__Vtable3_UartMult__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][2U];
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg_string[3U] 
	= vlTOPp->__Vtable3_UartMult__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][3U];
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg_string[4U] 
	= vlTOPp->__Vtable3_UartMult__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][4U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:728
    vlTOPp->UartMult__DOT__uartfsm__DOT__write_valid = 0U;
    if ((1U != (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    vlTOPp->UartMult__DOT__uartfsm__DOT__write_valid = 1U;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:942
    vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateNext 
	= vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg;
    if ((1U == (IData)(vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg))) {
	if (vlTOPp->UartMult__DOT__uartfsm_io_toFnct_valid) {
	    vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateNext = 2U;
	}
    } else {
	vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateNext 
	    = ((2U == (IData)(vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg))
	        ? 3U : 1U);
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:900
    vlTOPp->__Vtableidx10 = vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateNext;
    vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateNext_string[0U] 
	= vlTOPp->__Vtable10_UartMult__DOT__mult_1___DOT__fsm_stateNext_string
	[vlTOPp->__Vtableidx10][0U];
    vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateNext_string[1U] 
	= vlTOPp->__Vtable10_UartMult__DOT__mult_1___DOT__fsm_stateNext_string
	[vlTOPp->__Vtableidx10][1U];
    vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateNext_string[2U] 
	= vlTOPp->__Vtable10_UartMult__DOT__mult_1___DOT__fsm_stateNext_string
	[vlTOPp->__Vtableidx10][2U];
}

VL_INLINE_OPT void VUartMult::_sequent__TOP__3(VUartMult__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMult::_sequent__TOP__3\n"); );
    VUartMult* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value,2,0);
    VL_SIG8(__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity,0,0);
    VL_SIG8(__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter,2,0);
    // Body
    __Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity;
    __Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value;
    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity;
    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value;
    __Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:864
    if (vlTOPp->UartMult__DOT__uartfsm__DOT__write_ready) {
	vlTOPp->UartMult__DOT__uartfsm__DOT___zz_2_ 
	    = vlTOPp->UartMult__DOT__uartfsm__DOT__write_payload;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:986
    vlTOPp->UartMult__DOT__mult_1___DOT___zz_1_ = 1U;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:239
    if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
	__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
	    = (7U & ((IData)(1U) + (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)));
    }
    if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
	__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
	    = ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity) 
	       ^ (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
    }
    if ((1U & (~ ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    if ((1U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
		    __Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
		}
	    } else {
		if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
		    if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_) {
			__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
		    }
		}
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) {
		    __Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity = 0U;
		    __Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:455
    if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
	__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
	    = (7U & ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter) 
		     - (IData)(1U)));
    }
    if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
	vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
	    = (7U & ((IData)(1U) + (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value)));
    }
    if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
	vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
	    = ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity) 
	       ^ (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
    }
    if ((1U & (~ ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
	    if ((1U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
		}
	    } else {
		if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter 
			= (((~ ((IData)(1U) << (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) 
			    & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter)) 
			   | ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) 
			      << (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value)));
		    if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_) {
			vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
		    }
		}
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
		    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity = 0U;
		}
	    } else {
		if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_) {
		    __Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter = 2U;
		}
	    }
	}
    }
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
	= __Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity;
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
	= __Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value;
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
	= __Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter;
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_ 
	= (7U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value));
}

VL_INLINE_OPT void VUartMult::_sequent__TOP__5(VUartMult__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMult::_sequent__TOP__5\n"); );
    VUartMult* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:743
    vlTOPp->UartMult__DOT__uartfsm__DOT__write_payload = 0U;
    if ((1U != (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    vlTOPp->UartMult__DOT__uartfsm__DOT__write_payload 
		= (0xffU & ((0x2fU >= (0x3fU & ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_outCounter) 
						<< 3U)))
			     ? (IData)((vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_outBuffer 
					>> (0x3fU & 
					    ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_outCounter) 
					     << 3U))))
			     : (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT____Vxrand1)));
	}
    }
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
	= vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:927
    vlTOPp->UartMult__DOT__mult_1___05Fio_toUart_valid = 0U;
    if ((1U != (IData)(vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg))) {
	if ((2U != (IData)(vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg))) {
	    if ((3U == (IData)(vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg))) {
		vlTOPp->UartMult__DOT__mult_1___05Fio_toUart_valid 
		    = vlTOPp->UartMult__DOT__mult_1___DOT___zz_1_;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:152
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd = 1U;
    if ((1U & (~ ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd 
		= (1U & ((1U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))
			  ? (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity)
			  : ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT___zz_2_) 
			     >> (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))));
	} else {
	    if ((1U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd = 0U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:123
    vlTOPp->__Vtableidx6 = vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable6_UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx6];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:378
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 = 1U;
	vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 = 1U;
	vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 = 1U;
	vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 = 1U;
	vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value = 1U;
	vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick = 0U;
	vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
	vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 0U;
    } else {
	if ((0U == vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
		= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
	}
	vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick 
	    = (0U == vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter);
	vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 0U;
	if ((0U == vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
		= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
	}
	if ((4U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
	    if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) {
		    if ((0U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) {
			vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
		    }
		} else {
		    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		if ((1U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
			if (((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity) 
			     == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value))) {
			    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 4U;
			    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 1U;
			} else {
			    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
			}
		    }
		} else {
		    if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
			if ((7U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) {
			    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 4U;
			    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 1U;
			}
		    }
		}
	    } else {
		if ((1U & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
			vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 2U;
			if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) {
			    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
			}
		    }
		} else {
		    if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_) {
			vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 1U;
		    }
		}
	    }
	}
	if ((0U == vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
		= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
	}
	vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
	    = (((((((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_) 
		    | (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_)) 
		   | ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_) 
		      & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
		  | (((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_) 
		      & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
		     & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
		 | (((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
		     & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
		    & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
		| (((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1) 
		    & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
		   & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
	       | (((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2) 
		   & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
		  & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4)));
	if ((0U == vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
		= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1;
	}
    }
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
	= vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value;
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
	= vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4;
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
	= vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state 
	= vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
	= vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
	= vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg 
	= vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg;
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
	= vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:352
    vlTOPp->__Vtableidx8 = vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable8_UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx8];
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_ 
	= ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) 
	   & (~ (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:367
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 0U;
    if (vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
	if ((0U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter))) {
	    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 1U;
	}
    }
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_ 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:758
    vlTOPp->__Vtableidx5 = (((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) 
			     << 6U) | (((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_inCounter) 
					<< 3U) | (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg)));
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateNext 
	= vlTOPp->__Vtable5_UartMult__DOT__uartfsm__DOT__fsmIn_stateNext
	[vlTOPp->__Vtableidx5];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:57
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0 = 0U;
	vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1 = 0U;
    } else {
	vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1 
	    = vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0;
	vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0 
	    = vlTOPp->io_uart_rxd;
    }
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick 
	= (0U == vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:135
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 0U;
    if ((0U == vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 1U;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:653
    vlTOPp->__Vtableidx2 = vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateNext;
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateNext_string[0U] 
	= vlTOPp->__Vtable2_UartMult__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][0U];
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateNext_string[1U] 
	= vlTOPp->__Vtable2_UartMult__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][1U];
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateNext_string[2U] 
	= vlTOPp->__Vtable2_UartMult__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][2U];
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateNext_string[3U] 
	= vlTOPp->__Vtable2_UartMult__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][3U];
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateNext_string[4U] 
	= vlTOPp->__Vtable2_UartMult__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][4U];
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0 
	= vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:145
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext 
	= (7U & ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
		 + (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)));
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow 
	= ((7U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value)) 
	   & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_ 
	= ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
	   & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_ 
	= (((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
	    & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
	   & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_ 
	= ((((((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
	       & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
	      & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	     | (((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
		 & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
		& (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3))) 
	    | (((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
		& (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	       & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3))) 
	   | (((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1) 
	       & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	      & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:171
    vlTOPp->__Vtableidx7 = (((7U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)) 
			     << 4U) | (((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) 
					<< 3U) | (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state)));
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready 
	= vlTOPp->__Vtable7_UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready
	[vlTOPp->__Vtableidx7];
    vlTOPp->UartMult__DOT__uartfsm__DOT__write_ready 
	= (1U & ((~ (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT___zz_1_)) 
		 | (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:785
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateNext 
	= vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg;
    if ((1U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if (vlTOPp->UartMult__DOT__mult_1___05Fio_toUart_valid) {
	    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateNext = 2U;
	}
    } else {
	if ((2U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    if (((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__write_valid) 
		 & (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__write_ready))) {
		vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateNext = 3U;
	    }
	} else {
	    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateNext 
		= ((3U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg))
		    ? ((5U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_outCounter))
		        ? 1U : 2U) : 1U);
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:672
    vlTOPp->__Vtableidx4 = vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateNext;
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateNext_string[0U] 
	= vlTOPp->__Vtable4_UartMult__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][0U];
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateNext_string[1U] 
	= vlTOPp->__Vtable4_UartMult__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][1U];
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateNext_string[2U] 
	= vlTOPp->__Vtable4_UartMult__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][2U];
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateNext_string[3U] 
	= vlTOPp->__Vtable4_UartMult__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][3U];
    vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateNext_string[4U] 
	= vlTOPp->__Vtable4_UartMult__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][4U];
}

VL_INLINE_OPT void VUartMult::_sequent__TOP__6(VUartMult__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMult::_sequent__TOP__6\n"); );
    VUartMult* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
	= vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity;
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
	= vlTOPp->__Vdly__UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value;
    vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_ 
	= (7U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value));
}

void VUartMult::_eval(VUartMult__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMult::_eval\n"); );
    VUartMult* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

VL_INLINE_OPT QData VUartMult::_change_request(VUartMult__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMult::_change_request\n"); );
    VUartMult* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VUartMult::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMult::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((io_uart_rxd & 0xfeU))) {
	Verilated::overWidthError("io_uart_rxd");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG
