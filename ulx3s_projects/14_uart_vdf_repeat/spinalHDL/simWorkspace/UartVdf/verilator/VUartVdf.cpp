// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUartVdf.h for the primary calling header

#include "VUartVdf.h"          // For This
#include "VUartVdf__Syms.h"


//--------------------


void VUartVdf::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VUartVdf::eval\n"); );
    VUartVdf__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VUartVdf* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VUartVdf::_eval_initial_loop(VUartVdf__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VUartVdf::_sequent__TOP__1(VUartVdf__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartVdf::_sequent__TOP__1\n"); );
    VUartVdf* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__UartVdf__DOT__uartfsm__DOT__fsmIn_inCounter,4,0);
    VL_SIG8(__Vdly__UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter,2,0);
    VL_SIG8(__Vdly__UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg,2,0);
    VL_SIG8(__Vdly__UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg,1,0);
    VL_SIGW(__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret,127,0,4);
    VL_SIGW(__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7,127,0,4);
    VL_SIGW(__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8,127,0,4);
    VL_SIG(__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_repeatCounter,31,0);
    VL_SIGW(__Vtemp5,127,0,4);
    VL_SIGW(__Vtemp6,127,0,4);
    VL_SIGW(__Vtemp8,127,0,4);
    VL_SIGW(__Vtemp9,127,0,4);
    VL_SIGW(__Vtemp10,127,0,4);
    VL_SIGW(__Vtemp11,127,0,4);
    VL_SIGW(__Vtemp17,127,0,4);
    VL_SIGW(__Vtemp18,127,0,4);
    VL_SIGW(__Vtemp20,95,0,3);
    VL_SIGW(__Vtemp21,95,0,3);
    VL_SIGW(__Vtemp22,95,0,3);
    VL_SIGW(__Vtemp23,127,0,4);
    VL_SIGW(__Vtemp24,127,0,4);
    VL_SIGW(__Vtemp26,95,0,3);
    VL_SIGW(__Vtemp27,95,0,3);
    VL_SIGW(__Vtemp28,95,0,3);
    VL_SIGW(__Vtemp29,95,0,3);
    VL_SIGW(__Vtemp30,127,0,4);
    VL_SIGW(__Vtemp31,127,0,4);
    VL_SIGW(__Vtemp33,95,0,3);
    VL_SIGW(__Vtemp34,95,0,3);
    VL_SIGW(__Vtemp35,95,0,3);
    VL_SIGW(__Vtemp36,127,0,4);
    VL_SIGW(__Vtemp37,127,0,4);
    VL_SIGW(__Vtemp38,127,0,4);
    VL_SIGW(__Vtemp39,127,0,4);
    VL_SIGW(__Vtemp41,95,0,3);
    VL_SIGW(__Vtemp42,95,0,3);
    VL_SIGW(__Vtemp43,95,0,3);
    VL_SIGW(__Vtemp44,127,0,4);
    VL_SIGW(__Vtemp46,95,0,3);
    VL_SIGW(__Vtemp47,95,0,3);
    VL_SIGW(__Vtemp48,95,0,3);
    VL_SIGW(__Vtemp49,95,0,3);
    VL_SIGW(__Vtemp50,127,0,4);
    VL_SIGW(__Vtemp52,95,0,3);
    VL_SIGW(__Vtemp53,95,0,3);
    VL_SIGW(__Vtemp54,95,0,3);
    VL_SIGW(__Vtemp55,127,0,4);
    VL_SIGW(__Vtemp56,127,0,4);
    VL_SIGW(__Vtemp58,127,0,4);
    VL_SIGW(__Vtemp59,127,0,4);
    // Body
    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0;
    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value;
    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4;
    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter;
    __Vdly__UartVdf__DOT__uartfsm__DOT__fsmIn_inCounter 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_inCounter;
    __Vdly__UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter;
    __Vdly__UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg;
    __Vdly__UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg;
    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[0U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[0U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[1U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[1U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[2U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[2U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[3U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[3U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[0U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[0U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[1U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[1U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[2U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[2U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[3U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[3U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_repeatCounter 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_repeatCounter;
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[0U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[0U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[1U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[1U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[2U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[2U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[3U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[3U];
    vlTOPp->__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_stateReg 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:743
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter = 0U;
    } else {
	vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
	    = (0xfffffU & (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
			   - (IData)(1U)));
	if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick) {
	    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter = 0x1aU;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:234
    if (vlTOPp->reset) {
	vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value = 0U;
	vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext = 1U;
    } else {
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
		if ((0U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))) {
		    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
			= ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__write_m2sPipe_rValid)
			    ? 1U : 0U);
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		if ((1U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
			vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 4U;
		    }
		} else {
		    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
			if ((7U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))) {
			    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 4U;
			}
		    }
		}
	    } else {
		if ((1U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
			vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 2U;
		    }
		} else {
		    if (((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__write_m2sPipe_rValid) 
			 & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick))) {
			vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 1U;
		    }
		}
	    }
	}
	vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value 
	    = vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext 
	    = vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1865
    if (vlTOPp->reset) {
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a = VL_ULL(0);
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n = VL_ULL(0);
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[0U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[1U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[2U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_t = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[0U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[1U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[2U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[3U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[0U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[1U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[2U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[3U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[0U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[1U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[2U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[3U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[0U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[1U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[2U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[3U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[0U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[1U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[2U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[3U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[0U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[1U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[2U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[3U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[0U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[1U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[2U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[3U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_repeatCounter = 0U;
	vlTOPp->__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_stateReg = 0U;
    } else {
	if ((8U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 2U)))) {
		if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			      >> 1U)))) {
		    if ((1U & (~ (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg)))) {
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_repeatCounter 
			    = ((IData)(1U) + vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_repeatCounter);
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a 
			    = (((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[0U])));
		    }
		}
	    }
	} else {
	    if ((4U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		if ((2U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		    if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[0U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[0U]
			        : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[0U]
				    : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[0U]
				        : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[0U]
					    : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[0U]))));
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[1U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[1U]
			        : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[1U]
				    : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[1U]
				        : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[1U]
					    : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[1U]))));
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[2U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[2U]
			        : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[2U]
				    : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[2U]
				        : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[2U]
					    : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[2U]))));
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[3U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[3U]
			        : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[3U]
				    : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[3U]
				        : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[3U]
					    : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[3U]))));
		    } else {
			__Vtemp5[0U] = 1U;
			__Vtemp5[1U] = 0U;
			__Vtemp5[2U] = 0U;
			__Vtemp5[3U] = 0U;
			VL_ADD_W(4, __Vtemp6, __Vtemp5, vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_);
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[0U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_10_)
			        ? __Vtemp6[0U] : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[0U]);
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[1U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_10_)
			        ? __Vtemp6[1U] : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[1U]);
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[2U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_10_)
			        ? __Vtemp6[2U] : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[2U]);
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[3U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_10_)
			        ? __Vtemp6[3U] : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[3U]);
		    }
		} else {
		    if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
			__Vtemp8[0U] = 0xffffffffU;
			__Vtemp8[1U] = 0xffffffffU;
			__Vtemp8[2U] = 0xffffffffU;
			__Vtemp8[3U] = 0xffffffffU;
			VL_SHIFTR_WWI(128,128,13, __Vtemp9, __Vtemp8, 
				      (0x1fffU & ((IData)(0x80U) 
						  - 
						  ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_26_) 
						   << 4U))));
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[0U] 
			    = __Vtemp9[0U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[1U] 
			    = __Vtemp9[1U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[2U] 
			    = __Vtemp9[2U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[3U] 
			    = __Vtemp9[3U];
			VL_SUB_W(4, __Vtemp10, vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_6_, vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_7_);
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[0U] 
			    = __Vtemp10[0U];
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[1U] 
			    = __Vtemp10[1U];
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[2U] 
			    = __Vtemp10[2U];
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[3U] 
			    = __Vtemp10[3U];
		    } else {
			VL_SHIFTR_WWI(128,128,13, __Vtemp11, vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_, (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_22_));
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[0U] 
			    = __Vtemp11[0U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[1U] 
			    = __Vtemp11[1U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[2U] 
			    = __Vtemp11[2U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[3U] 
			    = __Vtemp11[3U];
		    }
		}
	    } else {
		if ((2U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		    if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[0U] 
			    = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[1U] 
			    = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[2U] 
			    = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[3U] 
			    = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
		    } else {
			if ((1U >= (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_1_))) {
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[0U] 
				= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[1U] 
				= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[2U] 
				= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[3U] 
				= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
			}
		    }
		} else {
		    if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
			if (vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_valid) {
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a 
				= (((QData)((IData)(
						    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[1U])) 
				    << 0x20U) | (QData)((IData)(
								vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0U])));
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n 
				= (((QData)((IData)(
						    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[3U])) 
				    << 0x20U) | (QData)((IData)(
								vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[2U])));
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[0U] 
				= vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[4U];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[1U] 
				= vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[5U];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[2U] 
				= (0xffU & vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[6U]);
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k 
				= (0xffU & ((vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[7U] 
					     << 0x18U) 
					    | (vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[6U] 
					       >> 8U)));
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_t 
				= ((vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[7U] 
				    << 0x10U) | (vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[6U] 
						 >> 0x10U));
			    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_repeatCounter = 0U;
			}
		    }
		}
	    }
	}
	vlTOPp->__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_stateReg 
	    = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext;
    }
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[0U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[1U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[2U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[3U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[0U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[1U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[2U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[3U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_repeatCounter 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_repeatCounter;
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[0U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[1U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[2U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[3U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[3U];
    vlTOPp->io_uart_txd = vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1114
    if (vlTOPp->reset) {
	vlTOPp->UartVdf__DOT__uartfsm__DOT__write_m2sPipe_rValid = 0U;
	__Vdly__UartVdf__DOT__uartfsm__DOT__fsmIn_inCounter = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[0U] = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[1U] = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[2U] = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[3U] = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[4U] = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[5U] = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[6U] = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[7U] = 0U;
	__Vdly__UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outBuffer = VL_ULL(0);
	__Vdly__UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg = 0U;
	__Vdly__UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg = 0U;
    } else {
	if (vlTOPp->UartVdf__DOT__uartfsm__DOT__write_ready) {
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__write_m2sPipe_rValid 
		= vlTOPp->UartVdf__DOT__uartfsm__DOT__write_valid;
	}
	if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 2U)))) {
	    if ((2U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg))) {
		if ((1U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg))) {
		    __Vdly__UartVdf__DOT__uartfsm__DOT__fsmIn_inCounter 
			= (0x1fU & ((IData)(1U) + (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_inCounter)));
		} else {
		    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) {
			vlTOPp->UartVdf__DOT__uartfsm__DOT____Vlvbound1 
			    = vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			if ((0xefU >= (0xffU & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT___zz_5_)))) {
			    VL_ASSIGNSEL_WIII(8,(0xffU 
						 & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT___zz_5_)), vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer, vlTOPp->UartVdf__DOT__uartfsm__DOT____Vlvbound1);
			}
		    }
		}
	    }
	}
	if ((1U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    if (vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_valid) {
		__Vdly__UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter = 0U;
		vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outBuffer 
		    = vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_payload;
	    }
	} else {
	    if ((2U != (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg))) {
		if ((3U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg))) {
		    __Vdly__UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter 
			= (7U & ((IData)(1U) + (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter)));
		}
	    }
	}
	if (((1U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg)) 
	     & (1U != (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext)))) {
	    __Vdly__UartVdf__DOT__uartfsm__DOT__fsmIn_inCounter = 0U;
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[0U] = 0U;
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[1U] = 0U;
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[2U] = 0U;
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[3U] = 0U;
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[4U] = 0U;
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[5U] = 0U;
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[6U] = 0U;
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[7U] = 0U;
	}
	__Vdly__UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg 
	    = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext;
	__Vdly__UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg 
	    = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext;
    }
    __Vtemp17[0U] = 0U;
    __Vtemp17[1U] = 0U;
    __Vtemp17[2U] = 0U;
    __Vtemp17[3U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_10_ 
	= VL_GTS_IWW(1,128,128, __Vtemp17, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7);
    VL_ADD_W(4, __Vtemp18, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[0U] 
	= __Vtemp18[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[1U] 
	= __Vtemp18[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[2U] 
	= __Vtemp18[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[3U] 
	= __Vtemp18[3U];
    VL_EXTEND_WQ(67,64, __Vtemp20, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(67,67,32, __Vtemp21, __Vtemp20, 2U);
    __Vtemp22[0U] = __Vtemp21[0U];
    __Vtemp22[1U] = __Vtemp21[1U];
    __Vtemp22[2U] = (7U & __Vtemp21[2U]);
    VL_EXTEND_WW(128,67, __Vtemp23, __Vtemp22);
    VL_SUB_W(4, __Vtemp24, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp23);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[0U] 
	= __Vtemp24[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[1U] 
	= __Vtemp24[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[2U] 
	= __Vtemp24[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[3U] 
	= __Vtemp24[3U];
    __Vtemp26[0U] = 3U;
    __Vtemp26[1U] = 0U;
    __Vtemp26[2U] = 0U;
    VL_EXTEND_WQ(66,64, __Vtemp27, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_MUL_W(3, __Vtemp28, __Vtemp26, __Vtemp27);
    __Vtemp29[0U] = __Vtemp28[0U];
    __Vtemp29[1U] = __Vtemp28[1U];
    __Vtemp29[2U] = (3U & __Vtemp28[2U]);
    VL_EXTEND_WW(128,66, __Vtemp30, __Vtemp29);
    VL_SUB_W(4, __Vtemp31, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp30);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[0U] 
	= __Vtemp31[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[1U] 
	= __Vtemp31[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[2U] 
	= __Vtemp31[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[3U] 
	= __Vtemp31[3U];
    VL_EXTEND_WQ(66,64, __Vtemp33, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(66,66,32, __Vtemp34, __Vtemp33, 1U);
    __Vtemp35[0U] = __Vtemp34[0U];
    __Vtemp35[1U] = __Vtemp34[1U];
    __Vtemp35[2U] = (3U & __Vtemp34[2U]);
    VL_EXTEND_WW(128,66, __Vtemp36, __Vtemp35);
    VL_SUB_W(4, __Vtemp37, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp36);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[0U] 
	= __Vtemp37[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[1U] 
	= __Vtemp37[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[2U] 
	= __Vtemp37[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[3U] 
	= __Vtemp37[3U];
    VL_EXTEND_WQ(128,64, __Vtemp38, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SUB_W(4, __Vtemp39, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp38);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[0U] 
	= __Vtemp39[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[1U] 
	= __Vtemp39[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[2U] 
	= __Vtemp39[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[3U] 
	= __Vtemp39[3U];
    VL_EXTEND_WQ(67,64, __Vtemp41, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(67,67,32, __Vtemp42, __Vtemp41, 2U);
    __Vtemp43[0U] = __Vtemp42[0U];
    __Vtemp43[1U] = __Vtemp42[1U];
    __Vtemp43[2U] = (7U & __Vtemp42[2U]);
    VL_EXTEND_WW(128,67, __Vtemp44, __Vtemp43);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_11_ 
	= VL_LT_W(4, __Vtemp44, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8);
    __Vtemp46[0U] = 3U;
    __Vtemp46[1U] = 0U;
    __Vtemp46[2U] = 0U;
    VL_EXTEND_WQ(66,64, __Vtemp47, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_MUL_W(3, __Vtemp48, __Vtemp46, __Vtemp47);
    __Vtemp49[0U] = __Vtemp48[0U];
    __Vtemp49[1U] = __Vtemp48[1U];
    __Vtemp49[2U] = (3U & __Vtemp48[2U]);
    VL_EXTEND_WW(128,66, __Vtemp50, __Vtemp49);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_12_ 
	= VL_LT_W(4, __Vtemp50, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8);
    VL_EXTEND_WQ(66,64, __Vtemp52, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(66,66,32, __Vtemp53, __Vtemp52, 1U);
    __Vtemp54[0U] = __Vtemp53[0U];
    __Vtemp54[1U] = __Vtemp53[1U];
    __Vtemp54[2U] = (3U & __Vtemp53[2U]);
    VL_EXTEND_WW(128,66, __Vtemp55, __Vtemp54);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_13_ 
	= VL_LT_W(4, __Vtemp55, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8);
    VL_EXTEND_WQ(128,64, __Vtemp56, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_14_ 
	= VL_LT_W(4, __Vtemp56, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_22_ 
	= (0x1fffU & ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k) 
		      << 4U));
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_26_ 
	= (0xffU & ((IData)(1U) + (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k)));
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_6_[0U] 
	= (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[0U] 
	   & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[0U]);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_6_[1U] 
	= (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[1U] 
	   & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[1U]);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_6_[2U] 
	= (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[2U] 
	   & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[2U]);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_6_[3U] 
	= (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[3U] 
	   & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[3U]);
    VL_SHIFTR_WWI(128,128,13, __Vtemp58, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult, 
		  (0x1fffU & ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k) 
			      << 4U)));
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[0U] 
	= __Vtemp58[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[1U] 
	= __Vtemp58[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[2U] 
	= __Vtemp58[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[3U] 
	= __Vtemp58[3U];
    VL_SHIFTR_WWI(128,128,13, __Vtemp59, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult, 
		  (0x1fffU & ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k) 
			      << 4U)));
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[0U] 
	= __Vtemp59[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[1U] 
	= __Vtemp59[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[2U] 
	= __Vtemp59[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[3U] 
	= __Vtemp59[3U];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_inCounter 
	= __Vdly__UartVdf__DOT__uartfsm__DOT__fsmIn_inCounter;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter 
	= __Vdly__UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg 
	= __Vdly__UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg 
	= __Vdly__UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg;
    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg;
    vlTOPp->UartVdf__DOT__uartfsm__DOT___zz_5_ = (0x1ffU 
						  & ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_inCounter) 
						     << 3U));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:996
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0U] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[1U] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[2U] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[3U] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[4U] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[5U] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[6U] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[7U] = 0U;
    if ((4U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg)))) {
		vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0U] 
		    = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[0U];
		vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[1U] 
		    = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[1U];
		vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[2U] 
		    = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[2U];
		vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[3U] 
		    = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[3U];
		vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[4U] 
		    = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[4U];
		vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[5U] 
		    = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[5U];
		vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[6U] 
		    = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[6U];
		vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[7U] 
		    = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[7U];
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:946
    vlTOPp->__Vtableidx1 = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg_string[0U] 
	= vlTOPp->__Vtable1_UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][0U];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg_string[1U] 
	= vlTOPp->__Vtable1_UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][1U];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg_string[2U] 
	= vlTOPp->__Vtable1_UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][2U];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg_string[3U] 
	= vlTOPp->__Vtable1_UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][3U];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg_string[4U] 
	= vlTOPp->__Vtable1_UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][4U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1013
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_valid = 0U;
    if ((4U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg)))) {
		vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_valid = 1U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:966
    vlTOPp->__Vtableidx3 = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg_string[0U] 
	= vlTOPp->__Vtable3_UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][0U];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg_string[1U] 
	= vlTOPp->__Vtable3_UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][1U];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg_string[2U] 
	= vlTOPp->__Vtable3_UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][2U];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg_string[3U] 
	= vlTOPp->__Vtable3_UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][3U];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg_string[4U] 
	= vlTOPp->__Vtable3_UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][4U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1031
    vlTOPp->UartVdf__DOT__uartfsm__DOT__write_valid = 0U;
    if ((1U != (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__write_valid = 1U;
	}
    }
}

VL_INLINE_OPT void VUartVdf::_sequent__TOP__2(VUartVdf__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartVdf::_sequent__TOP__2\n"); );
    VUartVdf* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value,2,0);
    VL_SIG8(__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity,0,0);
    VL_SIG8(__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter,2,0);
    VL_SIG8(__Vdly__UartVdf__DOT__multmod_1___DOT___zz_1_,1,0);
    VL_SIG16(__Vtableidx13,9,0);
    // Body
    __Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity;
    __Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value;
    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity;
    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value;
    __Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter;
    __Vdly__UartVdf__DOT__multmod_1___DOT___zz_1_ = vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_1_;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1167
    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__write_ready) {
	vlTOPp->UartVdf__DOT__uartfsm__DOT__write_m2sPipe_rData 
	    = vlTOPp->UartVdf__DOT__uartfsm__DOT__write_payload;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:280
    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
	__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
	    = (7U & ((IData)(1U) + (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)));
    }
    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
	__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
	    = ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity) 
	       ^ (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
    }
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    if ((1U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
		    __Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
		}
	    } else {
		if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
		    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_) {
			__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
		    }
		}
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
		    __Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity = 0U;
		    __Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:496
    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
	__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
	    = (7U & ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter) 
		     - (IData)(1U)));
    }
    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
	vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
	    = (7U & ((IData)(1U) + (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value)));
    }
    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
	vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
	    = ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity) 
	       ^ (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
    }
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
	    if ((1U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
		}
	    } else {
		if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter 
			= (((~ ((IData)(1U) << (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) 
			    & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter)) 
			   | ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) 
			      << (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value)));
		    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_) {
			vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
		    }
		}
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
		    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity = 0U;
		}
	    } else {
		if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_) {
		    __Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter = 2U;
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1947
    __Vtableidx13 = (((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext) 
		      << 6U) | (((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_1_) 
				 << 4U) | (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg)));
    if (vlTOPp->__Vtablechg13[__Vtableidx13]) {
	__Vdly__UartVdf__DOT__multmod_1___DOT___zz_1_ 
	    = vlTOPp->__Vtable13_UartVdf__DOT__multmod_1___DOT___zz_1_
	    [__Vtableidx13];
    }
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
	= __Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
	= __Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
	= __Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter;
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_1_ = __Vdly__UartVdf__DOT__multmod_1___DOT___zz_1_;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_ 
	= (7U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value));
}

VL_INLINE_OPT void VUartVdf::_sequent__TOP__4(VUartVdf__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartVdf::_sequent__TOP__4\n"); );
    VUartVdf* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp198,127,0,4);
    VL_SIGW(__Vtemp203,95,0,3);
    VL_SIGW(__Vtemp204,95,0,3);
    VL_SIGW(__Vtemp205,95,0,3);
    VL_SIGW(__Vtemp206,95,0,3);
    VL_SIGW(__Vtemp207,95,0,3);
    VL_SIGW(__Vtemp208,95,0,3);
    VL_SIGW(__Vtemp209,95,0,3);
    VL_SIGW(__Vtemp213,95,0,3);
    VL_SIGW(__Vtemp214,95,0,3);
    VL_SIGW(__Vtemp215,95,0,3);
    VL_SIGW(__Vtemp216,95,0,3);
    VL_SIGW(__Vtemp217,95,0,3);
    VL_SIGW(__Vtemp218,95,0,3);
    VL_SIGW(__Vtemp219,95,0,3);
    VL_SIGW(__Vtemp223,95,0,3);
    VL_SIGW(__Vtemp224,95,0,3);
    VL_SIGW(__Vtemp225,95,0,3);
    VL_SIGW(__Vtemp226,95,0,3);
    VL_SIGW(__Vtemp227,95,0,3);
    VL_SIGW(__Vtemp228,95,0,3);
    VL_SIGW(__Vtemp229,95,0,3);
    VL_SIGW(__Vtemp233,127,0,4);
    VL_SIGW(__Vtemp234,127,0,4);
    VL_SIGW(__Vtemp235,159,0,5);
    VL_SIGW(__Vtemp239,95,0,3);
    VL_SIGW(__Vtemp240,95,0,3);
    VL_SIGW(__Vtemp241,95,0,3);
    VL_SIGW(__Vtemp242,95,0,3);
    VL_SIGW(__Vtemp243,95,0,3);
    VL_SIGW(__Vtemp244,95,0,3);
    VL_SIGW(__Vtemp245,127,0,4);
    VL_SIGW(__Vtemp246,127,0,4);
    VL_SIGW(__Vtemp247,127,0,4);
    VL_SIGW(__Vtemp248,127,0,4);
    VL_SIGW(__Vtemp251,95,0,3);
    VL_SIGW(__Vtemp252,95,0,3);
    VL_SIGW(__Vtemp253,95,0,3);
    VL_SIGW(__Vtemp254,95,0,3);
    VL_SIGW(__Vtemp255,95,0,3);
    VL_SIGW(__Vtemp256,95,0,3);
    VL_SIGW(__Vtemp257,95,0,3);
    VL_SIGW(__Vtemp258,95,0,3);
    VL_SIGW(__Vtemp259,127,0,4);
    VL_SIGW(__Vtemp260,127,0,4);
    VL_SIGW(__Vtemp263,127,0,4);
    VL_SIGW(__Vtemp264,159,0,5);
    VL_SIGW(__Vtemp265,159,0,5);
    VL_SIGW(__Vtemp266,159,0,5);
    VL_SIGW(__Vtemp267,159,0,5);
    VL_SIGW(__Vtemp268,159,0,5);
    VL_SIGW(__Vtemp269,159,0,5);
    VL_SIGW(__Vtemp272,127,0,4);
    VL_SIGW(__Vtemp273,191,0,6);
    VL_SIGW(__Vtemp274,191,0,6);
    VL_SIGW(__Vtemp279,127,0,4);
    VL_SIGW(__Vtemp280,191,0,6);
    VL_SIGW(__Vtemp281,191,0,6);
    VL_SIGW(__Vtemp282,127,0,4);
    VL_SIGW(__Vtemp283,127,0,4);
    VL_SIGW(__Vtemp284,127,0,4);
    // Body
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1046
    vlTOPp->UartVdf__DOT__uartfsm__DOT__write_payload = 0U;
    if ((1U != (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__write_payload 
		= (0xffU & (IData)((vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outBuffer 
				    >> (0x3fU & ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter) 
						 << 3U)))));
	}
    }
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
	= vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg 
	= vlTOPp->__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_stateReg;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:193
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd = 1U;
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd 
		= (1U & ((1U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))
			  ? (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity)
			  : ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__write_m2sPipe_rData) 
			     >> (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))));
	} else {
	    if ((1U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd = 0U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:164
    vlTOPp->__Vtableidx5 = vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable5_UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx5];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:419
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 = 1U;
	vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 = 1U;
	vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 = 1U;
	vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 = 1U;
	vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value = 1U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick = 0U;
	vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
	vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 0U;
    } else {
	if ((0U == vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
		= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
	}
	vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick 
	    = (0U == vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter);
	vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 0U;
	if ((0U == vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
		= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
	}
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
	    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
		if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) {
		    if ((0U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) {
			vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
		    }
		} else {
		    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		if ((1U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
			if (((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity) 
			     == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value))) {
			    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 4U;
			    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 1U;
			} else {
			    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
			}
		    }
		} else {
		    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
			if ((7U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) {
			    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 4U;
			    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 1U;
			}
		    }
		}
	    } else {
		if ((1U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
			vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 2U;
			if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) {
			    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
			}
		    }
		} else {
		    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_) {
			vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 1U;
		    }
		}
	    }
	}
	if ((0U == vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
		= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
	}
	vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
	    = (((((((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_) 
		    | (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_)) 
		   | ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_) 
		      & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
		  | (((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_) 
		      & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
		     & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
		 | (((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
		     & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
		    & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
		| (((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1) 
		    & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
		   & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
	       | (((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2) 
		   & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
		  & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4)));
	if ((0U == vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
		= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1489
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[3U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 2U)))) {
	    if ((2U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[0U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[0U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[1U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[1U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[2U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[2U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[3U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[3U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1706
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[3U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[0U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[0U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[1U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[1U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[2U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[2U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[3U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[3U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1315
    vlTOPp->__Vtableidx8 = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg;
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg_string[0U] 
	= vlTOPp->__Vtable8_UartVdf__DOT__multmod_1___DOT__fsm_stateReg_string
	[vlTOPp->__Vtableidx8][0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg_string[1U] 
	= vlTOPp->__Vtable8_UartVdf__DOT__multmod_1___DOT__fsm_stateReg_string
	[vlTOPp->__Vtableidx8][1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg_string[2U] 
	= vlTOPp->__Vtable8_UartVdf__DOT__multmod_1___DOT__fsm_stateReg_string
	[vlTOPp->__Vtableidx8][2U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1733
    __Vtemp198[0U] = 0U;
    __Vtemp198[1U] = 0U;
    __Vtemp198[2U] = 0U;
    __Vtemp198[3U] = 0U;
    vlTOPp->__Vtableidx11 = ((VL_GTS_IWW(1,128,128, __Vtemp198, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7) 
			      << 4U) | (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg));
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_corr_flag 
	= vlTOPp->__Vtable11_UartVdf__DOT__multmod_1___05Fio_temp_corr_flag
	[vlTOPp->__Vtableidx11];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1348
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_payload = VL_ULL(0);
    if ((8U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 2U)))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_payload 
			= (((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[1U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[0U])));
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1462
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[3U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 2U)))) {
	    if ((2U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[0U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[0U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[1U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[1U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[2U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[2U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[3U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[3U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1516
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2a_out = VL_ULL(0);
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg)))) {
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2a_out 
			= (((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[1U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[0U])));
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1652
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[3U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[0U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_6_[0U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[1U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_6_[1U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[2U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_6_[2U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[3U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_6_[3U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1764
    vlTOPp->__Vtableidx12 = (((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_14_) 
			      << 7U) | (((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_13_) 
					 << 6U) | (
						   ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_12_) 
						    << 5U) 
						   | (((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_11_) 
						       << 4U) 
						      | (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg)))));
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_corr_flag_2 
	= vlTOPp->__Vtable12_UartVdf__DOT__multmod_1___05Fio_temp_corr_flag_2
	[vlTOPp->__Vtableidx12];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1375
    vlTOPp->__Vtableidx10 = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_valid 
	= vlTOPp->__Vtable10_UartVdf__DOT__multmod_1___05Fio_toUart_valid
	[vlTOPp->__Vtableidx10];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1402
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_ = VL_ULL(0);
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_ 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? (((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[1U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[0U])))
		        : (((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[1U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[0U]))));
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_ 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? (((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[1U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[0U])))
		        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a);
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1432
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_ = VL_ULL(0);
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_ 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n
		        : (QData)((IData)((0xffU & 
					   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[2U]))));
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_ 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? (((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[1U])) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[0U])))
		        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a);
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1807
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg;
    if ((8U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext = 1U;
	} else {
	    if ((2U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext = 1U;
	    } else {
		if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		    if ((1U >= (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_1_))) {
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext = 1U;
		    }
		} else {
		    if ((1U >= (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_1_))) {
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext 
			    = ((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_repeatCounter 
				== vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_t)
			        ? 9U : 2U);
		    }
		}
	    }
	}
    } else {
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((2U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? 8U : 7U);
	    } else {
		if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		    if ((1U >= (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_1_))) {
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext = 6U;
		    }
		} else {
		    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext = 5U;
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		    if ((1U >= (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_1_))) {
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext = 4U;
		    }
		} else {
		    if ((1U >= (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_1_))) {
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext = 3U;
		    }
		}
	    } else {
		if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		    if (vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_valid) {
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext = 2U;
		    }
		} else {
		    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext = 1U;
		}
	    }
	}
    }
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
	= vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
	= vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
	= vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state 
	= vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
	= vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
	= vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg 
	= vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
	= vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter;
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_ 
					   >> 0x20U))) 
		       - (0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_ 
					     >> 0x30U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_)) 
		       - (0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_ 
					     >> 0x10U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_)) 
				  - (QData)((IData)(
						    (vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_ 
						     >> 0x20U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_13___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_ 
			       >> 0x30U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_ 
							 >> 0x30U))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_14___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_ 
			       >> 0x20U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_ 
							 >> 0x20U))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_13___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_ 
			       >> 0x10U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_ 
							 >> 0x10U))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_14___DOT___zz_2_ 
	= ((0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_)) 
	   * (0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_)));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_ 
					   >> 0x30U))) 
		       - (0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_ 
					     >> 0x20U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_ 
					   >> 0x10U))) 
		       - (0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_ 
						   >> 0x20U))) 
				  - (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_))));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1330
    vlTOPp->__Vtableidx9 = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext;
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext_string[0U] 
	= vlTOPp->__Vtable9_UartVdf__DOT__multmod_1___DOT__fsm_stateNext_string
	[vlTOPp->__Vtableidx9][0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext_string[1U] 
	= vlTOPp->__Vtable9_UartVdf__DOT__multmod_1___DOT__fsm_stateNext_string
	[vlTOPp->__Vtableidx9][1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext_string[2U] 
	= vlTOPp->__Vtable9_UartVdf__DOT__multmod_1___DOT__fsm_stateNext_string
	[vlTOPp->__Vtableidx9][2U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:393
    vlTOPp->__Vtableidx7 = vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable7_UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx7];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_ 
	= ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) 
	   & (~ (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:408
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 0U;
    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
	if ((0U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter))) {
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 1U;
	}
    }
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_ 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1061
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg;
    if ((4U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext = 1U;
    } else {
	if ((2U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	    if ((1U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg))) {
		vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext 
		    = ((0x1dU == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_inCounter))
		        ? 4U : 2U);
	    } else {
		if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) {
		    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext = 3U;
		}
	    }
	} else {
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext 
		= ((1U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg))
		    ? 2U : 1U);
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:63
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0 = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1 = 0U;
    } else {
	vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1 
	    = vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0;
	vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0 
	    = vlTOPp->io_uart_rxd;
    }
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick 
	= (0U == vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:176
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 0U;
    if ((0U == vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 1U;
    }
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_)
				    : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_ 
								>> 0x20U)))))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_15___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_)
				     ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_)
				     : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_)
						        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_15___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_)
				     ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_)
				     : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_)
						        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_)
				    : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_ 
								>> 0x20U)))))));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:956
    vlTOPp->__Vtableidx2 = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext_string[0U] 
	= vlTOPp->__Vtable2_UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][0U];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext_string[1U] 
	= vlTOPp->__Vtable2_UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][1U];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext_string[2U] 
	= vlTOPp->__Vtable2_UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][2U];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext_string[3U] 
	= vlTOPp->__Vtable2_UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][3U];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext_string[4U] 
	= vlTOPp->__Vtable2_UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][4U];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0 
	= vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:186
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext 
	= (7U & ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
		 + (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)));
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick 
	= ((7U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value)) 
	   & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_)) 
		       - (0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_ 
					     >> 0x10U)))));
    VL_EXTEND_WQ(65,64, __Vtemp203, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_13___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp204, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_13___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_14___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_15___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_13___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_14___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_15___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp205, __Vtemp203, __Vtemp204);
    __Vtemp206[0U] = __Vtemp205[0U];
    __Vtemp206[1U] = __Vtemp205[1U];
    __Vtemp206[2U] = (1U & __Vtemp205[2U]);
    VL_EXTEND_WW(66,65, __Vtemp207, __Vtemp206);
    VL_EXTEND_WI(66,32, __Vtemp208, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_14___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp209, __Vtemp207, __Vtemp208);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U] 
	= __Vtemp209[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U] 
	= __Vtemp209[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[2U] 
	= (3U & __Vtemp209[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp213, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_13___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp214, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_13___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_14___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_15___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_13___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_14___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_15___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp215, __Vtemp213, __Vtemp214);
    __Vtemp216[0U] = __Vtemp215[0U];
    __Vtemp216[1U] = __Vtemp215[1U];
    __Vtemp216[2U] = (1U & __Vtemp215[2U]);
    VL_EXTEND_WW(66,65, __Vtemp217, __Vtemp216);
    VL_EXTEND_WI(66,32, __Vtemp218, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_14___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp219, __Vtemp217, __Vtemp218);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U] 
	= __Vtemp219[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U] 
	= __Vtemp219[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[2U] 
	= (3U & __Vtemp219[2U]);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_13___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_ 
			       >> 0x10U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_ 
							 >> 0x10U))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_14___DOT___zz_2_ 
	= ((0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_)) 
	   * (0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_)));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_ 
					   >> 0x10U))) 
		       - (0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_))));
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_ 
	= ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
	   & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_ 
	= (((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
	    & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
	   & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_ 
	= ((((((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
	       & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
	      & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	     | (((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
		 & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
		& (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3))) 
	    | (((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
		& (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	       & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3))) 
	   | (((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1) 
	       & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	      & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:212
    vlTOPp->__Vtableidx6 = (((7U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)) 
			     << 4U) | (((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) 
					<< 3U) | (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state)));
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready 
	= vlTOPp->__Vtable6_UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready
	[vlTOPp->__Vtableidx6];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_15___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_)
				     ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_)
				     : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_)
						        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartVdf__DOT__uartfsm__DOT__write_ready 
	= (1U & ((~ (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__write_m2sPipe_rValid)) 
		 | (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready)));
    VL_EXTEND_WQ(65,64, __Vtemp223, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_13___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp224, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_13___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_14___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_15___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_13___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_14___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_15___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp225, __Vtemp223, __Vtemp224);
    __Vtemp226[0U] = __Vtemp225[0U];
    __Vtemp226[1U] = __Vtemp225[1U];
    __Vtemp226[2U] = (1U & __Vtemp225[2U]);
    VL_EXTEND_WW(66,65, __Vtemp227, __Vtemp226);
    VL_EXTEND_WI(66,32, __Vtemp228, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_14___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp229, __Vtemp227, __Vtemp228);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[0U] 
	= __Vtemp229[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[1U] 
	= __Vtemp229[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[2U] 
	= (3U & __Vtemp229[2U]);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1088
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg;
    if ((1U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if (vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_valid) {
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext = 2U;
	}
    } else {
	if ((2U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    if (((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__write_valid) 
		 & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__write_ready))) {
		vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext = 3U;
	    }
	} else {
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext 
		= ((3U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg))
		    ? ((7U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter))
		        ? 1U : 2U) : 1U);
	}
    }
    VL_EXTEND_WQ(128,64, __Vtemp233, (((QData)((IData)(
						       vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp234, __Vtemp233, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp235, __Vtemp234);
    VL_EXTEND_WQ(65,64, __Vtemp239, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp240, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp241, __Vtemp239, __Vtemp240);
    VL_EXTEND_WQ(65,64, __Vtemp242, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[0U]))));
    VL_SUB_W(3, __Vtemp243, __Vtemp241, __Vtemp242);
    __Vtemp244[0U] = __Vtemp243[0U];
    __Vtemp244[1U] = __Vtemp243[1U];
    __Vtemp244[2U] = (1U & __Vtemp243[2U]);
    VL_EXTEND_WW(97,65, __Vtemp245, __Vtemp244);
    VL_SHIFTL_WWI(97,97,32, __Vtemp246, __Vtemp245, 0x20U);
    __Vtemp247[0U] = __Vtemp246[0U];
    __Vtemp247[1U] = __Vtemp246[1U];
    __Vtemp247[2U] = __Vtemp246[2U];
    __Vtemp247[3U] = (1U & __Vtemp246[3U]);
    VL_EXTEND_WW(98,97, __Vtemp248, __Vtemp247);
    VL_EXTEND_WQ(65,64, __Vtemp251, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp252, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp253, __Vtemp251, __Vtemp252);
    __Vtemp254[0U] = __Vtemp253[0U];
    __Vtemp254[1U] = __Vtemp253[1U];
    __Vtemp254[2U] = (1U & __Vtemp253[2U]);
    VL_EXTEND_WW(66,65, __Vtemp255, __Vtemp254);
    VL_EXTEND_WQ(66,64, __Vtemp256, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp257, __Vtemp255, __Vtemp256);
    __Vtemp258[0U] = __Vtemp257[0U];
    __Vtemp258[1U] = __Vtemp257[1U];
    __Vtemp258[2U] = (3U & __Vtemp257[2U]);
    VL_EXTEND_WW(98,66, __Vtemp259, __Vtemp258);
    VL_SHIFTL_WWI(98,98,32, __Vtemp260, __Vtemp259, 0x20U);
    __Vtemp263[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp248[0U] : __Vtemp260[0U]);
    __Vtemp263[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp248[1U] : __Vtemp260[1U]);
    __Vtemp263[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp248[2U] : __Vtemp260[2U]);
    __Vtemp263[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
			     ? __Vtemp248[3U] : __Vtemp260[3U]));
    VL_EXTEND_WW(129,98, __Vtemp264, __Vtemp263);
    VL_ADD_W(5, __Vtemp265, __Vtemp235, __Vtemp264);
    __Vtemp266[0U] = __Vtemp265[0U];
    __Vtemp266[1U] = __Vtemp265[1U];
    __Vtemp266[2U] = __Vtemp265[2U];
    __Vtemp266[3U] = __Vtemp265[3U];
    __Vtemp266[4U] = (1U & __Vtemp265[4U]);
    VL_EXTEND_WW(130,129, __Vtemp267, __Vtemp266);
    VL_EXTEND_WQ(130,64, __Vtemp268, (((QData)((IData)(
						       vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U]))));
    VL_ADD_W(5, __Vtemp269, __Vtemp267, __Vtemp268);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U] 
	= __Vtemp269[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U] 
	= __Vtemp269[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U] 
	= __Vtemp269[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U] 
	= __Vtemp269[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U] 
	= (3U & __Vtemp269[4U]);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:975
    vlTOPp->__Vtableidx4 = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext_string[0U] 
	= vlTOPp->__Vtable4_UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][0U];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext_string[1U] 
	= vlTOPp->__Vtable4_UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][1U];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext_string[2U] 
	= vlTOPp->__Vtable4_UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][2U];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext_string[3U] 
	= vlTOPp->__Vtable4_UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][3U];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext_string[4U] 
	= vlTOPp->__Vtable4_UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][4U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1543
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[3U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg)))) {
		    __Vtemp272[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
		    __Vtemp272[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
		    __Vtemp272[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
		    __Vtemp272[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
		    VL_EXTEND_WW(192,128, __Vtemp273, __Vtemp272);
		    VL_SHIFTL_WWI(192,192,32, __Vtemp274, __Vtemp273, 0x40U);
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[0U] 
			= __Vtemp274[0U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[1U] 
			= __Vtemp274[1U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[2U] 
			= __Vtemp274[2U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[3U] 
			= __Vtemp274[3U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1625
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[3U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[0U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[1U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[2U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[3U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
		}
	    }
	}
    }
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_7_[0U] 
	= (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U] 
	   & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[0U]);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_7_[1U] 
	= (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U] 
	   & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[1U]);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_7_[2U] 
	= (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U] 
	   & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[2U]);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_7_[3U] 
	= (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U] 
	   & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[3U]);
    __Vtemp279[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
    __Vtemp279[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
    __Vtemp279[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
    __Vtemp279[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
    VL_EXTEND_WW(192,128, __Vtemp280, __Vtemp279);
    VL_SHIFTL_WWI(192,192,32, __Vtemp281, __Vtemp280, 0x40U);
    __Vtemp282[0U] = __Vtemp281[0U];
    __Vtemp282[1U] = __Vtemp281[1U];
    __Vtemp282[2U] = __Vtemp281[2U];
    __Vtemp282[3U] = __Vtemp281[3U];
    VL_ADD_W(4, __Vtemp283, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2, __Vtemp282);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[0U] 
	= __Vtemp283[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[1U] 
	= __Vtemp283[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[2U] 
	= __Vtemp283[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[3U] 
	= __Vtemp283[3U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1679
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[3U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[0U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_7_[0U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[1U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_7_[1U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[2U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_7_[2U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[3U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_7_[3U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1570
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[3U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg)))) {
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[0U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[0U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[1U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[1U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[2U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[2U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[3U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[3U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1597
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[3U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		VL_SHIFTR_WWI(128,128,13, __Vtemp284, vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_, 
			      (0x1fffU & ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k) 
					  << 4U)));
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[0U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[0U]
		        : __Vtemp284[0U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[1U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[1U]
		        : __Vtemp284[1U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[2U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[2U]
		        : __Vtemp284[2U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[3U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[3U]
		        : __Vtemp284[3U]);
	    }
	}
    }
}
