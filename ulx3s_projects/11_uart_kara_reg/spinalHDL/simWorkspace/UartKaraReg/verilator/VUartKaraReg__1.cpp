// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUartKaraReg.h for the primary calling header

#include "VUartKaraReg.h"      // For This
#include "VUartKaraReg__Syms.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VUartKaraReg::_sequent__TOP__2(VUartKaraReg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartKaraReg::_sequent__TOP__2\n"); );
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value,2,0);
    VL_SIG8(__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity,0,0);
    VL_SIG8(__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter,2,0);
    // Body
    __Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity;
    __Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value;
    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity;
    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value;
    __Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1492
    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_ready) {
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_m2sPipe_rData 
	    = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_payload;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1634
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT___zz_1_ = 1U;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:525
    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
	__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
	    = (7U & ((IData)(1U) + (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)));
    }
    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
	__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
	    = ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity) 
	       ^ (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
    }
    if ((1U & (~ ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    if ((1U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
		    __Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
		}
	    } else {
		if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
		    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_) {
			__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
		    }
		}
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
		    __Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity = 0U;
		    __Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:741
    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
	__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
	    = (7U & ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter) 
		     - (IData)(1U)));
    }
    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
	vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
	    = (7U & ((IData)(1U) + (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value)));
    }
    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
	vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
	    = ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity) 
	       ^ (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
    }
    if ((1U & (~ ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
	    if ((1U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
		}
	    } else {
		if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter 
			= (((~ ((IData)(1U) << (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) 
			    & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter)) 
			   | ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) 
			      << (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value)));
		    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_) {
			vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
		    }
		}
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
		    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity = 0U;
		}
	    } else {
		if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_) {
		    __Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter = 2U;
		}
	    }
	}
    }
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
	= __Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
	= __Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
	= __Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_ 
	= (7U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value));
}

VL_INLINE_OPT void VUartKaraReg::_sequent__TOP__4(VUartKaraReg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartKaraReg::_sequent__TOP__4\n"); );
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1371
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_payload = 0U;
    if ((1U != (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_payload 
		= (0xffU & (((0U == (0x1fU & ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outCounter) 
					      << 3U)))
			      ? 0U : (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer[
				      ((IData)(1U) 
				       + (7U & ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outCounter) 
						>> 2U)))] 
				      << ((IData)(0x20U) 
					  - (0x1fU 
					     & ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outCounter) 
						<< 3U))))) 
			    | (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer[
			       (7U & ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outCounter) 
				      >> 2U))] >> (0x1fU 
						   & ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outCounter) 
						      << 3U)))));
	}
    }
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
	= vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1573
    vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_valid = 0U;
    if ((1U != (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg))) {
	if ((2U != (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg))) {
	    if ((3U == (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg))) {
		vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_valid 
		    = vlTOPp->UartKaraReg__DOT__karareg_1___DOT___zz_1_;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:438
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd = 1U;
    if ((1U & (~ ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd 
		= (1U & ((1U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))
			  ? (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity)
			  : ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_m2sPipe_rData) 
			     >> (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))));
	} else {
	    if ((1U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd = 0U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:409
    vlTOPp->__Vtableidx5 = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable5_UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx5];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:664
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 = 1U;
	vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 = 1U;
	vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 = 1U;
	vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 = 1U;
	vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value = 1U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick = 0U;
	vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
	vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 0U;
    } else {
	if ((0U == vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
		= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
	}
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick 
	    = (0U == vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter);
	vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 0U;
	if ((0U == vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
		= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
	}
	if ((4U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
	    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) {
		    if ((0U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) {
			vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
		    }
		} else {
		    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		if ((1U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
			if (((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity) 
			     == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value))) {
			    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 4U;
			    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 1U;
			} else {
			    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
			}
		    }
		} else {
		    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
			if ((7U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) {
			    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 4U;
			    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 1U;
			}
		    }
		}
	    } else {
		if ((1U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
			vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 2U;
			if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) {
			    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
			}
		    }
		} else {
		    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_) {
			vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 1U;
		    }
		}
	    }
	}
	if ((0U == vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
		= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
	}
	vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
	    = (((((((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_) 
		    | (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_)) 
		   | ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_) 
		      & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
		  | (((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_) 
		      & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
		     & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
		 | (((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
		     & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
		    & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
		| (((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1) 
		    & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
		   & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
	       | (((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2) 
		   & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
		  & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4)));
	if ((0U == vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
		= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1;
	}
    }
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
	= vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
	= vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
	= vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state 
	= vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
	= vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
	= vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg 
	= vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
	= vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:638
    vlTOPp->__Vtableidx7 = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable7_UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx7];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_ 
	= ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) 
	   & (~ (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:653
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 0U;
    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
	if ((0U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter))) {
	    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 1U;
	}
    }
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_ 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1386
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg;
    if ((4U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext = 1U;
    } else {
	if ((2U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	    if ((1U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg))) {
		vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext 
		    = ((0x1fU == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_inCounter))
		        ? 4U : 2U);
	    } else {
		if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) {
		    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext = 3U;
		}
	    }
	} else {
	    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext 
		= ((1U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg))
		    ? 2U : 1U);
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:151
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0 = 0U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1 = 0U;
    } else {
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1 
	    = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0;
	vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0 
	    = vlTOPp->io_uart_rxd;
    }
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick 
	= (0U == vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:421
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 0U;
    if ((0U == vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 1U;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1281
    vlTOPp->__Vtableidx2 = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext_string[0U] 
	= vlTOPp->__Vtable2_UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][0U];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext_string[1U] 
	= vlTOPp->__Vtable2_UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][1U];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext_string[2U] 
	= vlTOPp->__Vtable2_UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][2U];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext_string[3U] 
	= vlTOPp->__Vtable2_UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][3U];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext_string[4U] 
	= vlTOPp->__Vtable2_UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][4U];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0 
	= vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:431
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext 
	= (7U & ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
		 + (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)));
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick 
	= ((7U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value)) 
	   & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_ 
	= ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
	   & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_ 
	= (((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
	    & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
	   & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_ 
	= ((((((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
	       & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
	      & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	     | (((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
		 & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
		& (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3))) 
	    | (((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
		& (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	       & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3))) 
	   | (((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1) 
	       & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	      & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:457
    vlTOPp->__Vtableidx6 = (((7U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)) 
			     << 4U) | (((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) 
					<< 3U) | (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state)));
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready 
	= vlTOPp->__Vtable6_UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready
	[vlTOPp->__Vtableidx6];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_ready 
	= (1U & ((~ (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_m2sPipe_rValid)) 
		 | (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1413
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg;
    if ((1U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if (vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_valid) {
	    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext = 2U;
	}
    } else {
	if ((2U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    if (((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_valid) 
		 & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_ready))) {
		vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext = 3U;
	    }
	} else {
	    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext 
		= ((3U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg))
		    ? ((0x1fU == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outCounter))
		        ? 1U : 2U) : 1U);
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1300
    vlTOPp->__Vtableidx4 = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext_string[0U] 
	= vlTOPp->__Vtable4_UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][0U];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext_string[1U] 
	= vlTOPp->__Vtable4_UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][1U];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext_string[2U] 
	= vlTOPp->__Vtable4_UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][2U];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext_string[3U] 
	= vlTOPp->__Vtable4_UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][3U];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext_string[4U] 
	= vlTOPp->__Vtable4_UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][4U];
}

VL_INLINE_OPT void VUartKaraReg::_sequent__TOP__5(VUartKaraReg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartKaraReg::_sequent__TOP__5\n"); );
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
	= vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
	= vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_ 
	= (7U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value));
}

void VUartKaraReg::_eval(VUartKaraReg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartKaraReg::_eval\n"); );
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

VL_INLINE_OPT QData VUartKaraReg::_change_request(VUartKaraReg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartKaraReg::_change_request\n"); );
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VUartKaraReg::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartKaraReg::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((io_uart_rxd & 0xfeU))) {
	Verilated::overWidthError("io_uart_rxd");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG
