// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUartVdf.h for the primary calling header

#include "VUartVdf.h"          // For This
#include "VUartVdf__Syms.h"


//--------------------
// STATIC VARIABLES

VL_ST_SIGW(VUartVdf::__Vtable1_UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg_string[8],159,0,5);
VL_ST_SIGW(VUartVdf::__Vtable2_UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext_string[8],159,0,5);
VL_ST_SIGW(VUartVdf::__Vtable3_UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg_string[4],159,0,5);
VL_ST_SIGW(VUartVdf::__Vtable4_UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext_string[4],159,0,5);
VL_ST_SIG64(VUartVdf::__Vtable5_UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string[8],47,0);
VL_ST_SIG8(VUartVdf::__Vtable6_UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[32],0,0);
VL_ST_SIG64(VUartVdf::__Vtable7_UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string[8],47,0);
VL_ST_SIGW(VUartVdf::__Vtable8_UartVdf__DOT__multmod_1___DOT__fsm_stateReg_string[16],79,0,3);
VL_ST_SIGW(VUartVdf::__Vtable9_UartVdf__DOT__multmod_1___DOT__fsm_stateNext_string[16],79,0,3);
VL_ST_SIG8(VUartVdf::__Vtable10_UartVdf__DOT__multmod_1___05Fio_toUart_valid[16],0,0);
VL_ST_SIG8(VUartVdf::__Vtable11_UartVdf__DOT__multmod_1___05Fio_temp_corr_flag[32],2,0);
VL_ST_SIG8(VUartVdf::__Vtable12_UartVdf__DOT__multmod_1___05Fio_temp_corr_flag_2[256],2,0);
VL_ST_SIG8(VUartVdf::__Vtable13_UartVdf__DOT__multmod_1___DOT___zz_1_[1024],1,0);

//--------------------

VL_CTOR_IMP(VUartVdf) {
    VUartVdf__Syms* __restrict vlSymsp = __VlSymsp = new VUartVdf__Syms(this, name());
    VUartVdf* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VUartVdf::__Vconfigure(VUartVdf__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VUartVdf::~VUartVdf() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VUartVdf::_settle__TOP__3(VUartVdf__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartVdf::_settle__TOP__3\n"); );
    VUartVdf* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp62,127,0,4);
    VL_SIGW(__Vtemp63,127,0,4);
    VL_SIGW(__Vtemp65,95,0,3);
    VL_SIGW(__Vtemp66,95,0,3);
    VL_SIGW(__Vtemp67,95,0,3);
    VL_SIGW(__Vtemp68,127,0,4);
    VL_SIGW(__Vtemp69,127,0,4);
    VL_SIGW(__Vtemp71,95,0,3);
    VL_SIGW(__Vtemp72,95,0,3);
    VL_SIGW(__Vtemp73,95,0,3);
    VL_SIGW(__Vtemp74,95,0,3);
    VL_SIGW(__Vtemp75,127,0,4);
    VL_SIGW(__Vtemp76,127,0,4);
    VL_SIGW(__Vtemp78,95,0,3);
    VL_SIGW(__Vtemp79,95,0,3);
    VL_SIGW(__Vtemp80,95,0,3);
    VL_SIGW(__Vtemp81,127,0,4);
    VL_SIGW(__Vtemp82,127,0,4);
    VL_SIGW(__Vtemp83,127,0,4);
    VL_SIGW(__Vtemp84,127,0,4);
    VL_SIGW(__Vtemp86,127,0,4);
    VL_SIGW(__Vtemp89,95,0,3);
    VL_SIGW(__Vtemp90,95,0,3);
    VL_SIGW(__Vtemp91,95,0,3);
    VL_SIGW(__Vtemp92,127,0,4);
    VL_SIGW(__Vtemp94,95,0,3);
    VL_SIGW(__Vtemp95,95,0,3);
    VL_SIGW(__Vtemp96,95,0,3);
    VL_SIGW(__Vtemp97,95,0,3);
    VL_SIGW(__Vtemp98,127,0,4);
    VL_SIGW(__Vtemp100,95,0,3);
    VL_SIGW(__Vtemp101,95,0,3);
    VL_SIGW(__Vtemp102,95,0,3);
    VL_SIGW(__Vtemp103,127,0,4);
    VL_SIGW(__Vtemp104,127,0,4);
    VL_SIGW(__Vtemp105,127,0,4);
    VL_SIGW(__Vtemp106,127,0,4);
    VL_SIGW(__Vtemp113,95,0,3);
    VL_SIGW(__Vtemp114,95,0,3);
    VL_SIGW(__Vtemp115,95,0,3);
    VL_SIGW(__Vtemp116,95,0,3);
    VL_SIGW(__Vtemp117,95,0,3);
    VL_SIGW(__Vtemp118,95,0,3);
    VL_SIGW(__Vtemp119,95,0,3);
    VL_SIGW(__Vtemp123,95,0,3);
    VL_SIGW(__Vtemp124,95,0,3);
    VL_SIGW(__Vtemp125,95,0,3);
    VL_SIGW(__Vtemp126,95,0,3);
    VL_SIGW(__Vtemp127,95,0,3);
    VL_SIGW(__Vtemp128,95,0,3);
    VL_SIGW(__Vtemp129,95,0,3);
    VL_SIGW(__Vtemp134,95,0,3);
    VL_SIGW(__Vtemp135,95,0,3);
    VL_SIGW(__Vtemp136,95,0,3);
    VL_SIGW(__Vtemp137,95,0,3);
    VL_SIGW(__Vtemp138,95,0,3);
    VL_SIGW(__Vtemp139,95,0,3);
    VL_SIGW(__Vtemp140,95,0,3);
    VL_SIGW(__Vtemp144,127,0,4);
    VL_SIGW(__Vtemp145,127,0,4);
    VL_SIGW(__Vtemp146,159,0,5);
    VL_SIGW(__Vtemp150,95,0,3);
    VL_SIGW(__Vtemp151,95,0,3);
    VL_SIGW(__Vtemp152,95,0,3);
    VL_SIGW(__Vtemp153,95,0,3);
    VL_SIGW(__Vtemp154,95,0,3);
    VL_SIGW(__Vtemp155,95,0,3);
    VL_SIGW(__Vtemp156,127,0,4);
    VL_SIGW(__Vtemp157,127,0,4);
    VL_SIGW(__Vtemp158,127,0,4);
    VL_SIGW(__Vtemp159,127,0,4);
    VL_SIGW(__Vtemp162,95,0,3);
    VL_SIGW(__Vtemp163,95,0,3);
    VL_SIGW(__Vtemp164,95,0,3);
    VL_SIGW(__Vtemp165,95,0,3);
    VL_SIGW(__Vtemp166,95,0,3);
    VL_SIGW(__Vtemp167,95,0,3);
    VL_SIGW(__Vtemp168,95,0,3);
    VL_SIGW(__Vtemp169,95,0,3);
    VL_SIGW(__Vtemp170,127,0,4);
    VL_SIGW(__Vtemp171,127,0,4);
    VL_SIGW(__Vtemp174,127,0,4);
    VL_SIGW(__Vtemp175,159,0,5);
    VL_SIGW(__Vtemp176,159,0,5);
    VL_SIGW(__Vtemp177,159,0,5);
    VL_SIGW(__Vtemp178,159,0,5);
    VL_SIGW(__Vtemp179,159,0,5);
    VL_SIGW(__Vtemp180,159,0,5);
    VL_SIGW(__Vtemp182,127,0,4);
    VL_SIGW(__Vtemp183,191,0,6);
    VL_SIGW(__Vtemp184,191,0,6);
    VL_SIGW(__Vtemp189,127,0,4);
    VL_SIGW(__Vtemp190,191,0,6);
    VL_SIGW(__Vtemp191,191,0,6);
    VL_SIGW(__Vtemp192,127,0,4);
    VL_SIGW(__Vtemp193,127,0,4);
    VL_SIGW(__Vtemp194,127,0,4);
    // Body
    vlTOPp->io_uart_txd = vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_ 
	= (7U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value));
    __Vtemp62[0U] = 0U;
    __Vtemp62[1U] = 0U;
    __Vtemp62[2U] = 0U;
    __Vtemp62[3U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_10_ 
	= VL_GTS_IWW(1,128,128, __Vtemp62, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_22_ 
	= (0x1fffU & ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k) 
		      << 4U));
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_26_ 
	= (0xffU & ((IData)(1U) + (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k)));
    VL_ADD_W(4, __Vtemp63, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[0U] 
	= __Vtemp63[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[1U] 
	= __Vtemp63[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[2U] 
	= __Vtemp63[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[3U] 
	= __Vtemp63[3U];
    VL_EXTEND_WQ(67,64, __Vtemp65, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(67,67,32, __Vtemp66, __Vtemp65, 2U);
    __Vtemp67[0U] = __Vtemp66[0U];
    __Vtemp67[1U] = __Vtemp66[1U];
    __Vtemp67[2U] = (7U & __Vtemp66[2U]);
    VL_EXTEND_WW(128,67, __Vtemp68, __Vtemp67);
    VL_SUB_W(4, __Vtemp69, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp68);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[0U] 
	= __Vtemp69[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[1U] 
	= __Vtemp69[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[2U] 
	= __Vtemp69[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[3U] 
	= __Vtemp69[3U];
    __Vtemp71[0U] = 3U;
    __Vtemp71[1U] = 0U;
    __Vtemp71[2U] = 0U;
    VL_EXTEND_WQ(66,64, __Vtemp72, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_MUL_W(3, __Vtemp73, __Vtemp71, __Vtemp72);
    __Vtemp74[0U] = __Vtemp73[0U];
    __Vtemp74[1U] = __Vtemp73[1U];
    __Vtemp74[2U] = (3U & __Vtemp73[2U]);
    VL_EXTEND_WW(128,66, __Vtemp75, __Vtemp74);
    VL_SUB_W(4, __Vtemp76, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp75);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[0U] 
	= __Vtemp76[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[1U] 
	= __Vtemp76[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[2U] 
	= __Vtemp76[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[3U] 
	= __Vtemp76[3U];
    VL_EXTEND_WQ(66,64, __Vtemp78, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(66,66,32, __Vtemp79, __Vtemp78, 1U);
    __Vtemp80[0U] = __Vtemp79[0U];
    __Vtemp80[1U] = __Vtemp79[1U];
    __Vtemp80[2U] = (3U & __Vtemp79[2U]);
    VL_EXTEND_WW(128,66, __Vtemp81, __Vtemp80);
    VL_SUB_W(4, __Vtemp82, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp81);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[0U] 
	= __Vtemp82[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[1U] 
	= __Vtemp82[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[2U] 
	= __Vtemp82[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[3U] 
	= __Vtemp82[3U];
    VL_EXTEND_WQ(128,64, __Vtemp83, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SUB_W(4, __Vtemp84, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp83);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[0U] 
	= __Vtemp84[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[1U] 
	= __Vtemp84[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[2U] 
	= __Vtemp84[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[3U] 
	= __Vtemp84[3U];
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
    __Vtemp86[0U] = 0U;
    __Vtemp86[1U] = 0U;
    __Vtemp86[2U] = 0U;
    __Vtemp86[3U] = 0U;
    vlTOPp->__Vtableidx11 = ((VL_GTS_IWW(1,128,128, __Vtemp86, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7) 
			      << 4U) | (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg));
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_corr_flag 
	= vlTOPp->__Vtable11_UartVdf__DOT__multmod_1___05Fio_temp_corr_flag
	[vlTOPp->__Vtableidx11];
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
    VL_EXTEND_WQ(67,64, __Vtemp89, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(67,67,32, __Vtemp90, __Vtemp89, 2U);
    __Vtemp91[0U] = __Vtemp90[0U];
    __Vtemp91[1U] = __Vtemp90[1U];
    __Vtemp91[2U] = (7U & __Vtemp90[2U]);
    VL_EXTEND_WW(128,67, __Vtemp92, __Vtemp91);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_11_ 
	= VL_LT_W(4, __Vtemp92, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8);
    __Vtemp94[0U] = 3U;
    __Vtemp94[1U] = 0U;
    __Vtemp94[2U] = 0U;
    VL_EXTEND_WQ(66,64, __Vtemp95, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_MUL_W(3, __Vtemp96, __Vtemp94, __Vtemp95);
    __Vtemp97[0U] = __Vtemp96[0U];
    __Vtemp97[1U] = __Vtemp96[1U];
    __Vtemp97[2U] = (3U & __Vtemp96[2U]);
    VL_EXTEND_WW(128,66, __Vtemp98, __Vtemp97);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_12_ 
	= VL_LT_W(4, __Vtemp98, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8);
    VL_EXTEND_WQ(66,64, __Vtemp100, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(66,66,32, __Vtemp101, __Vtemp100, 1U);
    __Vtemp102[0U] = __Vtemp101[0U];
    __Vtemp102[1U] = __Vtemp101[1U];
    __Vtemp102[2U] = (3U & __Vtemp101[2U]);
    VL_EXTEND_WW(128,66, __Vtemp103, __Vtemp102);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_13_ 
	= VL_LT_W(4, __Vtemp103, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8);
    VL_EXTEND_WQ(128,64, __Vtemp104, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_14_ 
	= VL_LT_W(4, __Vtemp104, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8);
    VL_SHIFTR_WWI(128,128,13, __Vtemp105, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult, 
		  (0x1fffU & ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k) 
			      << 4U)));
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[0U] 
	= __Vtemp105[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[1U] 
	= __Vtemp105[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[2U] 
	= __Vtemp105[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[3U] 
	= __Vtemp105[3U];
    VL_SHIFTR_WWI(128,128,13, __Vtemp106, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult, 
		  (0x1fffU & ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k) 
			      << 4U)));
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[0U] 
	= __Vtemp106[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[1U] 
	= __Vtemp106[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[2U] 
	= __Vtemp106[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[3U] 
	= __Vtemp106[3U];
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1375
    vlTOPp->__Vtableidx10 = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_valid 
	= vlTOPp->__Vtable10_UartVdf__DOT__multmod_1___05Fio_toUart_valid
	[vlTOPp->__Vtableidx10];
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:1031
    vlTOPp->UartVdf__DOT__uartfsm__DOT__write_valid = 0U;
    if ((1U != (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__write_valid = 1U;
	}
    }
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick 
	= (0U == vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter);
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_ 
	= (7U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value));
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_ 
	= vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:393
    vlTOPp->__Vtableidx7 = vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable7_UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx7];
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:176
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 0U;
    if ((0U == vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 1U;
    }
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:186
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext 
	= (7U & ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
		 + (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)));
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick 
	= ((7U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value)) 
	   & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/14_uart_vdf_repeat/spinalHDL/tmp/job_1/UartVdf.v:212
    vlTOPp->__Vtableidx6 = (((7U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)) 
			     << 4U) | (((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) 
					<< 3U) | (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state)));
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready 
	= vlTOPp->__Vtable6_UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready
	[vlTOPp->__Vtableidx6];
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
    vlTOPp->UartVdf__DOT__uartfsm__DOT__write_ready 
	= (1U & ((~ (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__write_m2sPipe_rValid)) 
		 | (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready)));
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_)) 
		       - (0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_ 
					     >> 0x10U)))));
    VL_EXTEND_WQ(65,64, __Vtemp113, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_13___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp114, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp115, __Vtemp113, __Vtemp114);
    __Vtemp116[0U] = __Vtemp115[0U];
    __Vtemp116[1U] = __Vtemp115[1U];
    __Vtemp116[2U] = (1U & __Vtemp115[2U]);
    VL_EXTEND_WW(66,65, __Vtemp117, __Vtemp116);
    VL_EXTEND_WI(66,32, __Vtemp118, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_14___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp119, __Vtemp117, __Vtemp118);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U] 
	= __Vtemp119[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U] 
	= __Vtemp119[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[2U] 
	= (3U & __Vtemp119[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp123, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_13___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp124, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp125, __Vtemp123, __Vtemp124);
    __Vtemp126[0U] = __Vtemp125[0U];
    __Vtemp126[1U] = __Vtemp125[1U];
    __Vtemp126[2U] = (1U & __Vtemp125[2U]);
    VL_EXTEND_WW(66,65, __Vtemp127, __Vtemp126);
    VL_EXTEND_WI(66,32, __Vtemp128, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_14___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp129, __Vtemp127, __Vtemp128);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U] 
	= __Vtemp129[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U] 
	= __Vtemp129[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[2U] 
	= (3U & __Vtemp129[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp134, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_13___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp135, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp136, __Vtemp134, __Vtemp135);
    __Vtemp137[0U] = __Vtemp136[0U];
    __Vtemp137[1U] = __Vtemp136[1U];
    __Vtemp137[2U] = (1U & __Vtemp136[2U]);
    VL_EXTEND_WW(66,65, __Vtemp138, __Vtemp137);
    VL_EXTEND_WI(66,32, __Vtemp139, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_14___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp140, __Vtemp138, __Vtemp139);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[0U] 
	= __Vtemp140[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[1U] 
	= __Vtemp140[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[2U] 
	= (3U & __Vtemp140[2U]);
    VL_EXTEND_WQ(128,64, __Vtemp144, (((QData)((IData)(
						       vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp145, __Vtemp144, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp146, __Vtemp145);
    VL_EXTEND_WQ(65,64, __Vtemp150, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp151, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp152, __Vtemp150, __Vtemp151);
    VL_EXTEND_WQ(65,64, __Vtemp153, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[0U]))));
    VL_SUB_W(3, __Vtemp154, __Vtemp152, __Vtemp153);
    __Vtemp155[0U] = __Vtemp154[0U];
    __Vtemp155[1U] = __Vtemp154[1U];
    __Vtemp155[2U] = (1U & __Vtemp154[2U]);
    VL_EXTEND_WW(97,65, __Vtemp156, __Vtemp155);
    VL_SHIFTL_WWI(97,97,32, __Vtemp157, __Vtemp156, 0x20U);
    __Vtemp158[0U] = __Vtemp157[0U];
    __Vtemp158[1U] = __Vtemp157[1U];
    __Vtemp158[2U] = __Vtemp157[2U];
    __Vtemp158[3U] = (1U & __Vtemp157[3U]);
    VL_EXTEND_WW(98,97, __Vtemp159, __Vtemp158);
    VL_EXTEND_WQ(65,64, __Vtemp162, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp163, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp164, __Vtemp162, __Vtemp163);
    __Vtemp165[0U] = __Vtemp164[0U];
    __Vtemp165[1U] = __Vtemp164[1U];
    __Vtemp165[2U] = (1U & __Vtemp164[2U]);
    VL_EXTEND_WW(66,65, __Vtemp166, __Vtemp165);
    VL_EXTEND_WQ(66,64, __Vtemp167, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp168, __Vtemp166, __Vtemp167);
    __Vtemp169[0U] = __Vtemp168[0U];
    __Vtemp169[1U] = __Vtemp168[1U];
    __Vtemp169[2U] = (3U & __Vtemp168[2U]);
    VL_EXTEND_WW(98,66, __Vtemp170, __Vtemp169);
    VL_SHIFTL_WWI(98,98,32, __Vtemp171, __Vtemp170, 0x20U);
    __Vtemp174[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp159[0U] : __Vtemp171[0U]);
    __Vtemp174[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp159[1U] : __Vtemp171[1U]);
    __Vtemp174[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp159[2U] : __Vtemp171[2U]);
    __Vtemp174[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
			     ? __Vtemp159[3U] : __Vtemp171[3U]));
    VL_EXTEND_WW(129,98, __Vtemp175, __Vtemp174);
    VL_ADD_W(5, __Vtemp176, __Vtemp146, __Vtemp175);
    __Vtemp177[0U] = __Vtemp176[0U];
    __Vtemp177[1U] = __Vtemp176[1U];
    __Vtemp177[2U] = __Vtemp176[2U];
    __Vtemp177[3U] = __Vtemp176[3U];
    __Vtemp177[4U] = (1U & __Vtemp176[4U]);
    VL_EXTEND_WW(130,129, __Vtemp178, __Vtemp177);
    VL_EXTEND_WQ(130,64, __Vtemp179, (((QData)((IData)(
						       vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U]))));
    VL_ADD_W(5, __Vtemp180, __Vtemp178, __Vtemp179);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U] 
	= __Vtemp180[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U] 
	= __Vtemp180[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U] 
	= __Vtemp180[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U] 
	= __Vtemp180[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U] 
	= (3U & __Vtemp180[4U]);
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
		    __Vtemp182[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
		    __Vtemp182[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
		    __Vtemp182[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
		    __Vtemp182[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
		    VL_EXTEND_WW(192,128, __Vtemp183, __Vtemp182);
		    VL_SHIFTL_WWI(192,192,32, __Vtemp184, __Vtemp183, 0x40U);
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[0U] 
			= __Vtemp184[0U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[1U] 
			= __Vtemp184[1U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[2U] 
			= __Vtemp184[2U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[3U] 
			= __Vtemp184[3U];
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
    __Vtemp189[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
    __Vtemp189[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
    __Vtemp189[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
    __Vtemp189[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
    VL_EXTEND_WW(192,128, __Vtemp190, __Vtemp189);
    VL_SHIFTL_WWI(192,192,32, __Vtemp191, __Vtemp190, 0x40U);
    __Vtemp192[0U] = __Vtemp191[0U];
    __Vtemp192[1U] = __Vtemp191[1U];
    __Vtemp192[2U] = __Vtemp191[2U];
    __Vtemp192[3U] = __Vtemp191[3U];
    VL_ADD_W(4, __Vtemp193, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2, __Vtemp192);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[0U] 
	= __Vtemp193[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[1U] 
	= __Vtemp193[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[2U] 
	= __Vtemp193[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[3U] 
	= __Vtemp193[3U];
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
		VL_SHIFTR_WWI(128,128,13, __Vtemp194, vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_, 
			      (0x1fffU & ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k) 
					  << 4U)));
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[0U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[0U]
		        : __Vtemp194[0U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[1U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[1U]
		        : __Vtemp194[1U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[2U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[2U]
		        : __Vtemp194[2U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[3U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[3U]
		        : __Vtemp194[3U]);
	    }
	}
    }
}
