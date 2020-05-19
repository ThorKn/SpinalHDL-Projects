// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUartMod.h for the primary calling header

#include "VUartMod.h"          // For This
#include "VUartMod__Syms.h"


//--------------------
// STATIC VARIABLES

VL_ST_SIGW(VUartMod::__Vtable1_UartMod__DOT__uartfsm__DOT__fsmIn_stateReg_string[8],159,0,5);
VL_ST_SIGW(VUartMod::__Vtable2_UartMod__DOT__uartfsm__DOT__fsmIn_stateNext_string[8],159,0,5);
VL_ST_SIGW(VUartMod::__Vtable3_UartMod__DOT__uartfsm__DOT__fsmOut_stateReg_string[4],159,0,5);
VL_ST_SIGW(VUartMod::__Vtable4_UartMod__DOT__uartfsm__DOT__fsmOut_stateNext_string[4],159,0,5);
VL_ST_SIG64(VUartMod::__Vtable5_UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string[8],47,0);
VL_ST_SIG8(VUartMod::__Vtable6_UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[32],0,0);
VL_ST_SIG64(VUartMod::__Vtable7_UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string[8],47,0);
VL_ST_SIGW(VUartMod::__Vtable8_UartMod__DOT__multmod_1___DOT__fsm_stateReg_string[8],79,0,3);
VL_ST_SIGW(VUartMod::__Vtable9_UartMod__DOT__multmod_1___DOT__fsm_stateNext_string[8],79,0,3);
VL_ST_SIG8(VUartMod::__Vtable10_UartMod__DOT__multmod_1___05Fio_temp_corr_flag[256],2,0);
VL_ST_SIG8(VUartMod::__Vtable11_UartMod__DOT__multmod_1___DOT__fsm_stateNext[128],2,0);
VL_ST_SIG8(VUartMod::__Vtable12_UartMod__DOT__multmod_1___DOT___zz_1_[256],1,0);

//--------------------

VL_CTOR_IMP(VUartMod) {
    VUartMod__Syms* __restrict vlSymsp = __VlSymsp = new VUartMod__Syms(this, name());
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VUartMod::__Vconfigure(VUartMod__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VUartMod::~VUartMod() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VUartMod::_settle__TOP__3(VUartMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMod::_settle__TOP__3\n"); );
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp60,127,0,4);
    VL_SIGW(__Vtemp61,127,0,4);
    VL_SIGW(__Vtemp63,95,0,3);
    VL_SIGW(__Vtemp64,95,0,3);
    VL_SIGW(__Vtemp65,95,0,3);
    VL_SIGW(__Vtemp66,127,0,4);
    VL_SIGW(__Vtemp67,127,0,4);
    VL_SIGW(__Vtemp69,95,0,3);
    VL_SIGW(__Vtemp70,95,0,3);
    VL_SIGW(__Vtemp71,95,0,3);
    VL_SIGW(__Vtemp72,95,0,3);
    VL_SIGW(__Vtemp73,127,0,4);
    VL_SIGW(__Vtemp74,127,0,4);
    VL_SIGW(__Vtemp76,95,0,3);
    VL_SIGW(__Vtemp77,95,0,3);
    VL_SIGW(__Vtemp78,95,0,3);
    VL_SIGW(__Vtemp79,127,0,4);
    VL_SIGW(__Vtemp80,127,0,4);
    VL_SIGW(__Vtemp81,127,0,4);
    VL_SIGW(__Vtemp82,127,0,4);
    VL_SIGW(__Vtemp86,95,0,3);
    VL_SIGW(__Vtemp87,95,0,3);
    VL_SIGW(__Vtemp88,95,0,3);
    VL_SIGW(__Vtemp89,127,0,4);
    VL_SIGW(__Vtemp91,95,0,3);
    VL_SIGW(__Vtemp92,95,0,3);
    VL_SIGW(__Vtemp93,95,0,3);
    VL_SIGW(__Vtemp94,95,0,3);
    VL_SIGW(__Vtemp95,127,0,4);
    VL_SIGW(__Vtemp97,95,0,3);
    VL_SIGW(__Vtemp98,95,0,3);
    VL_SIGW(__Vtemp99,95,0,3);
    VL_SIGW(__Vtemp100,127,0,4);
    VL_SIGW(__Vtemp101,127,0,4);
    VL_SIGW(__Vtemp102,127,0,4);
    VL_SIGW(__Vtemp103,127,0,4);
    VL_SIGW(__Vtemp106,127,0,4);
    VL_SIGW(__Vtemp111,95,0,3);
    VL_SIGW(__Vtemp112,95,0,3);
    VL_SIGW(__Vtemp113,95,0,3);
    VL_SIGW(__Vtemp114,95,0,3);
    VL_SIGW(__Vtemp115,95,0,3);
    VL_SIGW(__Vtemp116,95,0,3);
    VL_SIGW(__Vtemp117,95,0,3);
    VL_SIGW(__Vtemp121,95,0,3);
    VL_SIGW(__Vtemp122,95,0,3);
    VL_SIGW(__Vtemp123,95,0,3);
    VL_SIGW(__Vtemp124,95,0,3);
    VL_SIGW(__Vtemp125,95,0,3);
    VL_SIGW(__Vtemp126,95,0,3);
    VL_SIGW(__Vtemp127,95,0,3);
    VL_SIGW(__Vtemp132,95,0,3);
    VL_SIGW(__Vtemp133,95,0,3);
    VL_SIGW(__Vtemp134,95,0,3);
    VL_SIGW(__Vtemp135,95,0,3);
    VL_SIGW(__Vtemp136,95,0,3);
    VL_SIGW(__Vtemp137,95,0,3);
    VL_SIGW(__Vtemp138,95,0,3);
    VL_SIGW(__Vtemp142,127,0,4);
    VL_SIGW(__Vtemp143,127,0,4);
    VL_SIGW(__Vtemp144,159,0,5);
    VL_SIGW(__Vtemp148,95,0,3);
    VL_SIGW(__Vtemp149,95,0,3);
    VL_SIGW(__Vtemp150,95,0,3);
    VL_SIGW(__Vtemp151,95,0,3);
    VL_SIGW(__Vtemp152,95,0,3);
    VL_SIGW(__Vtemp153,95,0,3);
    VL_SIGW(__Vtemp154,127,0,4);
    VL_SIGW(__Vtemp155,127,0,4);
    VL_SIGW(__Vtemp156,127,0,4);
    VL_SIGW(__Vtemp157,127,0,4);
    VL_SIGW(__Vtemp160,95,0,3);
    VL_SIGW(__Vtemp161,95,0,3);
    VL_SIGW(__Vtemp162,95,0,3);
    VL_SIGW(__Vtemp163,95,0,3);
    VL_SIGW(__Vtemp164,95,0,3);
    VL_SIGW(__Vtemp165,95,0,3);
    VL_SIGW(__Vtemp166,95,0,3);
    VL_SIGW(__Vtemp167,95,0,3);
    VL_SIGW(__Vtemp168,127,0,4);
    VL_SIGW(__Vtemp169,127,0,4);
    VL_SIGW(__Vtemp172,127,0,4);
    VL_SIGW(__Vtemp173,159,0,5);
    VL_SIGW(__Vtemp174,159,0,5);
    VL_SIGW(__Vtemp175,159,0,5);
    VL_SIGW(__Vtemp176,159,0,5);
    VL_SIGW(__Vtemp177,159,0,5);
    VL_SIGW(__Vtemp178,159,0,5);
    VL_SIGW(__Vtemp180,127,0,4);
    VL_SIGW(__Vtemp181,191,0,6);
    VL_SIGW(__Vtemp182,191,0,6);
    VL_SIGW(__Vtemp187,127,0,4);
    VL_SIGW(__Vtemp188,191,0,6);
    VL_SIGW(__Vtemp189,191,0,6);
    VL_SIGW(__Vtemp190,127,0,4);
    VL_SIGW(__Vtemp191,127,0,4);
    VL_SIGW(__Vtemp192,127,0,4);
    // Body
    vlTOPp->io_uart_txd = vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_ 
	= (7U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value));
    __Vtemp60[0U] = 0U;
    __Vtemp60[1U] = 0U;
    __Vtemp60[2U] = 0U;
    __Vtemp60[3U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_10_ 
	= VL_GTS_IWW(1,128,128, __Vtemp60, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_22_ 
	= (0x1fffU & ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k) 
		      << 4U));
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_26_ 
	= (0xffU & ((IData)(1U) + (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k)));
    VL_ADD_W(4, __Vtemp61, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[0U] 
	= __Vtemp61[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[1U] 
	= __Vtemp61[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[2U] 
	= __Vtemp61[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_28_[3U] 
	= __Vtemp61[3U];
    VL_EXTEND_WQ(67,64, __Vtemp63, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(67,67,32, __Vtemp64, __Vtemp63, 2U);
    __Vtemp65[0U] = __Vtemp64[0U];
    __Vtemp65[1U] = __Vtemp64[1U];
    __Vtemp65[2U] = (7U & __Vtemp64[2U]);
    VL_EXTEND_WW(128,67, __Vtemp66, __Vtemp65);
    VL_SUB_W(4, __Vtemp67, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7, __Vtemp66);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[0U] 
	= __Vtemp67[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[1U] 
	= __Vtemp67[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[2U] 
	= __Vtemp67[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_32_[3U] 
	= __Vtemp67[3U];
    __Vtemp69[0U] = 3U;
    __Vtemp69[1U] = 0U;
    __Vtemp69[2U] = 0U;
    VL_EXTEND_WQ(66,64, __Vtemp70, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_MUL_W(3, __Vtemp71, __Vtemp69, __Vtemp70);
    __Vtemp72[0U] = __Vtemp71[0U];
    __Vtemp72[1U] = __Vtemp71[1U];
    __Vtemp72[2U] = (3U & __Vtemp71[2U]);
    VL_EXTEND_WW(128,66, __Vtemp73, __Vtemp72);
    VL_SUB_W(4, __Vtemp74, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7, __Vtemp73);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[0U] 
	= __Vtemp74[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[1U] 
	= __Vtemp74[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[2U] 
	= __Vtemp74[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_37_[3U] 
	= __Vtemp74[3U];
    VL_EXTEND_WQ(66,64, __Vtemp76, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(66,66,32, __Vtemp77, __Vtemp76, 1U);
    __Vtemp78[0U] = __Vtemp77[0U];
    __Vtemp78[1U] = __Vtemp77[1U];
    __Vtemp78[2U] = (3U & __Vtemp77[2U]);
    VL_EXTEND_WW(128,66, __Vtemp79, __Vtemp78);
    VL_SUB_W(4, __Vtemp80, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7, __Vtemp79);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[0U] 
	= __Vtemp80[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[1U] 
	= __Vtemp80[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[2U] 
	= __Vtemp80[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_42_[3U] 
	= __Vtemp80[3U];
    VL_EXTEND_WQ(128,64, __Vtemp81, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SUB_W(4, __Vtemp82, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7, __Vtemp81);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[0U] 
	= __Vtemp82[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[1U] 
	= __Vtemp82[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[2U] 
	= __Vtemp82[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_47_[3U] 
	= __Vtemp82[3U];
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
    VL_EXTEND_WQ(67,64, __Vtemp86, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(67,67,32, __Vtemp87, __Vtemp86, 2U);
    __Vtemp88[0U] = __Vtemp87[0U];
    __Vtemp88[1U] = __Vtemp87[1U];
    __Vtemp88[2U] = (7U & __Vtemp87[2U]);
    VL_EXTEND_WW(128,67, __Vtemp89, __Vtemp88);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_ 
	= VL_LT_W(4, __Vtemp89, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7);
    __Vtemp91[0U] = 3U;
    __Vtemp91[1U] = 0U;
    __Vtemp91[2U] = 0U;
    VL_EXTEND_WQ(66,64, __Vtemp92, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_MUL_W(3, __Vtemp93, __Vtemp91, __Vtemp92);
    __Vtemp94[0U] = __Vtemp93[0U];
    __Vtemp94[1U] = __Vtemp93[1U];
    __Vtemp94[2U] = (3U & __Vtemp93[2U]);
    VL_EXTEND_WW(128,66, __Vtemp95, __Vtemp94);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_ 
	= VL_LT_W(4, __Vtemp95, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7);
    VL_EXTEND_WQ(66,64, __Vtemp97, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(66,66,32, __Vtemp98, __Vtemp97, 1U);
    __Vtemp99[0U] = __Vtemp98[0U];
    __Vtemp99[1U] = __Vtemp98[1U];
    __Vtemp99[2U] = (3U & __Vtemp98[2U]);
    VL_EXTEND_WW(128,66, __Vtemp100, __Vtemp99);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_13_ 
	= VL_LT_W(4, __Vtemp100, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7);
    VL_EXTEND_WQ(128,64, __Vtemp101, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_14_ 
	= VL_LT_W(4, __Vtemp101, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7);
    VL_SHIFTR_WWI(128,128,13, __Vtemp102, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult, 
		  (0x1fffU & ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k) 
			      << 4U)));
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[0U] 
	= __Vtemp102[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[1U] 
	= __Vtemp102[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[2U] 
	= __Vtemp102[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_17_[3U] 
	= __Vtemp102[3U];
    VL_SHIFTR_WWI(128,128,13, __Vtemp103, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult, 
		  (0x1fffU & ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k) 
			      << 4U)));
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[0U] 
	= __Vtemp103[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[1U] 
	= __Vtemp103[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[2U] 
	= __Vtemp103[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_2_[3U] 
	= __Vtemp103[3U];
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1358
    vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_valid = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((2U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	    if ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
		vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_valid = 1U;
	    }
	}
    }
    vlTOPp->UartMod__DOT__uartfsm__DOT___zz_5_ = (0x3ffU 
						  & ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_inCounter) 
						     << 3U));
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
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick 
	= (0U == vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter);
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_ 
	= (7U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value));
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_ 
	= vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:391
    vlTOPp->__Vtableidx7 = vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable7_UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx7];
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:174
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 0U;
    if ((0U == vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 1U;
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
    __Vtemp106[0U] = 0U;
    __Vtemp106[1U] = 0U;
    __Vtemp106[2U] = 0U;
    __Vtemp106[3U] = 0U;
    vlTOPp->__Vtableidx10 = (((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_14_) 
			      << 7U) | (((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_13_) 
					 << 6U) | (
						   ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_12_) 
						    << 5U) 
						   | (((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_11_) 
						       << 4U) 
						      | ((VL_GTS_IWW(1,128,128, __Vtemp106, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7) 
							  << 3U) 
							 | (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))))));
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_corr_flag 
	= vlTOPp->__Vtable10_UartMod__DOT__multmod_1___05Fio_temp_corr_flag
	[vlTOPp->__Vtableidx10];
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:184
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext 
	= (7U & ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
		 + (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)));
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick 
	= ((7U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value)) 
	   & (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:210
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
    vlTOPp->UartMod__DOT__uartfsm__DOT__write_ready 
	= (1U & ((~ (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__write_m2sPipe_rValid)) 
		 | (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready)));
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_)) 
		       - (0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_ 
					     >> 0x10U)))));
    VL_EXTEND_WQ(65,64, __Vtemp111, ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_13___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp112, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp113, __Vtemp111, __Vtemp112);
    __Vtemp114[0U] = __Vtemp113[0U];
    __Vtemp114[1U] = __Vtemp113[1U];
    __Vtemp114[2U] = (1U & __Vtemp113[2U]);
    VL_EXTEND_WW(66,65, __Vtemp115, __Vtemp114);
    VL_EXTEND_WI(66,32, __Vtemp116, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_14___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp117, __Vtemp115, __Vtemp116);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U] 
	= __Vtemp117[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U] 
	= __Vtemp117[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[2U] 
	= (3U & __Vtemp117[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp121, ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_13___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp122, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp123, __Vtemp121, __Vtemp122);
    __Vtemp124[0U] = __Vtemp123[0U];
    __Vtemp124[1U] = __Vtemp123[1U];
    __Vtemp124[2U] = (1U & __Vtemp123[2U]);
    VL_EXTEND_WW(66,65, __Vtemp125, __Vtemp124);
    VL_EXTEND_WI(66,32, __Vtemp126, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_14___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp127, __Vtemp125, __Vtemp126);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U] 
	= __Vtemp127[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U] 
	= __Vtemp127[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[2U] 
	= (3U & __Vtemp127[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp132, ((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_13___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp133, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp134, __Vtemp132, __Vtemp133);
    __Vtemp135[0U] = __Vtemp134[0U];
    __Vtemp135[1U] = __Vtemp134[1U];
    __Vtemp135[2U] = (1U & __Vtemp134[2U]);
    VL_EXTEND_WW(66,65, __Vtemp136, __Vtemp135);
    VL_EXTEND_WI(66,32, __Vtemp137, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_14___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp138, __Vtemp136, __Vtemp137);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[0U] 
	= __Vtemp138[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[1U] 
	= __Vtemp138[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[2U] 
	= (3U & __Vtemp138[2U]);
    VL_EXTEND_WQ(128,64, __Vtemp142, (((QData)((IData)(
						       vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp143, __Vtemp142, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp144, __Vtemp143);
    VL_EXTEND_WQ(65,64, __Vtemp148, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp149, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp150, __Vtemp148, __Vtemp149);
    VL_EXTEND_WQ(65,64, __Vtemp151, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[0U]))));
    VL_SUB_W(3, __Vtemp152, __Vtemp150, __Vtemp151);
    __Vtemp153[0U] = __Vtemp152[0U];
    __Vtemp153[1U] = __Vtemp152[1U];
    __Vtemp153[2U] = (1U & __Vtemp152[2U]);
    VL_EXTEND_WW(97,65, __Vtemp154, __Vtemp153);
    VL_SHIFTL_WWI(97,97,32, __Vtemp155, __Vtemp154, 0x20U);
    __Vtemp156[0U] = __Vtemp155[0U];
    __Vtemp156[1U] = __Vtemp155[1U];
    __Vtemp156[2U] = __Vtemp155[2U];
    __Vtemp156[3U] = (1U & __Vtemp155[3U]);
    VL_EXTEND_WW(98,97, __Vtemp157, __Vtemp156);
    VL_EXTEND_WQ(65,64, __Vtemp160, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp161, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp162, __Vtemp160, __Vtemp161);
    __Vtemp163[0U] = __Vtemp162[0U];
    __Vtemp163[1U] = __Vtemp162[1U];
    __Vtemp163[2U] = (1U & __Vtemp162[2U]);
    VL_EXTEND_WW(66,65, __Vtemp164, __Vtemp163);
    VL_EXTEND_WQ(66,64, __Vtemp165, (((QData)((IData)(
						      vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp166, __Vtemp164, __Vtemp165);
    __Vtemp167[0U] = __Vtemp166[0U];
    __Vtemp167[1U] = __Vtemp166[1U];
    __Vtemp167[2U] = (3U & __Vtemp166[2U]);
    VL_EXTEND_WW(98,66, __Vtemp168, __Vtemp167);
    VL_SHIFTL_WWI(98,98,32, __Vtemp169, __Vtemp168, 0x20U);
    __Vtemp172[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp157[0U] : __Vtemp169[0U]);
    __Vtemp172[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp157[1U] : __Vtemp169[1U]);
    __Vtemp172[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp157[2U] : __Vtemp169[2U]);
    __Vtemp172[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
			     ? __Vtemp157[3U] : __Vtemp169[3U]));
    VL_EXTEND_WW(129,98, __Vtemp173, __Vtemp172);
    VL_ADD_W(5, __Vtemp174, __Vtemp144, __Vtemp173);
    __Vtemp175[0U] = __Vtemp174[0U];
    __Vtemp175[1U] = __Vtemp174[1U];
    __Vtemp175[2U] = __Vtemp174[2U];
    __Vtemp175[3U] = __Vtemp174[3U];
    __Vtemp175[4U] = (1U & __Vtemp174[4U]);
    VL_EXTEND_WW(130,129, __Vtemp176, __Vtemp175);
    VL_EXTEND_WQ(130,64, __Vtemp177, (((QData)((IData)(
						       vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U]))));
    VL_ADD_W(5, __Vtemp178, __Vtemp176, __Vtemp177);
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U] 
	= __Vtemp178[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U] 
	= __Vtemp178[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U] 
	= __Vtemp178[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U] 
	= __Vtemp178[3U];
    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U] 
	= (3U & __Vtemp178[4U]);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/12_uart_mod_full/spinalHDL/tmp/job_1/UartMod.v:1502
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[0U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[1U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[2U] = 0U;
    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[3U] = 0U;
    if ((4U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg)))) {
		__Vtemp180[0U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
		__Vtemp180[1U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
		__Vtemp180[2U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
		__Vtemp180[3U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
		VL_EXTEND_WW(192,128, __Vtemp181, __Vtemp180);
		VL_SHIFTL_WWI(192,192,32, __Vtemp182, __Vtemp181, 0x40U);
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[0U] 
		    = __Vtemp182[0U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[1U] 
		    = __Vtemp182[1U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[2U] 
		    = __Vtemp182[2U];
		vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out[3U] 
		    = __Vtemp182[3U];
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
    __Vtemp187[0U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
    __Vtemp187[1U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
    __Vtemp187[2U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
    __Vtemp187[3U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
    VL_EXTEND_WW(192,128, __Vtemp188, __Vtemp187);
    VL_SHIFTL_WWI(192,192,32, __Vtemp189, __Vtemp188, 0x40U);
    __Vtemp190[0U] = __Vtemp189[0U];
    __Vtemp190[1U] = __Vtemp189[1U];
    __Vtemp190[2U] = __Vtemp189[2U];
    __Vtemp190[3U] = __Vtemp189[3U];
    VL_ADD_W(4, __Vtemp191, vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2, __Vtemp190);
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[0U] 
	= __Vtemp191[0U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[1U] 
	= __Vtemp191[1U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[2U] 
	= __Vtemp191[2U];
    vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_[3U] 
	= __Vtemp191[3U];
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
	    VL_SHIFTR_WWI(128,128,13, __Vtemp192, vlTOPp->UartMod__DOT__multmod_1___DOT___zz_21_, 
			  (0x1fffU & ((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k) 
				      << 4U)));
	    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[0U] 
		= ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		    ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[0U]
		    : __Vtemp192[0U]);
	    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[1U] 
		= ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		    ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[1U]
		    : __Vtemp192[1U]);
	    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[2U] 
		= ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		    ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[2U]
		    : __Vtemp192[2U]);
	    vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out[3U] 
		= ((1U & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg))
		    ? vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3[3U]
		    : __Vtemp192[3U]);
	}
    }
}

void VUartMod::_eval_initial(VUartMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMod::_eval_initial\n"); );
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VUartMod::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMod::final\n"); );
    // Variables
    VUartMod__Syms* __restrict vlSymsp = this->__VlSymsp;
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VUartMod::_eval_settle(VUartMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMod::_eval_settle\n"); );
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}
