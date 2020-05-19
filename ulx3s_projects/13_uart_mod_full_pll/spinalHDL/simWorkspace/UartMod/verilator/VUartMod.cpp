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
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__fsmIn_inCounter,6,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_outCounter,3,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__fsmIn_stateReg,2,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_stateReg,1,0);
    VL_SIGW(__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7,255,0,8);
    VL_SIGW(__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8,255,0,8);
    VL_SIGW(__Vtemp6,255,0,8);
    VL_SIGW(__Vtemp7,255,0,8);
    VL_SIGW(__Vtemp8,255,0,8);
    VL_SIGW(__Vtemp9,255,0,8);
    VL_SIGW(__Vtemp18,255,0,8);
    VL_SIGW(__Vtemp19,255,0,8);
    VL_SIGW(__Vtemp21,159,0,5);
    VL_SIGW(__Vtemp22,159,0,5);
    VL_SIGW(__Vtemp23,159,0,5);
    VL_SIGW(__Vtemp24,255,0,8);
    VL_SIGW(__Vtemp25,255,0,8);
    VL_SIGW(__Vtemp27,159,0,5);
    VL_SIGW(__Vtemp28,159,0,5);
    VL_SIGW(__Vtemp29,159,0,5);
    VL_SIGW(__Vtemp30,159,0,5);
    VL_SIGW(__Vtemp31,255,0,8);
    VL_SIGW(__Vtemp32,255,0,8);
    VL_SIGW(__Vtemp34,159,0,5);
    VL_SIGW(__Vtemp35,159,0,5);
    VL_SIGW(__Vtemp36,159,0,5);
    VL_SIGW(__Vtemp37,255,0,8);
    VL_SIGW(__Vtemp38,255,0,8);
    VL_SIGW(__Vtemp39,255,0,8);
    VL_SIGW(__Vtemp40,255,0,8);
    VL_SIGW(__Vtemp42,159,0,5);
    VL_SIGW(__Vtemp43,159,0,5);
    VL_SIGW(__Vtemp44,159,0,5);
    VL_SIGW(__Vtemp45,255,0,8);
    VL_SIGW(__Vtemp47,159,0,5);
    VL_SIGW(__Vtemp48,159,0,5);
    VL_SIGW(__Vtemp49,159,0,5);
    VL_SIGW(__Vtemp50,159,0,5);
    VL_SIGW(__Vtemp51,255,0,8);
    VL_SIGW(__Vtemp53,159,0,5);
    VL_SIGW(__Vtemp54,159,0,5);
    VL_SIGW(__Vtemp55,159,0,5);
    VL_SIGW(__Vtemp56,255,0,8);
    VL_SIGW(__Vtemp57,255,0,8);
    VL_SIGW(__Vtemp59,255,0,8);
    VL_SIGW(__Vtemp60,255,0,8);
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
    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[4U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[4U];
    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[5U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[5U];
    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[6U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[6U];
    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[7U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[7U];
    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[0U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[0U];
    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[1U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[1U];
    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[2U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[2U];
    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[3U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[3U];
    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[4U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[4U];
    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[5U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[5U];
    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[6U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[6U];
    __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[7U] 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[7U];
    vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_stateReg 
	= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:948
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter = 0U;
    } else {
	vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
	    = (0xfffffU & (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
			   - (IData)(1U)));
	if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick) {
	    vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter = 0x40U;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:439
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:2026
    if (vlTOPp->reset) {
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_a[0U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_a[1U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_a[2U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_a[3U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_b[0U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_b[1U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_b[2U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_b[3U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n[0U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n[1U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n[2U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n[3U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[0U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[1U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[2U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[3U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[4U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[0U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[1U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[2U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[3U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[4U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[5U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[6U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[7U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[0U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[1U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[2U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[3U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[4U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[5U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[6U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[7U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[0U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[1U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[2U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[3U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[4U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[5U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[6U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[7U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[0U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[1U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[2U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[3U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[4U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[5U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[6U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[7U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[0U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[1U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[2U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[3U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[4U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[5U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[6U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[7U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[0U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[1U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[2U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[3U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[4U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[5U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[6U] = 0U;
	__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[7U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[0U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[1U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[2U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[3U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[4U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[5U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[6U] = 0U;
	vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[7U] = 0U;
	vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_stateReg = 0U;
    } else {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 3U)))) {
	    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		if ((2U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		    if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[0U] 
			    = ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[0U]
			        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[0U]
				    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[0U]
				        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[0U]
					    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[0U]))));
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[1U] 
			    = ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[1U]
			        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[1U]
				    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[1U]
				        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[1U]
					    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[1U]))));
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[2U] 
			    = ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[2U]
			        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[2U]
				    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[2U]
				        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[2U]
					    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[2U]))));
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[3U] 
			    = ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[3U]
			        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[3U]
				    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[3U]
				        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[3U]
					    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[3U]))));
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[4U] 
			    = ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[4U]
			        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[4U]
				    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[4U]
				        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[4U]
					    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[4U]))));
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[5U] 
			    = ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[5U]
			        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[5U]
				    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[5U]
				        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[5U]
					    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[5U]))));
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[6U] 
			    = ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[6U]
			        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[6U]
				    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[6U]
				        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[6U]
					    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[6U]))));
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret[7U] 
			    = ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[7U]
			        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_)
				    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[7U]
				    : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_13_)
				        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[7U]
				        : ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_14_)
					    ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[7U]
					    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[7U]))));
		    } else {
			__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[0U] 
			    = ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[0U]
			        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[0U]);
			__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[1U] 
			    = ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[1U]
			        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[1U]);
			__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[2U] 
			    = ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[2U]
			        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[2U]);
			__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[3U] 
			    = ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[3U]
			        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[3U]);
			__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[4U] 
			    = ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[4U]
			        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[4U]);
			__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[5U] 
			    = ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[5U]
			        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[5U]);
			__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[6U] 
			    = ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[6U]
			        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[6U]);
			__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[7U] 
			    = ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_)
			        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[7U]
			        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[7U]);
		    }
		} else {
		    if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
			__Vtemp6[0U] = 0xffffffffU;
			__Vtemp6[1U] = 0xffffffffU;
			__Vtemp6[2U] = 0xffffffffU;
			__Vtemp6[3U] = 0xffffffffU;
			__Vtemp6[4U] = 0xffffffffU;
			__Vtemp6[5U] = 0xffffffffU;
			__Vtemp6[6U] = 0xffffffffU;
			__Vtemp6[7U] = 0xffffffffU;
			VL_SHIFTR_WWI(256,256,13, __Vtemp7, __Vtemp6, 
				      (0x1fffU & ((IData)(0x100U) 
						  - 
						  ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_26_) 
						   << 4U))));
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[0U] 
			    = __Vtemp7[0U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[1U] 
			    = __Vtemp7[1U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[2U] 
			    = __Vtemp7[2U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[3U] 
			    = __Vtemp7[3U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[4U] 
			    = __Vtemp7[4U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[5U] 
			    = __Vtemp7[5U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[6U] 
			    = __Vtemp7[6U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[7U] 
			    = __Vtemp7[7U];
			VL_SUB_W(8, __Vtemp8, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_);
			__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[0U] 
			    = __Vtemp8[0U];
			__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[1U] 
			    = __Vtemp8[1U];
			__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[2U] 
			    = __Vtemp8[2U];
			__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[3U] 
			    = __Vtemp8[3U];
			__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[4U] 
			    = __Vtemp8[4U];
			__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[5U] 
			    = __Vtemp8[5U];
			__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[6U] 
			    = __Vtemp8[6U];
			__Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[7U] 
			    = __Vtemp8[7U];
		    } else {
			VL_SHIFTR_WWI(256,256,13, __Vtemp9, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_, (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_22_));
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[0U] 
			    = __Vtemp9[0U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[1U] 
			    = __Vtemp9[1U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[2U] 
			    = __Vtemp9[2U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[3U] 
			    = __Vtemp9[3U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[4U] 
			    = __Vtemp9[4U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[5U] 
			    = __Vtemp9[5U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[6U] 
			    = __Vtemp9[6U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[7U] 
			    = __Vtemp9[7U];
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
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[4U] 
			    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[5U] 
			    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[5U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[6U] 
			    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[6U];
			vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[7U] 
			    = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[7U];
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
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[4U] 
				= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[5U] 
				= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[5U];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[6U] 
				= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[6U];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[7U] 
				= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[7U];
			}
		    }
		} else {
		    if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
			if (vlTOPp->UartMod__DOT__uartfsm_io_toFnct_valid) {
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_a[0U] 
				= vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0U];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_a[1U] 
				= vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[1U];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_a[2U] 
				= vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[2U];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_a[3U] 
				= vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[3U];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_b[0U] 
				= vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[4U];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_b[1U] 
				= vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[5U];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_b[2U] 
				= vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[6U];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_b[3U] 
				= vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[7U];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n[0U] 
				= vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[8U];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n[1U] 
				= vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[9U];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n[2U] 
				= vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0xaU];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n[3U] 
				= vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0xbU];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[0U] 
				= vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0xcU];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[1U] 
				= vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0xdU];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[2U] 
				= vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0xeU];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[3U] 
				= vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0xfU];
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[4U] 
				= (0xffU & vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0x10U]);
			    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k 
				= (0xffU & (vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0x10U] 
					    >> 8U));
			}
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
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[4U] 
	= __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[4U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[5U] 
	= __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[5U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[6U] 
	= __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[6U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[7U] 
	= __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_7[7U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[0U] 
	= __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[1U] 
	= __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[2U] 
	= __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[3U] 
	= __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[3U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[4U] 
	= __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[4U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[5U] 
	= __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[5U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[6U] 
	= __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[6U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8[7U] 
	= __Vdly__UartMod__DOT__multmod_1___DOT__fsm_temp_8[7U];
    vlTOPp->io_uart_txd = vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1319
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
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[9U] = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0xaU] = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0xbU] = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0xcU] = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0xdU] = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0xeU] = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0xfU] = 0U;
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0x10U] = 0U;
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
			= (0x7fU & ((IData)(1U) + (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_inCounter)));
		} else {
		    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) {
			vlTOPp->UartMod__DOT__uartfsm__DOT____Vlvbound1 
			    = vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
			if ((0x20fU >= (0x3ffU & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT___zz_5_)))) {
			    VL_ASSIGNSEL_WIII(8,(0x3ffU 
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
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[7U] = 0U;
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[8U] = 0U;
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[9U] = 0U;
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0xaU] = 0U;
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0xbU] = 0U;
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0xcU] = 0U;
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0xdU] = 0U;
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0xeU] = 0U;
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0xfU] = 0U;
	    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0x10U] = 0U;
	}
	__Vdly__UartMod__DOT__uartfsm__DOT__fsmOut_stateReg 
	    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateNext;
	__Vdly__UartMod__DOT__uartfsm__DOT__fsmIn_stateReg 
	    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext;
    }
    __Vtemp18[0U] = 0U;
    __Vtemp18[1U] = 0U;
    __Vtemp18[2U] = 0U;
    __Vtemp18[3U] = 0U;
    __Vtemp18[4U] = 0U;
    __Vtemp18[5U] = 0U;
    __Vtemp18[6U] = 0U;
    __Vtemp18[7U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_ 
	= VL_GTS_IWW(1,256,256, __Vtemp18, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7);
    VL_ADD_W(8, __Vtemp19, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[0U] 
	= __Vtemp19[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[1U] 
	= __Vtemp19[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[2U] 
	= __Vtemp19[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[3U] 
	= __Vtemp19[3U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[4U] 
	= __Vtemp19[4U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[5U] 
	= __Vtemp19[5U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[6U] 
	= __Vtemp19[6U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[7U] 
	= __Vtemp19[7U];
    VL_EXTEND_WW(131,128, __Vtemp21, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(131,131,32, __Vtemp22, __Vtemp21, 2U);
    __Vtemp23[0U] = __Vtemp22[0U];
    __Vtemp23[1U] = __Vtemp22[1U];
    __Vtemp23[2U] = __Vtemp22[2U];
    __Vtemp23[3U] = __Vtemp22[3U];
    __Vtemp23[4U] = (7U & __Vtemp22[4U]);
    VL_EXTEND_WW(256,131, __Vtemp24, __Vtemp23);
    VL_SUB_W(8, __Vtemp25, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp24);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[0U] 
	= __Vtemp25[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[1U] 
	= __Vtemp25[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[2U] 
	= __Vtemp25[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[3U] 
	= __Vtemp25[3U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[4U] 
	= __Vtemp25[4U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[5U] 
	= __Vtemp25[5U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[6U] 
	= __Vtemp25[6U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[7U] 
	= __Vtemp25[7U];
    __Vtemp27[0U] = 3U;
    __Vtemp27[1U] = 0U;
    __Vtemp27[2U] = 0U;
    __Vtemp27[3U] = 0U;
    __Vtemp27[4U] = 0U;
    VL_EXTEND_WW(130,128, __Vtemp28, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_MUL_W(5, __Vtemp29, __Vtemp27, __Vtemp28);
    __Vtemp30[0U] = __Vtemp29[0U];
    __Vtemp30[1U] = __Vtemp29[1U];
    __Vtemp30[2U] = __Vtemp29[2U];
    __Vtemp30[3U] = __Vtemp29[3U];
    __Vtemp30[4U] = (3U & __Vtemp29[4U]);
    VL_EXTEND_WW(256,130, __Vtemp31, __Vtemp30);
    VL_SUB_W(8, __Vtemp32, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp31);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[0U] 
	= __Vtemp32[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[1U] 
	= __Vtemp32[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[2U] 
	= __Vtemp32[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[3U] 
	= __Vtemp32[3U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[4U] 
	= __Vtemp32[4U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[5U] 
	= __Vtemp32[5U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[6U] 
	= __Vtemp32[6U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[7U] 
	= __Vtemp32[7U];
    VL_EXTEND_WW(130,128, __Vtemp34, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(130,130,32, __Vtemp35, __Vtemp34, 1U);
    __Vtemp36[0U] = __Vtemp35[0U];
    __Vtemp36[1U] = __Vtemp35[1U];
    __Vtemp36[2U] = __Vtemp35[2U];
    __Vtemp36[3U] = __Vtemp35[3U];
    __Vtemp36[4U] = (3U & __Vtemp35[4U]);
    VL_EXTEND_WW(256,130, __Vtemp37, __Vtemp36);
    VL_SUB_W(8, __Vtemp38, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp37);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[0U] 
	= __Vtemp38[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[1U] 
	= __Vtemp38[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[2U] 
	= __Vtemp38[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[3U] 
	= __Vtemp38[3U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[4U] 
	= __Vtemp38[4U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[5U] 
	= __Vtemp38[5U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[6U] 
	= __Vtemp38[6U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[7U] 
	= __Vtemp38[7U];
    VL_EXTEND_WW(256,128, __Vtemp39, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SUB_W(8, __Vtemp40, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp39);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[0U] 
	= __Vtemp40[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[1U] 
	= __Vtemp40[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[2U] 
	= __Vtemp40[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[3U] 
	= __Vtemp40[3U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[4U] 
	= __Vtemp40[4U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[5U] 
	= __Vtemp40[5U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[6U] 
	= __Vtemp40[6U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[7U] 
	= __Vtemp40[7U];
    VL_EXTEND_WW(131,128, __Vtemp42, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(131,131,32, __Vtemp43, __Vtemp42, 2U);
    __Vtemp44[0U] = __Vtemp43[0U];
    __Vtemp44[1U] = __Vtemp43[1U];
    __Vtemp44[2U] = __Vtemp43[2U];
    __Vtemp44[3U] = __Vtemp43[3U];
    __Vtemp44[4U] = (7U & __Vtemp43[4U]);
    VL_EXTEND_WW(256,131, __Vtemp45, __Vtemp44);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_ 
	= VL_LT_W(8, __Vtemp45, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8);
    __Vtemp47[0U] = 3U;
    __Vtemp47[1U] = 0U;
    __Vtemp47[2U] = 0U;
    __Vtemp47[3U] = 0U;
    __Vtemp47[4U] = 0U;
    VL_EXTEND_WW(130,128, __Vtemp48, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_MUL_W(5, __Vtemp49, __Vtemp47, __Vtemp48);
    __Vtemp50[0U] = __Vtemp49[0U];
    __Vtemp50[1U] = __Vtemp49[1U];
    __Vtemp50[2U] = __Vtemp49[2U];
    __Vtemp50[3U] = __Vtemp49[3U];
    __Vtemp50[4U] = (3U & __Vtemp49[4U]);
    VL_EXTEND_WW(256,130, __Vtemp51, __Vtemp50);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_ 
	= VL_LT_W(8, __Vtemp51, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8);
    VL_EXTEND_WW(130,128, __Vtemp53, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(130,130,32, __Vtemp54, __Vtemp53, 1U);
    __Vtemp55[0U] = __Vtemp54[0U];
    __Vtemp55[1U] = __Vtemp54[1U];
    __Vtemp55[2U] = __Vtemp54[2U];
    __Vtemp55[3U] = __Vtemp54[3U];
    __Vtemp55[4U] = (3U & __Vtemp54[4U]);
    VL_EXTEND_WW(256,130, __Vtemp56, __Vtemp55);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_13_ 
	= VL_LT_W(8, __Vtemp56, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8);
    VL_EXTEND_WW(256,128, __Vtemp57, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_14_ 
	= VL_LT_W(8, __Vtemp57, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_8);
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
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_[4U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[4U] 
	   & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[4U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_[5U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[5U] 
	   & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[5U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_[6U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[6U] 
	   & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[6U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_[7U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult[7U] 
	   & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[7U]);
    VL_SHIFTR_WWI(256,256,13, __Vtemp59, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult, 
		  (0x1fffU & ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k) 
			      << 4U)));
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[0U] 
	= __Vtemp59[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[1U] 
	= __Vtemp59[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[2U] 
	= __Vtemp59[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[3U] 
	= __Vtemp59[3U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[4U] 
	= __Vtemp59[4U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[5U] 
	= __Vtemp59[5U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[6U] 
	= __Vtemp59[6U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[7U] 
	= __Vtemp59[7U];
    VL_SHIFTR_WWI(256,256,13, __Vtemp60, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult, 
		  (0x1fffU & ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k) 
			      << 4U)));
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[0U] 
	= __Vtemp60[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[1U] 
	= __Vtemp60[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[2U] 
	= __Vtemp60[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[3U] 
	= __Vtemp60[3U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[4U] 
	= __Vtemp60[4U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[5U] 
	= __Vtemp60[5U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[6U] 
	= __Vtemp60[6U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[7U] 
	= __Vtemp60[7U];
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
    vlTOPp->UartMod__DOT__uartfsm__DOT___zz_5_ = (0x7ffU 
						  & ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_inCounter) 
						     << 3U));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1171
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1236
    vlTOPp->UartMod__DOT__uartfsm__DOT__write_valid = 0U;
    if ((1U != (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    vlTOPp->UartMod__DOT__uartfsm__DOT__write_valid = 1U;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1201
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[1U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[2U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[3U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[4U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[5U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[6U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[7U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[8U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[9U] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0xaU] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0xbU] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0xcU] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0xdU] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0xeU] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0xfU] = 0U;
    vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0x10U] = 0U;
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
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[9U] 
		    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[9U];
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0xaU] 
		    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0xaU];
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0xbU] 
		    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0xbU];
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0xcU] 
		    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0xcU];
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0xdU] 
		    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0xdU];
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0xeU] 
		    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0xeU];
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0xfU] 
		    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0xfU];
		vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload[0x10U] 
		    = vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer[0x10U];
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1151
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1218
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
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value,2,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity,0,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter,2,0);
    VL_SIG8(__Vdly__UartMod__DOT__multmod_1___DOT___zz_1_,1,0);
    VL_SIG16(__Vtableidx14,9,0);
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1372
    if (vlTOPp->UartMod__DOT__uartfsm__DOT__write_ready) {
	vlTOPp->UartMod__DOT__uartfsm__DOT__write_m2sPipe_rData 
	    = vlTOPp->UartMod__DOT__uartfsm__DOT__write_payload;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:485
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:701
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:2102
    __Vtableidx14 = (((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateNext) 
		      << 6U) | (((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_1_) 
				 << 4U) | (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)));
    if (vlTOPp->__Vtablechg14[__Vtableidx14]) {
	__Vdly__UartMod__DOT__multmod_1___DOT___zz_1_ 
	    = vlTOPp->__Vtable14_UartMod__DOT__multmod_1___DOT___zz_1_
	    [__Vtableidx14];
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
    VL_SIGW(__Vtemp428,255,0,8);
    VL_SIGW(__Vtemp438,127,0,4);
    VL_SIGW(__Vtemp445,95,0,3);
    VL_SIGW(__Vtemp446,95,0,3);
    VL_SIGW(__Vtemp447,95,0,3);
    VL_SIGW(__Vtemp450,95,0,3);
    VL_SIGW(__Vtemp451,95,0,3);
    VL_SIGW(__Vtemp452,95,0,3);
    VL_SIGW(__Vtemp458,95,0,3);
    VL_SIGW(__Vtemp459,95,0,3);
    VL_SIGW(__Vtemp460,95,0,3);
    VL_SIGW(__Vtemp465,95,0,3);
    VL_SIGW(__Vtemp466,95,0,3);
    VL_SIGW(__Vtemp467,95,0,3);
    VL_SIGW(__Vtemp472,95,0,3);
    VL_SIGW(__Vtemp473,95,0,3);
    VL_SIGW(__Vtemp474,95,0,3);
    VL_SIGW(__Vtemp475,95,0,3);
    VL_SIGW(__Vtemp476,95,0,3);
    VL_SIGW(__Vtemp477,95,0,3);
    VL_SIGW(__Vtemp478,95,0,3);
    VL_SIGW(__Vtemp482,95,0,3);
    VL_SIGW(__Vtemp483,95,0,3);
    VL_SIGW(__Vtemp484,95,0,3);
    VL_SIGW(__Vtemp485,95,0,3);
    VL_SIGW(__Vtemp486,95,0,3);
    VL_SIGW(__Vtemp487,95,0,3);
    VL_SIGW(__Vtemp488,95,0,3);
    VL_SIGW(__Vtemp492,95,0,3);
    VL_SIGW(__Vtemp493,95,0,3);
    VL_SIGW(__Vtemp494,95,0,3);
    VL_SIGW(__Vtemp495,95,0,3);
    VL_SIGW(__Vtemp496,95,0,3);
    VL_SIGW(__Vtemp497,95,0,3);
    VL_SIGW(__Vtemp498,95,0,3);
    VL_SIGW(__Vtemp502,95,0,3);
    VL_SIGW(__Vtemp503,95,0,3);
    VL_SIGW(__Vtemp504,95,0,3);
    VL_SIGW(__Vtemp505,95,0,3);
    VL_SIGW(__Vtemp506,95,0,3);
    VL_SIGW(__Vtemp507,95,0,3);
    VL_SIGW(__Vtemp508,95,0,3);
    VL_SIGW(__Vtemp512,95,0,3);
    VL_SIGW(__Vtemp513,95,0,3);
    VL_SIGW(__Vtemp514,95,0,3);
    VL_SIGW(__Vtemp515,95,0,3);
    VL_SIGW(__Vtemp516,95,0,3);
    VL_SIGW(__Vtemp517,95,0,3);
    VL_SIGW(__Vtemp518,95,0,3);
    VL_SIGW(__Vtemp522,95,0,3);
    VL_SIGW(__Vtemp523,95,0,3);
    VL_SIGW(__Vtemp524,95,0,3);
    VL_SIGW(__Vtemp525,95,0,3);
    VL_SIGW(__Vtemp526,95,0,3);
    VL_SIGW(__Vtemp527,95,0,3);
    VL_SIGW(__Vtemp528,95,0,3);
    VL_SIGW(__Vtemp532,95,0,3);
    VL_SIGW(__Vtemp533,95,0,3);
    VL_SIGW(__Vtemp534,95,0,3);
    VL_SIGW(__Vtemp535,95,0,3);
    VL_SIGW(__Vtemp536,95,0,3);
    VL_SIGW(__Vtemp537,95,0,3);
    VL_SIGW(__Vtemp538,95,0,3);
    VL_SIGW(__Vtemp542,95,0,3);
    VL_SIGW(__Vtemp543,95,0,3);
    VL_SIGW(__Vtemp544,95,0,3);
    VL_SIGW(__Vtemp545,95,0,3);
    VL_SIGW(__Vtemp546,95,0,3);
    VL_SIGW(__Vtemp547,95,0,3);
    VL_SIGW(__Vtemp548,95,0,3);
    VL_SIGW(__Vtemp552,127,0,4);
    VL_SIGW(__Vtemp553,127,0,4);
    VL_SIGW(__Vtemp554,159,0,5);
    VL_SIGW(__Vtemp558,95,0,3);
    VL_SIGW(__Vtemp559,95,0,3);
    VL_SIGW(__Vtemp560,95,0,3);
    VL_SIGW(__Vtemp561,95,0,3);
    VL_SIGW(__Vtemp562,95,0,3);
    VL_SIGW(__Vtemp563,95,0,3);
    VL_SIGW(__Vtemp564,127,0,4);
    VL_SIGW(__Vtemp565,127,0,4);
    VL_SIGW(__Vtemp566,127,0,4);
    VL_SIGW(__Vtemp567,127,0,4);
    VL_SIGW(__Vtemp570,95,0,3);
    VL_SIGW(__Vtemp571,95,0,3);
    VL_SIGW(__Vtemp572,95,0,3);
    VL_SIGW(__Vtemp573,95,0,3);
    VL_SIGW(__Vtemp574,95,0,3);
    VL_SIGW(__Vtemp575,95,0,3);
    VL_SIGW(__Vtemp576,95,0,3);
    VL_SIGW(__Vtemp577,95,0,3);
    VL_SIGW(__Vtemp578,127,0,4);
    VL_SIGW(__Vtemp579,127,0,4);
    VL_SIGW(__Vtemp582,127,0,4);
    VL_SIGW(__Vtemp583,159,0,5);
    VL_SIGW(__Vtemp584,159,0,5);
    VL_SIGW(__Vtemp585,159,0,5);
    VL_SIGW(__Vtemp586,159,0,5);
    VL_SIGW(__Vtemp587,159,0,5);
    VL_SIGW(__Vtemp588,159,0,5);
    VL_SIGW(__Vtemp592,127,0,4);
    VL_SIGW(__Vtemp593,127,0,4);
    VL_SIGW(__Vtemp594,159,0,5);
    VL_SIGW(__Vtemp598,95,0,3);
    VL_SIGW(__Vtemp599,95,0,3);
    VL_SIGW(__Vtemp600,95,0,3);
    VL_SIGW(__Vtemp601,95,0,3);
    VL_SIGW(__Vtemp602,95,0,3);
    VL_SIGW(__Vtemp603,95,0,3);
    VL_SIGW(__Vtemp604,127,0,4);
    VL_SIGW(__Vtemp605,127,0,4);
    VL_SIGW(__Vtemp606,127,0,4);
    VL_SIGW(__Vtemp607,127,0,4);
    VL_SIGW(__Vtemp610,95,0,3);
    VL_SIGW(__Vtemp611,95,0,3);
    VL_SIGW(__Vtemp612,95,0,3);
    VL_SIGW(__Vtemp613,95,0,3);
    VL_SIGW(__Vtemp614,95,0,3);
    VL_SIGW(__Vtemp615,95,0,3);
    VL_SIGW(__Vtemp616,95,0,3);
    VL_SIGW(__Vtemp617,95,0,3);
    VL_SIGW(__Vtemp618,127,0,4);
    VL_SIGW(__Vtemp619,127,0,4);
    VL_SIGW(__Vtemp622,127,0,4);
    VL_SIGW(__Vtemp623,159,0,5);
    VL_SIGW(__Vtemp624,159,0,5);
    VL_SIGW(__Vtemp625,159,0,5);
    VL_SIGW(__Vtemp626,159,0,5);
    VL_SIGW(__Vtemp627,159,0,5);
    VL_SIGW(__Vtemp628,159,0,5);
    VL_SIGW(__Vtemp633,95,0,3);
    VL_SIGW(__Vtemp634,95,0,3);
    VL_SIGW(__Vtemp635,95,0,3);
    VL_SIGW(__Vtemp636,95,0,3);
    VL_SIGW(__Vtemp637,95,0,3);
    VL_SIGW(__Vtemp638,95,0,3);
    VL_SIGW(__Vtemp639,95,0,3);
    VL_SIGW(__Vtemp643,127,0,4);
    VL_SIGW(__Vtemp644,127,0,4);
    VL_SIGW(__Vtemp645,159,0,5);
    VL_SIGW(__Vtemp649,95,0,3);
    VL_SIGW(__Vtemp650,95,0,3);
    VL_SIGW(__Vtemp651,95,0,3);
    VL_SIGW(__Vtemp652,95,0,3);
    VL_SIGW(__Vtemp653,95,0,3);
    VL_SIGW(__Vtemp654,95,0,3);
    VL_SIGW(__Vtemp655,127,0,4);
    VL_SIGW(__Vtemp656,127,0,4);
    VL_SIGW(__Vtemp657,127,0,4);
    VL_SIGW(__Vtemp658,127,0,4);
    VL_SIGW(__Vtemp661,95,0,3);
    VL_SIGW(__Vtemp662,95,0,3);
    VL_SIGW(__Vtemp663,95,0,3);
    VL_SIGW(__Vtemp664,95,0,3);
    VL_SIGW(__Vtemp665,95,0,3);
    VL_SIGW(__Vtemp666,95,0,3);
    VL_SIGW(__Vtemp667,95,0,3);
    VL_SIGW(__Vtemp668,95,0,3);
    VL_SIGW(__Vtemp669,127,0,4);
    VL_SIGW(__Vtemp670,127,0,4);
    VL_SIGW(__Vtemp673,127,0,4);
    VL_SIGW(__Vtemp674,159,0,5);
    VL_SIGW(__Vtemp675,159,0,5);
    VL_SIGW(__Vtemp676,159,0,5);
    VL_SIGW(__Vtemp677,159,0,5);
    VL_SIGW(__Vtemp678,159,0,5);
    VL_SIGW(__Vtemp679,159,0,5);
    VL_SIGW(__Vtemp683,127,0,4);
    VL_SIGW(__Vtemp684,255,0,8);
    VL_SIGW(__Vtemp685,255,0,8);
    VL_SIGW(__Vtemp686,287,0,9);
    VL_SIGW(__Vtemp688,95,0,3);
    VL_SIGW(__Vtemp689,95,0,3);
    VL_SIGW(__Vtemp692,127,0,4);
    VL_SIGW(__Vtemp693,159,0,5);
    VL_SIGW(__Vtemp694,127,0,4);
    VL_SIGW(__Vtemp695,159,0,5);
    VL_SIGW(__Vtemp696,159,0,5);
    VL_SIGW(__Vtemp697,127,0,4);
    VL_SIGW(__Vtemp698,159,0,5);
    VL_SIGW(__Vtemp699,159,0,5);
    VL_SIGW(__Vtemp700,159,0,5);
    VL_SIGW(__Vtemp701,223,0,7);
    VL_SIGW(__Vtemp702,223,0,7);
    VL_SIGW(__Vtemp703,223,0,7);
    VL_SIGW(__Vtemp704,223,0,7);
    VL_SIGW(__Vtemp707,127,0,4);
    VL_SIGW(__Vtemp708,159,0,5);
    VL_SIGW(__Vtemp709,127,0,4);
    VL_SIGW(__Vtemp710,159,0,5);
    VL_SIGW(__Vtemp711,159,0,5);
    VL_SIGW(__Vtemp712,159,0,5);
    VL_SIGW(__Vtemp713,159,0,5);
    VL_SIGW(__Vtemp714,127,0,4);
    VL_SIGW(__Vtemp715,159,0,5);
    VL_SIGW(__Vtemp716,159,0,5);
    VL_SIGW(__Vtemp717,159,0,5);
    VL_SIGW(__Vtemp718,223,0,7);
    VL_SIGW(__Vtemp719,223,0,7);
    VL_SIGW(__Vtemp722,223,0,7);
    VL_SIGW(__Vtemp723,287,0,9);
    VL_SIGW(__Vtemp724,287,0,9);
    VL_SIGW(__Vtemp725,287,0,9);
    VL_SIGW(__Vtemp726,287,0,9);
    VL_SIGW(__Vtemp727,127,0,4);
    VL_SIGW(__Vtemp728,287,0,9);
    VL_SIGW(__Vtemp729,287,0,9);
    VL_SIGW(__Vtemp731,255,0,8);
    VL_SIGW(__Vtemp732,383,0,12);
    VL_SIGW(__Vtemp733,383,0,12);
    VL_SIGW(__Vtemp738,255,0,8);
    VL_SIGW(__Vtemp739,383,0,12);
    VL_SIGW(__Vtemp740,383,0,12);
    VL_SIGW(__Vtemp741,255,0,8);
    VL_SIGW(__Vtemp742,255,0,8);
    VL_SIGW(__Vtemp743,255,0,8);
    // Body
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1251
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
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg 
	= vlTOPp->__Vdly__UartMod__DOT__multmod_1___DOT__fsm_stateReg;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:398
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:369
    vlTOPp->__Vtableidx5 = vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable5_UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx5];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:624
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1677
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[3U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[4U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[5U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[6U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[7U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
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
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[4U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[4U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[5U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[5U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[6U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[6U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out[7U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2[7U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1878
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[3U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[4U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[5U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[6U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[7U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
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
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[4U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[4U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[5U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[5U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[6U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[6U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out[7U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7[7U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1515
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1903
    __Vtemp428[0U] = 0U;
    __Vtemp428[1U] = 0U;
    __Vtemp428[2U] = 0U;
    __Vtemp428[3U] = 0U;
    __Vtemp428[4U] = 0U;
    __Vtemp428[5U] = 0U;
    __Vtemp428[6U] = 0U;
    __Vtemp428[7U] = 0U;
    vlTOPp->__Vtableidx11 = ((VL_GTS_IWW(1,256,256, __Vtemp428, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7) 
			      << 4U) | (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg));
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_corr_flag 
	= vlTOPp->__Vtable11_UartMod__DOT__multmod_1___05Fio_temp_corr_flag
	[vlTOPp->__Vtableidx11];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1546
    vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload[3U] = 0U;
    if ((8U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 2U)))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))) {
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
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1652
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[3U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[4U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[5U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[6U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[7U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
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
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[4U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[4U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[5U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[5U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[6U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[6U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out[7U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[7U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1702
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2a_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2a_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2a_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2a_out[3U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))) {
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2a_out[0U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[0U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2a_out[1U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[1U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2a_out[2U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[2U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2a_out[3U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[3U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1828
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[3U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[4U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[5U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[6U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[7U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
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
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[4U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_[4U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[5U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_[5U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[6U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_[6U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out[7U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_[7U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1932
    vlTOPp->__Vtableidx12 = (((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_14_) 
			      << 7U) | (((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_13_) 
					 << 6U) | (
						   ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_) 
						    << 5U) 
						   | (((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_) 
						       << 4U) 
						      | (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))));
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_corr_flag_2 
	= vlTOPp->__Vtable12_UartMod__DOT__multmod_1___05Fio_temp_corr_flag_2
	[vlTOPp->__Vtableidx12];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1571
    vlTOPp->__Vtableidx10 = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_valid 
	= vlTOPp->__Vtable10_UartMod__DOT__multmod_1___05Fio_toUart_valid
	[vlTOPp->__Vtableidx10];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1596
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[3U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[0U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[0U]
		        : vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[0U]);
		vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[1U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[1U]
		        : vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[1U]);
		vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[2U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[2U]
		        : vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[2U]);
		vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[3U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[3U]
		        : vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[3U]);
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[0U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[0U]
		        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_a[0U]);
		vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[1U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[1U]
		        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_a[1U]);
		vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[2U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[2U]
		        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_a[2U]);
		vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[3U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[3U]
		        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_a[3U]);
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1624
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[3U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		VL_EXTEND_WI(128,8, __Vtemp438, (0xffU 
						 & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue[4U]));
		vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[0U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n[0U]
		        : __Vtemp438[0U]);
		vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[1U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n[1U]
		        : __Vtemp438[1U]);
		vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[2U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n[2U]
		        : __Vtemp438[2U]);
		vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[3U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n[3U]
		        : __Vtemp438[3U]);
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[0U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[0U]
		        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_b[0U]);
		vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[1U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[1U]
		        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_b[1U]);
		vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[2U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[2U]
		        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_b[2U]);
		vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[3U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[3U]
		        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_b[3U]);
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1973
    vlTOPp->__Vtableidx13 = (((IData)(vlTOPp->UartMod__DOT__uartfsm_io_toFnct_valid) 
			      << 7U) | (((1U >= (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_1_)) 
					 << 6U) | (
						   ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_1_) 
						    << 4U) 
						   | (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateNext 
	= vlTOPp->__Vtable13_UartMod__DOT__multmod_1___DOT__fsm_stateNext
	[vlTOPp->__Vtableidx13];
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
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[3U]) 
		       - (0xffffU & (vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[3U] 
				     >> 0x10U))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[2U]) 
		       - (0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[3U] 
				      << 0x10U) | (
						   vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[2U] 
						   >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[1U]) 
		       - (0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[2U] 
				      << 0x10U) | (
						   vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[1U] 
						   >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[0U]) 
		       - (0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[1U] 
				      << 0x10U) | (
						   vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[0U] 
						   >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[2U])) 
				  - (QData)((IData)(
						    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[3U]))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[0U])) 
				  - (QData)((IData)(
						    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[1U]))));
    VL_EXTEND_WQ(65,64, __Vtemp445, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp446, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[3U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[2U]))));
    VL_SUB_W(3, __Vtemp447, __Vtemp445, __Vtemp446);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[0U] 
	= __Vtemp447[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[1U] 
	= __Vtemp447[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U] 
	= (1U & __Vtemp447[2U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & (vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[3U] 
		       >> 0x10U)) * (0xffffU & (vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[3U] 
						>> 0x10U)));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[3U]) 
	   * (0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[3U]));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[3U] 
			<< 0x10U) | (vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[2U] 
				     >> 0x10U))) * 
	   (0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[3U] 
			<< 0x10U) | (vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[2U] 
				     >> 0x10U))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[2U]) 
	   * (0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[2U]));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[2U] 
			<< 0x10U) | (vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[1U] 
				     >> 0x10U))) * 
	   (0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[2U] 
			<< 0x10U) | (vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[1U] 
				     >> 0x10U))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[1U]) 
	   * (0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[1U]));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[1U] 
			<< 0x10U) | (vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[0U] 
				     >> 0x10U))) * 
	   (0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[1U] 
			<< 0x10U) | (vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[0U] 
				     >> 0x10U))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_[0U]) 
	   * (0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[0U]));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[3U] 
				   >> 0x10U)) - (0xffffU 
						 & vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[3U])));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[3U] 
				    << 0x10U) | (vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[2U] 
						 >> 0x10U))) 
		       - (0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[2U])));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[2U] 
				    << 0x10U) | (vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[1U] 
						 >> 0x10U))) 
		       - (0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[1U])));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[1U] 
				    << 0x10U) | (vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[0U] 
						 >> 0x10U))) 
		       - (0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[0U])));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[3U])) 
				  - (QData)((IData)(
						    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[2U]))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[1U])) 
				  - (QData)((IData)(
						    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp450, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[3U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[2U]))));
    VL_EXTEND_WQ(65,64, __Vtemp451, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_[0U]))));
    VL_SUB_W(3, __Vtemp452, __Vtemp450, __Vtemp451);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[0U] 
	= __Vtemp452[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[1U] 
	= __Vtemp452[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U] 
	= (1U & __Vtemp452[2U]);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1529
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:598
    vlTOPp->__Vtableidx7 = vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable7_UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx7];
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_ 
	= ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) 
	   & (~ (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:613
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 0U;
    if (vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
	if ((0U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter))) {
	    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 1U;
	}
    }
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_ 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1266
    vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext = 1U;
    } else {
	if ((2U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg))) {
		vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext 
		    = ((0x41U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_inCounter))
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:151
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:381
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 0U;
    if ((0U == vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 1U;
    }
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_19_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_)
				    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_ 
								>> 0x20U)))))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_19_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_)
				    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_ 
								>> 0x20U)))))));
    __Vtemp458[0U] = ((1U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U])
		       ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[0U])
		       : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[0U]);
    __Vtemp458[1U] = ((1U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U])
		       ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[1U])
		       : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[1U]);
    __Vtemp458[2U] = ((1U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U])
		       ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U])
		       : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U]);
    VL_EXTEND_WI(65,1, __Vtemp459, (1U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U]));
    VL_ADD_W(3, __Vtemp460, __Vtemp458, __Vtemp459);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[0U] 
	= __Vtemp460[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[1U] 
	= __Vtemp460[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[2U] 
	= (1U & __Vtemp460[2U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_)
				     ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_)
				     : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_)
						        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_)
				     ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_)
				     : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_)
						        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_)
				     ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_)
				     : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_)
						        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_)
				     ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_)
				     : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_)
						        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_25_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_)
				    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_ 
								>> 0x20U)))))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_25_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_)
				    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_ 
								>> 0x20U)))))));
    __Vtemp465[0U] = ((1U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U])
		       ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[0U])
		       : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[0U]);
    __Vtemp465[1U] = ((1U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U])
		       ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[1U])
		       : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[1U]);
    __Vtemp465[2U] = ((1U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U])
		       ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U])
		       : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U]);
    VL_EXTEND_WI(65,1, __Vtemp466, (1U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U]));
    VL_ADD_W(3, __Vtemp467, __Vtemp465, __Vtemp466);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[0U] 
	= __Vtemp467[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[1U] 
	= __Vtemp467[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[2U] 
	= (1U & __Vtemp467[2U]);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1161
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:391
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext 
	= (7U & ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
		 + (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)));
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick 
	= ((7U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value)) 
	   & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_19_)) 
		       - (0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_19_ 
					     >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_19_)) 
		       - (0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_19_ 
					     >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[1U]) 
		       - (0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[2U] 
				      << 0x10U) | (
						   vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[1U] 
						   >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[0U]) 
		       - (0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[1U] 
				      << 0x10U) | (
						   vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[0U] 
						   >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[0U])) 
				  - (QData)((IData)(
						    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[1U]))));
    VL_EXTEND_WQ(65,64, __Vtemp472, ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp473, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp474, __Vtemp472, __Vtemp473);
    __Vtemp475[0U] = __Vtemp474[0U];
    __Vtemp475[1U] = __Vtemp474[1U];
    __Vtemp475[2U] = (1U & __Vtemp474[2U]);
    VL_EXTEND_WW(66,65, __Vtemp476, __Vtemp475);
    VL_EXTEND_WI(66,32, __Vtemp477, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp478, __Vtemp476, __Vtemp477);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[0U] 
	= __Vtemp478[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[1U] 
	= __Vtemp478[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[2U] 
	= (3U & __Vtemp478[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp482, ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp483, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp484, __Vtemp482, __Vtemp483);
    __Vtemp485[0U] = __Vtemp484[0U];
    __Vtemp485[1U] = __Vtemp484[1U];
    __Vtemp485[2U] = (1U & __Vtemp484[2U]);
    VL_EXTEND_WW(66,65, __Vtemp486, __Vtemp485);
    VL_EXTEND_WI(66,32, __Vtemp487, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp488, __Vtemp486, __Vtemp487);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[0U] 
	= __Vtemp488[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[1U] 
	= __Vtemp488[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[2U] 
	= (3U & __Vtemp488[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp492, ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp493, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp494, __Vtemp492, __Vtemp493);
    __Vtemp495[0U] = __Vtemp494[0U];
    __Vtemp495[1U] = __Vtemp494[1U];
    __Vtemp495[2U] = (1U & __Vtemp494[2U]);
    VL_EXTEND_WW(66,65, __Vtemp496, __Vtemp495);
    VL_EXTEND_WI(66,32, __Vtemp497, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp498, __Vtemp496, __Vtemp497);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[0U] 
	= __Vtemp498[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[1U] 
	= __Vtemp498[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[2U] 
	= (3U & __Vtemp498[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp502, ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp503, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp504, __Vtemp502, __Vtemp503);
    __Vtemp505[0U] = __Vtemp504[0U];
    __Vtemp505[1U] = __Vtemp504[1U];
    __Vtemp505[2U] = (1U & __Vtemp504[2U]);
    VL_EXTEND_WW(66,65, __Vtemp506, __Vtemp505);
    VL_EXTEND_WI(66,32, __Vtemp507, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp508, __Vtemp506, __Vtemp507);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[0U] 
	= __Vtemp508[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[1U] 
	= __Vtemp508[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[2U] 
	= (3U & __Vtemp508[2U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_19_ 
			       >> 0x10U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_25_ 
							 >> 0x10U))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_19_)) 
	   * (0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_25_)));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_25_ 
					   >> 0x10U))) 
		       - (0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_25_))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_19_ 
			       >> 0x10U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_25_ 
							 >> 0x10U))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_19_)) 
	   * (0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_25_)));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_25_ 
					   >> 0x10U))) 
		       - (0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_25_))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[2U] 
			<< 0x10U) | (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[1U] 
				     >> 0x10U))) * 
	   (0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[2U] 
			<< 0x10U) | (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[1U] 
				     >> 0x10U))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[1U]) 
	   * (0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[1U]));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[1U] 
			<< 0x10U) | (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[0U] 
				     >> 0x10U))) * 
	   (0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[1U] 
			<< 0x10U) | (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[0U] 
				     >> 0x10U))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[0U]) 
	   * (0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[0U]));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[2U] 
				    << 0x10U) | (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[1U] 
						 >> 0x10U))) 
		       - (0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[1U])));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & ((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[1U] 
				    << 0x10U) | (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[0U] 
						 >> 0x10U))) 
		       - (0xffffU & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[0U])));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[1U])) 
				  - (QData)((IData)(
						    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[0U]))));
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:417
    vlTOPp->__Vtableidx6 = (((7U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)) 
			     << 4U) | (((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) 
					<< 3U) | (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state)));
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready 
	= vlTOPp->__Vtable6_UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready
	[vlTOPp->__Vtableidx6];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_19_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_)
				    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_ 
								>> 0x20U)))))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_)
				     ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_)
				     : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_)
						        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_)
				     ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_)
				     : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_)
						        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_)
				     ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_)
				     : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_)
						        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_)
				     ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_)
				     : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_)
						        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_25_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_)
				    : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_ 
								>> 0x20U)))))));
    vlTOPp->UartMod__DOT__uartfsm__DOT__write_ready 
	= (1U & ((~ (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__write_m2sPipe_rValid)) 
		 | (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready)));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_19_)) 
		       - (0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_19_ 
					     >> 0x10U)))));
    VL_EXTEND_WQ(65,64, __Vtemp512, ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp513, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp514, __Vtemp512, __Vtemp513);
    __Vtemp515[0U] = __Vtemp514[0U];
    __Vtemp515[1U] = __Vtemp514[1U];
    __Vtemp515[2U] = (1U & __Vtemp514[2U]);
    VL_EXTEND_WW(66,65, __Vtemp516, __Vtemp515);
    VL_EXTEND_WI(66,32, __Vtemp517, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp518, __Vtemp516, __Vtemp517);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[0U] 
	= __Vtemp518[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[1U] 
	= __Vtemp518[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[2U] 
	= (3U & __Vtemp518[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp522, ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp523, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp524, __Vtemp522, __Vtemp523);
    __Vtemp525[0U] = __Vtemp524[0U];
    __Vtemp525[1U] = __Vtemp524[1U];
    __Vtemp525[2U] = (1U & __Vtemp524[2U]);
    VL_EXTEND_WW(66,65, __Vtemp526, __Vtemp525);
    VL_EXTEND_WI(66,32, __Vtemp527, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp528, __Vtemp526, __Vtemp527);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[0U] 
	= __Vtemp528[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[1U] 
	= __Vtemp528[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[2U] 
	= (3U & __Vtemp528[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp532, ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp533, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp534, __Vtemp532, __Vtemp533);
    __Vtemp535[0U] = __Vtemp534[0U];
    __Vtemp535[1U] = __Vtemp534[1U];
    __Vtemp535[2U] = (1U & __Vtemp534[2U]);
    VL_EXTEND_WW(66,65, __Vtemp536, __Vtemp535);
    VL_EXTEND_WI(66,32, __Vtemp537, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp538, __Vtemp536, __Vtemp537);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[0U] 
	= __Vtemp538[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[1U] 
	= __Vtemp538[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[2U] 
	= (3U & __Vtemp538[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp542, ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp543, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp544, __Vtemp542, __Vtemp543);
    __Vtemp545[0U] = __Vtemp544[0U];
    __Vtemp545[1U] = __Vtemp544[1U];
    __Vtemp545[2U] = (1U & __Vtemp544[2U]);
    VL_EXTEND_WW(66,65, __Vtemp546, __Vtemp545);
    VL_EXTEND_WI(66,32, __Vtemp547, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp548, __Vtemp546, __Vtemp547);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[0U] 
	= __Vtemp548[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[1U] 
	= __Vtemp548[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[2U] 
	= (3U & __Vtemp548[2U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_19_ 
			       >> 0x10U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_25_ 
							 >> 0x10U))));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_19_)) 
	   * (0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_25_)));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_25_ 
					   >> 0x10U))) 
		       - (0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_25_))));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1293
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
    VL_EXTEND_WQ(128,64, __Vtemp552, (((QData)((IData)(
						       vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp553, __Vtemp552, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp554, __Vtemp553);
    VL_EXTEND_WQ(65,64, __Vtemp558, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp559, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp560, __Vtemp558, __Vtemp559);
    VL_EXTEND_WQ(65,64, __Vtemp561, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[0U]))));
    VL_SUB_W(3, __Vtemp562, __Vtemp560, __Vtemp561);
    __Vtemp563[0U] = __Vtemp562[0U];
    __Vtemp563[1U] = __Vtemp562[1U];
    __Vtemp563[2U] = (1U & __Vtemp562[2U]);
    VL_EXTEND_WW(97,65, __Vtemp564, __Vtemp563);
    VL_SHIFTL_WWI(97,97,32, __Vtemp565, __Vtemp564, 0x20U);
    __Vtemp566[0U] = __Vtemp565[0U];
    __Vtemp566[1U] = __Vtemp565[1U];
    __Vtemp566[2U] = __Vtemp565[2U];
    __Vtemp566[3U] = (1U & __Vtemp565[3U]);
    VL_EXTEND_WW(98,97, __Vtemp567, __Vtemp566);
    VL_EXTEND_WQ(65,64, __Vtemp570, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp571, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp572, __Vtemp570, __Vtemp571);
    __Vtemp573[0U] = __Vtemp572[0U];
    __Vtemp573[1U] = __Vtemp572[1U];
    __Vtemp573[2U] = (1U & __Vtemp572[2U]);
    VL_EXTEND_WW(66,65, __Vtemp574, __Vtemp573);
    VL_EXTEND_WQ(66,64, __Vtemp575, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp576, __Vtemp574, __Vtemp575);
    __Vtemp577[0U] = __Vtemp576[0U];
    __Vtemp577[1U] = __Vtemp576[1U];
    __Vtemp577[2U] = (3U & __Vtemp576[2U]);
    VL_EXTEND_WW(98,66, __Vtemp578, __Vtemp577);
    VL_SHIFTL_WWI(98,98,32, __Vtemp579, __Vtemp578, 0x20U);
    __Vtemp582[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_))
		       ? __Vtemp567[0U] : __Vtemp579[0U]);
    __Vtemp582[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_))
		       ? __Vtemp567[1U] : __Vtemp579[1U]);
    __Vtemp582[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_))
		       ? __Vtemp567[2U] : __Vtemp579[2U]);
    __Vtemp582[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_))
			     ? __Vtemp567[3U] : __Vtemp579[3U]));
    VL_EXTEND_WW(129,98, __Vtemp583, __Vtemp582);
    VL_ADD_W(5, __Vtemp584, __Vtemp554, __Vtemp583);
    __Vtemp585[0U] = __Vtemp584[0U];
    __Vtemp585[1U] = __Vtemp584[1U];
    __Vtemp585[2U] = __Vtemp584[2U];
    __Vtemp585[3U] = __Vtemp584[3U];
    __Vtemp585[4U] = (1U & __Vtemp584[4U]);
    VL_EXTEND_WW(130,129, __Vtemp586, __Vtemp585);
    VL_EXTEND_WQ(130,64, __Vtemp587, (((QData)((IData)(
						       vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(5, __Vtemp588, __Vtemp586, __Vtemp587);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[0U] 
	= __Vtemp588[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[1U] 
	= __Vtemp588[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[2U] 
	= __Vtemp588[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[3U] 
	= __Vtemp588[3U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[4U] 
	= (3U & __Vtemp588[4U]);
    VL_EXTEND_WQ(128,64, __Vtemp592, (((QData)((IData)(
						       vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp593, __Vtemp592, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp594, __Vtemp593);
    VL_EXTEND_WQ(65,64, __Vtemp598, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp599, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp600, __Vtemp598, __Vtemp599);
    VL_EXTEND_WQ(65,64, __Vtemp601, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[0U]))));
    VL_SUB_W(3, __Vtemp602, __Vtemp600, __Vtemp601);
    __Vtemp603[0U] = __Vtemp602[0U];
    __Vtemp603[1U] = __Vtemp602[1U];
    __Vtemp603[2U] = (1U & __Vtemp602[2U]);
    VL_EXTEND_WW(97,65, __Vtemp604, __Vtemp603);
    VL_SHIFTL_WWI(97,97,32, __Vtemp605, __Vtemp604, 0x20U);
    __Vtemp606[0U] = __Vtemp605[0U];
    __Vtemp606[1U] = __Vtemp605[1U];
    __Vtemp606[2U] = __Vtemp605[2U];
    __Vtemp606[3U] = (1U & __Vtemp605[3U]);
    VL_EXTEND_WW(98,97, __Vtemp607, __Vtemp606);
    VL_EXTEND_WQ(65,64, __Vtemp610, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp611, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp612, __Vtemp610, __Vtemp611);
    __Vtemp613[0U] = __Vtemp612[0U];
    __Vtemp613[1U] = __Vtemp612[1U];
    __Vtemp613[2U] = (1U & __Vtemp612[2U]);
    VL_EXTEND_WW(66,65, __Vtemp614, __Vtemp613);
    VL_EXTEND_WQ(66,64, __Vtemp615, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp616, __Vtemp614, __Vtemp615);
    __Vtemp617[0U] = __Vtemp616[0U];
    __Vtemp617[1U] = __Vtemp616[1U];
    __Vtemp617[2U] = (3U & __Vtemp616[2U]);
    VL_EXTEND_WW(98,66, __Vtemp618, __Vtemp617);
    VL_SHIFTL_WWI(98,98,32, __Vtemp619, __Vtemp618, 0x20U);
    __Vtemp622[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_))
		       ? __Vtemp607[0U] : __Vtemp619[0U]);
    __Vtemp622[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_))
		       ? __Vtemp607[1U] : __Vtemp619[1U]);
    __Vtemp622[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_))
		       ? __Vtemp607[2U] : __Vtemp619[2U]);
    __Vtemp622[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_))
			     ? __Vtemp607[3U] : __Vtemp619[3U]));
    VL_EXTEND_WW(129,98, __Vtemp623, __Vtemp622);
    VL_ADD_W(5, __Vtemp624, __Vtemp594, __Vtemp623);
    __Vtemp625[0U] = __Vtemp624[0U];
    __Vtemp625[1U] = __Vtemp624[1U];
    __Vtemp625[2U] = __Vtemp624[2U];
    __Vtemp625[3U] = __Vtemp624[3U];
    __Vtemp625[4U] = (1U & __Vtemp624[4U]);
    VL_EXTEND_WW(130,129, __Vtemp626, __Vtemp625);
    VL_EXTEND_WQ(130,64, __Vtemp627, (((QData)((IData)(
						       vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(5, __Vtemp628, __Vtemp626, __Vtemp627);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[0U] 
	= __Vtemp628[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[1U] 
	= __Vtemp628[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[2U] 
	= __Vtemp628[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[3U] 
	= __Vtemp628[3U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[4U] 
	= (3U & __Vtemp628[4U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_)
				     ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_)
				     : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_)
						        : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_ 
						       >> 0x10U)))));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1180
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
    VL_EXTEND_WQ(65,64, __Vtemp633, ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp634, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp635, __Vtemp633, __Vtemp634);
    __Vtemp636[0U] = __Vtemp635[0U];
    __Vtemp636[1U] = __Vtemp635[1U];
    __Vtemp636[2U] = (1U & __Vtemp635[2U]);
    VL_EXTEND_WW(66,65, __Vtemp637, __Vtemp636);
    VL_EXTEND_WI(66,32, __Vtemp638, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp639, __Vtemp637, __Vtemp638);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[0U] 
	= __Vtemp639[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[1U] 
	= __Vtemp639[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[2U] 
	= (3U & __Vtemp639[2U]);
    VL_EXTEND_WQ(128,64, __Vtemp643, (((QData)((IData)(
						       vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp644, __Vtemp643, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp645, __Vtemp644);
    VL_EXTEND_WQ(65,64, __Vtemp649, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp650, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp651, __Vtemp649, __Vtemp650);
    VL_EXTEND_WQ(65,64, __Vtemp652, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[0U]))));
    VL_SUB_W(3, __Vtemp653, __Vtemp651, __Vtemp652);
    __Vtemp654[0U] = __Vtemp653[0U];
    __Vtemp654[1U] = __Vtemp653[1U];
    __Vtemp654[2U] = (1U & __Vtemp653[2U]);
    VL_EXTEND_WW(97,65, __Vtemp655, __Vtemp654);
    VL_SHIFTL_WWI(97,97,32, __Vtemp656, __Vtemp655, 0x20U);
    __Vtemp657[0U] = __Vtemp656[0U];
    __Vtemp657[1U] = __Vtemp656[1U];
    __Vtemp657[2U] = __Vtemp656[2U];
    __Vtemp657[3U] = (1U & __Vtemp656[3U]);
    VL_EXTEND_WW(98,97, __Vtemp658, __Vtemp657);
    VL_EXTEND_WQ(65,64, __Vtemp661, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp662, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp663, __Vtemp661, __Vtemp662);
    __Vtemp664[0U] = __Vtemp663[0U];
    __Vtemp664[1U] = __Vtemp663[1U];
    __Vtemp664[2U] = (1U & __Vtemp663[2U]);
    VL_EXTEND_WW(66,65, __Vtemp665, __Vtemp664);
    VL_EXTEND_WQ(66,64, __Vtemp666, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp667, __Vtemp665, __Vtemp666);
    __Vtemp668[0U] = __Vtemp667[0U];
    __Vtemp668[1U] = __Vtemp667[1U];
    __Vtemp668[2U] = (3U & __Vtemp667[2U]);
    VL_EXTEND_WW(98,66, __Vtemp669, __Vtemp668);
    VL_SHIFTL_WWI(98,98,32, __Vtemp670, __Vtemp669, 0x20U);
    __Vtemp673[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_))
		       ? __Vtemp658[0U] : __Vtemp670[0U]);
    __Vtemp673[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_))
		       ? __Vtemp658[1U] : __Vtemp670[1U]);
    __Vtemp673[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_))
		       ? __Vtemp658[2U] : __Vtemp670[2U]);
    __Vtemp673[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_))
			     ? __Vtemp658[3U] : __Vtemp670[3U]));
    VL_EXTEND_WW(129,98, __Vtemp674, __Vtemp673);
    VL_ADD_W(5, __Vtemp675, __Vtemp645, __Vtemp674);
    __Vtemp676[0U] = __Vtemp675[0U];
    __Vtemp676[1U] = __Vtemp675[1U];
    __Vtemp676[2U] = __Vtemp675[2U];
    __Vtemp676[3U] = __Vtemp675[3U];
    __Vtemp676[4U] = (1U & __Vtemp675[4U]);
    VL_EXTEND_WW(130,129, __Vtemp677, __Vtemp676);
    VL_EXTEND_WQ(130,64, __Vtemp678, (((QData)((IData)(
						       vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(5, __Vtemp679, __Vtemp677, __Vtemp678);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[0U] 
	= __Vtemp679[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[1U] 
	= __Vtemp679[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[2U] 
	= __Vtemp679[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[3U] 
	= __Vtemp679[3U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[4U] 
	= (3U & __Vtemp679[4U]);
    __Vtemp683[0U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[0U];
    __Vtemp683[1U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[1U];
    __Vtemp683[2U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[2U];
    __Vtemp683[3U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[3U];
    VL_EXTEND_WW(256,128, __Vtemp684, __Vtemp683);
    VL_SHIFTL_WWI(256,256,32, __Vtemp685, __Vtemp684, 0x80U);
    VL_EXTEND_WW(257,256, __Vtemp686, __Vtemp685);
    __Vtemp688[0U] = 0U;
    __Vtemp688[1U] = 0U;
    __Vtemp688[2U] = 0U;
    __Vtemp689[0U] = 0U;
    __Vtemp689[1U] = 0U;
    __Vtemp689[2U] = 0U;
    __Vtemp692[0U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[0U];
    __Vtemp692[1U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[1U];
    __Vtemp692[2U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[2U];
    __Vtemp692[3U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[3U];
    VL_EXTEND_WW(129,128, __Vtemp693, __Vtemp692);
    __Vtemp694[0U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[0U];
    __Vtemp694[1U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[1U];
    __Vtemp694[2U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[2U];
    __Vtemp694[3U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[3U];
    VL_EXTEND_WW(129,128, __Vtemp695, __Vtemp694);
    VL_ADD_W(5, __Vtemp696, __Vtemp693, __Vtemp695);
    __Vtemp697[0U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[0U];
    __Vtemp697[1U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[1U];
    __Vtemp697[2U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[2U];
    __Vtemp697[3U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[3U];
    VL_EXTEND_WW(129,128, __Vtemp698, __Vtemp697);
    VL_SUB_W(5, __Vtemp699, __Vtemp696, __Vtemp698);
    __Vtemp700[0U] = __Vtemp699[0U];
    __Vtemp700[1U] = __Vtemp699[1U];
    __Vtemp700[2U] = __Vtemp699[2U];
    __Vtemp700[3U] = __Vtemp699[3U];
    __Vtemp700[4U] = (1U & __Vtemp699[4U]);
    VL_EXTEND_WW(193,129, __Vtemp701, __Vtemp700);
    VL_SHIFTL_WWI(193,193,32, __Vtemp702, __Vtemp701, 0x40U);
    __Vtemp703[0U] = __Vtemp702[0U];
    __Vtemp703[1U] = __Vtemp702[1U];
    __Vtemp703[2U] = __Vtemp702[2U];
    __Vtemp703[3U] = __Vtemp702[3U];
    __Vtemp703[4U] = __Vtemp702[4U];
    __Vtemp703[5U] = __Vtemp702[5U];
    __Vtemp703[6U] = (1U & __Vtemp702[6U]);
    VL_EXTEND_WW(194,193, __Vtemp704, __Vtemp703);
    __Vtemp707[0U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[0U];
    __Vtemp707[1U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[1U];
    __Vtemp707[2U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[2U];
    __Vtemp707[3U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[3U];
    VL_EXTEND_WW(129,128, __Vtemp708, __Vtemp707);
    __Vtemp709[0U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[0U];
    __Vtemp709[1U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[1U];
    __Vtemp709[2U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[2U];
    __Vtemp709[3U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[3U];
    VL_EXTEND_WW(129,128, __Vtemp710, __Vtemp709);
    VL_ADD_W(5, __Vtemp711, __Vtemp708, __Vtemp710);
    __Vtemp712[0U] = __Vtemp711[0U];
    __Vtemp712[1U] = __Vtemp711[1U];
    __Vtemp712[2U] = __Vtemp711[2U];
    __Vtemp712[3U] = __Vtemp711[3U];
    __Vtemp712[4U] = (1U & __Vtemp711[4U]);
    VL_EXTEND_WW(130,129, __Vtemp713, __Vtemp712);
    __Vtemp714[0U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[0U];
    __Vtemp714[1U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[1U];
    __Vtemp714[2U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[2U];
    __Vtemp714[3U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[3U];
    VL_EXTEND_WW(130,128, __Vtemp715, __Vtemp714);
    VL_ADD_W(5, __Vtemp716, __Vtemp713, __Vtemp715);
    __Vtemp717[0U] = __Vtemp716[0U];
    __Vtemp717[1U] = __Vtemp716[1U];
    __Vtemp717[2U] = __Vtemp716[2U];
    __Vtemp717[3U] = __Vtemp716[3U];
    __Vtemp717[4U] = (3U & __Vtemp716[4U]);
    VL_EXTEND_WW(194,130, __Vtemp718, __Vtemp717);
    VL_SHIFTL_WWI(194,194,32, __Vtemp719, __Vtemp718, 0x40U);
    __Vtemp722[0U] = ((VL_GTS_IWW(1,65,65, __Vtemp688, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IWW(1,65,65, __Vtemp689, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp704[0U] : __Vtemp719[0U]);
    __Vtemp722[1U] = ((VL_GTS_IWW(1,65,65, __Vtemp688, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IWW(1,65,65, __Vtemp689, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp704[1U] : __Vtemp719[1U]);
    __Vtemp722[2U] = ((VL_GTS_IWW(1,65,65, __Vtemp688, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IWW(1,65,65, __Vtemp689, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp704[2U] : __Vtemp719[2U]);
    __Vtemp722[3U] = ((VL_GTS_IWW(1,65,65, __Vtemp688, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IWW(1,65,65, __Vtemp689, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp704[3U] : __Vtemp719[3U]);
    __Vtemp722[4U] = ((VL_GTS_IWW(1,65,65, __Vtemp688, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IWW(1,65,65, __Vtemp689, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp704[4U] : __Vtemp719[4U]);
    __Vtemp722[5U] = ((VL_GTS_IWW(1,65,65, __Vtemp688, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IWW(1,65,65, __Vtemp689, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp704[5U] : __Vtemp719[5U]);
    __Vtemp722[6U] = (3U & ((VL_GTS_IWW(1,65,65, __Vtemp688, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
			     ^ VL_GTS_IWW(1,65,65, __Vtemp689, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
			     ? __Vtemp704[6U] : __Vtemp719[6U]));
    VL_EXTEND_WW(257,194, __Vtemp723, __Vtemp722);
    VL_ADD_W(9, __Vtemp724, __Vtemp686, __Vtemp723);
    __Vtemp725[0U] = __Vtemp724[0U];
    __Vtemp725[1U] = __Vtemp724[1U];
    __Vtemp725[2U] = __Vtemp724[2U];
    __Vtemp725[3U] = __Vtemp724[3U];
    __Vtemp725[4U] = __Vtemp724[4U];
    __Vtemp725[5U] = __Vtemp724[5U];
    __Vtemp725[6U] = __Vtemp724[6U];
    __Vtemp725[7U] = __Vtemp724[7U];
    __Vtemp725[8U] = (1U & __Vtemp724[8U]);
    VL_EXTEND_WW(258,257, __Vtemp726, __Vtemp725);
    __Vtemp727[0U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[0U];
    __Vtemp727[1U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[1U];
    __Vtemp727[2U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[2U];
    __Vtemp727[3U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[3U];
    VL_EXTEND_WW(258,128, __Vtemp728, __Vtemp727);
    VL_ADD_W(9, __Vtemp729, __Vtemp726, __Vtemp728);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U] 
	= __Vtemp729[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U] 
	= __Vtemp729[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U] 
	= __Vtemp729[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U] 
	= __Vtemp729[3U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U] 
	= __Vtemp729[4U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[5U] 
	= __Vtemp729[5U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[6U] 
	= __Vtemp729[6U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[7U] 
	= __Vtemp729[7U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[8U] 
	= (3U & __Vtemp729[8U]);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1727
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[3U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[4U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[5U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[6U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[7U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))) {
		    __Vtemp731[0U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
		    __Vtemp731[1U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
		    __Vtemp731[2U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
		    __Vtemp731[3U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
		    __Vtemp731[4U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U];
		    __Vtemp731[5U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[5U];
		    __Vtemp731[6U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[6U];
		    __Vtemp731[7U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[7U];
		    VL_EXTEND_WW(384,256, __Vtemp732, __Vtemp731);
		    VL_SHIFTL_WWI(384,384,32, __Vtemp733, __Vtemp732, 0x80U);
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[0U] 
			= __Vtemp733[0U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[1U] 
			= __Vtemp733[1U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[2U] 
			= __Vtemp733[2U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[3U] 
			= __Vtemp733[3U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[4U] 
			= __Vtemp733[4U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[5U] 
			= __Vtemp733[5U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[6U] 
			= __Vtemp733[6U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[7U] 
			= __Vtemp733[7U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1803
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[3U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[4U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[5U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[6U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[7U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
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
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[4U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[5U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[5U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[6U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[6U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out[7U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[7U];
		}
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
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_[4U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U] 
	   & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[4U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_[5U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[5U] 
	   & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[5U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_[6U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[6U] 
	   & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[6U]);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_[7U] 
	= (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[7U] 
	   & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask[7U]);
    __Vtemp738[0U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
    __Vtemp738[1U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
    __Vtemp738[2U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
    __Vtemp738[3U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
    __Vtemp738[4U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U];
    __Vtemp738[5U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[5U];
    __Vtemp738[6U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[6U];
    __Vtemp738[7U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[7U];
    VL_EXTEND_WW(384,256, __Vtemp739, __Vtemp738);
    VL_SHIFTL_WWI(384,384,32, __Vtemp740, __Vtemp739, 0x80U);
    __Vtemp741[0U] = __Vtemp740[0U];
    __Vtemp741[1U] = __Vtemp740[1U];
    __Vtemp741[2U] = __Vtemp740[2U];
    __Vtemp741[3U] = __Vtemp740[3U];
    __Vtemp741[4U] = __Vtemp740[4U];
    __Vtemp741[5U] = __Vtemp740[5U];
    __Vtemp741[6U] = __Vtemp740[6U];
    __Vtemp741[7U] = __Vtemp740[7U];
    VL_ADD_W(8, __Vtemp742, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2, __Vtemp741);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[0U] 
	= __Vtemp742[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[1U] 
	= __Vtemp742[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[2U] 
	= __Vtemp742[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[3U] 
	= __Vtemp742[3U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[4U] 
	= __Vtemp742[4U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[5U] 
	= __Vtemp742[5U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[6U] 
	= __Vtemp742[6U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[7U] 
	= __Vtemp742[7U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1853
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[3U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[4U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[5U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[6U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[7U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
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
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[4U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_[4U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[5U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_[5U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[6U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_[6U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out[7U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_[7U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1752
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[3U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[4U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[5U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[6U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[7U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
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
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[4U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[4U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[5U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[5U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[6U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[6U];
		    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out[7U] 
			= vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[7U];
		}
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/13_uart_mod_full_pll/spinalHDL/tmp/job_1/UartMod.v:1777
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[3U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[4U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[5U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[6U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[7U] = 0U;
    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		  >> 3U)))) {
	if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
			  >> 1U)))) {
		VL_SHIFTR_WWI(256,256,13, __Vtemp743, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_, 
			      (0x1fffU & ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k) 
					  << 4U)));
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[0U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[0U]
		        : __Vtemp743[0U]);
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[1U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[1U]
		        : __Vtemp743[1U]);
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[2U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[2U]
		        : __Vtemp743[2U]);
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[3U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[3U]
		        : __Vtemp743[3U]);
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[4U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[4U]
		        : __Vtemp743[4U]);
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[5U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[5U]
		        : __Vtemp743[5U]);
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[6U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[6U]
		        : __Vtemp743[6U]);
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[7U] 
		    = ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[7U]
		        : __Vtemp743[7U]);
	    }
	}
    }
}
