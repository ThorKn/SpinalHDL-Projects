// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUartKaraReg.h for the primary calling header

#include "VUartKaraReg.h"      // For This
#include "VUartKaraReg__Syms.h"


//--------------------


void VUartKaraReg::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VUartKaraReg::eval\n"); );
    VUartKaraReg__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VUartKaraReg::_eval_initial_loop(VUartKaraReg__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VUartKaraReg::_sequent__TOP__1(VUartKaraReg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartKaraReg::_sequent__TOP__1\n"); );
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmIn_inCounter,4,0);
    VL_SIG8(__Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmOut_outCounter,4,0);
    VL_SIG8(__Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg,2,0);
    VL_SIG8(__Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg,1,0);
    VL_SIG8(__Vdly__UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg,1,0);
    VL_SIGW(__Vtemp2,127,0,4);
    VL_SIGW(__Vtemp3,255,0,8);
    VL_SIGW(__Vtemp4,255,0,8);
    VL_SIGW(__Vtemp5,287,0,9);
    VL_SIGW(__Vtemp7,95,0,3);
    VL_SIGW(__Vtemp8,95,0,3);
    VL_SIGW(__Vtemp11,127,0,4);
    VL_SIGW(__Vtemp12,159,0,5);
    VL_SIGW(__Vtemp13,127,0,4);
    VL_SIGW(__Vtemp14,159,0,5);
    VL_SIGW(__Vtemp15,159,0,5);
    VL_SIGW(__Vtemp16,127,0,4);
    VL_SIGW(__Vtemp17,159,0,5);
    VL_SIGW(__Vtemp18,159,0,5);
    VL_SIGW(__Vtemp19,159,0,5);
    VL_SIGW(__Vtemp20,223,0,7);
    VL_SIGW(__Vtemp21,223,0,7);
    VL_SIGW(__Vtemp22,223,0,7);
    VL_SIGW(__Vtemp23,223,0,7);
    VL_SIGW(__Vtemp26,127,0,4);
    VL_SIGW(__Vtemp27,159,0,5);
    VL_SIGW(__Vtemp28,127,0,4);
    VL_SIGW(__Vtemp29,159,0,5);
    VL_SIGW(__Vtemp30,159,0,5);
    VL_SIGW(__Vtemp31,159,0,5);
    VL_SIGW(__Vtemp32,159,0,5);
    VL_SIGW(__Vtemp33,127,0,4);
    VL_SIGW(__Vtemp34,159,0,5);
    VL_SIGW(__Vtemp35,159,0,5);
    VL_SIGW(__Vtemp36,159,0,5);
    VL_SIGW(__Vtemp37,223,0,7);
    VL_SIGW(__Vtemp38,223,0,7);
    VL_SIGW(__Vtemp41,223,0,7);
    VL_SIGW(__Vtemp42,287,0,9);
    VL_SIGW(__Vtemp43,287,0,9);
    VL_SIGW(__Vtemp44,287,0,9);
    VL_SIGW(__Vtemp45,287,0,9);
    VL_SIGW(__Vtemp46,255,0,8);
    VL_SIGW(__Vtemp47,127,0,4);
    VL_SIGW(__Vtemp48,287,0,9);
    VL_SIGW(__Vtemp49,255,0,8);
    VL_SIGW(__Vtemp50,255,0,8);
    VL_SIGW(__Vtemp53,95,0,3);
    VL_SIGW(__Vtemp54,95,0,3);
    VL_SIGW(__Vtemp55,95,0,3);
    VL_SIGW(__Vtemp58,95,0,3);
    VL_SIGW(__Vtemp59,95,0,3);
    VL_SIGW(__Vtemp60,95,0,3);
    VL_SIGW(__Vtemp65,95,0,3);
    VL_SIGW(__Vtemp66,95,0,3);
    VL_SIGW(__Vtemp67,95,0,3);
    VL_SIGW(__Vtemp72,95,0,3);
    VL_SIGW(__Vtemp73,95,0,3);
    VL_SIGW(__Vtemp74,95,0,3);
    VL_SIGW(__Vtemp80,95,0,3);
    VL_SIGW(__Vtemp81,95,0,3);
    VL_SIGW(__Vtemp82,95,0,3);
    VL_SIGW(__Vtemp83,95,0,3);
    VL_SIGW(__Vtemp84,95,0,3);
    VL_SIGW(__Vtemp85,95,0,3);
    VL_SIGW(__Vtemp86,95,0,3);
    VL_SIGW(__Vtemp90,95,0,3);
    VL_SIGW(__Vtemp91,95,0,3);
    VL_SIGW(__Vtemp92,95,0,3);
    VL_SIGW(__Vtemp93,95,0,3);
    VL_SIGW(__Vtemp94,95,0,3);
    VL_SIGW(__Vtemp95,95,0,3);
    VL_SIGW(__Vtemp96,95,0,3);
    VL_SIGW(__Vtemp100,95,0,3);
    VL_SIGW(__Vtemp101,95,0,3);
    VL_SIGW(__Vtemp102,95,0,3);
    VL_SIGW(__Vtemp103,95,0,3);
    VL_SIGW(__Vtemp104,95,0,3);
    VL_SIGW(__Vtemp105,95,0,3);
    VL_SIGW(__Vtemp106,95,0,3);
    VL_SIGW(__Vtemp110,95,0,3);
    VL_SIGW(__Vtemp111,95,0,3);
    VL_SIGW(__Vtemp112,95,0,3);
    VL_SIGW(__Vtemp113,95,0,3);
    VL_SIGW(__Vtemp114,95,0,3);
    VL_SIGW(__Vtemp115,95,0,3);
    VL_SIGW(__Vtemp116,95,0,3);
    VL_SIGW(__Vtemp121,95,0,3);
    VL_SIGW(__Vtemp122,95,0,3);
    VL_SIGW(__Vtemp123,95,0,3);
    VL_SIGW(__Vtemp124,95,0,3);
    VL_SIGW(__Vtemp125,95,0,3);
    VL_SIGW(__Vtemp126,95,0,3);
    VL_SIGW(__Vtemp127,95,0,3);
    VL_SIGW(__Vtemp131,95,0,3);
    VL_SIGW(__Vtemp132,95,0,3);
    VL_SIGW(__Vtemp133,95,0,3);
    VL_SIGW(__Vtemp134,95,0,3);
    VL_SIGW(__Vtemp135,95,0,3);
    VL_SIGW(__Vtemp136,95,0,3);
    VL_SIGW(__Vtemp137,95,0,3);
    VL_SIGW(__Vtemp141,95,0,3);
    VL_SIGW(__Vtemp142,95,0,3);
    VL_SIGW(__Vtemp143,95,0,3);
    VL_SIGW(__Vtemp144,95,0,3);
    VL_SIGW(__Vtemp145,95,0,3);
    VL_SIGW(__Vtemp146,95,0,3);
    VL_SIGW(__Vtemp147,95,0,3);
    VL_SIGW(__Vtemp151,95,0,3);
    VL_SIGW(__Vtemp152,95,0,3);
    VL_SIGW(__Vtemp153,95,0,3);
    VL_SIGW(__Vtemp154,95,0,3);
    VL_SIGW(__Vtemp155,95,0,3);
    VL_SIGW(__Vtemp156,95,0,3);
    VL_SIGW(__Vtemp157,95,0,3);
    VL_SIGW(__Vtemp161,127,0,4);
    VL_SIGW(__Vtemp162,127,0,4);
    VL_SIGW(__Vtemp163,159,0,5);
    VL_SIGW(__Vtemp167,95,0,3);
    VL_SIGW(__Vtemp168,95,0,3);
    VL_SIGW(__Vtemp169,95,0,3);
    VL_SIGW(__Vtemp170,95,0,3);
    VL_SIGW(__Vtemp171,95,0,3);
    VL_SIGW(__Vtemp172,95,0,3);
    VL_SIGW(__Vtemp173,127,0,4);
    VL_SIGW(__Vtemp174,127,0,4);
    VL_SIGW(__Vtemp175,127,0,4);
    VL_SIGW(__Vtemp176,127,0,4);
    VL_SIGW(__Vtemp179,95,0,3);
    VL_SIGW(__Vtemp180,95,0,3);
    VL_SIGW(__Vtemp181,95,0,3);
    VL_SIGW(__Vtemp182,95,0,3);
    VL_SIGW(__Vtemp183,95,0,3);
    VL_SIGW(__Vtemp184,95,0,3);
    VL_SIGW(__Vtemp185,95,0,3);
    VL_SIGW(__Vtemp186,95,0,3);
    VL_SIGW(__Vtemp187,127,0,4);
    VL_SIGW(__Vtemp188,127,0,4);
    VL_SIGW(__Vtemp191,127,0,4);
    VL_SIGW(__Vtemp192,159,0,5);
    VL_SIGW(__Vtemp193,159,0,5);
    VL_SIGW(__Vtemp194,159,0,5);
    VL_SIGW(__Vtemp195,159,0,5);
    VL_SIGW(__Vtemp196,159,0,5);
    VL_SIGW(__Vtemp197,159,0,5);
    VL_SIGW(__Vtemp201,127,0,4);
    VL_SIGW(__Vtemp202,127,0,4);
    VL_SIGW(__Vtemp203,159,0,5);
    VL_SIGW(__Vtemp207,95,0,3);
    VL_SIGW(__Vtemp208,95,0,3);
    VL_SIGW(__Vtemp209,95,0,3);
    VL_SIGW(__Vtemp210,95,0,3);
    VL_SIGW(__Vtemp211,95,0,3);
    VL_SIGW(__Vtemp212,95,0,3);
    VL_SIGW(__Vtemp213,127,0,4);
    VL_SIGW(__Vtemp214,127,0,4);
    VL_SIGW(__Vtemp215,127,0,4);
    VL_SIGW(__Vtemp216,127,0,4);
    VL_SIGW(__Vtemp219,95,0,3);
    VL_SIGW(__Vtemp220,95,0,3);
    VL_SIGW(__Vtemp221,95,0,3);
    VL_SIGW(__Vtemp222,95,0,3);
    VL_SIGW(__Vtemp223,95,0,3);
    VL_SIGW(__Vtemp224,95,0,3);
    VL_SIGW(__Vtemp225,95,0,3);
    VL_SIGW(__Vtemp226,95,0,3);
    VL_SIGW(__Vtemp227,127,0,4);
    VL_SIGW(__Vtemp228,127,0,4);
    VL_SIGW(__Vtemp231,127,0,4);
    VL_SIGW(__Vtemp232,159,0,5);
    VL_SIGW(__Vtemp233,159,0,5);
    VL_SIGW(__Vtemp234,159,0,5);
    VL_SIGW(__Vtemp235,159,0,5);
    VL_SIGW(__Vtemp236,159,0,5);
    VL_SIGW(__Vtemp237,159,0,5);
    VL_SIGW(__Vtemp241,95,0,3);
    VL_SIGW(__Vtemp242,95,0,3);
    VL_SIGW(__Vtemp243,95,0,3);
    VL_SIGW(__Vtemp244,95,0,3);
    VL_SIGW(__Vtemp245,95,0,3);
    VL_SIGW(__Vtemp246,95,0,3);
    VL_SIGW(__Vtemp247,95,0,3);
    VL_SIGW(__Vtemp251,127,0,4);
    VL_SIGW(__Vtemp252,127,0,4);
    VL_SIGW(__Vtemp253,159,0,5);
    VL_SIGW(__Vtemp257,95,0,3);
    VL_SIGW(__Vtemp258,95,0,3);
    VL_SIGW(__Vtemp259,95,0,3);
    VL_SIGW(__Vtemp260,95,0,3);
    VL_SIGW(__Vtemp261,95,0,3);
    VL_SIGW(__Vtemp262,95,0,3);
    VL_SIGW(__Vtemp263,127,0,4);
    VL_SIGW(__Vtemp264,127,0,4);
    VL_SIGW(__Vtemp265,127,0,4);
    VL_SIGW(__Vtemp266,127,0,4);
    VL_SIGW(__Vtemp269,95,0,3);
    VL_SIGW(__Vtemp270,95,0,3);
    VL_SIGW(__Vtemp271,95,0,3);
    VL_SIGW(__Vtemp272,95,0,3);
    VL_SIGW(__Vtemp273,95,0,3);
    VL_SIGW(__Vtemp274,95,0,3);
    VL_SIGW(__Vtemp275,95,0,3);
    VL_SIGW(__Vtemp276,95,0,3);
    VL_SIGW(__Vtemp277,127,0,4);
    VL_SIGW(__Vtemp278,127,0,4);
    VL_SIGW(__Vtemp281,127,0,4);
    VL_SIGW(__Vtemp282,159,0,5);
    VL_SIGW(__Vtemp283,159,0,5);
    VL_SIGW(__Vtemp284,159,0,5);
    VL_SIGW(__Vtemp285,159,0,5);
    VL_SIGW(__Vtemp286,159,0,5);
    VL_SIGW(__Vtemp287,159,0,5);
    // Body
    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0;
    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value;
    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4;
    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter;
    __Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmIn_inCounter 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_inCounter;
    __Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmOut_outCounter 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outCounter;
    __Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg;
    __Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg;
    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    __Vdly__UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg 
	= vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1028
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter = 0U;
    } else {
	vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
	    = (0xfffffU & (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter 
			   - (IData)(1U)));
	if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick) {
	    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter = 0x1aU;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:479
    if (vlTOPp->reset) {
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value = 0U;
	vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 0U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext = 1U;
    } else {
	if ((4U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
		if ((0U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))) {
		    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
			= ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_m2sPipe_rValid)
			    ? 1U : 0U);
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		if ((1U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
			vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 4U;
		    }
		} else {
		    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
			if ((7U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))) {
			    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 4U;
			}
		    }
		}
	    } else {
		if ((1U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) {
			vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 2U;
		    }
		} else {
		    if (((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_m2sPipe_rValid) 
			 & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick))) {
			vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 1U;
		    }
		}
	    }
	}
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value 
	    = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext 
	    = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1610
    if (vlTOPp->reset) {
	vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U] = 0U;
	vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U] = 0U;
	vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U] = 0U;
	vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U] = 0U;
	vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U] = 0U;
	vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U] = 0U;
	vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U] = 0U;
	vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U] = 0U;
	vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[0U] = 0U;
	vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[1U] = 0U;
	vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[2U] = 0U;
	vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[3U] = 0U;
	vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[4U] = 0U;
	vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[5U] = 0U;
	vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[6U] = 0U;
	vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[7U] = 0U;
	__Vdly__UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg = 0U;
    } else {
	if ((1U == (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg))) {
	    if (vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_valid) {
		vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U] 
		    = vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[0U];
		vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U] 
		    = vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[1U];
		vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U] 
		    = vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[2U];
		vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U] 
		    = vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[3U];
		vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U] 
		    = vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[4U];
		vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U] 
		    = vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[5U];
		vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U] 
		    = vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[6U];
		vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U] 
		    = vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[7U];
	    }
	} else {
	    if ((2U == (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg))) {
		__Vtemp2[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U];
		__Vtemp2[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U];
		__Vtemp2[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[2U];
		__Vtemp2[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[3U];
		VL_EXTEND_WW(256,128, __Vtemp3, __Vtemp2);
		VL_SHIFTL_WWI(256,256,32, __Vtemp4, __Vtemp3, 0x80U);
		VL_EXTEND_WW(257,256, __Vtemp5, __Vtemp4);
		__Vtemp7[0U] = 0U;
		__Vtemp7[1U] = 0U;
		__Vtemp7[2U] = 0U;
		__Vtemp8[0U] = 0U;
		__Vtemp8[1U] = 0U;
		__Vtemp8[2U] = 0U;
		__Vtemp11[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U];
		__Vtemp11[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U];
		__Vtemp11[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[2U];
		__Vtemp11[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[3U];
		VL_EXTEND_WW(129,128, __Vtemp12, __Vtemp11);
		__Vtemp13[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U];
		__Vtemp13[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U];
		__Vtemp13[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[2U];
		__Vtemp13[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[3U];
		VL_EXTEND_WW(129,128, __Vtemp14, __Vtemp13);
		VL_ADD_W(5, __Vtemp15, __Vtemp12, __Vtemp14);
		__Vtemp16[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[0U];
		__Vtemp16[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[1U];
		__Vtemp16[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[2U];
		__Vtemp16[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[3U];
		VL_EXTEND_WW(129,128, __Vtemp17, __Vtemp16);
		VL_SUB_W(5, __Vtemp18, __Vtemp15, __Vtemp17);
		__Vtemp19[0U] = __Vtemp18[0U];
		__Vtemp19[1U] = __Vtemp18[1U];
		__Vtemp19[2U] = __Vtemp18[2U];
		__Vtemp19[3U] = __Vtemp18[3U];
		__Vtemp19[4U] = (1U & __Vtemp18[4U]);
		VL_EXTEND_WW(193,129, __Vtemp20, __Vtemp19);
		VL_SHIFTL_WWI(193,193,32, __Vtemp21, __Vtemp20, 0x40U);
		__Vtemp22[0U] = __Vtemp21[0U];
		__Vtemp22[1U] = __Vtemp21[1U];
		__Vtemp22[2U] = __Vtemp21[2U];
		__Vtemp22[3U] = __Vtemp21[3U];
		__Vtemp22[4U] = __Vtemp21[4U];
		__Vtemp22[5U] = __Vtemp21[5U];
		__Vtemp22[6U] = (1U & __Vtemp21[6U]);
		VL_EXTEND_WW(194,193, __Vtemp23, __Vtemp22);
		__Vtemp26[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U];
		__Vtemp26[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U];
		__Vtemp26[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[2U];
		__Vtemp26[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[3U];
		VL_EXTEND_WW(129,128, __Vtemp27, __Vtemp26);
		__Vtemp28[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U];
		__Vtemp28[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U];
		__Vtemp28[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[2U];
		__Vtemp28[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[3U];
		VL_EXTEND_WW(129,128, __Vtemp29, __Vtemp28);
		VL_ADD_W(5, __Vtemp30, __Vtemp27, __Vtemp29);
		__Vtemp31[0U] = __Vtemp30[0U];
		__Vtemp31[1U] = __Vtemp30[1U];
		__Vtemp31[2U] = __Vtemp30[2U];
		__Vtemp31[3U] = __Vtemp30[3U];
		__Vtemp31[4U] = (1U & __Vtemp30[4U]);
		VL_EXTEND_WW(130,129, __Vtemp32, __Vtemp31);
		__Vtemp33[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[0U];
		__Vtemp33[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[1U];
		__Vtemp33[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[2U];
		__Vtemp33[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[3U];
		VL_EXTEND_WW(130,128, __Vtemp34, __Vtemp33);
		VL_ADD_W(5, __Vtemp35, __Vtemp32, __Vtemp34);
		__Vtemp36[0U] = __Vtemp35[0U];
		__Vtemp36[1U] = __Vtemp35[1U];
		__Vtemp36[2U] = __Vtemp35[2U];
		__Vtemp36[3U] = __Vtemp35[3U];
		__Vtemp36[4U] = (3U & __Vtemp35[4U]);
		VL_EXTEND_WW(194,130, __Vtemp37, __Vtemp36);
		VL_SHIFTL_WWI(194,194,32, __Vtemp38, __Vtemp37, 0x40U);
		__Vtemp41[0U] = ((VL_GTS_IWW(1,65,65, __Vtemp7, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
				  ^ VL_GTS_IWW(1,65,65, __Vtemp8, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
				  ? __Vtemp23[0U] : 
				 __Vtemp38[0U]);
		__Vtemp41[1U] = ((VL_GTS_IWW(1,65,65, __Vtemp7, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
				  ^ VL_GTS_IWW(1,65,65, __Vtemp8, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
				  ? __Vtemp23[1U] : 
				 __Vtemp38[1U]);
		__Vtemp41[2U] = ((VL_GTS_IWW(1,65,65, __Vtemp7, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
				  ^ VL_GTS_IWW(1,65,65, __Vtemp8, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
				  ? __Vtemp23[2U] : 
				 __Vtemp38[2U]);
		__Vtemp41[3U] = ((VL_GTS_IWW(1,65,65, __Vtemp7, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
				  ^ VL_GTS_IWW(1,65,65, __Vtemp8, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
				  ? __Vtemp23[3U] : 
				 __Vtemp38[3U]);
		__Vtemp41[4U] = ((VL_GTS_IWW(1,65,65, __Vtemp7, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
				  ^ VL_GTS_IWW(1,65,65, __Vtemp8, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
				  ? __Vtemp23[4U] : 
				 __Vtemp38[4U]);
		__Vtemp41[5U] = ((VL_GTS_IWW(1,65,65, __Vtemp7, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
				  ^ VL_GTS_IWW(1,65,65, __Vtemp8, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
				  ? __Vtemp23[5U] : 
				 __Vtemp38[5U]);
		__Vtemp41[6U] = (3U & ((VL_GTS_IWW(1,65,65, __Vtemp7, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
					^ VL_GTS_IWW(1,65,65, __Vtemp8, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
				        ? __Vtemp23[6U]
				        : __Vtemp38[6U]));
		VL_EXTEND_WW(257,194, __Vtemp42, __Vtemp41);
		VL_ADD_W(9, __Vtemp43, __Vtemp5, __Vtemp42);
		__Vtemp44[0U] = __Vtemp43[0U];
		__Vtemp44[1U] = __Vtemp43[1U];
		__Vtemp44[2U] = __Vtemp43[2U];
		__Vtemp44[3U] = __Vtemp43[3U];
		__Vtemp44[4U] = __Vtemp43[4U];
		__Vtemp44[5U] = __Vtemp43[5U];
		__Vtemp44[6U] = __Vtemp43[6U];
		__Vtemp44[7U] = __Vtemp43[7U];
		__Vtemp44[8U] = (1U & __Vtemp43[8U]);
		VL_EXTEND_WW(258,257, __Vtemp45, __Vtemp44);
		__Vtemp46[0U] = __Vtemp45[0U];
		__Vtemp46[1U] = __Vtemp45[1U];
		__Vtemp46[2U] = __Vtemp45[2U];
		__Vtemp46[3U] = __Vtemp45[3U];
		__Vtemp46[4U] = __Vtemp45[4U];
		__Vtemp46[5U] = __Vtemp45[5U];
		__Vtemp46[6U] = __Vtemp45[6U];
		__Vtemp46[7U] = __Vtemp45[7U];
		__Vtemp47[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U];
		__Vtemp47[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U];
		__Vtemp47[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[2U];
		__Vtemp47[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[3U];
		VL_EXTEND_WW(258,128, __Vtemp48, __Vtemp47);
		__Vtemp49[0U] = __Vtemp48[0U];
		__Vtemp49[1U] = __Vtemp48[1U];
		__Vtemp49[2U] = __Vtemp48[2U];
		__Vtemp49[3U] = __Vtemp48[3U];
		__Vtemp49[4U] = __Vtemp48[4U];
		__Vtemp49[5U] = __Vtemp48[5U];
		__Vtemp49[6U] = __Vtemp48[6U];
		__Vtemp49[7U] = __Vtemp48[7U];
		VL_ADD_W(8, __Vtemp50, __Vtemp46, __Vtemp49);
		vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[0U] 
		    = __Vtemp50[0U];
		vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[1U] 
		    = __Vtemp50[1U];
		vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[2U] 
		    = __Vtemp50[2U];
		vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[3U] 
		    = __Vtemp50[3U];
		vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[4U] 
		    = __Vtemp50[4U];
		vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[5U] 
		    = __Vtemp50[5U];
		vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[6U] 
		    = __Vtemp50[6U];
		vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[7U] 
		    = __Vtemp50[7U];
	    }
	}
	__Vdly__UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg 
	    = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateNext;
    }
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg 
	= __Vdly__UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg;
    vlTOPp->io_uart_txd = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1439
    if (vlTOPp->reset) {
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_m2sPipe_rValid = 0U;
	__Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmIn_inCounter = 0U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[0U] = 0U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[1U] = 0U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[2U] = 0U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[3U] = 0U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[4U] = 0U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[5U] = 0U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[6U] = 0U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[7U] = 0U;
	__Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmOut_outCounter = 0U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer[0U] = 0U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer[1U] = 0U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer[2U] = 0U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer[3U] = 0U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer[4U] = 0U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer[5U] = 0U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer[6U] = 0U;
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer[7U] = 0U;
	__Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg = 0U;
	__Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg = 0U;
    } else {
	if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_ready) {
	    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_m2sPipe_rValid 
		= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_valid;
	}
	if ((1U & (~ ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 2U)))) {
	    if ((2U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg))) {
		if ((1U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg))) {
		    __Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmIn_inCounter 
			= (0x1fU & ((IData)(1U) + (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_inCounter)));
		} else {
		    if (vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) {
			VL_ASSIGNSEL_WIII(8,(0xffU 
					     & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT___zz_5_)), vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer, vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter);
		    }
		}
	    }
	}
	if ((1U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    if (vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_valid) {
		__Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmOut_outCounter = 0U;
		vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer[0U] 
		    = vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[0U];
		vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer[1U] 
		    = vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[1U];
		vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer[2U] 
		    = vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[2U];
		vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer[3U] 
		    = vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[3U];
		vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer[4U] 
		    = vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[4U];
		vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer[5U] 
		    = vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[5U];
		vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer[6U] 
		    = vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[6U];
		vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer[7U] 
		    = vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[7U];
	    }
	} else {
	    if ((2U != (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg))) {
		if ((3U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg))) {
		    __Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmOut_outCounter 
			= (0x1fU & ((IData)(1U) + (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outCounter)));
		}
	    }
	}
	if (((1U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg)) 
	     & (1U != (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext)))) {
	    __Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmIn_inCounter = 0U;
	    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[0U] = 0U;
	    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[1U] = 0U;
	    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[2U] = 0U;
	    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[3U] = 0U;
	    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[4U] = 0U;
	    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[5U] = 0U;
	    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[6U] = 0U;
	    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[7U] = 0U;
	}
	__Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg 
	    = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext;
	__Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg 
	    = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1537
    vlTOPp->__Vtableidx8 = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg;
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg_string[0U] 
	= vlTOPp->__Vtable8_UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg_string
	[vlTOPp->__Vtableidx8][0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg_string[1U] 
	= vlTOPp->__Vtable8_UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg_string
	[vlTOPp->__Vtableidx8][1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg_string[2U] 
	= vlTOPp->__Vtable8_UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg_string
	[vlTOPp->__Vtableidx8][2U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U] 
			<< 0x10U) | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U] 
				     >> 0x10U))) * 
	   (0xffffU & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U] 
		       >> 0x10U)));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U]) 
	   * (0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U]));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U] 
			<< 0x10U) | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U] 
				     >> 0x10U))) * 
	   (0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U] 
			<< 0x10U) | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U] 
				     >> 0x10U))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U]) 
	   * (0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U]));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U] 
			<< 0x10U) | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U] 
				     >> 0x10U))) * 
	   (0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U] 
			<< 0x10U) | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U] 
				     >> 0x10U))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U]) 
	   * (0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U]));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U] 
			<< 0x10U) | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U] 
				     >> 0x10U))) * 
	   (0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U] 
			<< 0x10U) | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U] 
				     >> 0x10U))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U]) 
	   * (0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U]));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U]) 
		       - (0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U] 
				      << 0x10U) | (
						   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U] 
						   >> 0x10U)))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U] 
				   >> 0x10U)) - (0xffffU 
						 & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U])));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U]) 
		       - (0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U] 
				      << 0x10U) | (
						   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U] 
						   >> 0x10U)))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U] 
				    << 0x10U) | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U] 
						 >> 0x10U))) 
		       - (0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U])));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U]) 
		       - (0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U] 
				      << 0x10U) | (
						   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U] 
						   >> 0x10U)))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U] 
				    << 0x10U) | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U] 
						 >> 0x10U))) 
		       - (0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U])));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U]) 
		       - (0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U] 
				      << 0x10U) | (
						   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U] 
						   >> 0x10U)))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U] 
				    << 0x10U) | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U] 
						 >> 0x10U))) 
		       - (0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U])));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U])) 
				  - (QData)((IData)(
						    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U]))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U])) 
				  - (QData)((IData)(
						    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U]))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U])) 
				  - (QData)((IData)(
						    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U]))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U])) 
				  - (QData)((IData)(
						    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U]))));
    VL_EXTEND_WQ(65,64, __Vtemp53, (((QData)((IData)(
						     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U])) 
				     << 0x20U) | (QData)((IData)(
								 vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp54, (((QData)((IData)(
						     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U])) 
				     << 0x20U) | (QData)((IData)(
								 vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U]))));
    VL_SUB_W(3, __Vtemp55, __Vtemp53, __Vtemp54);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[0U] 
	= __Vtemp55[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[1U] 
	= __Vtemp55[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[2U] 
	= (1U & __Vtemp55[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp58, (((QData)((IData)(
						     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U])) 
				     << 0x20U) | (QData)((IData)(
								 vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U]))));
    VL_EXTEND_WQ(65,64, __Vtemp59, (((QData)((IData)(
						     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U])) 
				     << 0x20U) | (QData)((IData)(
								 vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U]))));
    VL_SUB_W(3, __Vtemp60, __Vtemp58, __Vtemp59);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[0U] 
	= __Vtemp60[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[1U] 
	= __Vtemp60[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[2U] 
	= (1U & __Vtemp60[2U]);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1558
    vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[0U] = 0U;
    vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[1U] = 0U;
    vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[2U] = 0U;
    vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[3U] = 0U;
    vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[4U] = 0U;
    vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[5U] = 0U;
    vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[6U] = 0U;
    vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[7U] = 0U;
    if ((1U != (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg))) {
	if ((2U != (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg))) {
	    if ((3U == (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg))) {
		vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[0U] 
		    = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[0U];
		vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[1U] 
		    = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[1U];
		vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[2U] 
		    = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[2U];
		vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[3U] 
		    = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[3U];
		vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[4U] 
		    = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[4U];
		vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[5U] 
		    = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[5U];
		vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[6U] 
		    = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[6U];
		vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload[7U] 
		    = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result[7U];
	    }
	}
    }
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_inCounter 
	= __Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmIn_inCounter;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outCounter 
	= __Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmOut_outCounter;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg 
	= __Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg 
	= __Vdly__UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg;
    vlTOPp->__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg;
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_)
				     ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_)
				     : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_)
						        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_)
				     ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_)
				     : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_)
						        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_)
				     ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_)
				     : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_)
						        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_)
				     ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_)
				     : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_)
						        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_20_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_)
				    : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_ 
								>> 0x20U)))))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_26_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_)
				    : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_ 
								>> 0x20U)))))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_20_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_)
				    : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_ 
								>> 0x20U)))))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_26_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_)
				    : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_ 
								>> 0x20U)))))));
    __Vtemp65[0U] = ((1U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[2U])
		      ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[0U])
		      : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[0U]);
    __Vtemp65[1U] = ((1U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[2U])
		      ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[1U])
		      : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[1U]);
    __Vtemp65[2U] = ((1U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[2U])
		      ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[2U])
		      : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[2U]);
    VL_EXTEND_WI(65,1, __Vtemp66, (1U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[2U]));
    VL_ADD_W(3, __Vtemp67, __Vtemp65, __Vtemp66);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[0U] 
	= __Vtemp67[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[1U] 
	= __Vtemp67[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[2U] 
	= (1U & __Vtemp67[2U]);
    __Vtemp72[0U] = ((1U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[2U])
		      ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[0U])
		      : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[0U]);
    __Vtemp72[1U] = ((1U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[2U])
		      ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[1U])
		      : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[1U]);
    __Vtemp72[2U] = ((1U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[2U])
		      ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[2U])
		      : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[2U]);
    VL_EXTEND_WI(65,1, __Vtemp73, (1U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[2U]));
    VL_ADD_W(3, __Vtemp74, __Vtemp72, __Vtemp73);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[0U] 
	= __Vtemp74[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[1U] 
	= __Vtemp74[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[2U] 
	= (1U & __Vtemp74[2U]);
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT___zz_5_ 
	= (0x1ffU & ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_inCounter) 
		     << 3U));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1321
    vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[0U] = 0U;
    vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[1U] = 0U;
    vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[2U] = 0U;
    vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[3U] = 0U;
    vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[4U] = 0U;
    vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[5U] = 0U;
    vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[6U] = 0U;
    vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[7U] = 0U;
    if ((4U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg)))) {
		vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[0U] 
		    = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[0U];
		vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[1U] 
		    = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[1U];
		vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[2U] 
		    = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[2U];
		vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[3U] 
		    = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[3U];
		vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[4U] 
		    = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[4U];
		vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[5U] 
		    = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[5U];
		vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[6U] 
		    = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[6U];
		vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload[7U] 
		    = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer[7U];
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1271
    vlTOPp->__Vtableidx1 = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg_string[0U] 
	= vlTOPp->__Vtable1_UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][0U];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg_string[1U] 
	= vlTOPp->__Vtable1_UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][1U];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg_string[2U] 
	= vlTOPp->__Vtable1_UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][2U];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg_string[3U] 
	= vlTOPp->__Vtable1_UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][3U];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg_string[4U] 
	= vlTOPp->__Vtable1_UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][4U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1338
    vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_valid = 0U;
    if ((4U & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg)))) {
		vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_valid = 1U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1291
    vlTOPp->__Vtableidx3 = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg_string[0U] 
	= vlTOPp->__Vtable3_UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][0U];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg_string[1U] 
	= vlTOPp->__Vtable3_UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][1U];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg_string[2U] 
	= vlTOPp->__Vtable3_UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][2U];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg_string[3U] 
	= vlTOPp->__Vtable3_UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][3U];
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg_string[4U] 
	= vlTOPp->__Vtable3_UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][4U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1356
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_valid = 0U;
    if ((1U != (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_valid = 1U;
	}
    }
    VL_EXTEND_WQ(65,64, __Vtemp80, ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
				    << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp81, (VL_ULL(0x3ffffffffffff) 
				    & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_) 
					^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_))
				        ? (VL_ULL(0x1ffffffff0000) 
					   & ((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
						+ (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_))) 
					       - (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					      << 0x10U))
				        : (VL_ULL(0x3ffffffff0000) 
					   & (((VL_ULL(0x1ffffffff) 
						& ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
						   + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_)))) 
					       + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					      << 0x10U)))));
    VL_ADD_W(3, __Vtemp82, __Vtemp80, __Vtemp81);
    __Vtemp83[0U] = __Vtemp82[0U];
    __Vtemp83[1U] = __Vtemp82[1U];
    __Vtemp83[2U] = (1U & __Vtemp82[2U]);
    VL_EXTEND_WW(66,65, __Vtemp84, __Vtemp83);
    VL_EXTEND_WI(66,32, __Vtemp85, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp86, __Vtemp84, __Vtemp85);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U] 
	= __Vtemp86[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U] 
	= __Vtemp86[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[2U] 
	= (3U & __Vtemp86[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp90, ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
				    << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp91, (VL_ULL(0x3ffffffffffff) 
				    & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_) 
					^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_))
				        ? (VL_ULL(0x1ffffffff0000) 
					   & ((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
						+ (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_))) 
					       - (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					      << 0x10U))
				        : (VL_ULL(0x3ffffffff0000) 
					   & (((VL_ULL(0x1ffffffff) 
						& ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
						   + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_)))) 
					       + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					      << 0x10U)))));
    VL_ADD_W(3, __Vtemp92, __Vtemp90, __Vtemp91);
    __Vtemp93[0U] = __Vtemp92[0U];
    __Vtemp93[1U] = __Vtemp92[1U];
    __Vtemp93[2U] = (1U & __Vtemp92[2U]);
    VL_EXTEND_WW(66,65, __Vtemp94, __Vtemp93);
    VL_EXTEND_WI(66,32, __Vtemp95, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp96, __Vtemp94, __Vtemp95);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U] 
	= __Vtemp96[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U] 
	= __Vtemp96[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[2U] 
	= (3U & __Vtemp96[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp100, ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp101, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp102, __Vtemp100, __Vtemp101);
    __Vtemp103[0U] = __Vtemp102[0U];
    __Vtemp103[1U] = __Vtemp102[1U];
    __Vtemp103[2U] = (1U & __Vtemp102[2U]);
    VL_EXTEND_WW(66,65, __Vtemp104, __Vtemp103);
    VL_EXTEND_WI(66,32, __Vtemp105, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp106, __Vtemp104, __Vtemp105);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[0U] 
	= __Vtemp106[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[1U] 
	= __Vtemp106[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[2U] 
	= (3U & __Vtemp106[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp110, ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp111, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp112, __Vtemp110, __Vtemp111);
    __Vtemp113[0U] = __Vtemp112[0U];
    __Vtemp113[1U] = __Vtemp112[1U];
    __Vtemp113[2U] = (1U & __Vtemp112[2U]);
    VL_EXTEND_WW(66,65, __Vtemp114, __Vtemp113);
    VL_EXTEND_WI(66,32, __Vtemp115, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp116, __Vtemp114, __Vtemp115);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[0U] 
	= __Vtemp116[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[1U] 
	= __Vtemp116[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[2U] 
	= (3U & __Vtemp116[2U]);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_20_)) 
		       - (0xffffU & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_20_ 
					     >> 0x10U)))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_20_ 
			       >> 0x10U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_26_ 
							 >> 0x10U))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_20_)) 
	   * (0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_26_)));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_26_ 
					   >> 0x10U))) 
		       - (0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_26_))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_20_)) 
		       - (0xffffU & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_20_ 
					     >> 0x10U)))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_20_ 
			       >> 0x10U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_26_ 
							 >> 0x10U))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_20_)) 
	   * (0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_26_)));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_26_ 
					   >> 0x10U))) 
		       - (0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_26_))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[1U]) 
		       - (0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[2U] 
				      << 0x10U) | (
						   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[1U] 
						   >> 0x10U)))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[0U]) 
		       - (0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[1U] 
				      << 0x10U) | (
						   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[0U] 
						   >> 0x10U)))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[0U])) 
				  - (QData)((IData)(
						    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[1U]))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[2U] 
			<< 0x10U) | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[1U] 
				     >> 0x10U))) * 
	   (0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[2U] 
			<< 0x10U) | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[1U] 
				     >> 0x10U))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[1U]) 
	   * (0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[1U]));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[1U] 
			<< 0x10U) | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[0U] 
				     >> 0x10U))) * 
	   (0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[1U] 
			<< 0x10U) | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[0U] 
				     >> 0x10U))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[0U]) 
	   * (0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[0U]));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[2U] 
				    << 0x10U) | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[1U] 
						 >> 0x10U))) 
		       - (0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[1U])));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[1U] 
				    << 0x10U) | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[0U] 
						 >> 0x10U))) 
		       - (0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[0U])));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_ 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[1U])) 
				  - (QData)((IData)(
						    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[0U]))));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1588
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateNext 
	= vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg;
    if ((1U == (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg))) {
	if (vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_valid) {
	    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateNext = 2U;
	}
    } else {
	vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateNext 
	    = ((2U == (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg))
	        ? 3U : 1U);
    }
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_)
				     ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_)
				     : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_)
						        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_)
				     ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_)
				     : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_)
						        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_20_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_)
				    : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_ 
								>> 0x20U)))))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_)
				     ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_)
				     : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_)
						        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_)
				     ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_)
				     : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_)
						        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_ 
						       >> 0x10U)))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_26_ 
	= (VL_ULL(0x1ffffffff) & (((1U & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_ 
						  >> 0x20U)))
				    ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_)
				    : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_) 
				  + (QData)((IData)(
						    (1U 
						     & (IData)(
							       (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_ 
								>> 0x20U)))))));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1546
    vlTOPp->__Vtableidx9 = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateNext;
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateNext_string[0U] 
	= vlTOPp->__Vtable9_UartKaraReg__DOT__karareg_1___DOT__fsm_stateNext_string
	[vlTOPp->__Vtableidx9][0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateNext_string[1U] 
	= vlTOPp->__Vtable9_UartKaraReg__DOT__karareg_1___DOT__fsm_stateNext_string
	[vlTOPp->__Vtableidx9][1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateNext_string[2U] 
	= vlTOPp->__Vtable9_UartKaraReg__DOT__karareg_1___DOT__fsm_stateNext_string
	[vlTOPp->__Vtableidx9][2U];
    VL_EXTEND_WQ(65,64, __Vtemp121, ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp122, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp123, __Vtemp121, __Vtemp122);
    __Vtemp124[0U] = __Vtemp123[0U];
    __Vtemp124[1U] = __Vtemp123[1U];
    __Vtemp124[2U] = (1U & __Vtemp123[2U]);
    VL_EXTEND_WW(66,65, __Vtemp125, __Vtemp124);
    VL_EXTEND_WI(66,32, __Vtemp126, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp127, __Vtemp125, __Vtemp126);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[0U] 
	= __Vtemp127[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[1U] 
	= __Vtemp127[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[2U] 
	= (3U & __Vtemp127[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp131, ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp132, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp133, __Vtemp131, __Vtemp132);
    __Vtemp134[0U] = __Vtemp133[0U];
    __Vtemp134[1U] = __Vtemp133[1U];
    __Vtemp134[2U] = (1U & __Vtemp133[2U]);
    VL_EXTEND_WW(66,65, __Vtemp135, __Vtemp134);
    VL_EXTEND_WI(66,32, __Vtemp136, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp137, __Vtemp135, __Vtemp136);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[0U] 
	= __Vtemp137[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[1U] 
	= __Vtemp137[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[2U] 
	= (3U & __Vtemp137[2U]);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_20_)) 
		       - (0xffffU & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_20_ 
					     >> 0x10U)))));
    VL_EXTEND_WQ(65,64, __Vtemp141, ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp142, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp143, __Vtemp141, __Vtemp142);
    __Vtemp144[0U] = __Vtemp143[0U];
    __Vtemp144[1U] = __Vtemp143[1U];
    __Vtemp144[2U] = (1U & __Vtemp143[2U]);
    VL_EXTEND_WW(66,65, __Vtemp145, __Vtemp144);
    VL_EXTEND_WI(66,32, __Vtemp146, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp147, __Vtemp145, __Vtemp146);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[0U] 
	= __Vtemp147[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[1U] 
	= __Vtemp147[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[2U] 
	= (3U & __Vtemp147[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp151, ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp152, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp153, __Vtemp151, __Vtemp152);
    __Vtemp154[0U] = __Vtemp153[0U];
    __Vtemp154[1U] = __Vtemp153[1U];
    __Vtemp154[2U] = (1U & __Vtemp153[2U]);
    VL_EXTEND_WW(66,65, __Vtemp155, __Vtemp154);
    VL_EXTEND_WI(66,32, __Vtemp156, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp157, __Vtemp155, __Vtemp156);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[0U] 
	= __Vtemp157[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[1U] 
	= __Vtemp157[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[2U] 
	= (3U & __Vtemp157[2U]);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_ 
	= ((0xffffU & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_20_ 
			       >> 0x10U))) * (0xffffU 
					      & (IData)(
							(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_26_ 
							 >> 0x10U))));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_ 
	= ((0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_20_)) 
	   * (0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_26_)));
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_ 
	= (0x1ffffU & ((0xffffU & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_26_ 
					   >> 0x10U))) 
		       - (0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_26_))));
    VL_EXTEND_WQ(128,64, __Vtemp161, (((QData)((IData)(
						       vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp162, __Vtemp161, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp163, __Vtemp162);
    VL_EXTEND_WQ(65,64, __Vtemp167, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp168, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U]))));
    VL_ADD_W(3, __Vtemp169, __Vtemp167, __Vtemp168);
    VL_EXTEND_WQ(65,64, __Vtemp170, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[0U]))));
    VL_SUB_W(3, __Vtemp171, __Vtemp169, __Vtemp170);
    __Vtemp172[0U] = __Vtemp171[0U];
    __Vtemp172[1U] = __Vtemp171[1U];
    __Vtemp172[2U] = (1U & __Vtemp171[2U]);
    VL_EXTEND_WW(97,65, __Vtemp173, __Vtemp172);
    VL_SHIFTL_WWI(97,97,32, __Vtemp174, __Vtemp173, 0x20U);
    __Vtemp175[0U] = __Vtemp174[0U];
    __Vtemp175[1U] = __Vtemp174[1U];
    __Vtemp175[2U] = __Vtemp174[2U];
    __Vtemp175[3U] = (1U & __Vtemp174[3U]);
    VL_EXTEND_WW(98,97, __Vtemp176, __Vtemp175);
    VL_EXTEND_WQ(65,64, __Vtemp179, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp180, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U]))));
    VL_ADD_W(3, __Vtemp181, __Vtemp179, __Vtemp180);
    __Vtemp182[0U] = __Vtemp181[0U];
    __Vtemp182[1U] = __Vtemp181[1U];
    __Vtemp182[2U] = (1U & __Vtemp181[2U]);
    VL_EXTEND_WW(66,65, __Vtemp183, __Vtemp182);
    VL_EXTEND_WQ(66,64, __Vtemp184, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[0U]))));
    VL_ADD_W(3, __Vtemp185, __Vtemp183, __Vtemp184);
    __Vtemp186[0U] = __Vtemp185[0U];
    __Vtemp186[1U] = __Vtemp185[1U];
    __Vtemp186[2U] = (3U & __Vtemp185[2U]);
    VL_EXTEND_WW(98,66, __Vtemp187, __Vtemp186);
    VL_SHIFTL_WWI(98,98,32, __Vtemp188, __Vtemp187, 0x20U);
    __Vtemp191[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_))
		       ? __Vtemp176[0U] : __Vtemp188[0U]);
    __Vtemp191[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_))
		       ? __Vtemp176[1U] : __Vtemp188[1U]);
    __Vtemp191[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_))
		       ? __Vtemp176[2U] : __Vtemp188[2U]);
    __Vtemp191[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_))
			     ? __Vtemp176[3U] : __Vtemp188[3U]));
    VL_EXTEND_WW(129,98, __Vtemp192, __Vtemp191);
    VL_ADD_W(5, __Vtemp193, __Vtemp163, __Vtemp192);
    __Vtemp194[0U] = __Vtemp193[0U];
    __Vtemp194[1U] = __Vtemp193[1U];
    __Vtemp194[2U] = __Vtemp193[2U];
    __Vtemp194[3U] = __Vtemp193[3U];
    __Vtemp194[4U] = (1U & __Vtemp193[4U]);
    VL_EXTEND_WW(130,129, __Vtemp195, __Vtemp194);
    VL_EXTEND_WQ(130,64, __Vtemp196, (((QData)((IData)(
						       vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U]))));
    VL_ADD_W(5, __Vtemp197, __Vtemp195, __Vtemp196);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U] 
	= __Vtemp197[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U] 
	= __Vtemp197[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[2U] 
	= __Vtemp197[2U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[3U] 
	= __Vtemp197[3U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[4U] 
	= (3U & __Vtemp197[4U]);
    VL_EXTEND_WQ(128,64, __Vtemp201, (((QData)((IData)(
						       vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp202, __Vtemp201, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp203, __Vtemp202);
    VL_EXTEND_WQ(65,64, __Vtemp207, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp208, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[0U]))));
    VL_ADD_W(3, __Vtemp209, __Vtemp207, __Vtemp208);
    VL_EXTEND_WQ(65,64, __Vtemp210, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[0U]))));
    VL_SUB_W(3, __Vtemp211, __Vtemp209, __Vtemp210);
    __Vtemp212[0U] = __Vtemp211[0U];
    __Vtemp212[1U] = __Vtemp211[1U];
    __Vtemp212[2U] = (1U & __Vtemp211[2U]);
    VL_EXTEND_WW(97,65, __Vtemp213, __Vtemp212);
    VL_SHIFTL_WWI(97,97,32, __Vtemp214, __Vtemp213, 0x20U);
    __Vtemp215[0U] = __Vtemp214[0U];
    __Vtemp215[1U] = __Vtemp214[1U];
    __Vtemp215[2U] = __Vtemp214[2U];
    __Vtemp215[3U] = (1U & __Vtemp214[3U]);
    VL_EXTEND_WW(98,97, __Vtemp216, __Vtemp215);
    VL_EXTEND_WQ(65,64, __Vtemp219, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp220, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[0U]))));
    VL_ADD_W(3, __Vtemp221, __Vtemp219, __Vtemp220);
    __Vtemp222[0U] = __Vtemp221[0U];
    __Vtemp222[1U] = __Vtemp221[1U];
    __Vtemp222[2U] = (1U & __Vtemp221[2U]);
    VL_EXTEND_WW(66,65, __Vtemp223, __Vtemp222);
    VL_EXTEND_WQ(66,64, __Vtemp224, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[0U]))));
    VL_ADD_W(3, __Vtemp225, __Vtemp223, __Vtemp224);
    __Vtemp226[0U] = __Vtemp225[0U];
    __Vtemp226[1U] = __Vtemp225[1U];
    __Vtemp226[2U] = (3U & __Vtemp225[2U]);
    VL_EXTEND_WW(98,66, __Vtemp227, __Vtemp226);
    VL_SHIFTL_WWI(98,98,32, __Vtemp228, __Vtemp227, 0x20U);
    __Vtemp231[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_))
		       ? __Vtemp216[0U] : __Vtemp228[0U]);
    __Vtemp231[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_))
		       ? __Vtemp216[1U] : __Vtemp228[1U]);
    __Vtemp231[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_))
		       ? __Vtemp216[2U] : __Vtemp228[2U]);
    __Vtemp231[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_))
			     ? __Vtemp216[3U] : __Vtemp228[3U]));
    VL_EXTEND_WW(129,98, __Vtemp232, __Vtemp231);
    VL_ADD_W(5, __Vtemp233, __Vtemp203, __Vtemp232);
    __Vtemp234[0U] = __Vtemp233[0U];
    __Vtemp234[1U] = __Vtemp233[1U];
    __Vtemp234[2U] = __Vtemp233[2U];
    __Vtemp234[3U] = __Vtemp233[3U];
    __Vtemp234[4U] = (1U & __Vtemp233[4U]);
    VL_EXTEND_WW(130,129, __Vtemp235, __Vtemp234);
    VL_EXTEND_WQ(130,64, __Vtemp236, (((QData)((IData)(
						       vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[0U]))));
    VL_ADD_W(5, __Vtemp237, __Vtemp235, __Vtemp236);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U] 
	= __Vtemp237[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U] 
	= __Vtemp237[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[2U] 
	= __Vtemp237[2U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[3U] 
	= __Vtemp237[3U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[4U] 
	= (3U & __Vtemp237[4U]);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_ 
	= ((0xffffU & ((0x1ffffU & ((0x10000U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_)
				     ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_)
				     : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_)) 
		       + (1U & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_ 
				>> 0x10U)))) * (0xffffU 
						& ((0x1ffffU 
						    & ((0x10000U 
							& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_)
						        ? 
						       (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_)
						        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_)) 
						   + 
						   (1U 
						    & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_ 
						       >> 0x10U)))));
    VL_EXTEND_WQ(65,64, __Vtemp241, ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp242, (VL_ULL(0x3ffffffffffff) 
				     & ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_) 
					 ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_))
					 ? (VL_ULL(0x1ffffffff0000) 
					    & ((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
						 + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_))) 
						- (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U))
					 : (VL_ULL(0x3ffffffff0000) 
					    & (((VL_ULL(0x1ffffffff) 
						 & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
						    + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_)))) 
						+ (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					       << 0x10U)))));
    VL_ADD_W(3, __Vtemp243, __Vtemp241, __Vtemp242);
    __Vtemp244[0U] = __Vtemp243[0U];
    __Vtemp244[1U] = __Vtemp243[1U];
    __Vtemp244[2U] = (1U & __Vtemp243[2U]);
    VL_EXTEND_WW(66,65, __Vtemp245, __Vtemp244);
    VL_EXTEND_WI(66,32, __Vtemp246, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp247, __Vtemp245, __Vtemp246);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[0U] 
	= __Vtemp247[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[1U] 
	= __Vtemp247[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[2U] 
	= (3U & __Vtemp247[2U]);
    VL_EXTEND_WQ(128,64, __Vtemp251, (((QData)((IData)(
						       vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp252, __Vtemp251, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp253, __Vtemp252);
    VL_EXTEND_WQ(65,64, __Vtemp257, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp258, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[0U]))));
    VL_ADD_W(3, __Vtemp259, __Vtemp257, __Vtemp258);
    VL_EXTEND_WQ(65,64, __Vtemp260, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[0U]))));
    VL_SUB_W(3, __Vtemp261, __Vtemp259, __Vtemp260);
    __Vtemp262[0U] = __Vtemp261[0U];
    __Vtemp262[1U] = __Vtemp261[1U];
    __Vtemp262[2U] = (1U & __Vtemp261[2U]);
    VL_EXTEND_WW(97,65, __Vtemp263, __Vtemp262);
    VL_SHIFTL_WWI(97,97,32, __Vtemp264, __Vtemp263, 0x20U);
    __Vtemp265[0U] = __Vtemp264[0U];
    __Vtemp265[1U] = __Vtemp264[1U];
    __Vtemp265[2U] = __Vtemp264[2U];
    __Vtemp265[3U] = (1U & __Vtemp264[3U]);
    VL_EXTEND_WW(98,97, __Vtemp266, __Vtemp265);
    VL_EXTEND_WQ(65,64, __Vtemp269, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp270, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[0U]))));
    VL_ADD_W(3, __Vtemp271, __Vtemp269, __Vtemp270);
    __Vtemp272[0U] = __Vtemp271[0U];
    __Vtemp272[1U] = __Vtemp271[1U];
    __Vtemp272[2U] = (1U & __Vtemp271[2U]);
    VL_EXTEND_WW(66,65, __Vtemp273, __Vtemp272);
    VL_EXTEND_WQ(66,64, __Vtemp274, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[0U]))));
    VL_ADD_W(3, __Vtemp275, __Vtemp273, __Vtemp274);
    __Vtemp276[0U] = __Vtemp275[0U];
    __Vtemp276[1U] = __Vtemp275[1U];
    __Vtemp276[2U] = (3U & __Vtemp275[2U]);
    VL_EXTEND_WW(98,66, __Vtemp277, __Vtemp276);
    VL_SHIFTL_WWI(98,98,32, __Vtemp278, __Vtemp277, 0x20U);
    __Vtemp281[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_))
		       ? __Vtemp266[0U] : __Vtemp278[0U]);
    __Vtemp281[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_))
		       ? __Vtemp266[1U] : __Vtemp278[1U]);
    __Vtemp281[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_))
		       ? __Vtemp266[2U] : __Vtemp278[2U]);
    __Vtemp281[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_))
			     ? __Vtemp266[3U] : __Vtemp278[3U]));
    VL_EXTEND_WW(129,98, __Vtemp282, __Vtemp281);
    VL_ADD_W(5, __Vtemp283, __Vtemp253, __Vtemp282);
    __Vtemp284[0U] = __Vtemp283[0U];
    __Vtemp284[1U] = __Vtemp283[1U];
    __Vtemp284[2U] = __Vtemp283[2U];
    __Vtemp284[3U] = __Vtemp283[3U];
    __Vtemp284[4U] = (1U & __Vtemp283[4U]);
    VL_EXTEND_WW(130,129, __Vtemp285, __Vtemp284);
    VL_EXTEND_WQ(130,64, __Vtemp286, (((QData)((IData)(
						       vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[0U]))));
    VL_ADD_W(5, __Vtemp287, __Vtemp285, __Vtemp286);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[0U] 
	= __Vtemp287[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[1U] 
	= __Vtemp287[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[2U] 
	= __Vtemp287[2U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[3U] 
	= __Vtemp287[3U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[4U] 
	= (3U & __Vtemp287[4U]);
}
