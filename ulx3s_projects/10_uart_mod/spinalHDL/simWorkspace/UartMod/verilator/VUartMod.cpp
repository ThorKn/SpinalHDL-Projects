// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUartMod.h for the primary calling header

#include "VUartMod.h"          // For This
#include "VUartMod__Syms.h"


//--------------------


void VUartMod::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VUartMod::eval\n"); );
    VUartMod__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VUartMod::_eval_initial_loop(VUartMod__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VUartMod::_sequent__TOP__1(VUartMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMod::_sequent__TOP__1\n"); );
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__fsmIn_inCounter,4,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_outCounter,3,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__fsmIn_stateReg,2,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_stateReg,1,0);
    // Body
    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0;
    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value;
    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4;
    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter;
    __Vdly__UartMod__DOT__uartfsm__DOT__fsmIn_inCounter 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_inCounter;
    __Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_outCounter 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outCounter;
    __Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_stateReg 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg;
    __Vdly__UartMod__DOT__uartfsm__DOT__fsmIn_stateReg 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg;
    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_barret[0U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[0U];
    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_barret[1U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[1U];
    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_barret[2U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[2U];
    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_barret[3U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[3U];
    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_mue 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue;
    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_mod_n 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n;
    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_buffer[0U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_buffer[0U];
    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_buffer[1U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_buffer[1U];
    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_buffer[2U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_buffer[2U];
    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_buffer[3U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_buffer[3U];
    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_stateReg 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg;
    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_mult[0U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[0U];
    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_mult[1U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[1U];
    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_mult[2U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[2U];
    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_mult[3U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[3U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:739
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter = 0U;
    } else {
	vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
	    = (0xfffffU & (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
			   - (IData)(1U)));
	if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick) {
	    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter = 0x1aU;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:230
    if (vlTOPp->reset) {
	vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value = 0U;
	vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext = 1U;
    } else {
	if ((4U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
		if ((0U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))) {
		    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
			= ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__write_m2sPipe_rValid)
			    ? 1U : 0U);
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		if ((1U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
			vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 4U;
		    }
		} else {
		    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
			if ((7U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))) {
			    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 4U;
			}
		    }
		}
	    } else {
		if ((1U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
			vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 2U;
		    }
		} else {
		    if (((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__write_m2sPipe_rValid) 
			 & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick))) {
			vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 1U;
		    }
		}
	    }
	}
	vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value 
	    = vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext;
	vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext 
	    = vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd;
    }
    vlTOPp->io_uart_txd = vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1110
    if (vlTOPp->reset) {
	vlTOPp->UartMod__DOT__uartfsm__DOT__write_m2sPipe_rValid = 0U;
	__Vdly__UartMod__DOT__uartfsm__DOT__fsmIn_inCounter = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0U] = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[1U] = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[2U] = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[3U] = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[4U] = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[5U] = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[6U] = 0U;
	__Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_outCounter = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outBuffer[0U] = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outBuffer[1U] = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outBuffer[2U] = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outBuffer[3U] = 0U;
	__Vdly__UartMod__DOT__uartfsm__DOT__fsmIn_stateReg = 0U;
	__Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_stateReg = 0U;
    } else {
	if (vlTOPp->UartMod__DOT__uartfsm__DOT__write_ready) {
	    vlTOPp->UartMod__DOT__uartfsm__DOT__write_m2sPipe_rValid 
		= vlTOPp->UartMod__DOT__uartfsm__DOT__write_valid;
	}
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 2U)))) {
	    if ((2U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg))) {
		if ((1U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg))) {
		    __Vdly__UartMod__DOT__uartfsm__DOT__fsmIn_inCounter 
			= (0x1fU & ((IData)(1U) + (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_inCounter)));
		} else {
		    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) {
			vlTOPp->UartMod__DOT__uartfsm__DOT____Vlvbound1 
			    = vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			if ((0xcfU >= (0xffU & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT___zz_5_)))) {
			    VL_ASSIGNSEL_WIII(8,(0xffU 
						 & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT___zz_5_)), vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer, vlTOPp->UartMod__DOT__uartfsm__DOT____Vlvbound1);
			}
		    }
		}
	    }
	}
	if ((1U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    if (vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_valid) {
		__Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_outCounter = 0U;
		vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outBuffer[0U] 
		    = vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload[0U];
		vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outBuffer[1U] 
		    = vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload[1U];
		vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outBuffer[2U] 
		    = vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload[2U];
		vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outBuffer[3U] 
		    = vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload[3U];
	    }
	} else {
	    if ((2U != (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))) {
		if ((3U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))) {
		    __Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_outCounter 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outCounter)));
		}
	    }
	}
	if (((1U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg)) 
	     & (1U != (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext)))) {
	    __Vdly__UartMod__DOT__uartfsm__DOT__fsmIn_inCounter = 0U;
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0U] = 0U;
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[1U] = 0U;
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[2U] = 0U;
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[3U] = 0U;
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[4U] = 0U;
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[5U] = 0U;
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[6U] = 0U;
	}
	__Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_stateReg 
	    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateNext;
	__Vdly__UartMod__DOT__uartfsm__DOT__fsmIn_stateReg 
	    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext;
    }
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_inCounter 
	= __Vdly__UartMod__DOT__uartfsm__DOT__fsmIn_inCounter;
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outCounter 
	= __Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_outCounter;
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg 
	= __Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_stateReg;
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg 
	= __Vdly__UartMod__DOT__uartfsm__DOT__fsmIn_stateReg;
    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg;
    vlTOPp->UartMod__DOT__uartfsm__DOT___zz_5_ = (0x1ffU 
						  & ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_inCounter) 
						     << 3U));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:962
    vlTOPp->__Vtableidx3 = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg;
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg_string[0U] 
	= vlTOPp->__Vtable3_UartMod__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][0U];
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg_string[1U] 
	= vlTOPp->__Vtable3_UartMod__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][1U];
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg_string[2U] 
	= vlTOPp->__Vtable3_UartMod__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][2U];
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg_string[3U] 
	= vlTOPp->__Vtable3_UartMod__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][3U];
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg_string[4U] 
	= vlTOPp->__Vtable3_UartMod__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][4U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1027
    vlTOPp->UartMod__DOT__uartfsm__DOT__write_valid = 0U;
    if ((1U != (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    vlTOPp->UartMod__DOT__uartfsm__DOT__write_valid = 1U;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:942
    vlTOPp->__Vtableidx1 = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg;
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg_string[0U] 
	= vlTOPp->__Vtable1_UartMod__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][0U];
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg_string[1U] 
	= vlTOPp->__Vtable1_UartMod__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][1U];
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg_string[2U] 
	= vlTOPp->__Vtable1_UartMod__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][2U];
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg_string[3U] 
	= vlTOPp->__Vtable1_UartMod__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][3U];
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg_string[4U] 
	= vlTOPp->__Vtable1_UartMod__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][4U];
}

VL_INLINE_OPT void VUartMod::_sequent__TOP__2(VUartMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMod::_sequent__TOP__2\n"); );
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value,2,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity,0,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter,2,0);
    VL_SIG8(__Vdly__UartMod__DOT__multmod_1___DOT___zz_1_,1,0);
    VL_SIGW(__Vtemp3,127,0,4);
    VL_SIGW(__Vtemp4,127,0,4);
    // Body
    __Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity;
    __Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value;
    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity;
    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value;
    __Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter;
    __Vdly__UartMod__DOT__multmod_1___DOT___zz_1_ = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_1_;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1163
    if (vlTOPp->UartMod__DOT__uartfsm__DOT__write_ready) {
	vlTOPp->UartMod__DOT__uartfsm__DOT__write_m2sPipe_rData 
	    = vlTOPp->UartMod__DOT__uartfsm__DOT__write_payload;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:276
    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
	__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
	    = (7U & ((IData)(1U) + (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)));
    }
    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
	__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
	    = ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity) 
	       ^ (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
    }
    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
		    __Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
		}
	    } else {
		if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
		    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_) {
			__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
		    }
		}
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
		    __Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity = 0U;
		    __Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:492
    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
	__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
	    = (7U & ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter) 
		     - (IData)(1U)));
    }
    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
	vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
	    = (7U & ((IData)(1U) + (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value)));
    }
    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
	vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
	    = ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity) 
	       ^ (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
    }
    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
		}
	    } else {
		if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter 
			= (((~ ((IData)(1U) << (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) 
			    & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter)) 
			   | ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) 
			      << (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value)));
		    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_) {
			vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
		    }
		}
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
		    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity = 0U;
		}
	    } else {
		if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_) {
		    __Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter = 2U;
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1651
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))) {
		__Vdly__UartMod__DOT__multmod_1___DOT___zz_1_ 
		    = (3U & ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_1_) 
			     - (IData)(1U)));
	    }
	}
    } else {
	if ((2U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		__Vdly__UartMod__DOT__multmod_1___DOT___zz_1_ 
		    = (3U & ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_1_) 
			     - (IData)(1U)));
		__Vtemp3[0U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
		__Vtemp3[1U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
		__Vtemp3[2U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
		__Vtemp3[3U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
		VL_SHIFTR_WWI(128,128,13, __Vtemp4, __Vtemp3, 
			      (0x1fffU & ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k) 
					  << 4U)));
		vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[0U] 
		    = __Vtemp4[0U];
		vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[1U] 
		    = __Vtemp4[1U];
		vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[2U] 
		    = __Vtemp4[2U];
		vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[3U] 
		    = __Vtemp4[3U];
	    }
	}
    }
    if (((3U != (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)) 
	 & (3U == (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateNext)))) {
	__Vdly__UartMod__DOT__multmod_1___DOT___zz_1_ = 2U;
    }
    if (((4U != (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)) 
	 & (4U == (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateNext)))) {
	__Vdly__UartMod__DOT__multmod_1___DOT___zz_1_ = 2U;
    }
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
	= __Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
	= __Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
	= __Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter;
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_1_ = __Vdly__UartMod__DOT__multmod_1___DOT___zz_1_;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_ 
	= (7U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value));
}

VL_INLINE_OPT void VUartMod::_sequent__TOP__4(VUartMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMod::_sequent__TOP__4\n"); );
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp108,127,0,4);
    VL_SIGW(__Vtemp118,127,0,4);
    VL_SIGW(__Vtemp119,127,0,4);
    VL_SIGW(__Vtemp121,127,0,4);
    VL_SIGW(__Vtemp126,95,0,3);
    VL_SIGW(__Vtemp127,95,0,3);
    VL_SIGW(__Vtemp128,95,0,3);
    VL_SIGW(__Vtemp129,95,0,3);
    VL_SIGW(__Vtemp130,95,0,3);
    VL_SIGW(__Vtemp131,95,0,3);
    VL_SIGW(__Vtemp132,95,0,3);
    VL_SIGW(__Vtemp136,95,0,3);
    VL_SIGW(__Vtemp137,95,0,3);
    VL_SIGW(__Vtemp138,95,0,3);
    VL_SIGW(__Vtemp139,95,0,3);
    VL_SIGW(__Vtemp140,95,0,3);
    VL_SIGW(__Vtemp141,95,0,3);
    VL_SIGW(__Vtemp142,95,0,3);
    VL_SIGW(__Vtemp147,95,0,3);
    VL_SIGW(__Vtemp148,95,0,3);
    VL_SIGW(__Vtemp149,95,0,3);
    VL_SIGW(__Vtemp150,95,0,3);
    VL_SIGW(__Vtemp151,95,0,3);
    VL_SIGW(__Vtemp152,95,0,3);
    VL_SIGW(__Vtemp153,95,0,3);
    VL_SIGW(__Vtemp157,127,0,4);
    VL_SIGW(__Vtemp158,127,0,4);
    VL_SIGW(__Vtemp159,159,0,5);
    VL_SIGW(__Vtemp163,95,0,3);
    VL_SIGW(__Vtemp164,95,0,3);
    VL_SIGW(__Vtemp165,95,0,3);
    VL_SIGW(__Vtemp166,95,0,3);
    VL_SIGW(__Vtemp167,95,0,3);
    VL_SIGW(__Vtemp168,95,0,3);
    VL_SIGW(__Vtemp169,127,0,4);
    VL_SIGW(__Vtemp170,127,0,4);
    VL_SIGW(__Vtemp171,127,0,4);
    VL_SIGW(__Vtemp172,127,0,4);
    VL_SIGW(__Vtemp175,95,0,3);
    VL_SIGW(__Vtemp176,95,0,3);
    VL_SIGW(__Vtemp177,95,0,3);
    VL_SIGW(__Vtemp178,95,0,3);
    VL_SIGW(__Vtemp179,95,0,3);
    VL_SIGW(__Vtemp180,95,0,3);
    VL_SIGW(__Vtemp181,95,0,3);
    VL_SIGW(__Vtemp182,95,0,3);
    VL_SIGW(__Vtemp183,127,0,4);
    VL_SIGW(__Vtemp184,127,0,4);
    VL_SIGW(__Vtemp187,127,0,4);
    VL_SIGW(__Vtemp188,159,0,5);
    VL_SIGW(__Vtemp189,159,0,5);
    VL_SIGW(__Vtemp190,159,0,5);
    VL_SIGW(__Vtemp191,159,0,5);
    VL_SIGW(__Vtemp192,159,0,5);
    VL_SIGW(__Vtemp193,159,0,5);
    VL_SIGW(__Vtemp198,127,0,4);
    VL_SIGW(__Vtemp199,127,0,4);
    VL_SIGW(__Vtemp201,127,0,4);
    VL_SIGW(__Vtemp202,127,0,4);
    VL_SIGW(__Vtemp203,127,0,4);
    VL_SIGW(__Vtemp204,127,0,4);
    VL_SIGW(__Vtemp205,127,0,4);
    VL_SIGW(__Vtemp206,127,0,4);
    VL_SIGW(__Vtemp207,127,0,4);
    VL_SIGW(__Vtemp208,127,0,4);
    VL_SIGW(__Vtemp209,127,0,4);
    VL_SIGW(__Vtemp210,127,0,4);
    VL_SIGW(__Vtemp211,127,0,4);
    VL_SIGW(__Vtemp212,127,0,4);
    VL_SIGW(__Vtemp213,127,0,4);
    VL_SIGW(__Vtemp214,127,0,4);
    VL_SIGW(__Vtemp215,127,0,4);
    VL_SIGW(__Vtemp216,127,0,4);
    VL_SIGW(__Vtemp217,127,0,4);
    // Body
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1042
    vlTOPp->UartMod__DOT__uartfsm__DOT__write_payload = 0U;
    if ((1U != (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    vlTOPp->UartMod__DOT__uartfsm__DOT__write_payload 
		= (0xffU & (((0U == (0x1fU & ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outCounter) 
					      << 3U)))
			      ? 0U : (vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outBuffer[
				      ((IData)(1U) 
				       + (3U & ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outCounter) 
						>> 2U)))] 
				      << ((IData)(0x20U) 
					  - (0x1fU 
					     & ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outCounter) 
						<< 3U))))) 
			    | (vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outBuffer[
			       (3U & ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outCounter) 
				      >> 2U))] >> (0x1fU 
						   & ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outCounter) 
						      << 3U)))));
	}
    }
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
	= vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:189
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd = 1U;
    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd 
		= (1U & ((1U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))
			  ? (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity)
			  : ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__write_m2sPipe_rData) 
			     >> (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))));
	} else {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd = 0U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:160
    vlTOPp->__Vtableidx5 = vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable5_UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx5];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:415
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 = 1U;
	vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 = 1U;
	vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 = 1U;
	vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 = 1U;
	vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value = 1U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick = 0U;
	vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
	vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 0U;
    } else {
	if ((0U == vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
		= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
	}
	vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick 
	    = (0U == vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter);
	vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 0U;
	if ((0U == vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
		= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
	}
	if ((4U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
	    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) {
		    if ((0U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) {
			vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
		    }
		} else {
		    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		if ((1U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
			if (((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity) 
			     == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value))) {
			    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 4U;
			    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 1U;
			} else {
			    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
			}
		    }
		} else {
		    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
			if ((7U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) {
			    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 4U;
			    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 1U;
			}
		    }
		}
	    } else {
		if ((1U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
			vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 2U;
			if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) {
			    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
			}
		    }
		} else {
		    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_) {
			vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 1U;
		    }
		}
	    }
	}
	if ((0U == vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
		= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
	}
	vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
	    = (((((((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_) 
		    | (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_)) 
		   | ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_) 
		      & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
		  | (((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_) 
		      & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
		     & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
		 | (((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
		     & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
		    & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
		| (((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1) 
		    & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
		   & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
	       | (((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2) 
		   & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
		  & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4)));
	if ((0U == vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
		= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1595
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_buffer[0U] = 0U;
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_buffer[1U] = 0U;
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_buffer[2U] = 0U;
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_buffer[3U] = 0U;
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_mod_n = 0U;
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_mue = VL_ULL(0);
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k = 0U;
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_mult[0U] = 0U;
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_mult[1U] = 0U;
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_mult[2U] = 0U;
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_mult[3U] = 0U;
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_barret[0U] = 0U;
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_barret[1U] = 0U;
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_barret[2U] = 0U;
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_barret[3U] = 0U;
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_stateReg = 0U;
    } else {
	if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))) {
		    __Vtemp108[0U] = 0U;
		    __Vtemp108[1U] = 0U;
		    __Vtemp108[2U] = 0U;
		    __Vtemp108[3U] = 0U;
		    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_barret[0U] 
			= (VL_GTS_IWW(1,128,128, __Vtemp108, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_)
			    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_19_[0U]
			    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_23_[0U]
			        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_)
				    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[0U]
				    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_)
				        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_33_[0U]
				        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_)
					    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_38_[0U]
					    : vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_[0U])))));
		    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_barret[1U] 
			= (VL_GTS_IWW(1,128,128, __Vtemp108, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_)
			    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_19_[1U]
			    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_23_[1U]
			        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_)
				    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[1U]
				    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_)
				        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_33_[1U]
				        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_)
					    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_38_[1U]
					    : vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_[1U])))));
		    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_barret[2U] 
			= (VL_GTS_IWW(1,128,128, __Vtemp108, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_)
			    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_19_[2U]
			    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_23_[2U]
			        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_)
				    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[2U]
				    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_)
				        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_33_[2U]
				        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_)
					    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_38_[2U]
					    : vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_[2U])))));
		    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_barret[3U] 
			= (VL_GTS_IWW(1,128,128, __Vtemp108, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_)
			    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_19_[3U]
			    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_23_[3U]
			        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_)
				    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[3U]
				    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_)
				        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_33_[3U]
				        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_)
					    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_38_[3U]
					    : vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_[3U])))));
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))) {
		    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_mult[0U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
		    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_mult[1U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
		    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_mult[2U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
		    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_mult[3U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
		}
	    } else {
		if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		    if (vlTOPp->UartMod__DOT__uartfsm_io_toFnct_valid) {
			vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_buffer[0U] 
			    = vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0U];
			vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_buffer[1U] 
			    = vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[1U];
			vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_buffer[2U] 
			    = vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[2U];
			vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_buffer[3U] 
			    = vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[3U];
			vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_mod_n 
			    = vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[4U];
			vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_mue 
			    = (VL_ULL(0xffffffffff) 
			       & (((QData)((IData)(
						   vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[6U])) 
				   << 0x20U) | (QData)((IData)(
							       vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[5U]))));
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k 
			    = (0xffU & (vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[6U] 
					>> 8U));
		    }
		}
	    }
	}
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_stateReg 
	    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateNext;
    }
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
	= vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
	= vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
	= vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state 
	= vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
	= vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
	= vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg 
	= vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
	= vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:992
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[1U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[2U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[3U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[4U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[5U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[6U] = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg)))) {
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0U] 
		    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0U];
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[1U] 
		    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[1U];
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[2U] 
		    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[2U];
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[3U] 
		    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[3U];
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[4U] 
		    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[4U];
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[5U] 
		    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[5U];
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[6U] 
		    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[6U];
	    }
	}
    }
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[0U] 
	= vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_barret[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[1U] 
	= vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_barret[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[2U] 
	= vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_barret[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[3U] 
	= vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_barret[3U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1009
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_valid = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg)))) {
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_valid = 1U;
	    }
	}
    }
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue 
	= vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_mue;
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n 
	= vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_mod_n;
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_buffer[0U] 
	= vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_buffer[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_buffer[1U] 
	= vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_buffer[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_buffer[2U] 
	= vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_buffer[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_buffer[3U] 
	= vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_buffer[3U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg 
	= vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_stateReg;
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[0U] 
	= vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_mult[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[1U] 
	= vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_mult[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[2U] 
	= vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_mult[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[3U] 
	= vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_result_mult[3U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:389
    vlTOPp->__Vtableidx7 = vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable7_UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx7];
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_ 
	= ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) 
	   & (~ (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:404
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 0U;
    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
	if ((0U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter))) {
	    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 1U;
	}
    }
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_ 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1057
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext = 1U;
    } else {
	if ((2U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg))) {
		vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext 
		    = ((0x19U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_inCounter))
		        ? 4U : 2U);
	    } else {
		if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) {
		    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext = 3U;
		}
	    }
	} else {
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext 
		= ((1U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg))
		    ? 2U : 1U);
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:59
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0 = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1 = 0U;
    } else {
	vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1 
	    = vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0;
	vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0 
	    = vlTOPp->io_uart_rxd;
    }
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick 
	= (0U == vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:172
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 0U;
    if ((0U == vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 1U;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1308
    vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload[3U] = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload[0U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[0U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload[1U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[1U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload[2U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[2U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload[3U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[3U];
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1426
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[3U] = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[0U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[0U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[1U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[1U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[2U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[2U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[3U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[3U];
	    }
	}
    } else {
	if ((2U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[0U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[0U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[1U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[1U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[2U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[2U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[3U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[3U];
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1282
    vlTOPp->__Vtableidx8 = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg;
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg_string[0U] 
	= vlTOPp->__Vtable8_UartMod__DOT__multmod_1___DOT__fsm_stateReg_string
	[vlTOPp->__Vtableidx8][0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg_string[1U] 
	= vlTOPp->__Vtable8_UartMod__DOT__multmod_1___DOT__fsm_stateReg_string
	[vlTOPp->__Vtableidx8][1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg_string[2U] 
	= vlTOPp->__Vtable8_UartMod__DOT__multmod_1___DOT__fsm_stateReg_string
	[vlTOPp->__Vtableidx8][2U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1327
    vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_valid = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_valid = 1U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1346
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_ = VL_ULL(0);
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))) {
		vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_ 
		    = (((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[1U])) 
			<< 0x20U) | (QData)((IData)(
						    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[0U])));
	    }
	}
    } else {
	if ((2U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_ 
		= ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		    ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue
		    : (((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_buffer[1U])) 
			<< 0x20U) | (QData)((IData)(
						    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_buffer[0U]))));
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1561
    vlTOPp->__Vtableidx11 = (((IData)(vlTOPp->UartMod__DOT__uartfsm_io_toFnct_valid) 
			      << 5U) | (((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_1_) 
					 << 3U) | (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateNext 
	= vlTOPp->__Vtable11_UartMod__DOT__multmod_1___DOT__fsm_stateNext
	[vlTOPp->__Vtableidx11];
    __Vtemp118[0U] = 0xffffffffU;
    __Vtemp118[1U] = 0xffffffffU;
    __Vtemp118[2U] = 0xffffffffU;
    __Vtemp118[3U] = 0xffffffffU;
    VL_SHIFTR_WWI(128,128,13, __Vtemp119, __Vtemp118, 
		  (0x1fffU & ((IData)(0x80U) - (0xff0U 
						& (((IData)(1U) 
						    + (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k)) 
						   << 4U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_3_[0U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[0U] 
	   & __Vtemp119[0U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_3_[1U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[1U] 
	   & __Vtemp119[1U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_3_[2U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[2U] 
	   & __Vtemp119[2U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_3_[3U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[3U] 
	   & __Vtemp119[3U]);
    VL_SHIFTR_WWI(128,128,13, __Vtemp121, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult, 
		  (0x1fffU & ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k) 
			      << 4U)));
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[0U] 
	= __Vtemp121[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[1U] 
	= __Vtemp121[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[2U] 
	= __Vtemp121[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[3U] 
	= __Vtemp121[3U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:952
    vlTOPp->__Vtableidx2 = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext;
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext_string[0U] 
	= vlTOPp->__Vtable2_UartMod__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][0U];
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext_string[1U] 
	= vlTOPp->__Vtable2_UartMod__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][1U];
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext_string[2U] 
	= vlTOPp->__Vtable2_UartMod__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][2U];
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext_string[3U] 
	= vlTOPp->__Vtable2_UartMod__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][3U];
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext_string[4U] 
	= vlTOPp->__Vtable2_UartMod__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][4U];
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0 
	= vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:182
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext 
	= (7U & ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
		 + (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)));
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick 
	= ((7U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value)) 
	   & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_ 
					   >> 0x20U))) 
		       - (0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_ 
					     >> 0x30U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_)) 
		       - (0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_ 
					     >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_)) 
				  - (QData)((IData)(
						    (vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_ 
						     >> 0x20U)))));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1293
    vlTOPp->__Vtableidx9 = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateNext;
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateNext_string[0U] 
	= vlTOPp->__Vtable9_UartMod__DOT__multmod_1___DOT__fsm_stateNext_string
	[vlTOPp->__Vtableidx9][0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateNext_string[1U] 
	= vlTOPp->__Vtable9_UartMod__DOT__multmod_1___DOT__fsm_stateNext_string
	[vlTOPp->__Vtableidx9][1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateNext_string[2U] 
	= vlTOPp->__Vtable9_UartMod__DOT__multmod_1___DOT__fsm_stateNext_string
	[vlTOPp->__Vtableidx9][2U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1465
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[3U] = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[0U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_3_[0U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[1U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_3_[1U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[2U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_3_[2U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[3U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_3_[3U];
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1388
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[3U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[0U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[0U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[1U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[1U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[2U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[2U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[3U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[3U];
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1367
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_ = VL_ULL(0);
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))) {
		vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_ 
		    = (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n));
	    }
	}
    } else {
	if ((2U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_ 
		= ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		    ? (((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[1U])) 
			<< 0x20U) | (QData)((IData)(
						    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[0U])))
		    : (((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_buffer[3U])) 
			<< 0x20U) | (QData)((IData)(
						    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_buffer[2U]))));
	}
    }
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_ 
	= ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
	   & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_ 
	= (((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
	    & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
	   & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_ 
	= ((((((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
	       & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
	      & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	     | (((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
		 & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
		& (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3))) 
	    | (((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
		& (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	       & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3))) 
	   | (((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1) 
	       & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	      & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:208
    vlTOPp->__Vtableidx6 = (((7U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)) 
			     << 4U) | (((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) 
					<< 3U) | (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state)));
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready 
	= vlTOPp->__Vtable6_UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready
	[vlTOPp->__Vtableidx6];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_)
				    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_ 
								>> 0x20U)))))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_13___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_ 
			       >> 0x30U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_ 
							 >> 0x30U))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_14___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_ 
			       >> 0x20U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_ 
							 >> 0x20U))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_13___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_ 
			       >> 0x10U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_ 
							 >> 0x10U))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_14___DOT___zz_2_ 
	= ((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_)) 
	   * (0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_)));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_ 
					   >> 0x30U))) 
		       - (0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_ 
					     >> 0x20U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_ 
					   >> 0x10U))) 
		       - (0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_ 
						   >> 0x20U))) 
				  - (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_))));
    vlTOPp->UartMod__DOT__uartfsm__DOT__write_ready 
	= (1U & ((~ (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__write_m2sPipe_rValid)) 
		 | (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready)));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_)) 
		       - (0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_ 
					     >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_15___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_)
				     ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_)
				     : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_)
						        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_15___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_)
				     ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_)
				     : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_)
						        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_)
				    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_ 
								>> 0x20U)))))));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1084
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateNext 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg;
    if ((1U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if (vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_valid) {
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateNext = 2U;
	}
    } else {
	if ((2U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    if (((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__write_valid) 
		 & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__write_ready))) {
		vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateNext = 3U;
	    }
	} else {
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateNext 
		= ((3U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))
		    ? ((0xfU == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outCounter))
		        ? 1U : 2U) : 1U);
	}
    }
    VL_EXTEND_WQ(65,64, __Vtemp126, ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_13___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp127, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_13___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_14___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_15___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_13___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_14___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_15___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp128, __Vtemp126, __Vtemp127);
    __Vtemp129[0U] = __Vtemp128[0U];
    __Vtemp129[1U] = __Vtemp128[1U];
    __Vtemp129[2U] = (1U & __Vtemp128[2U]);
    VL_EXTEND_WW(66,65, __Vtemp130, __Vtemp129);
    VL_EXTEND_WI(66,32, __Vtemp131, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_14___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp132, __Vtemp130, __Vtemp131);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U] 
	= __Vtemp132[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U] 
	= __Vtemp132[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[2U] 
	= (3U & __Vtemp132[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp136, ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_13___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp137, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_13___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_14___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_15___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_13___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_14___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_15___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp138, __Vtemp136, __Vtemp137);
    __Vtemp139[0U] = __Vtemp138[0U];
    __Vtemp139[1U] = __Vtemp138[1U];
    __Vtemp139[2U] = (1U & __Vtemp138[2U]);
    VL_EXTEND_WW(66,65, __Vtemp140, __Vtemp139);
    VL_EXTEND_WI(66,32, __Vtemp141, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_14___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp142, __Vtemp140, __Vtemp141);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U] 
	= __Vtemp142[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U] 
	= __Vtemp142[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[2U] 
	= (3U & __Vtemp142[2U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_13___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_ 
			       >> 0x10U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_ 
							 >> 0x10U))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_14___DOT___zz_2_ 
	= ((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_)) 
	   * (0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_)));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_ 
					   >> 0x10U))) 
		       - (0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_))));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:971
    vlTOPp->__Vtableidx4 = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateNext;
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateNext_string[0U] 
	= vlTOPp->__Vtable4_UartMod__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][0U];
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateNext_string[1U] 
	= vlTOPp->__Vtable4_UartMod__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][1U];
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateNext_string[2U] 
	= vlTOPp->__Vtable4_UartMod__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][2U];
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateNext_string[3U] 
	= vlTOPp->__Vtable4_UartMod__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][3U];
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateNext_string[4U] 
	= vlTOPp->__Vtable4_UartMod__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][4U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_15___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_)
				     ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_)
				     : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_)
						        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_ 
						       >> 0x10U)))));
    VL_EXTEND_WQ(65,64, __Vtemp147, ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_13___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp148, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_13___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_14___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_15___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_13___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_14___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_15___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp149, __Vtemp147, __Vtemp148);
    __Vtemp150[0U] = __Vtemp149[0U];
    __Vtemp150[1U] = __Vtemp149[1U];
    __Vtemp150[2U] = (1U & __Vtemp149[2U]);
    VL_EXTEND_WW(66,65, __Vtemp151, __Vtemp150);
    VL_EXTEND_WI(66,32, __Vtemp152, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_14___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp153, __Vtemp151, __Vtemp152);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[0U] 
	= __Vtemp153[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[1U] 
	= __Vtemp153[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[2U] 
	= (3U & __Vtemp153[2U]);
    VL_EXTEND_WQ(128,64, __Vtemp157, (((QData)((IData)(
						       vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp158, __Vtemp157, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp159, __Vtemp158);
    VL_EXTEND_WQ(65,64, __Vtemp163, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp164, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp165, __Vtemp163, __Vtemp164);
    VL_EXTEND_WQ(65,64, __Vtemp166, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[0U]))));
    VL_SUB_W(3, __Vtemp167, __Vtemp165, __Vtemp166);
    __Vtemp168[0U] = __Vtemp167[0U];
    __Vtemp168[1U] = __Vtemp167[1U];
    __Vtemp168[2U] = (1U & __Vtemp167[2U]);
    VL_EXTEND_WW(97,65, __Vtemp169, __Vtemp168);
    VL_SHIFTL_WWI(97,97,32, __Vtemp170, __Vtemp169, 0x20U);
    __Vtemp171[0U] = __Vtemp170[0U];
    __Vtemp171[1U] = __Vtemp170[1U];
    __Vtemp171[2U] = __Vtemp170[2U];
    __Vtemp171[3U] = (1U & __Vtemp170[3U]);
    VL_EXTEND_WW(98,97, __Vtemp172, __Vtemp171);
    VL_EXTEND_WQ(65,64, __Vtemp175, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp176, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp177, __Vtemp175, __Vtemp176);
    __Vtemp178[0U] = __Vtemp177[0U];
    __Vtemp178[1U] = __Vtemp177[1U];
    __Vtemp178[2U] = (1U & __Vtemp177[2U]);
    VL_EXTEND_WW(66,65, __Vtemp179, __Vtemp178);
    VL_EXTEND_WQ(66,64, __Vtemp180, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp181, __Vtemp179, __Vtemp180);
    __Vtemp182[0U] = __Vtemp181[0U];
    __Vtemp182[1U] = __Vtemp181[1U];
    __Vtemp182[2U] = (3U & __Vtemp181[2U]);
    VL_EXTEND_WW(98,66, __Vtemp183, __Vtemp182);
    VL_SHIFTL_WWI(98,98,32, __Vtemp184, __Vtemp183, 0x20U);
    __Vtemp187[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp172[0U] : __Vtemp184[0U]);
    __Vtemp187[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp172[1U] : __Vtemp184[1U]);
    __Vtemp187[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp172[2U] : __Vtemp184[2U]);
    __Vtemp187[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
			     ? __Vtemp172[3U] : __Vtemp184[3U]));
    VL_EXTEND_WW(129,98, __Vtemp188, __Vtemp187);
    VL_ADD_W(5, __Vtemp189, __Vtemp159, __Vtemp188);
    __Vtemp190[0U] = __Vtemp189[0U];
    __Vtemp190[1U] = __Vtemp189[1U];
    __Vtemp190[2U] = __Vtemp189[2U];
    __Vtemp190[3U] = __Vtemp189[3U];
    __Vtemp190[4U] = (1U & __Vtemp189[4U]);
    VL_EXTEND_WW(130,129, __Vtemp191, __Vtemp190);
    VL_EXTEND_WQ(130,64, __Vtemp192, (((QData)((IData)(
						       vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U]))));
    VL_ADD_W(5, __Vtemp193, __Vtemp191, __Vtemp192);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U] 
	= __Vtemp193[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U] 
	= __Vtemp193[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U] 
	= __Vtemp193[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U] 
	= __Vtemp193[3U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U] 
	= (3U & __Vtemp193[4U]);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1407
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[3U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[0U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[1U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[2U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[3U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1446
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[3U] = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[0U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[1U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[2U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[3U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
	    }
	}
    }
    __Vtemp198[0U] = 0xffffffffU;
    __Vtemp198[1U] = 0xffffffffU;
    __Vtemp198[2U] = 0xffffffffU;
    __Vtemp198[3U] = 0xffffffffU;
    VL_SHIFTR_WWI(128,128,13, __Vtemp199, __Vtemp198, 
		  (0x1fffU & ((IData)(0x80U) - (0xff0U 
						& (((IData)(1U) 
						    + (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k)) 
						   << 4U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_4_[0U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U] 
	   & __Vtemp199[0U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_4_[1U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U] 
	   & __Vtemp199[1U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_4_[2U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U] 
	   & __Vtemp199[2U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_4_[3U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U] 
	   & __Vtemp199[3U]);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1484
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[3U] = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[0U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_4_[0U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[1U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_4_[1U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[2U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_4_[2U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[3U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_4_[3U];
	    }
	}
    }
    VL_SUB_W(4, __Vtemp201, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_3_, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_4_);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_[0U] 
	= __Vtemp201[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_[1U] 
	= __Vtemp201[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_[2U] 
	= __Vtemp201[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_[3U] 
	= __Vtemp201[3U];
    __Vtemp202[0U] = 0xffffffffU;
    __Vtemp202[1U] = 0xffffffffU;
    __Vtemp202[2U] = 0xffffffffU;
    __Vtemp202[3U] = 0xffffffffU;
    VL_SHIFTR_WWI(128,128,13, __Vtemp203, __Vtemp202, 
		  (0x1fffU & ((IData)(0x80U) - (0xff0U 
						& (((IData)(1U) 
						    + (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k)) 
						   << 4U)))));
    VL_ADD_W(4, __Vtemp204, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_, __Vtemp203);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_19_[0U] 
	= __Vtemp204[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_19_[1U] 
	= __Vtemp204[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_19_[2U] 
	= __Vtemp204[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_19_[3U] 
	= __Vtemp204[3U];
    VL_EXTEND_WQ(128,35, __Vtemp205, (VL_ULL(0x7ffffffff) 
				      & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n)) 
					 << 2U)));
    VL_SUB_W(4, __Vtemp206, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_, __Vtemp205);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_23_[0U] 
	= __Vtemp206[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_23_[1U] 
	= __Vtemp206[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_23_[2U] 
	= __Vtemp206[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_23_[3U] 
	= __Vtemp206[3U];
    VL_EXTEND_WQ(128,34, __Vtemp207, (VL_ULL(0x3ffffffff) 
				      & (VL_ULL(3) 
					 * (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n)))));
    VL_SUB_W(4, __Vtemp208, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_, __Vtemp207);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[0U] 
	= __Vtemp208[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[1U] 
	= __Vtemp208[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[2U] 
	= __Vtemp208[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[3U] 
	= __Vtemp208[3U];
    VL_EXTEND_WQ(128,34, __Vtemp209, (VL_ULL(0x3ffffffff) 
				      & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n)) 
					 << 1U)));
    VL_SUB_W(4, __Vtemp210, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_, __Vtemp209);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_33_[0U] 
	= __Vtemp210[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_33_[1U] 
	= __Vtemp210[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_33_[2U] 
	= __Vtemp210[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_33_[3U] 
	= __Vtemp210[3U];
    VL_EXTEND_WI(128,32, __Vtemp211, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SUB_W(4, __Vtemp212, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_, __Vtemp211);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_38_[0U] 
	= __Vtemp212[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_38_[1U] 
	= __Vtemp212[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_38_[2U] 
	= __Vtemp212[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_38_[3U] 
	= __Vtemp212[3U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1503
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[3U] = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[0U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_[0U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[1U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_[1U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[2U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_[2U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[3U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_[3U];
	    }
	}
    }
    VL_EXTEND_WQ(128,35, __Vtemp213, (VL_ULL(0x7ffffffff) 
				      & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n)) 
					 << 2U)));
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_ = 
	VL_LT_W(4, __Vtemp213, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_);
    VL_EXTEND_WQ(128,34, __Vtemp214, (VL_ULL(0x3ffffffff) 
				      & (VL_ULL(3) 
					 * (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_ 
	= VL_LT_W(4, __Vtemp214, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_);
    VL_EXTEND_WQ(128,34, __Vtemp215, (VL_ULL(0x3ffffffff) 
				      & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n)) 
					 << 1U)));
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_ 
	= VL_LT_W(4, __Vtemp215, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_);
    VL_EXTEND_WI(128,32, __Vtemp216, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_ 
	= VL_LT_W(4, __Vtemp216, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/10_uart_mod/spinalHDL/tmp/job_1/UartMod.v:1522
    __Vtemp217[0U] = 0U;
    __Vtemp217[1U] = 0U;
    __Vtemp217[2U] = 0U;
    __Vtemp217[3U] = 0U;
    vlTOPp->__Vtableidx10 = (((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_) 
			      << 7U) | (((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_) 
					 << 6U) | (
						   ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_) 
						    << 5U) 
						   | (((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_) 
						       << 4U) 
						      | ((VL_GTS_IWW(1,128,128, __Vtemp217, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_5_) 
							  << 3U) 
							 | (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))))));
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_corr_flag 
	= vlTOPp->__Vtable10_UartMod__DOT__multmod_1___05Fio_temp_corr_flag
	[vlTOPp->__Vtableidx10];
}
