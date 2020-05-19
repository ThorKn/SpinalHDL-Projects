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
    VL_SIG8(__Vdly__UartVdf__DOT__uartfsm__DOT__fsmIn_inCounter,5,0);
    VL_SIG8(__Vdly__UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter,3,0);
    VL_SIG8(__Vdly__UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg,2,0);
    VL_SIG8(__Vdly__UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg,1,0);
    VL_SIGW(__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret,255,0,8);
    VL_SIGW(__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7,255,0,8);
    VL_SIGW(__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8,255,0,8);
    VL_SIG(__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_repeatCounter,31,0);
    VL_SIGW(__Vtemp6,255,0,8);
    VL_SIGW(__Vtemp7,255,0,8);
    VL_SIGW(__Vtemp9,255,0,8);
    VL_SIGW(__Vtemp10,255,0,8);
    VL_SIGW(__Vtemp11,255,0,8);
    VL_SIGW(__Vtemp12,255,0,8);
    VL_SIGW(__Vtemp20,255,0,8);
    VL_SIGW(__Vtemp21,255,0,8);
    VL_SIGW(__Vtemp23,159,0,5);
    VL_SIGW(__Vtemp24,159,0,5);
    VL_SIGW(__Vtemp25,159,0,5);
    VL_SIGW(__Vtemp26,255,0,8);
    VL_SIGW(__Vtemp27,255,0,8);
    VL_SIGW(__Vtemp29,159,0,5);
    VL_SIGW(__Vtemp30,159,0,5);
    VL_SIGW(__Vtemp31,159,0,5);
    VL_SIGW(__Vtemp32,159,0,5);
    VL_SIGW(__Vtemp33,255,0,8);
    VL_SIGW(__Vtemp34,255,0,8);
    VL_SIGW(__Vtemp36,159,0,5);
    VL_SIGW(__Vtemp37,159,0,5);
    VL_SIGW(__Vtemp38,159,0,5);
    VL_SIGW(__Vtemp39,255,0,8);
    VL_SIGW(__Vtemp40,255,0,8);
    VL_SIGW(__Vtemp41,255,0,8);
    VL_SIGW(__Vtemp42,255,0,8);
    VL_SIGW(__Vtemp44,159,0,5);
    VL_SIGW(__Vtemp45,159,0,5);
    VL_SIGW(__Vtemp46,159,0,5);
    VL_SIGW(__Vtemp47,255,0,8);
    VL_SIGW(__Vtemp49,159,0,5);
    VL_SIGW(__Vtemp50,159,0,5);
    VL_SIGW(__Vtemp51,159,0,5);
    VL_SIGW(__Vtemp52,159,0,5);
    VL_SIGW(__Vtemp53,255,0,8);
    VL_SIGW(__Vtemp55,159,0,5);
    VL_SIGW(__Vtemp56,159,0,5);
    VL_SIGW(__Vtemp57,159,0,5);
    VL_SIGW(__Vtemp58,255,0,8);
    VL_SIGW(__Vtemp59,255,0,8);
    VL_SIGW(__Vtemp61,255,0,8);
    VL_SIGW(__Vtemp62,255,0,8);
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
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[4U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[4U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[5U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[5U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[6U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[6U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[7U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[7U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[0U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[0U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[1U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[1U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[2U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[2U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[3U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[3U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[4U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[4U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[5U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[5U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[6U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[6U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[7U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[7U];
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
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[4U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[4U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[5U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[5U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[6U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[6U];
    __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[7U] 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[7U];
    vlTOPp->__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_stateReg 
	= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:949
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter = 0U;
    } else {
	vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
	    = (0xfffffU & (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
			   - (IData)(1U)));
	if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick) {
	    vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter = 0xcU;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:440
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:2075
    if (vlTOPp->reset) {
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[0U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[1U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[2U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[3U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n[0U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n[1U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n[2U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n[3U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[0U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[1U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[2U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[3U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[4U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_t = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[0U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[1U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[2U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[3U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[4U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[5U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[6U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[7U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[0U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[1U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[2U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[3U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[4U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[5U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[6U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[7U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[0U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[1U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[2U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[3U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[4U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[5U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[6U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[7U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[0U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[1U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[2U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[3U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[4U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[5U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[6U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[7U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[0U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[1U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[2U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[3U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[4U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[5U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[6U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[7U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[0U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[1U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[2U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[3U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[4U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[5U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[6U] = 0U;
	__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[7U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[0U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[1U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[2U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[3U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[4U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[5U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[6U] = 0U;
	vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[7U] = 0U;
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
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[0U] 
			    = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[0U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[1U] 
			    = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[1U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[2U] 
			    = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[2U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[3U] 
			    = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[3U];
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
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[4U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[4U]
			        : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[4U]
				    : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[4U]
				        : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[4U]
					    : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[4U]))));
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[5U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[5U]
			        : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[5U]
				    : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[5U]
				        : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[5U]
					    : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[5U]))));
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[6U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[6U]
			        : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[6U]
				    : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[6U]
				        : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[6U]
					    : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[6U]))));
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[7U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[7U]
			        : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[7U]
				    : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[7U]
				        : ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[7U]
					    : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[7U]))));
		    } else {
			__Vtemp6[0U] = 1U;
			__Vtemp6[1U] = 0U;
			__Vtemp6[2U] = 0U;
			__Vtemp6[3U] = 0U;
			__Vtemp6[4U] = 0U;
			__Vtemp6[5U] = 0U;
			__Vtemp6[6U] = 0U;
			__Vtemp6[7U] = 0U;
			VL_ADD_W(8, __Vtemp7, __Vtemp6, vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_);
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[0U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_10_)
			        ? __Vtemp7[0U] : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[0U]);
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[1U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_10_)
			        ? __Vtemp7[1U] : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[1U]);
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[2U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_10_)
			        ? __Vtemp7[2U] : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[2U]);
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[3U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_10_)
			        ? __Vtemp7[3U] : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[3U]);
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[4U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_10_)
			        ? __Vtemp7[4U] : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[4U]);
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[5U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_10_)
			        ? __Vtemp7[5U] : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[5U]);
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[6U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_10_)
			        ? __Vtemp7[6U] : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[6U]);
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[7U] 
			    = ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_10_)
			        ? __Vtemp7[7U] : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[7U]);
		    }
		} else {
		    if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
			__Vtemp9[0U] = 0xffffffffU;
			__Vtemp9[1U] = 0xffffffffU;
			__Vtemp9[2U] = 0xffffffffU;
			__Vtemp9[3U] = 0xffffffffU;
			__Vtemp9[4U] = 0xffffffffU;
			__Vtemp9[5U] = 0xffffffffU;
			__Vtemp9[6U] = 0xffffffffU;
			__Vtemp9[7U] = 0xffffffffU;
			VL_SHIFTR_WWI(256,256,13, __Vtemp10, __Vtemp9, 
				      (0x1fffU & ((IData)(0x100U) 
						  - 
						  ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_26_) 
						   << 4U))));
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[0U] 
			    = __Vtemp10[0U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[1U] 
			    = __Vtemp10[1U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[2U] 
			    = __Vtemp10[2U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[3U] 
			    = __Vtemp10[3U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[4U] 
			    = __Vtemp10[4U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[5U] 
			    = __Vtemp10[5U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[6U] 
			    = __Vtemp10[6U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[7U] 
			    = __Vtemp10[7U];
			VL_SUB_W(8, __Vtemp11, vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_6_, vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_7_);
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[0U] 
			    = __Vtemp11[0U];
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[1U] 
			    = __Vtemp11[1U];
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[2U] 
			    = __Vtemp11[2U];
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[3U] 
			    = __Vtemp11[3U];
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[4U] 
			    = __Vtemp11[4U];
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[5U] 
			    = __Vtemp11[5U];
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[6U] 
			    = __Vtemp11[6U];
			__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[7U] 
			    = __Vtemp11[7U];
		    } else {
			VL_SHIFTR_WWI(256,256,13, __Vtemp12, vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_, (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_22_));
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[0U] 
			    = __Vtemp12[0U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[1U] 
			    = __Vtemp12[1U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[2U] 
			    = __Vtemp12[2U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[3U] 
			    = __Vtemp12[3U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[4U] 
			    = __Vtemp12[4U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[5U] 
			    = __Vtemp12[5U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[6U] 
			    = __Vtemp12[6U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[7U] 
			    = __Vtemp12[7U];
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
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[4U] 
			    = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[5U] 
			    = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[5U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[6U] 
			    = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[6U];
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[7U] 
			    = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[7U];
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
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[4U] 
				= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[5U] 
				= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[5U];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[6U] 
				= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[6U];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[7U] 
				= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[7U];
			}
		    }
		} else {
		    if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
			if (vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_valid) {
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[0U] 
				= vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0U];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[1U] 
				= vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[1U];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[2U] 
				= vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[2U];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[3U] 
				= vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[3U];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n[0U] 
				= vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[4U];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n[1U] 
				= vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[5U];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n[2U] 
				= vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[6U];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n[3U] 
				= vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[7U];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[0U] 
				= vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[8U];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[1U] 
				= vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[9U];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[2U] 
				= vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0xaU];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[3U] 
				= vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0xbU];
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[4U] 
				= (0xffU & vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0xcU]);
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k 
				= (0xffU & ((vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0xdU] 
					     << 0x18U) 
					    | (vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0xcU] 
					       >> 8U)));
			    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_t 
				= ((vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0xdU] 
				    << 0x10U) | (vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0xcU] 
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
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[4U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[5U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[6U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[7U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_result_barret[7U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[0U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[1U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[2U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[3U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[4U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[5U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[6U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[7U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_7[7U];
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
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[4U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[5U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[6U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8[7U] 
	= __Vdly__UartVdf__DOT__multmod_1___DOT__fsm_temp_8[7U];
    vlTOPp->io_uart_txd = vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1320
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
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[8U] = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[9U] = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[0xaU] = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[0xbU] = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[0xcU] = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[0xdU] = 0U;
	__Vdly__UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outBuffer[0U] = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outBuffer[1U] = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outBuffer[2U] = 0U;
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outBuffer[3U] = 0U;
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
			= (0x3fU & ((IData)(1U) + (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_inCounter)));
		} else {
		    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) {
			vlTOPp->UartVdf__DOT__uartfsm__DOT____Vlvbound1 
			    = vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			if ((0x1afU >= (0x1ffU & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT___zz_5_)))) {
			    VL_ASSIGNSEL_WIII(8,(0x1ffU 
						 & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT___zz_5_)), vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer, vlTOPp->UartVdf__DOT__uartfsm__DOT____Vlvbound1);
			}
		    }
		}
	    }
	}
	if ((1U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    if (vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_valid) {
		__Vdly__UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter = 0U;
		vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outBuffer[0U] 
		    = vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_payload[0U];
		vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outBuffer[1U] 
		    = vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_payload[1U];
		vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outBuffer[2U] 
		    = vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_payload[2U];
		vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outBuffer[3U] 
		    = vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_payload[3U];
	    }
	} else {
	    if ((2U != (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg))) {
		if ((3U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg))) {
		    __Vdly__UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter)));
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
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[8U] = 0U;
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[9U] = 0U;
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[0xaU] = 0U;
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[0xbU] = 0U;
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[0xcU] = 0U;
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[0xdU] = 0U;
	}
	__Vdly__UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg 
	    = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext;
	__Vdly__UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg 
	    = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext;
    }
    __Vtemp20[0U] = 0U;
    __Vtemp20[1U] = 0U;
    __Vtemp20[2U] = 0U;
    __Vtemp20[3U] = 0U;
    __Vtemp20[4U] = 0U;
    __Vtemp20[5U] = 0U;
    __Vtemp20[6U] = 0U;
    __Vtemp20[7U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_10_ 
	= VL_GTS_IWW(1,256,256, __Vtemp20, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7);
    VL_ADD_W(8, __Vtemp21, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[0U] 
	= __Vtemp21[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[1U] 
	= __Vtemp21[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[2U] 
	= __Vtemp21[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[3U] 
	= __Vtemp21[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[4U] 
	= __Vtemp21[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[5U] 
	= __Vtemp21[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[6U] 
	= __Vtemp21[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[7U] 
	= __Vtemp21[7U];
    VL_EXTEND_WW(131,128, __Vtemp23, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(131,131,32, __Vtemp24, __Vtemp23, 2U);
    __Vtemp25[0U] = __Vtemp24[0U];
    __Vtemp25[1U] = __Vtemp24[1U];
    __Vtemp25[2U] = __Vtemp24[2U];
    __Vtemp25[3U] = __Vtemp24[3U];
    __Vtemp25[4U] = (7U & __Vtemp24[4U]);
    VL_EXTEND_WW(256,131, __Vtemp26, __Vtemp25);
    VL_SUB_W(8, __Vtemp27, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp26);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[0U] 
	= __Vtemp27[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[1U] 
	= __Vtemp27[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[2U] 
	= __Vtemp27[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[3U] 
	= __Vtemp27[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[4U] 
	= __Vtemp27[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[5U] 
	= __Vtemp27[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[6U] 
	= __Vtemp27[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[7U] 
	= __Vtemp27[7U];
    __Vtemp29[0U] = 3U;
    __Vtemp29[1U] = 0U;
    __Vtemp29[2U] = 0U;
    __Vtemp29[3U] = 0U;
    __Vtemp29[4U] = 0U;
    VL_EXTEND_WW(130,128, __Vtemp30, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_MUL_W(5, __Vtemp31, __Vtemp29, __Vtemp30);
    __Vtemp32[0U] = __Vtemp31[0U];
    __Vtemp32[1U] = __Vtemp31[1U];
    __Vtemp32[2U] = __Vtemp31[2U];
    __Vtemp32[3U] = __Vtemp31[3U];
    __Vtemp32[4U] = (3U & __Vtemp31[4U]);
    VL_EXTEND_WW(256,130, __Vtemp33, __Vtemp32);
    VL_SUB_W(8, __Vtemp34, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp33);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[0U] 
	= __Vtemp34[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[1U] 
	= __Vtemp34[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[2U] 
	= __Vtemp34[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[3U] 
	= __Vtemp34[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[4U] 
	= __Vtemp34[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[5U] 
	= __Vtemp34[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[6U] 
	= __Vtemp34[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[7U] 
	= __Vtemp34[7U];
    VL_EXTEND_WW(130,128, __Vtemp36, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(130,130,32, __Vtemp37, __Vtemp36, 1U);
    __Vtemp38[0U] = __Vtemp37[0U];
    __Vtemp38[1U] = __Vtemp37[1U];
    __Vtemp38[2U] = __Vtemp37[2U];
    __Vtemp38[3U] = __Vtemp37[3U];
    __Vtemp38[4U] = (3U & __Vtemp37[4U]);
    VL_EXTEND_WW(256,130, __Vtemp39, __Vtemp38);
    VL_SUB_W(8, __Vtemp40, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp39);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[0U] 
	= __Vtemp40[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[1U] 
	= __Vtemp40[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[2U] 
	= __Vtemp40[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[3U] 
	= __Vtemp40[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[4U] 
	= __Vtemp40[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[5U] 
	= __Vtemp40[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[6U] 
	= __Vtemp40[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[7U] 
	= __Vtemp40[7U];
    VL_EXTEND_WW(256,128, __Vtemp41, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SUB_W(8, __Vtemp42, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp41);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[0U] 
	= __Vtemp42[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[1U] 
	= __Vtemp42[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[2U] 
	= __Vtemp42[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[3U] 
	= __Vtemp42[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[4U] 
	= __Vtemp42[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[5U] 
	= __Vtemp42[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[6U] 
	= __Vtemp42[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[7U] 
	= __Vtemp42[7U];
    VL_EXTEND_WW(131,128, __Vtemp44, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(131,131,32, __Vtemp45, __Vtemp44, 2U);
    __Vtemp46[0U] = __Vtemp45[0U];
    __Vtemp46[1U] = __Vtemp45[1U];
    __Vtemp46[2U] = __Vtemp45[2U];
    __Vtemp46[3U] = __Vtemp45[3U];
    __Vtemp46[4U] = (7U & __Vtemp45[4U]);
    VL_EXTEND_WW(256,131, __Vtemp47, __Vtemp46);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_11_ 
	= VL_LT_W(8, __Vtemp47, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8);
    __Vtemp49[0U] = 3U;
    __Vtemp49[1U] = 0U;
    __Vtemp49[2U] = 0U;
    __Vtemp49[3U] = 0U;
    __Vtemp49[4U] = 0U;
    VL_EXTEND_WW(130,128, __Vtemp50, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_MUL_W(5, __Vtemp51, __Vtemp49, __Vtemp50);
    __Vtemp52[0U] = __Vtemp51[0U];
    __Vtemp52[1U] = __Vtemp51[1U];
    __Vtemp52[2U] = __Vtemp51[2U];
    __Vtemp52[3U] = __Vtemp51[3U];
    __Vtemp52[4U] = (3U & __Vtemp51[4U]);
    VL_EXTEND_WW(256,130, __Vtemp53, __Vtemp52);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_12_ 
	= VL_LT_W(8, __Vtemp53, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8);
    VL_EXTEND_WW(130,128, __Vtemp55, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(130,130,32, __Vtemp56, __Vtemp55, 1U);
    __Vtemp57[0U] = __Vtemp56[0U];
    __Vtemp57[1U] = __Vtemp56[1U];
    __Vtemp57[2U] = __Vtemp56[2U];
    __Vtemp57[3U] = __Vtemp56[3U];
    __Vtemp57[4U] = (3U & __Vtemp56[4U]);
    VL_EXTEND_WW(256,130, __Vtemp58, __Vtemp57);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_13_ 
	= VL_LT_W(8, __Vtemp58, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8);
    VL_EXTEND_WW(256,128, __Vtemp59, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_14_ 
	= VL_LT_W(8, __Vtemp59, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8);
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
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_6_[4U] 
	= (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[4U] 
	   & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[4U]);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_6_[5U] 
	= (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[5U] 
	   & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[5U]);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_6_[6U] 
	= (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[6U] 
	   & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[6U]);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_6_[7U] 
	= (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult[7U] 
	   & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[7U]);
    VL_SHIFTR_WWI(256,256,13, __Vtemp61, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult, 
		  (0x1fffU & ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k) 
			      << 4U)));
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[0U] 
	= __Vtemp61[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[1U] 
	= __Vtemp61[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[2U] 
	= __Vtemp61[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[3U] 
	= __Vtemp61[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[4U] 
	= __Vtemp61[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[5U] 
	= __Vtemp61[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[6U] 
	= __Vtemp61[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[7U] 
	= __Vtemp61[7U];
    VL_SHIFTR_WWI(256,256,13, __Vtemp62, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult, 
		  (0x1fffU & ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k) 
			      << 4U)));
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[0U] 
	= __Vtemp62[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[1U] 
	= __Vtemp62[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[2U] 
	= __Vtemp62[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[3U] 
	= __Vtemp62[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[4U] 
	= __Vtemp62[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[5U] 
	= __Vtemp62[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[6U] 
	= __Vtemp62[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[7U] 
	= __Vtemp62[7U];
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
    vlTOPp->UartVdf__DOT__uartfsm__DOT___zz_5_ = (0x3ffU 
						  & ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_inCounter) 
						     << 3U));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1202
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0U] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[1U] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[2U] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[3U] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[4U] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[5U] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[6U] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[7U] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[8U] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[9U] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0xaU] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0xbU] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0xcU] = 0U;
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0xdU] = 0U;
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
		vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[8U] 
		    = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[8U];
		vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[9U] 
		    = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[9U];
		vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0xaU] 
		    = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[0xaU];
		vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0xbU] 
		    = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[0xbU];
		vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0xcU] 
		    = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[0xcU];
		vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload[0xdU] 
		    = vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer[0xdU];
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1152
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1219
    vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_valid = 0U;
    if ((4U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg)))) {
		vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_valid = 1U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1172
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1237
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1373
    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__write_ready) {
	vlTOPp->UartVdf__DOT__uartfsm__DOT__write_m2sPipe_rData 
	    = vlTOPp->UartVdf__DOT__uartfsm__DOT__write_payload;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:486
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:702
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:2157
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
    VL_SIGW(__Vtemp430,255,0,8);
    VL_SIGW(__Vtemp440,127,0,4);
    VL_SIGW(__Vtemp447,95,0,3);
    VL_SIGW(__Vtemp448,95,0,3);
    VL_SIGW(__Vtemp449,95,0,3);
    VL_SIGW(__Vtemp452,95,0,3);
    VL_SIGW(__Vtemp453,95,0,3);
    VL_SIGW(__Vtemp454,95,0,3);
    VL_SIGW(__Vtemp460,95,0,3);
    VL_SIGW(__Vtemp461,95,0,3);
    VL_SIGW(__Vtemp462,95,0,3);
    VL_SIGW(__Vtemp467,95,0,3);
    VL_SIGW(__Vtemp468,95,0,3);
    VL_SIGW(__Vtemp469,95,0,3);
    VL_SIGW(__Vtemp474,95,0,3);
    VL_SIGW(__Vtemp475,95,0,3);
    VL_SIGW(__Vtemp476,95,0,3);
    VL_SIGW(__Vtemp477,95,0,3);
    VL_SIGW(__Vtemp478,95,0,3);
    VL_SIGW(__Vtemp479,95,0,3);
    VL_SIGW(__Vtemp480,95,0,3);
    VL_SIGW(__Vtemp484,95,0,3);
    VL_SIGW(__Vtemp485,95,0,3);
    VL_SIGW(__Vtemp486,95,0,3);
    VL_SIGW(__Vtemp487,95,0,3);
    VL_SIGW(__Vtemp488,95,0,3);
    VL_SIGW(__Vtemp489,95,0,3);
    VL_SIGW(__Vtemp490,95,0,3);
    VL_SIGW(__Vtemp494,95,0,3);
    VL_SIGW(__Vtemp495,95,0,3);
    VL_SIGW(__Vtemp496,95,0,3);
    VL_SIGW(__Vtemp497,95,0,3);
    VL_SIGW(__Vtemp498,95,0,3);
    VL_SIGW(__Vtemp499,95,0,3);
    VL_SIGW(__Vtemp500,95,0,3);
    VL_SIGW(__Vtemp504,95,0,3);
    VL_SIGW(__Vtemp505,95,0,3);
    VL_SIGW(__Vtemp506,95,0,3);
    VL_SIGW(__Vtemp507,95,0,3);
    VL_SIGW(__Vtemp508,95,0,3);
    VL_SIGW(__Vtemp509,95,0,3);
    VL_SIGW(__Vtemp510,95,0,3);
    VL_SIGW(__Vtemp514,95,0,3);
    VL_SIGW(__Vtemp515,95,0,3);
    VL_SIGW(__Vtemp516,95,0,3);
    VL_SIGW(__Vtemp517,95,0,3);
    VL_SIGW(__Vtemp518,95,0,3);
    VL_SIGW(__Vtemp519,95,0,3);
    VL_SIGW(__Vtemp520,95,0,3);
    VL_SIGW(__Vtemp524,95,0,3);
    VL_SIGW(__Vtemp525,95,0,3);
    VL_SIGW(__Vtemp526,95,0,3);
    VL_SIGW(__Vtemp527,95,0,3);
    VL_SIGW(__Vtemp528,95,0,3);
    VL_SIGW(__Vtemp529,95,0,3);
    VL_SIGW(__Vtemp530,95,0,3);
    VL_SIGW(__Vtemp534,95,0,3);
    VL_SIGW(__Vtemp535,95,0,3);
    VL_SIGW(__Vtemp536,95,0,3);
    VL_SIGW(__Vtemp537,95,0,3);
    VL_SIGW(__Vtemp538,95,0,3);
    VL_SIGW(__Vtemp539,95,0,3);
    VL_SIGW(__Vtemp540,95,0,3);
    VL_SIGW(__Vtemp544,95,0,3);
    VL_SIGW(__Vtemp545,95,0,3);
    VL_SIGW(__Vtemp546,95,0,3);
    VL_SIGW(__Vtemp547,95,0,3);
    VL_SIGW(__Vtemp548,95,0,3);
    VL_SIGW(__Vtemp549,95,0,3);
    VL_SIGW(__Vtemp550,95,0,3);
    VL_SIGW(__Vtemp554,127,0,4);
    VL_SIGW(__Vtemp555,127,0,4);
    VL_SIGW(__Vtemp556,159,0,5);
    VL_SIGW(__Vtemp560,95,0,3);
    VL_SIGW(__Vtemp561,95,0,3);
    VL_SIGW(__Vtemp562,95,0,3);
    VL_SIGW(__Vtemp563,95,0,3);
    VL_SIGW(__Vtemp564,95,0,3);
    VL_SIGW(__Vtemp565,95,0,3);
    VL_SIGW(__Vtemp566,127,0,4);
    VL_SIGW(__Vtemp567,127,0,4);
    VL_SIGW(__Vtemp568,127,0,4);
    VL_SIGW(__Vtemp569,127,0,4);
    VL_SIGW(__Vtemp572,95,0,3);
    VL_SIGW(__Vtemp573,95,0,3);
    VL_SIGW(__Vtemp574,95,0,3);
    VL_SIGW(__Vtemp575,95,0,3);
    VL_SIGW(__Vtemp576,95,0,3);
    VL_SIGW(__Vtemp577,95,0,3);
    VL_SIGW(__Vtemp578,95,0,3);
    VL_SIGW(__Vtemp579,95,0,3);
    VL_SIGW(__Vtemp580,127,0,4);
    VL_SIGW(__Vtemp581,127,0,4);
    VL_SIGW(__Vtemp584,127,0,4);
    VL_SIGW(__Vtemp585,159,0,5);
    VL_SIGW(__Vtemp586,159,0,5);
    VL_SIGW(__Vtemp587,159,0,5);
    VL_SIGW(__Vtemp588,159,0,5);
    VL_SIGW(__Vtemp589,159,0,5);
    VL_SIGW(__Vtemp590,159,0,5);
    VL_SIGW(__Vtemp594,127,0,4);
    VL_SIGW(__Vtemp595,127,0,4);
    VL_SIGW(__Vtemp596,159,0,5);
    VL_SIGW(__Vtemp600,95,0,3);
    VL_SIGW(__Vtemp601,95,0,3);
    VL_SIGW(__Vtemp602,95,0,3);
    VL_SIGW(__Vtemp603,95,0,3);
    VL_SIGW(__Vtemp604,95,0,3);
    VL_SIGW(__Vtemp605,95,0,3);
    VL_SIGW(__Vtemp606,127,0,4);
    VL_SIGW(__Vtemp607,127,0,4);
    VL_SIGW(__Vtemp608,127,0,4);
    VL_SIGW(__Vtemp609,127,0,4);
    VL_SIGW(__Vtemp612,95,0,3);
    VL_SIGW(__Vtemp613,95,0,3);
    VL_SIGW(__Vtemp614,95,0,3);
    VL_SIGW(__Vtemp615,95,0,3);
    VL_SIGW(__Vtemp616,95,0,3);
    VL_SIGW(__Vtemp617,95,0,3);
    VL_SIGW(__Vtemp618,95,0,3);
    VL_SIGW(__Vtemp619,95,0,3);
    VL_SIGW(__Vtemp620,127,0,4);
    VL_SIGW(__Vtemp621,127,0,4);
    VL_SIGW(__Vtemp624,127,0,4);
    VL_SIGW(__Vtemp625,159,0,5);
    VL_SIGW(__Vtemp626,159,0,5);
    VL_SIGW(__Vtemp627,159,0,5);
    VL_SIGW(__Vtemp628,159,0,5);
    VL_SIGW(__Vtemp629,159,0,5);
    VL_SIGW(__Vtemp630,159,0,5);
    VL_SIGW(__Vtemp635,95,0,3);
    VL_SIGW(__Vtemp636,95,0,3);
    VL_SIGW(__Vtemp637,95,0,3);
    VL_SIGW(__Vtemp638,95,0,3);
    VL_SIGW(__Vtemp639,95,0,3);
    VL_SIGW(__Vtemp640,95,0,3);
    VL_SIGW(__Vtemp641,95,0,3);
    VL_SIGW(__Vtemp645,127,0,4);
    VL_SIGW(__Vtemp646,127,0,4);
    VL_SIGW(__Vtemp647,159,0,5);
    VL_SIGW(__Vtemp651,95,0,3);
    VL_SIGW(__Vtemp652,95,0,3);
    VL_SIGW(__Vtemp653,95,0,3);
    VL_SIGW(__Vtemp654,95,0,3);
    VL_SIGW(__Vtemp655,95,0,3);
    VL_SIGW(__Vtemp656,95,0,3);
    VL_SIGW(__Vtemp657,127,0,4);
    VL_SIGW(__Vtemp658,127,0,4);
    VL_SIGW(__Vtemp659,127,0,4);
    VL_SIGW(__Vtemp660,127,0,4);
    VL_SIGW(__Vtemp663,95,0,3);
    VL_SIGW(__Vtemp664,95,0,3);
    VL_SIGW(__Vtemp665,95,0,3);
    VL_SIGW(__Vtemp666,95,0,3);
    VL_SIGW(__Vtemp667,95,0,3);
    VL_SIGW(__Vtemp668,95,0,3);
    VL_SIGW(__Vtemp669,95,0,3);
    VL_SIGW(__Vtemp670,95,0,3);
    VL_SIGW(__Vtemp671,127,0,4);
    VL_SIGW(__Vtemp672,127,0,4);
    VL_SIGW(__Vtemp675,127,0,4);
    VL_SIGW(__Vtemp676,159,0,5);
    VL_SIGW(__Vtemp677,159,0,5);
    VL_SIGW(__Vtemp678,159,0,5);
    VL_SIGW(__Vtemp679,159,0,5);
    VL_SIGW(__Vtemp680,159,0,5);
    VL_SIGW(__Vtemp681,159,0,5);
    VL_SIGW(__Vtemp685,127,0,4);
    VL_SIGW(__Vtemp686,255,0,8);
    VL_SIGW(__Vtemp687,255,0,8);
    VL_SIGW(__Vtemp688,287,0,9);
    VL_SIGW(__Vtemp690,95,0,3);
    VL_SIGW(__Vtemp691,95,0,3);
    VL_SIGW(__Vtemp694,127,0,4);
    VL_SIGW(__Vtemp695,159,0,5);
    VL_SIGW(__Vtemp696,127,0,4);
    VL_SIGW(__Vtemp697,159,0,5);
    VL_SIGW(__Vtemp698,159,0,5);
    VL_SIGW(__Vtemp699,127,0,4);
    VL_SIGW(__Vtemp700,159,0,5);
    VL_SIGW(__Vtemp701,159,0,5);
    VL_SIGW(__Vtemp702,159,0,5);
    VL_SIGW(__Vtemp703,223,0,7);
    VL_SIGW(__Vtemp704,223,0,7);
    VL_SIGW(__Vtemp705,223,0,7);
    VL_SIGW(__Vtemp706,223,0,7);
    VL_SIGW(__Vtemp709,127,0,4);
    VL_SIGW(__Vtemp710,159,0,5);
    VL_SIGW(__Vtemp711,127,0,4);
    VL_SIGW(__Vtemp712,159,0,5);
    VL_SIGW(__Vtemp713,159,0,5);
    VL_SIGW(__Vtemp714,159,0,5);
    VL_SIGW(__Vtemp715,159,0,5);
    VL_SIGW(__Vtemp716,127,0,4);
    VL_SIGW(__Vtemp717,159,0,5);
    VL_SIGW(__Vtemp718,159,0,5);
    VL_SIGW(__Vtemp719,159,0,5);
    VL_SIGW(__Vtemp720,223,0,7);
    VL_SIGW(__Vtemp721,223,0,7);
    VL_SIGW(__Vtemp724,223,0,7);
    VL_SIGW(__Vtemp725,287,0,9);
    VL_SIGW(__Vtemp726,287,0,9);
    VL_SIGW(__Vtemp727,287,0,9);
    VL_SIGW(__Vtemp728,287,0,9);
    VL_SIGW(__Vtemp729,127,0,4);
    VL_SIGW(__Vtemp730,287,0,9);
    VL_SIGW(__Vtemp731,287,0,9);
    VL_SIGW(__Vtemp733,255,0,8);
    VL_SIGW(__Vtemp734,383,0,12);
    VL_SIGW(__Vtemp735,383,0,12);
    VL_SIGW(__Vtemp740,255,0,8);
    VL_SIGW(__Vtemp741,383,0,12);
    VL_SIGW(__Vtemp742,383,0,12);
    VL_SIGW(__Vtemp743,255,0,8);
    VL_SIGW(__Vtemp744,255,0,8);
    VL_SIGW(__Vtemp745,255,0,8);
    // Body
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1252
    vlTOPp->UartVdf__DOT__uartfsm__DOT__write_payload = 0U;
    if ((1U != (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__write_payload 
		= (0xffU & (((0U == (0x1fU & ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter) 
					      << 3U)))
			      ? 0U : (vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outBuffer[
				      ((IData)(1U) 
				       + (3U & ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter) 
						>> 2U)))] 
				      << ((IData)(0x20U) 
					  - (0x1fU 
					     & ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter) 
						<< 3U))))) 
			    | (vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outBuffer[
			       (3U & ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter) 
				      >> 2U))] >> (0x1fU 
						   & ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter) 
						      << 3U)))));
	}
    }
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
	= vlTOPp->__Vdly__UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg 
	= vlTOPp->__Vdly__UartVdf__DOT__multmod_1___DOT__fsm_stateReg;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:399
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:370
    vlTOPp->__Vtableidx5 = vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable5_UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx5];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:625
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1695
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[3U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[4U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[5U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[6U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[7U] = 0U;
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
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[4U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[4U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[5U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[5U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[6U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[6U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out[7U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2[7U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1912
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[3U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[4U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[5U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[6U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[7U] = 0U;
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
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[4U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[4U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[5U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[5U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[6U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[6U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out[7U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7[7U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1521
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1939
    __Vtemp430[0U] = 0U;
    __Vtemp430[1U] = 0U;
    __Vtemp430[2U] = 0U;
    __Vtemp430[3U] = 0U;
    __Vtemp430[4U] = 0U;
    __Vtemp430[5U] = 0U;
    __Vtemp430[6U] = 0U;
    __Vtemp430[7U] = 0U;
    vlTOPp->__Vtableidx11 = ((VL_GTS_IWW(1,256,256, __Vtemp430, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7) 
			      << 4U) | (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg));
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_corr_flag 
	= vlTOPp->__Vtable11_UartVdf__DOT__multmod_1___05Fio_temp_corr_flag
	[vlTOPp->__Vtableidx11];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1554
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_payload[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_payload[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_payload[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_payload[3U] = 0U;
    if ((8U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 2U)))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_payload[0U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[0U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_payload[1U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[1U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_payload[2U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[2U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_payload[3U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret[3U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1668
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[3U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[4U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[5U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[6U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[7U] = 0U;
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
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[4U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[4U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[5U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[5U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[6U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[6U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out[7U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[7U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1722
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2a_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2a_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2a_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2a_out[3U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg)))) {
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2a_out[0U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[0U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2a_out[1U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[1U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2a_out[2U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[2U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2a_out[3U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[3U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1858
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[3U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[4U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[5U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[6U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[7U] = 0U;
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
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[4U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_6_[4U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[5U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_6_[5U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[6U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_6_[6U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out[7U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_6_[7U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1970
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1581
    vlTOPp->__Vtableidx10 = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_valid 
	= vlTOPp->__Vtable10_UartVdf__DOT__multmod_1___05Fio_toUart_valid
	[vlTOPp->__Vtableidx10];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1608
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[3U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[0U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[0U]
		        : vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[0U]);
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[1U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[1U]
		        : vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[1U]);
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[2U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[2U]
		        : vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[2U]);
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[3U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[3U]
		        : vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[3U]);
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[0U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[0U]
		        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[0U]);
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[1U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[1U]
		        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[1U]);
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[2U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[2U]
		        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[2U]);
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[3U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[3U]
		        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[3U]);
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1638
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[3U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		VL_EXTEND_WI(128,8, __Vtemp440, (0xffU 
						 & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[4U]));
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[0U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n[0U]
		        : __Vtemp440[0U]);
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[1U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n[1U]
		        : __Vtemp440[1U]);
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[2U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n[2U]
		        : __Vtemp440[2U]);
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[3U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n[3U]
		        : __Vtemp440[3U]);
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[0U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[0U]
		        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[0U]);
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[1U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[1U]
		        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[1U]);
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[2U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[2U]
		        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[2U]);
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[3U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[3U]
		        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a[3U]);
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:2013
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
		if ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
		    if ((1U >= (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_1_))) {
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext = 8U;
		    }
		} else {
		    if ((1U >= (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_1_))) {
			vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext = 7U;
		    }
		}
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
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[3U]) 
		       - (0xffffU & (vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[3U] 
				     >> 0x10U))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[2U]) 
		       - (0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[3U] 
				      << 0x10U) | (
						   vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[2U] 
						   >> 0x10U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[1U]) 
		       - (0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[2U] 
				      << 0x10U) | (
						   vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[1U] 
						   >> 0x10U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[0U]) 
		       - (0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[1U] 
				      << 0x10U) | (
						   vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[0U] 
						   >> 0x10U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[2U])) 
				  - (QData)((IData)(
						    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[3U]))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[0U])) 
				  - (QData)((IData)(
						    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[1U]))));
    VL_EXTEND_WQ(65,64, __Vtemp447, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp448, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[3U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[2U]))));
    VL_SUB_W(3, __Vtemp449, __Vtemp447, __Vtemp448);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[0U] 
	= __Vtemp449[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[1U] 
	= __Vtemp449[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U] 
	= (1U & __Vtemp449[2U]);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & (vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[3U] 
		       >> 0x10U)) * (0xffffU & (vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[3U] 
						>> 0x10U)));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[3U]) 
	   * (0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[3U]));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[3U] 
			<< 0x10U) | (vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[2U] 
				     >> 0x10U))) * 
	   (0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[3U] 
			<< 0x10U) | (vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[2U] 
				     >> 0x10U))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[2U]) 
	   * (0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[2U]));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[2U] 
			<< 0x10U) | (vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[1U] 
				     >> 0x10U))) * 
	   (0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[2U] 
			<< 0x10U) | (vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[1U] 
				     >> 0x10U))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[1U]) 
	   * (0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[1U]));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[1U] 
			<< 0x10U) | (vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[0U] 
				     >> 0x10U))) * 
	   (0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[1U] 
			<< 0x10U) | (vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[0U] 
				     >> 0x10U))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[0U]) 
	   * (0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[0U]));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[3U] 
				   >> 0x10U)) - (0xffffU 
						 & vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[3U])));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[3U] 
				    << 0x10U) | (vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[2U] 
						 >> 0x10U))) 
		       - (0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[2U])));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[2U] 
				    << 0x10U) | (vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[1U] 
						 >> 0x10U))) 
		       - (0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[1U])));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[1U] 
				    << 0x10U) | (vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[0U] 
						 >> 0x10U))) 
		       - (0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[0U])));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[3U])) 
				  - (QData)((IData)(
						    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[2U]))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[1U])) 
				  - (QData)((IData)(
						    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp452, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[3U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[2U]))));
    VL_EXTEND_WQ(65,64, __Vtemp453, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[0U]))));
    VL_SUB_W(3, __Vtemp454, __Vtemp452, __Vtemp453);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[0U] 
	= __Vtemp454[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[1U] 
	= __Vtemp454[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U] 
	= (1U & __Vtemp454[2U]);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1536
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:599
    vlTOPp->__Vtableidx7 = vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable7_UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx7];
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_ 
	= ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) 
	   & (~ (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:614
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 0U;
    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
	if ((0U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter))) {
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 1U;
	}
    }
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_ 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1267
    vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg;
    if ((4U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext = 1U;
    } else {
	if ((2U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	    if ((1U & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg))) {
		vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext 
		    = ((0x35U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_inCounter))
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:152
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:382
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 0U;
    if ((0U == vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 1U;
    }
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_19_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_)
				    : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_ 
								>> 0x20U)))))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_19_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_)
				    : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_ 
								>> 0x20U)))))));
    __Vtemp460[0U] = ((1U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U])
		       ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[0U])
		       : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[0U]);
    __Vtemp460[1U] = ((1U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U])
		       ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[1U])
		       : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[1U]);
    __Vtemp460[2U] = ((1U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U])
		       ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U])
		       : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U]);
    VL_EXTEND_WI(65,1, __Vtemp461, (1U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U]));
    VL_ADD_W(3, __Vtemp462, __Vtemp460, __Vtemp461);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[0U] 
	= __Vtemp462[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[1U] 
	= __Vtemp462[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[2U] 
	= (1U & __Vtemp462[2U]);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_)
				     ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_)
				     : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_)
						        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_)
				     ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_)
				     : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_)
						        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_)
				     ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_)
				     : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_)
						        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_)
				     ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_)
				     : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_)
						        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_25_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_)
				    : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_ 
								>> 0x20U)))))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_25_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_)
				    : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_ 
								>> 0x20U)))))));
    __Vtemp467[0U] = ((1U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U])
		       ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[0U])
		       : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[0U]);
    __Vtemp467[1U] = ((1U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U])
		       ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[1U])
		       : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[1U]);
    __Vtemp467[2U] = ((1U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U])
		       ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U])
		       : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U]);
    VL_EXTEND_WI(65,1, __Vtemp468, (1U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U]));
    VL_ADD_W(3, __Vtemp469, __Vtemp467, __Vtemp468);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[0U] 
	= __Vtemp469[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[1U] 
	= __Vtemp469[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[2U] 
	= (1U & __Vtemp469[2U]);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1162
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:392
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext 
	= (7U & ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
		 + (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)));
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick 
	= ((7U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value)) 
	   & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_19_)) 
		       - (0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_19_ 
					     >> 0x10U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_19_)) 
		       - (0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_19_ 
					     >> 0x10U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[1U]) 
		       - (0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[2U] 
				      << 0x10U) | (
						   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[1U] 
						   >> 0x10U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[0U]) 
		       - (0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[1U] 
				      << 0x10U) | (
						   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[0U] 
						   >> 0x10U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[0U])) 
				  - (QData)((IData)(
						    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[1U]))));
    VL_EXTEND_WQ(65,64, __Vtemp474, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp475, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp476, __Vtemp474, __Vtemp475);
    __Vtemp477[0U] = __Vtemp476[0U];
    __Vtemp477[1U] = __Vtemp476[1U];
    __Vtemp477[2U] = (1U & __Vtemp476[2U]);
    VL_EXTEND_WW(66,65, __Vtemp478, __Vtemp477);
    VL_EXTEND_WI(66,32, __Vtemp479, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp480, __Vtemp478, __Vtemp479);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[0U] 
	= __Vtemp480[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[1U] 
	= __Vtemp480[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[2U] 
	= (3U & __Vtemp480[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp484, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp485, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp486, __Vtemp484, __Vtemp485);
    __Vtemp487[0U] = __Vtemp486[0U];
    __Vtemp487[1U] = __Vtemp486[1U];
    __Vtemp487[2U] = (1U & __Vtemp486[2U]);
    VL_EXTEND_WW(66,65, __Vtemp488, __Vtemp487);
    VL_EXTEND_WI(66,32, __Vtemp489, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp490, __Vtemp488, __Vtemp489);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[0U] 
	= __Vtemp490[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[1U] 
	= __Vtemp490[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[2U] 
	= (3U & __Vtemp490[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp494, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp495, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp496, __Vtemp494, __Vtemp495);
    __Vtemp497[0U] = __Vtemp496[0U];
    __Vtemp497[1U] = __Vtemp496[1U];
    __Vtemp497[2U] = (1U & __Vtemp496[2U]);
    VL_EXTEND_WW(66,65, __Vtemp498, __Vtemp497);
    VL_EXTEND_WI(66,32, __Vtemp499, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp500, __Vtemp498, __Vtemp499);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[0U] 
	= __Vtemp500[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[1U] 
	= __Vtemp500[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[2U] 
	= (3U & __Vtemp500[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp504, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp505, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp506, __Vtemp504, __Vtemp505);
    __Vtemp507[0U] = __Vtemp506[0U];
    __Vtemp507[1U] = __Vtemp506[1U];
    __Vtemp507[2U] = (1U & __Vtemp506[2U]);
    VL_EXTEND_WW(66,65, __Vtemp508, __Vtemp507);
    VL_EXTEND_WI(66,32, __Vtemp509, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp510, __Vtemp508, __Vtemp509);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[0U] 
	= __Vtemp510[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[1U] 
	= __Vtemp510[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[2U] 
	= (3U & __Vtemp510[2U]);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_19_ 
			       >> 0x10U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_25_ 
							 >> 0x10U))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_19_)) 
	   * (0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_25_)));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_25_ 
					   >> 0x10U))) 
		       - (0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_25_))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_19_ 
			       >> 0x10U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_25_ 
							 >> 0x10U))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_19_)) 
	   * (0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_25_)));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_25_ 
					   >> 0x10U))) 
		       - (0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_25_))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[2U] 
			<< 0x10U) | (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[1U] 
				     >> 0x10U))) * 
	   (0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[2U] 
			<< 0x10U) | (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[1U] 
				     >> 0x10U))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[1U]) 
	   * (0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[1U]));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[1U] 
			<< 0x10U) | (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[0U] 
				     >> 0x10U))) * 
	   (0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[1U] 
			<< 0x10U) | (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[0U] 
				     >> 0x10U))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[0U]) 
	   * (0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[0U]));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[2U] 
				    << 0x10U) | (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[1U] 
						 >> 0x10U))) 
		       - (0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[1U])));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & ((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[1U] 
				    << 0x10U) | (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[0U] 
						 >> 0x10U))) 
		       - (0xffffU & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[0U])));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[1U])) 
				  - (QData)((IData)(
						    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[0U]))));
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:418
    vlTOPp->__Vtableidx6 = (((7U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)) 
			     << 4U) | (((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) 
					<< 3U) | (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state)));
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready 
	= vlTOPp->__Vtable6_UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready
	[vlTOPp->__Vtableidx6];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_19_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_)
				    : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_ 
								>> 0x20U)))))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_)
				     ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_)
				     : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_)
						        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_)
				     ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_)
				     : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_)
						        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_)
				     ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_)
				     : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_)
						        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_)
				     ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_)
				     : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_)
						        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_25_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_)
				    : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_ 
								>> 0x20U)))))));
    vlTOPp->UartVdf__DOT__uartfsm__DOT__write_ready 
	= (1U & ((~ (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__write_m2sPipe_rValid)) 
		 | (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready)));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_19_)) 
		       - (0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_19_ 
					     >> 0x10U)))));
    VL_EXTEND_WQ(65,64, __Vtemp514, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp515, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp516, __Vtemp514, __Vtemp515);
    __Vtemp517[0U] = __Vtemp516[0U];
    __Vtemp517[1U] = __Vtemp516[1U];
    __Vtemp517[2U] = (1U & __Vtemp516[2U]);
    VL_EXTEND_WW(66,65, __Vtemp518, __Vtemp517);
    VL_EXTEND_WI(66,32, __Vtemp519, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp520, __Vtemp518, __Vtemp519);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[0U] 
	= __Vtemp520[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[1U] 
	= __Vtemp520[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[2U] 
	= (3U & __Vtemp520[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp524, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp525, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp526, __Vtemp524, __Vtemp525);
    __Vtemp527[0U] = __Vtemp526[0U];
    __Vtemp527[1U] = __Vtemp526[1U];
    __Vtemp527[2U] = (1U & __Vtemp526[2U]);
    VL_EXTEND_WW(66,65, __Vtemp528, __Vtemp527);
    VL_EXTEND_WI(66,32, __Vtemp529, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp530, __Vtemp528, __Vtemp529);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[0U] 
	= __Vtemp530[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[1U] 
	= __Vtemp530[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[2U] 
	= (3U & __Vtemp530[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp534, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp535, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp536, __Vtemp534, __Vtemp535);
    __Vtemp537[0U] = __Vtemp536[0U];
    __Vtemp537[1U] = __Vtemp536[1U];
    __Vtemp537[2U] = (1U & __Vtemp536[2U]);
    VL_EXTEND_WW(66,65, __Vtemp538, __Vtemp537);
    VL_EXTEND_WI(66,32, __Vtemp539, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp540, __Vtemp538, __Vtemp539);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[0U] 
	= __Vtemp540[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[1U] 
	= __Vtemp540[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[2U] 
	= (3U & __Vtemp540[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp544, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp545, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp546, __Vtemp544, __Vtemp545);
    __Vtemp547[0U] = __Vtemp546[0U];
    __Vtemp547[1U] = __Vtemp546[1U];
    __Vtemp547[2U] = (1U & __Vtemp546[2U]);
    VL_EXTEND_WW(66,65, __Vtemp548, __Vtemp547);
    VL_EXTEND_WI(66,32, __Vtemp549, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp550, __Vtemp548, __Vtemp549);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[0U] 
	= __Vtemp550[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[1U] 
	= __Vtemp550[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[2U] 
	= (3U & __Vtemp550[2U]);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_19_ 
			       >> 0x10U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_25_ 
							 >> 0x10U))));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_19_)) 
	   * (0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_25_)));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_25_ 
					   >> 0x10U))) 
		       - (0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_25_))));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1294
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
		    ? ((0xfU == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter))
		        ? 1U : 2U) : 1U);
	}
    }
    VL_EXTEND_WQ(128,64, __Vtemp554, (((QData)((IData)(
						       vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp555, __Vtemp554, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp556, __Vtemp555);
    VL_EXTEND_WQ(65,64, __Vtemp560, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp561, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp562, __Vtemp560, __Vtemp561);
    VL_EXTEND_WQ(65,64, __Vtemp563, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[0U]))));
    VL_SUB_W(3, __Vtemp564, __Vtemp562, __Vtemp563);
    __Vtemp565[0U] = __Vtemp564[0U];
    __Vtemp565[1U] = __Vtemp564[1U];
    __Vtemp565[2U] = (1U & __Vtemp564[2U]);
    VL_EXTEND_WW(97,65, __Vtemp566, __Vtemp565);
    VL_SHIFTL_WWI(97,97,32, __Vtemp567, __Vtemp566, 0x20U);
    __Vtemp568[0U] = __Vtemp567[0U];
    __Vtemp568[1U] = __Vtemp567[1U];
    __Vtemp568[2U] = __Vtemp567[2U];
    __Vtemp568[3U] = (1U & __Vtemp567[3U]);
    VL_EXTEND_WW(98,97, __Vtemp569, __Vtemp568);
    VL_EXTEND_WQ(65,64, __Vtemp572, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp573, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp574, __Vtemp572, __Vtemp573);
    __Vtemp575[0U] = __Vtemp574[0U];
    __Vtemp575[1U] = __Vtemp574[1U];
    __Vtemp575[2U] = (1U & __Vtemp574[2U]);
    VL_EXTEND_WW(66,65, __Vtemp576, __Vtemp575);
    VL_EXTEND_WQ(66,64, __Vtemp577, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp578, __Vtemp576, __Vtemp577);
    __Vtemp579[0U] = __Vtemp578[0U];
    __Vtemp579[1U] = __Vtemp578[1U];
    __Vtemp579[2U] = (3U & __Vtemp578[2U]);
    VL_EXTEND_WW(98,66, __Vtemp580, __Vtemp579);
    VL_SHIFTL_WWI(98,98,32, __Vtemp581, __Vtemp580, 0x20U);
    __Vtemp584[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_))
		       ? __Vtemp569[0U] : __Vtemp581[0U]);
    __Vtemp584[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_))
		       ? __Vtemp569[1U] : __Vtemp581[1U]);
    __Vtemp584[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_))
		       ? __Vtemp569[2U] : __Vtemp581[2U]);
    __Vtemp584[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_))
			     ? __Vtemp569[3U] : __Vtemp581[3U]));
    VL_EXTEND_WW(129,98, __Vtemp585, __Vtemp584);
    VL_ADD_W(5, __Vtemp586, __Vtemp556, __Vtemp585);
    __Vtemp587[0U] = __Vtemp586[0U];
    __Vtemp587[1U] = __Vtemp586[1U];
    __Vtemp587[2U] = __Vtemp586[2U];
    __Vtemp587[3U] = __Vtemp586[3U];
    __Vtemp587[4U] = (1U & __Vtemp586[4U]);
    VL_EXTEND_WW(130,129, __Vtemp588, __Vtemp587);
    VL_EXTEND_WQ(130,64, __Vtemp589, (((QData)((IData)(
						       vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(5, __Vtemp590, __Vtemp588, __Vtemp589);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[0U] 
	= __Vtemp590[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[1U] 
	= __Vtemp590[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[2U] 
	= __Vtemp590[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[3U] 
	= __Vtemp590[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[4U] 
	= (3U & __Vtemp590[4U]);
    VL_EXTEND_WQ(128,64, __Vtemp594, (((QData)((IData)(
						       vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp595, __Vtemp594, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp596, __Vtemp595);
    VL_EXTEND_WQ(65,64, __Vtemp600, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp601, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp602, __Vtemp600, __Vtemp601);
    VL_EXTEND_WQ(65,64, __Vtemp603, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[0U]))));
    VL_SUB_W(3, __Vtemp604, __Vtemp602, __Vtemp603);
    __Vtemp605[0U] = __Vtemp604[0U];
    __Vtemp605[1U] = __Vtemp604[1U];
    __Vtemp605[2U] = (1U & __Vtemp604[2U]);
    VL_EXTEND_WW(97,65, __Vtemp606, __Vtemp605);
    VL_SHIFTL_WWI(97,97,32, __Vtemp607, __Vtemp606, 0x20U);
    __Vtemp608[0U] = __Vtemp607[0U];
    __Vtemp608[1U] = __Vtemp607[1U];
    __Vtemp608[2U] = __Vtemp607[2U];
    __Vtemp608[3U] = (1U & __Vtemp607[3U]);
    VL_EXTEND_WW(98,97, __Vtemp609, __Vtemp608);
    VL_EXTEND_WQ(65,64, __Vtemp612, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp613, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp614, __Vtemp612, __Vtemp613);
    __Vtemp615[0U] = __Vtemp614[0U];
    __Vtemp615[1U] = __Vtemp614[1U];
    __Vtemp615[2U] = (1U & __Vtemp614[2U]);
    VL_EXTEND_WW(66,65, __Vtemp616, __Vtemp615);
    VL_EXTEND_WQ(66,64, __Vtemp617, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp618, __Vtemp616, __Vtemp617);
    __Vtemp619[0U] = __Vtemp618[0U];
    __Vtemp619[1U] = __Vtemp618[1U];
    __Vtemp619[2U] = (3U & __Vtemp618[2U]);
    VL_EXTEND_WW(98,66, __Vtemp620, __Vtemp619);
    VL_SHIFTL_WWI(98,98,32, __Vtemp621, __Vtemp620, 0x20U);
    __Vtemp624[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_))
		       ? __Vtemp609[0U] : __Vtemp621[0U]);
    __Vtemp624[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_))
		       ? __Vtemp609[1U] : __Vtemp621[1U]);
    __Vtemp624[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_))
		       ? __Vtemp609[2U] : __Vtemp621[2U]);
    __Vtemp624[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_))
			     ? __Vtemp609[3U] : __Vtemp621[3U]));
    VL_EXTEND_WW(129,98, __Vtemp625, __Vtemp624);
    VL_ADD_W(5, __Vtemp626, __Vtemp596, __Vtemp625);
    __Vtemp627[0U] = __Vtemp626[0U];
    __Vtemp627[1U] = __Vtemp626[1U];
    __Vtemp627[2U] = __Vtemp626[2U];
    __Vtemp627[3U] = __Vtemp626[3U];
    __Vtemp627[4U] = (1U & __Vtemp626[4U]);
    VL_EXTEND_WW(130,129, __Vtemp628, __Vtemp627);
    VL_EXTEND_WQ(130,64, __Vtemp629, (((QData)((IData)(
						       vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(5, __Vtemp630, __Vtemp628, __Vtemp629);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[0U] 
	= __Vtemp630[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[1U] 
	= __Vtemp630[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[2U] 
	= __Vtemp630[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[3U] 
	= __Vtemp630[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[4U] 
	= (3U & __Vtemp630[4U]);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_)
				     ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_)
				     : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_)
						        : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_ 
						       >> 0x10U)))));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1181
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
    VL_EXTEND_WQ(65,64, __Vtemp635, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp636, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp637, __Vtemp635, __Vtemp636);
    __Vtemp638[0U] = __Vtemp637[0U];
    __Vtemp638[1U] = __Vtemp637[1U];
    __Vtemp638[2U] = (1U & __Vtemp637[2U]);
    VL_EXTEND_WW(66,65, __Vtemp639, __Vtemp638);
    VL_EXTEND_WI(66,32, __Vtemp640, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp641, __Vtemp639, __Vtemp640);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[0U] 
	= __Vtemp641[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[1U] 
	= __Vtemp641[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[2U] 
	= (3U & __Vtemp641[2U]);
    VL_EXTEND_WQ(128,64, __Vtemp645, (((QData)((IData)(
						       vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp646, __Vtemp645, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp647, __Vtemp646);
    VL_EXTEND_WQ(65,64, __Vtemp651, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp652, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp653, __Vtemp651, __Vtemp652);
    VL_EXTEND_WQ(65,64, __Vtemp654, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[0U]))));
    VL_SUB_W(3, __Vtemp655, __Vtemp653, __Vtemp654);
    __Vtemp656[0U] = __Vtemp655[0U];
    __Vtemp656[1U] = __Vtemp655[1U];
    __Vtemp656[2U] = (1U & __Vtemp655[2U]);
    VL_EXTEND_WW(97,65, __Vtemp657, __Vtemp656);
    VL_SHIFTL_WWI(97,97,32, __Vtemp658, __Vtemp657, 0x20U);
    __Vtemp659[0U] = __Vtemp658[0U];
    __Vtemp659[1U] = __Vtemp658[1U];
    __Vtemp659[2U] = __Vtemp658[2U];
    __Vtemp659[3U] = (1U & __Vtemp658[3U]);
    VL_EXTEND_WW(98,97, __Vtemp660, __Vtemp659);
    VL_EXTEND_WQ(65,64, __Vtemp663, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp664, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp665, __Vtemp663, __Vtemp664);
    __Vtemp666[0U] = __Vtemp665[0U];
    __Vtemp666[1U] = __Vtemp665[1U];
    __Vtemp666[2U] = (1U & __Vtemp665[2U]);
    VL_EXTEND_WW(66,65, __Vtemp667, __Vtemp666);
    VL_EXTEND_WQ(66,64, __Vtemp668, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp669, __Vtemp667, __Vtemp668);
    __Vtemp670[0U] = __Vtemp669[0U];
    __Vtemp670[1U] = __Vtemp669[1U];
    __Vtemp670[2U] = (3U & __Vtemp669[2U]);
    VL_EXTEND_WW(98,66, __Vtemp671, __Vtemp670);
    VL_SHIFTL_WWI(98,98,32, __Vtemp672, __Vtemp671, 0x20U);
    __Vtemp675[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_))
		       ? __Vtemp660[0U] : __Vtemp672[0U]);
    __Vtemp675[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_))
		       ? __Vtemp660[1U] : __Vtemp672[1U]);
    __Vtemp675[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_))
		       ? __Vtemp660[2U] : __Vtemp672[2U]);
    __Vtemp675[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_))
			     ? __Vtemp660[3U] : __Vtemp672[3U]));
    VL_EXTEND_WW(129,98, __Vtemp676, __Vtemp675);
    VL_ADD_W(5, __Vtemp677, __Vtemp647, __Vtemp676);
    __Vtemp678[0U] = __Vtemp677[0U];
    __Vtemp678[1U] = __Vtemp677[1U];
    __Vtemp678[2U] = __Vtemp677[2U];
    __Vtemp678[3U] = __Vtemp677[3U];
    __Vtemp678[4U] = (1U & __Vtemp677[4U]);
    VL_EXTEND_WW(130,129, __Vtemp679, __Vtemp678);
    VL_EXTEND_WQ(130,64, __Vtemp680, (((QData)((IData)(
						       vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(5, __Vtemp681, __Vtemp679, __Vtemp680);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[0U] 
	= __Vtemp681[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[1U] 
	= __Vtemp681[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[2U] 
	= __Vtemp681[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[3U] 
	= __Vtemp681[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[4U] 
	= (3U & __Vtemp681[4U]);
    __Vtemp685[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[0U];
    __Vtemp685[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[1U];
    __Vtemp685[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[2U];
    __Vtemp685[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[3U];
    VL_EXTEND_WW(256,128, __Vtemp686, __Vtemp685);
    VL_SHIFTL_WWI(256,256,32, __Vtemp687, __Vtemp686, 0x80U);
    VL_EXTEND_WW(257,256, __Vtemp688, __Vtemp687);
    __Vtemp690[0U] = 0U;
    __Vtemp690[1U] = 0U;
    __Vtemp690[2U] = 0U;
    __Vtemp691[0U] = 0U;
    __Vtemp691[1U] = 0U;
    __Vtemp691[2U] = 0U;
    __Vtemp694[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[0U];
    __Vtemp694[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[1U];
    __Vtemp694[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[2U];
    __Vtemp694[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[3U];
    VL_EXTEND_WW(129,128, __Vtemp695, __Vtemp694);
    __Vtemp696[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[0U];
    __Vtemp696[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[1U];
    __Vtemp696[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[2U];
    __Vtemp696[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[3U];
    VL_EXTEND_WW(129,128, __Vtemp697, __Vtemp696);
    VL_ADD_W(5, __Vtemp698, __Vtemp695, __Vtemp697);
    __Vtemp699[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[0U];
    __Vtemp699[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[1U];
    __Vtemp699[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[2U];
    __Vtemp699[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[3U];
    VL_EXTEND_WW(129,128, __Vtemp700, __Vtemp699);
    VL_SUB_W(5, __Vtemp701, __Vtemp698, __Vtemp700);
    __Vtemp702[0U] = __Vtemp701[0U];
    __Vtemp702[1U] = __Vtemp701[1U];
    __Vtemp702[2U] = __Vtemp701[2U];
    __Vtemp702[3U] = __Vtemp701[3U];
    __Vtemp702[4U] = (1U & __Vtemp701[4U]);
    VL_EXTEND_WW(193,129, __Vtemp703, __Vtemp702);
    VL_SHIFTL_WWI(193,193,32, __Vtemp704, __Vtemp703, 0x40U);
    __Vtemp705[0U] = __Vtemp704[0U];
    __Vtemp705[1U] = __Vtemp704[1U];
    __Vtemp705[2U] = __Vtemp704[2U];
    __Vtemp705[3U] = __Vtemp704[3U];
    __Vtemp705[4U] = __Vtemp704[4U];
    __Vtemp705[5U] = __Vtemp704[5U];
    __Vtemp705[6U] = (1U & __Vtemp704[6U]);
    VL_EXTEND_WW(194,193, __Vtemp706, __Vtemp705);
    __Vtemp709[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[0U];
    __Vtemp709[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[1U];
    __Vtemp709[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[2U];
    __Vtemp709[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[3U];
    VL_EXTEND_WW(129,128, __Vtemp710, __Vtemp709);
    __Vtemp711[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[0U];
    __Vtemp711[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[1U];
    __Vtemp711[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[2U];
    __Vtemp711[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[3U];
    VL_EXTEND_WW(129,128, __Vtemp712, __Vtemp711);
    VL_ADD_W(5, __Vtemp713, __Vtemp710, __Vtemp712);
    __Vtemp714[0U] = __Vtemp713[0U];
    __Vtemp714[1U] = __Vtemp713[1U];
    __Vtemp714[2U] = __Vtemp713[2U];
    __Vtemp714[3U] = __Vtemp713[3U];
    __Vtemp714[4U] = (1U & __Vtemp713[4U]);
    VL_EXTEND_WW(130,129, __Vtemp715, __Vtemp714);
    __Vtemp716[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[0U];
    __Vtemp716[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[1U];
    __Vtemp716[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[2U];
    __Vtemp716[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[3U];
    VL_EXTEND_WW(130,128, __Vtemp717, __Vtemp716);
    VL_ADD_W(5, __Vtemp718, __Vtemp715, __Vtemp717);
    __Vtemp719[0U] = __Vtemp718[0U];
    __Vtemp719[1U] = __Vtemp718[1U];
    __Vtemp719[2U] = __Vtemp718[2U];
    __Vtemp719[3U] = __Vtemp718[3U];
    __Vtemp719[4U] = (3U & __Vtemp718[4U]);
    VL_EXTEND_WW(194,130, __Vtemp720, __Vtemp719);
    VL_SHIFTL_WWI(194,194,32, __Vtemp721, __Vtemp720, 0x40U);
    __Vtemp724[0U] = ((VL_GTS_IWW(1,65,65, __Vtemp690, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IWW(1,65,65, __Vtemp691, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp706[0U] : __Vtemp721[0U]);
    __Vtemp724[1U] = ((VL_GTS_IWW(1,65,65, __Vtemp690, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IWW(1,65,65, __Vtemp691, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp706[1U] : __Vtemp721[1U]);
    __Vtemp724[2U] = ((VL_GTS_IWW(1,65,65, __Vtemp690, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IWW(1,65,65, __Vtemp691, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp706[2U] : __Vtemp721[2U]);
    __Vtemp724[3U] = ((VL_GTS_IWW(1,65,65, __Vtemp690, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IWW(1,65,65, __Vtemp691, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp706[3U] : __Vtemp721[3U]);
    __Vtemp724[4U] = ((VL_GTS_IWW(1,65,65, __Vtemp690, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IWW(1,65,65, __Vtemp691, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp706[4U] : __Vtemp721[4U]);
    __Vtemp724[5U] = ((VL_GTS_IWW(1,65,65, __Vtemp690, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IWW(1,65,65, __Vtemp691, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp706[5U] : __Vtemp721[5U]);
    __Vtemp724[6U] = (3U & ((VL_GTS_IWW(1,65,65, __Vtemp690, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
			     ^ VL_GTS_IWW(1,65,65, __Vtemp691, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
			     ? __Vtemp706[6U] : __Vtemp721[6U]));
    VL_EXTEND_WW(257,194, __Vtemp725, __Vtemp724);
    VL_ADD_W(9, __Vtemp726, __Vtemp688, __Vtemp725);
    __Vtemp727[0U] = __Vtemp726[0U];
    __Vtemp727[1U] = __Vtemp726[1U];
    __Vtemp727[2U] = __Vtemp726[2U];
    __Vtemp727[3U] = __Vtemp726[3U];
    __Vtemp727[4U] = __Vtemp726[4U];
    __Vtemp727[5U] = __Vtemp726[5U];
    __Vtemp727[6U] = __Vtemp726[6U];
    __Vtemp727[7U] = __Vtemp726[7U];
    __Vtemp727[8U] = (1U & __Vtemp726[8U]);
    VL_EXTEND_WW(258,257, __Vtemp728, __Vtemp727);
    __Vtemp729[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[0U];
    __Vtemp729[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[1U];
    __Vtemp729[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[2U];
    __Vtemp729[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[3U];
    VL_EXTEND_WW(258,128, __Vtemp730, __Vtemp729);
    VL_ADD_W(9, __Vtemp731, __Vtemp728, __Vtemp730);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U] 
	= __Vtemp731[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U] 
	= __Vtemp731[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U] 
	= __Vtemp731[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U] 
	= __Vtemp731[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U] 
	= __Vtemp731[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[5U] 
	= __Vtemp731[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[6U] 
	= __Vtemp731[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[7U] 
	= __Vtemp731[7U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[8U] 
	= (3U & __Vtemp731[8U]);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1749
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[3U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[4U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[5U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[6U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[7U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg)))) {
		    __Vtemp733[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
		    __Vtemp733[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
		    __Vtemp733[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
		    __Vtemp733[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
		    __Vtemp733[4U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U];
		    __Vtemp733[5U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[5U];
		    __Vtemp733[6U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[6U];
		    __Vtemp733[7U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[7U];
		    VL_EXTEND_WW(384,256, __Vtemp734, __Vtemp733);
		    VL_SHIFTL_WWI(384,384,32, __Vtemp735, __Vtemp734, 0x80U);
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[0U] 
			= __Vtemp735[0U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[1U] 
			= __Vtemp735[1U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[2U] 
			= __Vtemp735[2U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[3U] 
			= __Vtemp735[3U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[4U] 
			= __Vtemp735[4U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[5U] 
			= __Vtemp735[5U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[6U] 
			= __Vtemp735[6U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[7U] 
			= __Vtemp735[7U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1831
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[3U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[4U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[5U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[6U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[7U] = 0U;
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
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[4U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[5U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[5U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[6U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[6U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out[7U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[7U];
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
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_7_[4U] 
	= (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U] 
	   & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[4U]);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_7_[5U] 
	= (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[5U] 
	   & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[5U]);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_7_[6U] 
	= (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[6U] 
	   & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[6U]);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_7_[7U] 
	= (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[7U] 
	   & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask[7U]);
    __Vtemp740[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
    __Vtemp740[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
    __Vtemp740[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
    __Vtemp740[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
    __Vtemp740[4U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U];
    __Vtemp740[5U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[5U];
    __Vtemp740[6U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[6U];
    __Vtemp740[7U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[7U];
    VL_EXTEND_WW(384,256, __Vtemp741, __Vtemp740);
    VL_SHIFTL_WWI(384,384,32, __Vtemp742, __Vtemp741, 0x80U);
    __Vtemp743[0U] = __Vtemp742[0U];
    __Vtemp743[1U] = __Vtemp742[1U];
    __Vtemp743[2U] = __Vtemp742[2U];
    __Vtemp743[3U] = __Vtemp742[3U];
    __Vtemp743[4U] = __Vtemp742[4U];
    __Vtemp743[5U] = __Vtemp742[5U];
    __Vtemp743[6U] = __Vtemp742[6U];
    __Vtemp743[7U] = __Vtemp742[7U];
    VL_ADD_W(8, __Vtemp744, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2, __Vtemp743);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[0U] 
	= __Vtemp744[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[1U] 
	= __Vtemp744[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[2U] 
	= __Vtemp744[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[3U] 
	= __Vtemp744[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[4U] 
	= __Vtemp744[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[5U] 
	= __Vtemp744[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[6U] 
	= __Vtemp744[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[7U] 
	= __Vtemp744[7U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1885
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[3U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[4U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[5U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[6U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[7U] = 0U;
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
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[4U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_7_[4U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[5U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_7_[5U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[6U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_7_[6U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out[7U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_7_[7U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1776
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[3U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[4U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[5U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[6U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[7U] = 0U;
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
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[4U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[4U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[5U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[5U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[6U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[6U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out[7U] 
			= vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[7U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1803
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[0U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[1U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[2U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[3U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[4U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[5U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[6U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[7U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		VL_SHIFTR_WWI(256,256,13, __Vtemp745, vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_, 
			      (0x1fffU & ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k) 
					  << 4U)));
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[0U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[0U]
		        : __Vtemp745[0U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[1U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[1U]
		        : __Vtemp745[1U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[2U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[2U]
		        : __Vtemp745[2U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[3U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[3U]
		        : __Vtemp745[3U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[4U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[4U]
		        : __Vtemp745[4U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[5U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[5U]
		        : __Vtemp745[5U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[6U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[6U]
		        : __Vtemp745[6U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[7U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[7U]
		        : __Vtemp745[7U]);
	    }
	}
    }
}
