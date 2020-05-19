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
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__fsmIn_inCounter,5,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_outCounter,2,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__fsmIn_stateReg,2,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_stateReg,1,0);
    VL_SIGW(__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7,127,0,4);
    VL_SIGW(__Vtemp6,127,0,4);
    VL_SIGW(__Vtemp7,127,0,4);
    VL_SIGW(__Vtemp8,127,0,4);
    VL_SIGW(__Vtemp9,127,0,4);
    VL_SIGW(__Vtemp15,127,0,4);
    VL_SIGW(__Vtemp16,127,0,4);
    VL_SIGW(__Vtemp18,95,0,3);
    VL_SIGW(__Vtemp19,95,0,3);
    VL_SIGW(__Vtemp20,95,0,3);
    VL_SIGW(__Vtemp21,127,0,4);
    VL_SIGW(__Vtemp22,127,0,4);
    VL_SIGW(__Vtemp24,95,0,3);
    VL_SIGW(__Vtemp25,95,0,3);
    VL_SIGW(__Vtemp26,95,0,3);
    VL_SIGW(__Vtemp27,95,0,3);
    VL_SIGW(__Vtemp28,127,0,4);
    VL_SIGW(__Vtemp29,127,0,4);
    VL_SIGW(__Vtemp31,95,0,3);
    VL_SIGW(__Vtemp32,95,0,3);
    VL_SIGW(__Vtemp33,95,0,3);
    VL_SIGW(__Vtemp34,127,0,4);
    VL_SIGW(__Vtemp35,127,0,4);
    VL_SIGW(__Vtemp36,127,0,4);
    VL_SIGW(__Vtemp37,127,0,4);
    VL_SIGW(__Vtemp39,95,0,3);
    VL_SIGW(__Vtemp40,95,0,3);
    VL_SIGW(__Vtemp41,95,0,3);
    VL_SIGW(__Vtemp42,127,0,4);
    VL_SIGW(__Vtemp44,95,0,3);
    VL_SIGW(__Vtemp45,95,0,3);
    VL_SIGW(__Vtemp46,95,0,3);
    VL_SIGW(__Vtemp47,95,0,3);
    VL_SIGW(__Vtemp48,127,0,4);
    VL_SIGW(__Vtemp50,95,0,3);
    VL_SIGW(__Vtemp51,95,0,3);
    VL_SIGW(__Vtemp52,95,0,3);
    VL_SIGW(__Vtemp53,127,0,4);
    VL_SIGW(__Vtemp54,127,0,4);
    VL_SIGW(__Vtemp56,127,0,4);
    VL_SIGW(__Vtemp57,127,0,4);
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
    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[0U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[0U];
    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[1U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[1U];
    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[2U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[2U];
    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[3U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[3U];
    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_stateReg 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:741
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:232
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1753
    if (vlTOPp->reset) {
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_a = VL_ULL(0);
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_b = VL_ULL(0);
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n = VL_ULL(0);
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[0U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[1U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[2U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[0U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[1U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[2U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[3U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[0U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[1U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[2U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[3U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[0U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[1U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[2U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[3U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[0U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[1U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[2U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[3U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[0U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[1U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[2U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[3U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[0U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[1U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[2U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[3U] = 0U;
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_stateReg = 0U;
    } else {
	if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((2U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))) {
		    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[0U] 
			= ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_)
			    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[0U]
			    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[0U]
			        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[0U]
				    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[0U]
				        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[0U]
					    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[0U])))));
		    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[1U] 
			= ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_)
			    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[1U]
			    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[1U]
			        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[1U]
				    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[1U]
				        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[1U]
					    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[1U])))));
		    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[2U] 
			= ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_)
			    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[2U]
			    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[2U]
			        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[2U]
				    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[2U]
				        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[2U]
					    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[2U])))));
		    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[3U] 
			= ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_)
			    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[3U]
			    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[3U]
			        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[3U]
				    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[3U]
				        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[3U]
					    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[3U])))));
		}
	    } else {
		if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		    __Vtemp6[0U] = 0xffffffffU;
		    __Vtemp6[1U] = 0xffffffffU;
		    __Vtemp6[2U] = 0xffffffffU;
		    __Vtemp6[3U] = 0xffffffffU;
		    VL_SHIFTR_WWI(128,128,13, __Vtemp7, __Vtemp6, 
				  (0x1fffU & ((IData)(0x80U) 
					      - ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_26_) 
						 << 4U))));
		    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[0U] 
			= __Vtemp7[0U];
		    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[1U] 
			= __Vtemp7[1U];
		    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[2U] 
			= __Vtemp7[2U];
		    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[3U] 
			= __Vtemp7[3U];
		    VL_SUB_W(4, __Vtemp8, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_);
		    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[0U] 
			= __Vtemp8[0U];
		    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[1U] 
			= __Vtemp8[1U];
		    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[2U] 
			= __Vtemp8[2U];
		    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[3U] 
			= __Vtemp8[3U];
		} else {
		    VL_SHIFTR_WWI(128,128,13, __Vtemp9, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_, (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_22_));
		    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[0U] 
			= __Vtemp9[0U];
		    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[1U] 
			= __Vtemp9[1U];
		    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[2U] 
			= __Vtemp9[2U];
		    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[3U] 
			= __Vtemp9[3U];
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[0U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
		    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[1U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
		    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[2U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
		    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[3U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
		} else {
		    if ((1U >= (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_1_))) {
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[0U] 
			    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[1U] 
			    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[2U] 
			    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[3U] 
			    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
		    }
		}
	    } else {
		if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		    if (vlTOPp->UartMod__DOT__uartfsm_io_toFnct_valid) {
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_a 
			    = (((QData)((IData)(vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0U])));
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_b 
			    = (((QData)((IData)(vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[3U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[2U])));
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n 
			    = (((QData)((IData)(vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[5U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[4U])));
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[0U] 
			    = vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[6U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[1U] 
			    = vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[7U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[2U] 
			    = (0xffU & vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[8U]);
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k 
			    = (0xffU & (vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[8U] 
					>> 8U));
		    }
		}
	    }
	}
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_stateReg 
	    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateNext;
    }
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[0U] 
	= __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[1U] 
	= __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[2U] 
	= __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[3U] 
	= __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[3U];
    vlTOPp->io_uart_txd = vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1112
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
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[7U] = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[8U] = 0U;
	__Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_outCounter = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outBuffer = VL_ULL(0);
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
			= (0x3fU & ((IData)(1U) + (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_inCounter)));
		} else {
		    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) {
			vlTOPp->UartMod__DOT__uartfsm__DOT____Vlvbound1 
			    = vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			if ((0x10fU >= (0x1ffU & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT___zz_5_)))) {
			    VL_ASSIGNSEL_WIII(8,(0x1ffU 
						 & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT___zz_5_)), vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer, vlTOPp->UartMod__DOT__uartfsm__DOT____Vlvbound1);
			}
		    }
		}
	    }
	}
	if ((1U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    if (vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_valid) {
		__Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_outCounter = 0U;
		vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outBuffer 
		    = vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload;
	    }
	} else {
	    if ((2U != (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))) {
		if ((3U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))) {
		    __Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_outCounter 
			= (7U & ((IData)(1U) + (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outCounter)));
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
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[7U] = 0U;
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[8U] = 0U;
	}
	__Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_stateReg 
	    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateNext;
	__Vdly__UartMod__DOT__uartfsm__DOT__fsmIn_stateReg 
	    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext;
    }
    __Vtemp15[0U] = 0U;
    __Vtemp15[1U] = 0U;
    __Vtemp15[2U] = 0U;
    __Vtemp15[3U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_ 
	= VL_GTS_IWW(1,128,128, __Vtemp15, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7);
    VL_ADD_W(4, __Vtemp16, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[0U] 
	= __Vtemp16[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[1U] 
	= __Vtemp16[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[2U] 
	= __Vtemp16[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[3U] 
	= __Vtemp16[3U];
    VL_EXTEND_WQ(67,64, __Vtemp18, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(67,67,32, __Vtemp19, __Vtemp18, 2U);
    __Vtemp20[0U] = __Vtemp19[0U];
    __Vtemp20[1U] = __Vtemp19[1U];
    __Vtemp20[2U] = (7U & __Vtemp19[2U]);
    VL_EXTEND_WW(128,67, __Vtemp21, __Vtemp20);
    VL_SUB_W(4, __Vtemp22, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7, __Vtemp21);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[0U] 
	= __Vtemp22[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[1U] 
	= __Vtemp22[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[2U] 
	= __Vtemp22[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[3U] 
	= __Vtemp22[3U];
    __Vtemp24[0U] = 3U;
    __Vtemp24[1U] = 0U;
    __Vtemp24[2U] = 0U;
    VL_EXTEND_WQ(66,64, __Vtemp25, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_MUL_W(3, __Vtemp26, __Vtemp24, __Vtemp25);
    __Vtemp27[0U] = __Vtemp26[0U];
    __Vtemp27[1U] = __Vtemp26[1U];
    __Vtemp27[2U] = (3U & __Vtemp26[2U]);
    VL_EXTEND_WW(128,66, __Vtemp28, __Vtemp27);
    VL_SUB_W(4, __Vtemp29, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7, __Vtemp28);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[0U] 
	= __Vtemp29[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[1U] 
	= __Vtemp29[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[2U] 
	= __Vtemp29[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[3U] 
	= __Vtemp29[3U];
    VL_EXTEND_WQ(66,64, __Vtemp31, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(66,66,32, __Vtemp32, __Vtemp31, 1U);
    __Vtemp33[0U] = __Vtemp32[0U];
    __Vtemp33[1U] = __Vtemp32[1U];
    __Vtemp33[2U] = (3U & __Vtemp32[2U]);
    VL_EXTEND_WW(128,66, __Vtemp34, __Vtemp33);
    VL_SUB_W(4, __Vtemp35, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7, __Vtemp34);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[0U] 
	= __Vtemp35[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[1U] 
	= __Vtemp35[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[2U] 
	= __Vtemp35[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[3U] 
	= __Vtemp35[3U];
    VL_EXTEND_WQ(128,64, __Vtemp36, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SUB_W(4, __Vtemp37, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7, __Vtemp36);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[0U] 
	= __Vtemp37[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[1U] 
	= __Vtemp37[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[2U] 
	= __Vtemp37[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[3U] 
	= __Vtemp37[3U];
    VL_EXTEND_WQ(67,64, __Vtemp39, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(67,67,32, __Vtemp40, __Vtemp39, 2U);
    __Vtemp41[0U] = __Vtemp40[0U];
    __Vtemp41[1U] = __Vtemp40[1U];
    __Vtemp41[2U] = (7U & __Vtemp40[2U]);
    VL_EXTEND_WW(128,67, __Vtemp42, __Vtemp41);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_ 
	= VL_LT_W(4, __Vtemp42, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7);
    __Vtemp44[0U] = 3U;
    __Vtemp44[1U] = 0U;
    __Vtemp44[2U] = 0U;
    VL_EXTEND_WQ(66,64, __Vtemp45, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_MUL_W(3, __Vtemp46, __Vtemp44, __Vtemp45);
    __Vtemp47[0U] = __Vtemp46[0U];
    __Vtemp47[1U] = __Vtemp46[1U];
    __Vtemp47[2U] = (3U & __Vtemp46[2U]);
    VL_EXTEND_WW(128,66, __Vtemp48, __Vtemp47);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_ 
	= VL_LT_W(4, __Vtemp48, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7);
    VL_EXTEND_WQ(66,64, __Vtemp50, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(66,66,32, __Vtemp51, __Vtemp50, 1U);
    __Vtemp52[0U] = __Vtemp51[0U];
    __Vtemp52[1U] = __Vtemp51[1U];
    __Vtemp52[2U] = (3U & __Vtemp51[2U]);
    VL_EXTEND_WW(128,66, __Vtemp53, __Vtemp52);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_13_ 
	= VL_LT_W(4, __Vtemp53, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7);
    VL_EXTEND_WQ(128,64, __Vtemp54, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_14_ 
	= VL_LT_W(4, __Vtemp54, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_22_ 
	= (0x1fffU & ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k) 
		      << 4U));
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_26_ 
	= (0xffU & ((IData)(1U) + (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k)));
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_[0U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[0U] 
	   & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[0U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_[1U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[1U] 
	   & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[1U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_[2U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[2U] 
	   & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[2U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_[3U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[3U] 
	   & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[3U]);
    VL_SHIFTR_WWI(128,128,13, __Vtemp56, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult, 
		  (0x1fffU & ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k) 
			      << 4U)));
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[0U] 
	= __Vtemp56[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[1U] 
	= __Vtemp56[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[2U] 
	= __Vtemp56[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[3U] 
	= __Vtemp56[3U];
    VL_SHIFTR_WWI(128,128,13, __Vtemp57, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult, 
		  (0x1fffU & ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k) 
			      << 4U)));
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[0U] 
	= __Vtemp57[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[1U] 
	= __Vtemp57[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[2U] 
	= __Vtemp57[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[3U] 
	= __Vtemp57[3U];
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
    vlTOPp->UartMod__DOT__uartfsm__DOT___zz_5_ = (0x3ffU 
						  & ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_inCounter) 
						     << 3U));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:964
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1029
    vlTOPp->UartMod__DOT__uartfsm__DOT__write_valid = 0U;
    if ((1U != (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    vlTOPp->UartMod__DOT__uartfsm__DOT__write_valid = 1U;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:994
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[1U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[2U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[3U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[4U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[5U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[6U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[7U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[8U] = 0U;
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
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[7U] 
		    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[7U];
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[8U] 
		    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[8U];
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:944
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1011
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_valid = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg)))) {
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_valid = 1U;
	    }
	}
    }
}

VL_INLINE_OPT void VUartMod::_sequent__TOP__2(VUartMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMod::_sequent__TOP__2\n"); );
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vtableidx12,7,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value,2,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity,0,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter,2,0);
    VL_SIG8(__Vdly__UartMod__DOT__multmod_1___DOT___zz_1_,1,0);
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1165
    if (vlTOPp->UartMod__DOT__uartfsm__DOT__write_ready) {
	vlTOPp->UartMod__DOT__uartfsm__DOT__write_m2sPipe_rData 
	    = vlTOPp->UartMod__DOT__uartfsm__DOT__write_payload;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:278
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:494
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1825
    __Vtableidx12 = (((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateNext) 
		      << 5U) | (((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_1_) 
				 << 3U) | (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)));
    if (vlTOPp->__Vtablechg12[__Vtableidx12]) {
	__Vdly__UartMod__DOT__multmod_1___DOT___zz_1_ 
	    = vlTOPp->__Vtable12_UartMod__DOT__multmod_1___DOT___zz_1_
	    [__Vtableidx12];
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
    VL_SIGW(__Vtemp196,127,0,4);
    VL_SIGW(__Vtemp201,95,0,3);
    VL_SIGW(__Vtemp202,95,0,3);
    VL_SIGW(__Vtemp203,95,0,3);
    VL_SIGW(__Vtemp204,95,0,3);
    VL_SIGW(__Vtemp205,95,0,3);
    VL_SIGW(__Vtemp206,95,0,3);
    VL_SIGW(__Vtemp207,95,0,3);
    VL_SIGW(__Vtemp211,95,0,3);
    VL_SIGW(__Vtemp212,95,0,3);
    VL_SIGW(__Vtemp213,95,0,3);
    VL_SIGW(__Vtemp214,95,0,3);
    VL_SIGW(__Vtemp215,95,0,3);
    VL_SIGW(__Vtemp216,95,0,3);
    VL_SIGW(__Vtemp217,95,0,3);
    VL_SIGW(__Vtemp221,95,0,3);
    VL_SIGW(__Vtemp222,95,0,3);
    VL_SIGW(__Vtemp223,95,0,3);
    VL_SIGW(__Vtemp224,95,0,3);
    VL_SIGW(__Vtemp225,95,0,3);
    VL_SIGW(__Vtemp226,95,0,3);
    VL_SIGW(__Vtemp227,95,0,3);
    VL_SIGW(__Vtemp231,127,0,4);
    VL_SIGW(__Vtemp232,127,0,4);
    VL_SIGW(__Vtemp233,159,0,5);
    VL_SIGW(__Vtemp237,95,0,3);
    VL_SIGW(__Vtemp238,95,0,3);
    VL_SIGW(__Vtemp239,95,0,3);
    VL_SIGW(__Vtemp240,95,0,3);
    VL_SIGW(__Vtemp241,95,0,3);
    VL_SIGW(__Vtemp242,95,0,3);
    VL_SIGW(__Vtemp243,127,0,4);
    VL_SIGW(__Vtemp244,127,0,4);
    VL_SIGW(__Vtemp245,127,0,4);
    VL_SIGW(__Vtemp246,127,0,4);
    VL_SIGW(__Vtemp249,95,0,3);
    VL_SIGW(__Vtemp250,95,0,3);
    VL_SIGW(__Vtemp251,95,0,3);
    VL_SIGW(__Vtemp252,95,0,3);
    VL_SIGW(__Vtemp253,95,0,3);
    VL_SIGW(__Vtemp254,95,0,3);
    VL_SIGW(__Vtemp255,95,0,3);
    VL_SIGW(__Vtemp256,95,0,3);
    VL_SIGW(__Vtemp257,127,0,4);
    VL_SIGW(__Vtemp258,127,0,4);
    VL_SIGW(__Vtemp261,127,0,4);
    VL_SIGW(__Vtemp262,159,0,5);
    VL_SIGW(__Vtemp263,159,0,5);
    VL_SIGW(__Vtemp264,159,0,5);
    VL_SIGW(__Vtemp265,159,0,5);
    VL_SIGW(__Vtemp266,159,0,5);
    VL_SIGW(__Vtemp267,159,0,5);
    VL_SIGW(__Vtemp270,127,0,4);
    VL_SIGW(__Vtemp271,191,0,6);
    VL_SIGW(__Vtemp272,191,0,6);
    VL_SIGW(__Vtemp277,127,0,4);
    VL_SIGW(__Vtemp278,191,0,6);
    VL_SIGW(__Vtemp279,191,0,6);
    VL_SIGW(__Vtemp280,127,0,4);
    VL_SIGW(__Vtemp281,127,0,4);
    VL_SIGW(__Vtemp282,127,0,4);
    // Body
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1044
    vlTOPp->UartMod__DOT__uartfsm__DOT__write_payload = 0U;
    if ((1U != (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    vlTOPp->UartMod__DOT__uartfsm__DOT__write_payload 
		= (0xffU & (IData)((vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outBuffer 
				    >> (0x3fU & ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outCounter) 
						 << 3U)))));
	}
    }
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
	= vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg 
	= vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_stateReg;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:191
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:162
    vlTOPp->__Vtableidx5 = vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable5_UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx5];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:417
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1456
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[3U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[0U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[0U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[1U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[1U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[2U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[2U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[3U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[3U];
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1641
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[3U] = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[0U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[0U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[1U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[1U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[2U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[2U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[3U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[3U];
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1306
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1335
    vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload = VL_ULL(0);
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((2U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload 
		    = (((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[1U])) 
			<< 0x20U) | (QData)((IData)(
						    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[0U])));
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1433
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1479
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2a_out = VL_ULL(0);
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2a_out 
		    = (((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[1U])) 
			<< 0x20U) | (QData)((IData)(
						    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[0U])));
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1595
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[3U] = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[0U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_[0U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[1U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_[1U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[2U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_[2U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[3U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_[3U];
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1664
    __Vtemp196[0U] = 0U;
    __Vtemp196[1U] = 0U;
    __Vtemp196[2U] = 0U;
    __Vtemp196[3U] = 0U;
    vlTOPp->__Vtableidx10 = (((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_14_) 
			      << 7U) | (((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_13_) 
					 << 6U) | (
						   ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_) 
						    << 5U) 
						   | (((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_) 
						       << 4U) 
						      | ((VL_GTS_IWW(1,128,128, __Vtemp196, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7) 
							  << 3U) 
							 | (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))))));
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_corr_flag 
	= vlTOPp->__Vtable10_UartMod__DOT__multmod_1___05Fio_temp_corr_flag
	[vlTOPp->__Vtableidx10];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1358
    vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_valid = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((2U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_valid = 1U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1381
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_ = VL_ULL(0);
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_ 
		= ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		    ? (((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[1U])) 
			<< 0x20U) | (QData)((IData)(
						    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[0U])))
		    : (((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[1U])) 
			<< 0x20U) | (QData)((IData)(
						    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[0U]))));
	}
    } else {
	if ((2U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_ 
		= ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		    ? (((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[1U])) 
			<< 0x20U) | (QData)((IData)(
						    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[0U])))
		    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_a);
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1407
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_ = VL_ULL(0);
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_ 
		= ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		    ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n
		    : (QData)((IData)((0xffU & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[2U]))));
	}
    } else {
	if ((2U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_ 
		= ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		    ? (((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[1U])) 
			<< 0x20U) | (QData)((IData)(
						    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[0U])))
		    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_b);
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1707
    vlTOPp->__Vtableidx11 = (((IData)(vlTOPp->UartMod__DOT__uartfsm_io_toFnct_valid) 
			      << 6U) | (((1U >= (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_1_)) 
					 << 5U) | (
						   ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_1_) 
						    << 3U) 
						   | (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateNext 
	= vlTOPp->__Vtable11_UartMod__DOT__multmod_1___DOT__fsm_stateNext
	[vlTOPp->__Vtableidx11];
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
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_ 
					   >> 0x20U))) 
		       - (0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_ 
					     >> 0x30U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_)) 
		       - (0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_ 
					     >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_)) 
				  - (QData)((IData)(
						    (vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_ 
						     >> 0x20U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_13___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_ 
			       >> 0x30U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_ 
							 >> 0x30U))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_14___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_ 
			       >> 0x20U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_ 
							 >> 0x20U))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_13___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_ 
			       >> 0x10U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_ 
							 >> 0x10U))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_14___DOT___zz_2_ 
	= ((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_)) 
	   * (0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_)));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_ 
					   >> 0x30U))) 
		       - (0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_ 
					     >> 0x20U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_ 
					   >> 0x10U))) 
		       - (0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_ 
						   >> 0x20U))) 
				  - (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_))));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1319
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:391
    vlTOPp->__Vtableidx7 = vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable7_UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx7];
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_ 
	= ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) 
	   & (~ (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:406
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 0U;
    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
	if ((0U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter))) {
	    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 1U;
	}
    }
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_ 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1059
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext = 1U;
    } else {
	if ((2U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg))) {
		vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext 
		    = ((0x21U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_inCounter))
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:61
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:174
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 0U;
    if ((0U == vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 1U;
    }
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:954
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:184
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext 
	= (7U & ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
		 + (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)));
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick 
	= ((7U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value)) 
	   & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_)) 
		       - (0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_ 
					     >> 0x10U)))));
    VL_EXTEND_WQ(65,64, __Vtemp201, ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_13___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp202, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp203, __Vtemp201, __Vtemp202);
    __Vtemp204[0U] = __Vtemp203[0U];
    __Vtemp204[1U] = __Vtemp203[1U];
    __Vtemp204[2U] = (1U & __Vtemp203[2U]);
    VL_EXTEND_WW(66,65, __Vtemp205, __Vtemp204);
    VL_EXTEND_WI(66,32, __Vtemp206, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_14___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp207, __Vtemp205, __Vtemp206);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U] 
	= __Vtemp207[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U] 
	= __Vtemp207[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[2U] 
	= (3U & __Vtemp207[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp211, ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_13___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp212, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp213, __Vtemp211, __Vtemp212);
    __Vtemp214[0U] = __Vtemp213[0U];
    __Vtemp214[1U] = __Vtemp213[1U];
    __Vtemp214[2U] = (1U & __Vtemp213[2U]);
    VL_EXTEND_WW(66,65, __Vtemp215, __Vtemp214);
    VL_EXTEND_WI(66,32, __Vtemp216, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_14___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp217, __Vtemp215, __Vtemp216);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U] 
	= __Vtemp217[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U] 
	= __Vtemp217[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[2U] 
	= (3U & __Vtemp217[2U]);
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:210
    vlTOPp->__Vtableidx6 = (((7U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)) 
			     << 4U) | (((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) 
					<< 3U) | (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state)));
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready 
	= vlTOPp->__Vtable6_UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready
	[vlTOPp->__Vtableidx6];
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
    vlTOPp->UartMod__DOT__uartfsm__DOT__write_ready 
	= (1U & ((~ (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__write_m2sPipe_rValid)) 
		 | (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready)));
    VL_EXTEND_WQ(65,64, __Vtemp221, ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_13___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp222, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp223, __Vtemp221, __Vtemp222);
    __Vtemp224[0U] = __Vtemp223[0U];
    __Vtemp224[1U] = __Vtemp223[1U];
    __Vtemp224[2U] = (1U & __Vtemp223[2U]);
    VL_EXTEND_WW(66,65, __Vtemp225, __Vtemp224);
    VL_EXTEND_WI(66,32, __Vtemp226, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_14___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp227, __Vtemp225, __Vtemp226);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[0U] 
	= __Vtemp227[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[1U] 
	= __Vtemp227[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[2U] 
	= (3U & __Vtemp227[2U]);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1086
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
		    ? ((7U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outCounter))
		        ? 1U : 2U) : 1U);
	}
    }
    VL_EXTEND_WQ(128,64, __Vtemp231, (((QData)((IData)(
						       vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp232, __Vtemp231, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp233, __Vtemp232);
    VL_EXTEND_WQ(65,64, __Vtemp237, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp238, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp239, __Vtemp237, __Vtemp238);
    VL_EXTEND_WQ(65,64, __Vtemp240, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[0U]))));
    VL_SUB_W(3, __Vtemp241, __Vtemp239, __Vtemp240);
    __Vtemp242[0U] = __Vtemp241[0U];
    __Vtemp242[1U] = __Vtemp241[1U];
    __Vtemp242[2U] = (1U & __Vtemp241[2U]);
    VL_EXTEND_WW(97,65, __Vtemp243, __Vtemp242);
    VL_SHIFTL_WWI(97,97,32, __Vtemp244, __Vtemp243, 0x20U);
    __Vtemp245[0U] = __Vtemp244[0U];
    __Vtemp245[1U] = __Vtemp244[1U];
    __Vtemp245[2U] = __Vtemp244[2U];
    __Vtemp245[3U] = (1U & __Vtemp244[3U]);
    VL_EXTEND_WW(98,97, __Vtemp246, __Vtemp245);
    VL_EXTEND_WQ(65,64, __Vtemp249, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp250, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp251, __Vtemp249, __Vtemp250);
    __Vtemp252[0U] = __Vtemp251[0U];
    __Vtemp252[1U] = __Vtemp251[1U];
    __Vtemp252[2U] = (1U & __Vtemp251[2U]);
    VL_EXTEND_WW(66,65, __Vtemp253, __Vtemp252);
    VL_EXTEND_WQ(66,64, __Vtemp254, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp255, __Vtemp253, __Vtemp254);
    __Vtemp256[0U] = __Vtemp255[0U];
    __Vtemp256[1U] = __Vtemp255[1U];
    __Vtemp256[2U] = (3U & __Vtemp255[2U]);
    VL_EXTEND_WW(98,66, __Vtemp257, __Vtemp256);
    VL_SHIFTL_WWI(98,98,32, __Vtemp258, __Vtemp257, 0x20U);
    __Vtemp261[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp246[0U] : __Vtemp258[0U]);
    __Vtemp261[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp246[1U] : __Vtemp258[1U]);
    __Vtemp261[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp246[2U] : __Vtemp258[2U]);
    __Vtemp261[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
			     ? __Vtemp246[3U] : __Vtemp258[3U]));
    VL_EXTEND_WW(129,98, __Vtemp262, __Vtemp261);
    VL_ADD_W(5, __Vtemp263, __Vtemp233, __Vtemp262);
    __Vtemp264[0U] = __Vtemp263[0U];
    __Vtemp264[1U] = __Vtemp263[1U];
    __Vtemp264[2U] = __Vtemp263[2U];
    __Vtemp264[3U] = __Vtemp263[3U];
    __Vtemp264[4U] = (1U & __Vtemp263[4U]);
    VL_EXTEND_WW(130,129, __Vtemp265, __Vtemp264);
    VL_EXTEND_WQ(130,64, __Vtemp266, (((QData)((IData)(
						       vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U]))));
    VL_ADD_W(5, __Vtemp267, __Vtemp265, __Vtemp266);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U] 
	= __Vtemp267[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U] 
	= __Vtemp267[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U] 
	= __Vtemp267[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U] 
	= __Vtemp267[3U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U] 
	= (3U & __Vtemp267[4U]);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:973
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1502
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[3U] = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))) {
		__Vtemp270[0U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
		__Vtemp270[1U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
		__Vtemp270[2U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
		__Vtemp270[3U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
		VL_EXTEND_WW(192,128, __Vtemp271, __Vtemp270);
		VL_SHIFTL_WWI(192,192,32, __Vtemp272, __Vtemp271, 0x40U);
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[0U] 
		    = __Vtemp272[0U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[1U] 
		    = __Vtemp272[1U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[2U] 
		    = __Vtemp272[2U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[3U] 
		    = __Vtemp272[3U];
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1572
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[3U] = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
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
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_[0U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U] 
	   & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[0U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_[1U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U] 
	   & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[1U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_[2U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U] 
	   & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[2U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_[3U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U] 
	   & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[3U]);
    __Vtemp277[0U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
    __Vtemp277[1U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
    __Vtemp277[2U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
    __Vtemp277[3U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
    VL_EXTEND_WW(192,128, __Vtemp278, __Vtemp277);
    VL_SHIFTL_WWI(192,192,32, __Vtemp279, __Vtemp278, 0x40U);
    __Vtemp280[0U] = __Vtemp279[0U];
    __Vtemp280[1U] = __Vtemp279[1U];
    __Vtemp280[2U] = __Vtemp279[2U];
    __Vtemp280[3U] = __Vtemp279[3U];
    VL_ADD_W(4, __Vtemp281, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2, __Vtemp280);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[0U] 
	= __Vtemp281[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[1U] 
	= __Vtemp281[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[2U] 
	= __Vtemp281[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[3U] 
	= __Vtemp281[3U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1618
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[3U] = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[0U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_[0U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[1U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_[1U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[2U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_[2U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[3U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_[3U];
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1525
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[3U] = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[0U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[0U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[1U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[1U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[2U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[2U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[3U] 
		    = vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[3U];
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1548
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[3U] = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    VL_SHIFTR_WWI(128,128,13, __Vtemp282, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_, 
			  (0x1fffU & ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k) 
				      << 4U)));
	    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[0U] 
		= ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		    ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[0U]
		    : __Vtemp282[0U]);
	    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[1U] 
		= ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		    ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[1U]
		    : __Vtemp282[1U]);
	    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[2U] 
		= ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		    ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[2U]
		    : __Vtemp282[2U]);
	    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[3U] 
		= ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		    ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[3U]
		    : __Vtemp282[3U]);
	}
    }
}
