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
    VL_SIGW(__Vtemp65,255,0,8);
    VL_SIGW(__Vtemp66,255,0,8);
    VL_SIGW(__Vtemp68,159,0,5);
    VL_SIGW(__Vtemp69,159,0,5);
    VL_SIGW(__Vtemp70,159,0,5);
    VL_SIGW(__Vtemp71,255,0,8);
    VL_SIGW(__Vtemp72,255,0,8);
    VL_SIGW(__Vtemp74,159,0,5);
    VL_SIGW(__Vtemp75,159,0,5);
    VL_SIGW(__Vtemp76,159,0,5);
    VL_SIGW(__Vtemp77,159,0,5);
    VL_SIGW(__Vtemp78,255,0,8);
    VL_SIGW(__Vtemp79,255,0,8);
    VL_SIGW(__Vtemp81,159,0,5);
    VL_SIGW(__Vtemp82,159,0,5);
    VL_SIGW(__Vtemp83,159,0,5);
    VL_SIGW(__Vtemp84,255,0,8);
    VL_SIGW(__Vtemp85,255,0,8);
    VL_SIGW(__Vtemp86,255,0,8);
    VL_SIGW(__Vtemp87,255,0,8);
    VL_SIGW(__Vtemp89,255,0,8);
    VL_SIGW(__Vtemp92,159,0,5);
    VL_SIGW(__Vtemp93,159,0,5);
    VL_SIGW(__Vtemp94,159,0,5);
    VL_SIGW(__Vtemp95,255,0,8);
    VL_SIGW(__Vtemp97,159,0,5);
    VL_SIGW(__Vtemp98,159,0,5);
    VL_SIGW(__Vtemp99,159,0,5);
    VL_SIGW(__Vtemp100,159,0,5);
    VL_SIGW(__Vtemp101,255,0,8);
    VL_SIGW(__Vtemp103,159,0,5);
    VL_SIGW(__Vtemp104,159,0,5);
    VL_SIGW(__Vtemp105,159,0,5);
    VL_SIGW(__Vtemp106,255,0,8);
    VL_SIGW(__Vtemp107,255,0,8);
    VL_SIGW(__Vtemp108,255,0,8);
    VL_SIGW(__Vtemp109,255,0,8);
    VL_SIGW(__Vtemp121,127,0,4);
    VL_SIGW(__Vtemp129,95,0,3);
    VL_SIGW(__Vtemp130,95,0,3);
    VL_SIGW(__Vtemp131,95,0,3);
    VL_SIGW(__Vtemp134,95,0,3);
    VL_SIGW(__Vtemp135,95,0,3);
    VL_SIGW(__Vtemp136,95,0,3);
    VL_SIGW(__Vtemp142,95,0,3);
    VL_SIGW(__Vtemp143,95,0,3);
    VL_SIGW(__Vtemp144,95,0,3);
    VL_SIGW(__Vtemp149,95,0,3);
    VL_SIGW(__Vtemp150,95,0,3);
    VL_SIGW(__Vtemp151,95,0,3);
    VL_SIGW(__Vtemp155,95,0,3);
    VL_SIGW(__Vtemp156,95,0,3);
    VL_SIGW(__Vtemp157,95,0,3);
    VL_SIGW(__Vtemp158,95,0,3);
    VL_SIGW(__Vtemp159,95,0,3);
    VL_SIGW(__Vtemp160,95,0,3);
    VL_SIGW(__Vtemp161,95,0,3);
    VL_SIGW(__Vtemp165,95,0,3);
    VL_SIGW(__Vtemp166,95,0,3);
    VL_SIGW(__Vtemp167,95,0,3);
    VL_SIGW(__Vtemp168,95,0,3);
    VL_SIGW(__Vtemp169,95,0,3);
    VL_SIGW(__Vtemp170,95,0,3);
    VL_SIGW(__Vtemp171,95,0,3);
    VL_SIGW(__Vtemp175,95,0,3);
    VL_SIGW(__Vtemp176,95,0,3);
    VL_SIGW(__Vtemp177,95,0,3);
    VL_SIGW(__Vtemp178,95,0,3);
    VL_SIGW(__Vtemp179,95,0,3);
    VL_SIGW(__Vtemp180,95,0,3);
    VL_SIGW(__Vtemp181,95,0,3);
    VL_SIGW(__Vtemp185,95,0,3);
    VL_SIGW(__Vtemp186,95,0,3);
    VL_SIGW(__Vtemp187,95,0,3);
    VL_SIGW(__Vtemp188,95,0,3);
    VL_SIGW(__Vtemp189,95,0,3);
    VL_SIGW(__Vtemp190,95,0,3);
    VL_SIGW(__Vtemp191,95,0,3);
    VL_SIGW(__Vtemp196,95,0,3);
    VL_SIGW(__Vtemp197,95,0,3);
    VL_SIGW(__Vtemp198,95,0,3);
    VL_SIGW(__Vtemp199,95,0,3);
    VL_SIGW(__Vtemp200,95,0,3);
    VL_SIGW(__Vtemp201,95,0,3);
    VL_SIGW(__Vtemp202,95,0,3);
    VL_SIGW(__Vtemp206,95,0,3);
    VL_SIGW(__Vtemp207,95,0,3);
    VL_SIGW(__Vtemp208,95,0,3);
    VL_SIGW(__Vtemp209,95,0,3);
    VL_SIGW(__Vtemp210,95,0,3);
    VL_SIGW(__Vtemp211,95,0,3);
    VL_SIGW(__Vtemp212,95,0,3);
    VL_SIGW(__Vtemp216,95,0,3);
    VL_SIGW(__Vtemp217,95,0,3);
    VL_SIGW(__Vtemp218,95,0,3);
    VL_SIGW(__Vtemp219,95,0,3);
    VL_SIGW(__Vtemp220,95,0,3);
    VL_SIGW(__Vtemp221,95,0,3);
    VL_SIGW(__Vtemp222,95,0,3);
    VL_SIGW(__Vtemp226,95,0,3);
    VL_SIGW(__Vtemp227,95,0,3);
    VL_SIGW(__Vtemp228,95,0,3);
    VL_SIGW(__Vtemp229,95,0,3);
    VL_SIGW(__Vtemp230,95,0,3);
    VL_SIGW(__Vtemp231,95,0,3);
    VL_SIGW(__Vtemp232,95,0,3);
    VL_SIGW(__Vtemp236,127,0,4);
    VL_SIGW(__Vtemp237,127,0,4);
    VL_SIGW(__Vtemp238,159,0,5);
    VL_SIGW(__Vtemp242,95,0,3);
    VL_SIGW(__Vtemp243,95,0,3);
    VL_SIGW(__Vtemp244,95,0,3);
    VL_SIGW(__Vtemp245,95,0,3);
    VL_SIGW(__Vtemp246,95,0,3);
    VL_SIGW(__Vtemp247,95,0,3);
    VL_SIGW(__Vtemp248,127,0,4);
    VL_SIGW(__Vtemp249,127,0,4);
    VL_SIGW(__Vtemp250,127,0,4);
    VL_SIGW(__Vtemp251,127,0,4);
    VL_SIGW(__Vtemp254,95,0,3);
    VL_SIGW(__Vtemp255,95,0,3);
    VL_SIGW(__Vtemp256,95,0,3);
    VL_SIGW(__Vtemp257,95,0,3);
    VL_SIGW(__Vtemp258,95,0,3);
    VL_SIGW(__Vtemp259,95,0,3);
    VL_SIGW(__Vtemp260,95,0,3);
    VL_SIGW(__Vtemp261,95,0,3);
    VL_SIGW(__Vtemp262,127,0,4);
    VL_SIGW(__Vtemp263,127,0,4);
    VL_SIGW(__Vtemp266,127,0,4);
    VL_SIGW(__Vtemp267,159,0,5);
    VL_SIGW(__Vtemp268,159,0,5);
    VL_SIGW(__Vtemp269,159,0,5);
    VL_SIGW(__Vtemp270,159,0,5);
    VL_SIGW(__Vtemp271,159,0,5);
    VL_SIGW(__Vtemp272,159,0,5);
    VL_SIGW(__Vtemp276,127,0,4);
    VL_SIGW(__Vtemp277,127,0,4);
    VL_SIGW(__Vtemp278,159,0,5);
    VL_SIGW(__Vtemp282,95,0,3);
    VL_SIGW(__Vtemp283,95,0,3);
    VL_SIGW(__Vtemp284,95,0,3);
    VL_SIGW(__Vtemp285,95,0,3);
    VL_SIGW(__Vtemp286,95,0,3);
    VL_SIGW(__Vtemp287,95,0,3);
    VL_SIGW(__Vtemp288,127,0,4);
    VL_SIGW(__Vtemp289,127,0,4);
    VL_SIGW(__Vtemp290,127,0,4);
    VL_SIGW(__Vtemp291,127,0,4);
    VL_SIGW(__Vtemp294,95,0,3);
    VL_SIGW(__Vtemp295,95,0,3);
    VL_SIGW(__Vtemp296,95,0,3);
    VL_SIGW(__Vtemp297,95,0,3);
    VL_SIGW(__Vtemp298,95,0,3);
    VL_SIGW(__Vtemp299,95,0,3);
    VL_SIGW(__Vtemp300,95,0,3);
    VL_SIGW(__Vtemp301,95,0,3);
    VL_SIGW(__Vtemp302,127,0,4);
    VL_SIGW(__Vtemp303,127,0,4);
    VL_SIGW(__Vtemp306,127,0,4);
    VL_SIGW(__Vtemp307,159,0,5);
    VL_SIGW(__Vtemp308,159,0,5);
    VL_SIGW(__Vtemp309,159,0,5);
    VL_SIGW(__Vtemp310,159,0,5);
    VL_SIGW(__Vtemp311,159,0,5);
    VL_SIGW(__Vtemp312,159,0,5);
    VL_SIGW(__Vtemp316,95,0,3);
    VL_SIGW(__Vtemp317,95,0,3);
    VL_SIGW(__Vtemp318,95,0,3);
    VL_SIGW(__Vtemp319,95,0,3);
    VL_SIGW(__Vtemp320,95,0,3);
    VL_SIGW(__Vtemp321,95,0,3);
    VL_SIGW(__Vtemp322,95,0,3);
    VL_SIGW(__Vtemp326,127,0,4);
    VL_SIGW(__Vtemp327,127,0,4);
    VL_SIGW(__Vtemp328,159,0,5);
    VL_SIGW(__Vtemp332,95,0,3);
    VL_SIGW(__Vtemp333,95,0,3);
    VL_SIGW(__Vtemp334,95,0,3);
    VL_SIGW(__Vtemp335,95,0,3);
    VL_SIGW(__Vtemp336,95,0,3);
    VL_SIGW(__Vtemp337,95,0,3);
    VL_SIGW(__Vtemp338,127,0,4);
    VL_SIGW(__Vtemp339,127,0,4);
    VL_SIGW(__Vtemp340,127,0,4);
    VL_SIGW(__Vtemp341,127,0,4);
    VL_SIGW(__Vtemp344,95,0,3);
    VL_SIGW(__Vtemp345,95,0,3);
    VL_SIGW(__Vtemp346,95,0,3);
    VL_SIGW(__Vtemp347,95,0,3);
    VL_SIGW(__Vtemp348,95,0,3);
    VL_SIGW(__Vtemp349,95,0,3);
    VL_SIGW(__Vtemp350,95,0,3);
    VL_SIGW(__Vtemp351,95,0,3);
    VL_SIGW(__Vtemp352,127,0,4);
    VL_SIGW(__Vtemp353,127,0,4);
    VL_SIGW(__Vtemp356,127,0,4);
    VL_SIGW(__Vtemp357,159,0,5);
    VL_SIGW(__Vtemp358,159,0,5);
    VL_SIGW(__Vtemp359,159,0,5);
    VL_SIGW(__Vtemp360,159,0,5);
    VL_SIGW(__Vtemp361,159,0,5);
    VL_SIGW(__Vtemp362,159,0,5);
    VL_SIGW(__Vtemp366,127,0,4);
    VL_SIGW(__Vtemp367,255,0,8);
    VL_SIGW(__Vtemp368,255,0,8);
    VL_SIGW(__Vtemp369,287,0,9);
    VL_SIGW(__Vtemp371,95,0,3);
    VL_SIGW(__Vtemp372,95,0,3);
    VL_SIGW(__Vtemp375,127,0,4);
    VL_SIGW(__Vtemp376,159,0,5);
    VL_SIGW(__Vtemp377,127,0,4);
    VL_SIGW(__Vtemp378,159,0,5);
    VL_SIGW(__Vtemp379,159,0,5);
    VL_SIGW(__Vtemp380,127,0,4);
    VL_SIGW(__Vtemp381,159,0,5);
    VL_SIGW(__Vtemp382,159,0,5);
    VL_SIGW(__Vtemp383,159,0,5);
    VL_SIGW(__Vtemp384,223,0,7);
    VL_SIGW(__Vtemp385,223,0,7);
    VL_SIGW(__Vtemp386,223,0,7);
    VL_SIGW(__Vtemp387,223,0,7);
    VL_SIGW(__Vtemp390,127,0,4);
    VL_SIGW(__Vtemp391,159,0,5);
    VL_SIGW(__Vtemp392,127,0,4);
    VL_SIGW(__Vtemp393,159,0,5);
    VL_SIGW(__Vtemp394,159,0,5);
    VL_SIGW(__Vtemp395,159,0,5);
    VL_SIGW(__Vtemp396,159,0,5);
    VL_SIGW(__Vtemp397,127,0,4);
    VL_SIGW(__Vtemp398,159,0,5);
    VL_SIGW(__Vtemp399,159,0,5);
    VL_SIGW(__Vtemp400,159,0,5);
    VL_SIGW(__Vtemp401,223,0,7);
    VL_SIGW(__Vtemp402,223,0,7);
    VL_SIGW(__Vtemp405,223,0,7);
    VL_SIGW(__Vtemp406,287,0,9);
    VL_SIGW(__Vtemp407,287,0,9);
    VL_SIGW(__Vtemp408,287,0,9);
    VL_SIGW(__Vtemp409,287,0,9);
    VL_SIGW(__Vtemp410,127,0,4);
    VL_SIGW(__Vtemp411,287,0,9);
    VL_SIGW(__Vtemp412,287,0,9);
    VL_SIGW(__Vtemp414,255,0,8);
    VL_SIGW(__Vtemp415,383,0,12);
    VL_SIGW(__Vtemp416,383,0,12);
    VL_SIGW(__Vtemp421,255,0,8);
    VL_SIGW(__Vtemp422,383,0,12);
    VL_SIGW(__Vtemp423,383,0,12);
    VL_SIGW(__Vtemp424,255,0,8);
    VL_SIGW(__Vtemp425,255,0,8);
    VL_SIGW(__Vtemp426,255,0,8);
    // Body
    vlTOPp->io_uart_txd = vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_ 
	= (7U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value));
    __Vtemp65[0U] = 0U;
    __Vtemp65[1U] = 0U;
    __Vtemp65[2U] = 0U;
    __Vtemp65[3U] = 0U;
    __Vtemp65[4U] = 0U;
    __Vtemp65[5U] = 0U;
    __Vtemp65[6U] = 0U;
    __Vtemp65[7U] = 0U;
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_10_ 
	= VL_GTS_IWW(1,256,256, __Vtemp65, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_22_ 
	= (0x1fffU & ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k) 
		      << 4U));
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_26_ 
	= (0xffU & ((IData)(1U) + (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k)));
    VL_ADD_W(8, __Vtemp66, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[0U] 
	= __Vtemp66[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[1U] 
	= __Vtemp66[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[2U] 
	= __Vtemp66[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[3U] 
	= __Vtemp66[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[4U] 
	= __Vtemp66[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[5U] 
	= __Vtemp66[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[6U] 
	= __Vtemp66[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_29_[7U] 
	= __Vtemp66[7U];
    VL_EXTEND_WW(131,128, __Vtemp68, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(131,131,32, __Vtemp69, __Vtemp68, 2U);
    __Vtemp70[0U] = __Vtemp69[0U];
    __Vtemp70[1U] = __Vtemp69[1U];
    __Vtemp70[2U] = __Vtemp69[2U];
    __Vtemp70[3U] = __Vtemp69[3U];
    __Vtemp70[4U] = (7U & __Vtemp69[4U]);
    VL_EXTEND_WW(256,131, __Vtemp71, __Vtemp70);
    VL_SUB_W(8, __Vtemp72, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp71);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[0U] 
	= __Vtemp72[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[1U] 
	= __Vtemp72[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[2U] 
	= __Vtemp72[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[3U] 
	= __Vtemp72[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[4U] 
	= __Vtemp72[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[5U] 
	= __Vtemp72[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[6U] 
	= __Vtemp72[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_34_[7U] 
	= __Vtemp72[7U];
    __Vtemp74[0U] = 3U;
    __Vtemp74[1U] = 0U;
    __Vtemp74[2U] = 0U;
    __Vtemp74[3U] = 0U;
    __Vtemp74[4U] = 0U;
    VL_EXTEND_WW(130,128, __Vtemp75, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_MUL_W(5, __Vtemp76, __Vtemp74, __Vtemp75);
    __Vtemp77[0U] = __Vtemp76[0U];
    __Vtemp77[1U] = __Vtemp76[1U];
    __Vtemp77[2U] = __Vtemp76[2U];
    __Vtemp77[3U] = __Vtemp76[3U];
    __Vtemp77[4U] = (3U & __Vtemp76[4U]);
    VL_EXTEND_WW(256,130, __Vtemp78, __Vtemp77);
    VL_SUB_W(8, __Vtemp79, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp78);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[0U] 
	= __Vtemp79[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[1U] 
	= __Vtemp79[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[2U] 
	= __Vtemp79[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[3U] 
	= __Vtemp79[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[4U] 
	= __Vtemp79[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[5U] 
	= __Vtemp79[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[6U] 
	= __Vtemp79[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_39_[7U] 
	= __Vtemp79[7U];
    VL_EXTEND_WW(130,128, __Vtemp81, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(130,130,32, __Vtemp82, __Vtemp81, 1U);
    __Vtemp83[0U] = __Vtemp82[0U];
    __Vtemp83[1U] = __Vtemp82[1U];
    __Vtemp83[2U] = __Vtemp82[2U];
    __Vtemp83[3U] = __Vtemp82[3U];
    __Vtemp83[4U] = (3U & __Vtemp82[4U]);
    VL_EXTEND_WW(256,130, __Vtemp84, __Vtemp83);
    VL_SUB_W(8, __Vtemp85, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp84);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[0U] 
	= __Vtemp85[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[1U] 
	= __Vtemp85[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[2U] 
	= __Vtemp85[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[3U] 
	= __Vtemp85[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[4U] 
	= __Vtemp85[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[5U] 
	= __Vtemp85[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[6U] 
	= __Vtemp85[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_44_[7U] 
	= __Vtemp85[7U];
    VL_EXTEND_WW(256,128, __Vtemp86, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SUB_W(8, __Vtemp87, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8, __Vtemp86);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[0U] 
	= __Vtemp87[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[1U] 
	= __Vtemp87[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[2U] 
	= __Vtemp87[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[3U] 
	= __Vtemp87[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[4U] 
	= __Vtemp87[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[5U] 
	= __Vtemp87[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[6U] 
	= __Vtemp87[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_49_[7U] 
	= __Vtemp87[7U];
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
    __Vtemp89[0U] = 0U;
    __Vtemp89[1U] = 0U;
    __Vtemp89[2U] = 0U;
    __Vtemp89[3U] = 0U;
    __Vtemp89[4U] = 0U;
    __Vtemp89[5U] = 0U;
    __Vtemp89[6U] = 0U;
    __Vtemp89[7U] = 0U;
    vlTOPp->__Vtableidx11 = ((VL_GTS_IWW(1,256,256, __Vtemp89, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7) 
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
    VL_EXTEND_WW(131,128, __Vtemp92, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(131,131,32, __Vtemp93, __Vtemp92, 2U);
    __Vtemp94[0U] = __Vtemp93[0U];
    __Vtemp94[1U] = __Vtemp93[1U];
    __Vtemp94[2U] = __Vtemp93[2U];
    __Vtemp94[3U] = __Vtemp93[3U];
    __Vtemp94[4U] = (7U & __Vtemp93[4U]);
    VL_EXTEND_WW(256,131, __Vtemp95, __Vtemp94);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_11_ 
	= VL_LT_W(8, __Vtemp95, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8);
    __Vtemp97[0U] = 3U;
    __Vtemp97[1U] = 0U;
    __Vtemp97[2U] = 0U;
    __Vtemp97[3U] = 0U;
    __Vtemp97[4U] = 0U;
    VL_EXTEND_WW(130,128, __Vtemp98, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_MUL_W(5, __Vtemp99, __Vtemp97, __Vtemp98);
    __Vtemp100[0U] = __Vtemp99[0U];
    __Vtemp100[1U] = __Vtemp99[1U];
    __Vtemp100[2U] = __Vtemp99[2U];
    __Vtemp100[3U] = __Vtemp99[3U];
    __Vtemp100[4U] = (3U & __Vtemp99[4U]);
    VL_EXTEND_WW(256,130, __Vtemp101, __Vtemp100);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_12_ 
	= VL_LT_W(8, __Vtemp101, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8);
    VL_EXTEND_WW(130,128, __Vtemp103, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    VL_SHIFTL_WWI(130,130,32, __Vtemp104, __Vtemp103, 1U);
    __Vtemp105[0U] = __Vtemp104[0U];
    __Vtemp105[1U] = __Vtemp104[1U];
    __Vtemp105[2U] = __Vtemp104[2U];
    __Vtemp105[3U] = __Vtemp104[3U];
    __Vtemp105[4U] = (3U & __Vtemp104[4U]);
    VL_EXTEND_WW(256,130, __Vtemp106, __Vtemp105);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_13_ 
	= VL_LT_W(8, __Vtemp106, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8);
    VL_EXTEND_WW(256,128, __Vtemp107, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_14_ 
	= VL_LT_W(8, __Vtemp107, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8);
    VL_SHIFTR_WWI(256,256,13, __Vtemp108, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult, 
		  (0x1fffU & ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k) 
			      << 4U)));
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[0U] 
	= __Vtemp108[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[1U] 
	= __Vtemp108[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[2U] 
	= __Vtemp108[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[3U] 
	= __Vtemp108[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[4U] 
	= __Vtemp108[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[5U] 
	= __Vtemp108[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[6U] 
	= __Vtemp108[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_17_[7U] 
	= __Vtemp108[7U];
    VL_SHIFTR_WWI(256,256,13, __Vtemp109, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult, 
		  (0x1fffU & ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k) 
			      << 4U)));
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[0U] 
	= __Vtemp109[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[1U] 
	= __Vtemp109[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[2U] 
	= __Vtemp109[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[3U] 
	= __Vtemp109[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[4U] 
	= __Vtemp109[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[5U] 
	= __Vtemp109[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[6U] 
	= __Vtemp109[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_2_[7U] 
	= __Vtemp109[7U];
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1581
    vlTOPp->__Vtableidx10 = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg;
    vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_valid 
	= vlTOPp->__Vtable10_UartVdf__DOT__multmod_1___05Fio_toUart_valid
	[vlTOPp->__Vtableidx10];
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:1237
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:614
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 0U;
    if (vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
	if ((0U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter))) {
	    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 1U;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:599
    vlTOPp->__Vtableidx7 = vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable7_UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx7];
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:382
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
		VL_EXTEND_WI(128,8, __Vtemp121, (0xffU 
						 & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue[4U]));
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[0U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n[0U]
		        : __Vtemp121[0U]);
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[1U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n[1U]
		        : __Vtemp121[1U]);
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[2U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n[2U]
		        : __Vtemp121[2U]);
		vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[3U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n[3U]
		        : __Vtemp121[3U]);
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:392
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext 
	= (7U & ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
		 + (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)));
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick 
	= ((7U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value)) 
	   & (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
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
    VL_EXTEND_WQ(65,64, __Vtemp129, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp130, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[3U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_[2U]))));
    VL_SUB_W(3, __Vtemp131, __Vtemp129, __Vtemp130);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[0U] 
	= __Vtemp131[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[1U] 
	= __Vtemp131[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U] 
	= (1U & __Vtemp131[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp134, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[3U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[2U]))));
    VL_EXTEND_WQ(65,64, __Vtemp135, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_[0U]))));
    VL_SUB_W(3, __Vtemp136, __Vtemp134, __Vtemp135);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[0U] 
	= __Vtemp136[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[1U] 
	= __Vtemp136[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U] 
	= (1U & __Vtemp136[2U]);
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/15_uart_vdf_repeat_clkdiv/spinalHDL/tmp/job_1/UartVdf.v:418
    vlTOPp->__Vtableidx6 = (((7U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)) 
			     << 4U) | (((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) 
					<< 3U) | (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state)));
    vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready 
	= vlTOPp->__Vtable6_UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready
	[vlTOPp->__Vtableidx6];
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
    __Vtemp142[0U] = ((1U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U])
		       ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[0U])
		       : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[0U]);
    __Vtemp142[1U] = ((1U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U])
		       ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[1U])
		       : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[1U]);
    __Vtemp142[2U] = ((1U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U])
		       ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U])
		       : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U]);
    VL_EXTEND_WI(65,1, __Vtemp143, (1U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_[2U]));
    VL_ADD_W(3, __Vtemp144, __Vtemp142, __Vtemp143);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[0U] 
	= __Vtemp144[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[1U] 
	= __Vtemp144[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_[2U] 
	= (1U & __Vtemp144[2U]);
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
    __Vtemp149[0U] = ((1U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U])
		       ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[0U])
		       : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[0U]);
    __Vtemp149[1U] = ((1U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U])
		       ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[1U])
		       : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[1U]);
    __Vtemp149[2U] = ((1U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U])
		       ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U])
		       : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U]);
    VL_EXTEND_WI(65,1, __Vtemp150, (1U & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_[2U]));
    VL_ADD_W(3, __Vtemp151, __Vtemp149, __Vtemp150);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[0U] 
	= __Vtemp151[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[1U] 
	= __Vtemp151[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_[2U] 
	= (1U & __Vtemp151[2U]);
    vlTOPp->UartVdf__DOT__uartfsm__DOT__write_ready 
	= (1U & ((~ (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__write_m2sPipe_rValid)) 
		 | (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready)));
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
    VL_EXTEND_WQ(65,64, __Vtemp155, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp156, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp157, __Vtemp155, __Vtemp156);
    __Vtemp158[0U] = __Vtemp157[0U];
    __Vtemp158[1U] = __Vtemp157[1U];
    __Vtemp158[2U] = (1U & __Vtemp157[2U]);
    VL_EXTEND_WW(66,65, __Vtemp159, __Vtemp158);
    VL_EXTEND_WI(66,32, __Vtemp160, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp161, __Vtemp159, __Vtemp160);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[0U] 
	= __Vtemp161[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[1U] 
	= __Vtemp161[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[2U] 
	= (3U & __Vtemp161[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp165, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp166, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp167, __Vtemp165, __Vtemp166);
    __Vtemp168[0U] = __Vtemp167[0U];
    __Vtemp168[1U] = __Vtemp167[1U];
    __Vtemp168[2U] = (1U & __Vtemp167[2U]);
    VL_EXTEND_WW(66,65, __Vtemp169, __Vtemp168);
    VL_EXTEND_WI(66,32, __Vtemp170, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp171, __Vtemp169, __Vtemp170);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[0U] 
	= __Vtemp171[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[1U] 
	= __Vtemp171[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[2U] 
	= (3U & __Vtemp171[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp175, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp176, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp177, __Vtemp175, __Vtemp176);
    __Vtemp178[0U] = __Vtemp177[0U];
    __Vtemp178[1U] = __Vtemp177[1U];
    __Vtemp178[2U] = (1U & __Vtemp177[2U]);
    VL_EXTEND_WW(66,65, __Vtemp179, __Vtemp178);
    VL_EXTEND_WI(66,32, __Vtemp180, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp181, __Vtemp179, __Vtemp180);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[0U] 
	= __Vtemp181[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[1U] 
	= __Vtemp181[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[2U] 
	= (3U & __Vtemp181[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp185, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp186, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp187, __Vtemp185, __Vtemp186);
    __Vtemp188[0U] = __Vtemp187[0U];
    __Vtemp188[1U] = __Vtemp187[1U];
    __Vtemp188[2U] = (1U & __Vtemp187[2U]);
    VL_EXTEND_WW(66,65, __Vtemp189, __Vtemp188);
    VL_EXTEND_WI(66,32, __Vtemp190, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp191, __Vtemp189, __Vtemp190);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[0U] 
	= __Vtemp191[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[1U] 
	= __Vtemp191[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[2U] 
	= (3U & __Vtemp191[2U]);
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
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_19_)) 
		       - (0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_19_ 
					     >> 0x10U)))));
    VL_EXTEND_WQ(65,64, __Vtemp196, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp197, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp198, __Vtemp196, __Vtemp197);
    __Vtemp199[0U] = __Vtemp198[0U];
    __Vtemp199[1U] = __Vtemp198[1U];
    __Vtemp199[2U] = (1U & __Vtemp198[2U]);
    VL_EXTEND_WW(66,65, __Vtemp200, __Vtemp199);
    VL_EXTEND_WI(66,32, __Vtemp201, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp202, __Vtemp200, __Vtemp201);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[0U] 
	= __Vtemp202[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[1U] 
	= __Vtemp202[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[2U] 
	= (3U & __Vtemp202[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp206, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp207, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp208, __Vtemp206, __Vtemp207);
    __Vtemp209[0U] = __Vtemp208[0U];
    __Vtemp209[1U] = __Vtemp208[1U];
    __Vtemp209[2U] = (1U & __Vtemp208[2U]);
    VL_EXTEND_WW(66,65, __Vtemp210, __Vtemp209);
    VL_EXTEND_WI(66,32, __Vtemp211, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp212, __Vtemp210, __Vtemp211);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[0U] 
	= __Vtemp212[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[1U] 
	= __Vtemp212[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[2U] 
	= (3U & __Vtemp212[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp216, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp217, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp218, __Vtemp216, __Vtemp217);
    __Vtemp219[0U] = __Vtemp218[0U];
    __Vtemp219[1U] = __Vtemp218[1U];
    __Vtemp219[2U] = (1U & __Vtemp218[2U]);
    VL_EXTEND_WW(66,65, __Vtemp220, __Vtemp219);
    VL_EXTEND_WI(66,32, __Vtemp221, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp222, __Vtemp220, __Vtemp221);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[0U] 
	= __Vtemp222[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[1U] 
	= __Vtemp222[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[2U] 
	= (3U & __Vtemp222[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp226, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp227, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp228, __Vtemp226, __Vtemp227);
    __Vtemp229[0U] = __Vtemp228[0U];
    __Vtemp229[1U] = __Vtemp228[1U];
    __Vtemp229[2U] = (1U & __Vtemp228[2U]);
    VL_EXTEND_WW(66,65, __Vtemp230, __Vtemp229);
    VL_EXTEND_WI(66,32, __Vtemp231, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp232, __Vtemp230, __Vtemp231);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[0U] 
	= __Vtemp232[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[1U] 
	= __Vtemp232[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[2U] 
	= (3U & __Vtemp232[2U]);
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
    VL_EXTEND_WQ(128,64, __Vtemp236, (((QData)((IData)(
						       vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp237, __Vtemp236, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp238, __Vtemp237);
    VL_EXTEND_WQ(65,64, __Vtemp242, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp243, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp244, __Vtemp242, __Vtemp243);
    VL_EXTEND_WQ(65,64, __Vtemp245, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[0U]))));
    VL_SUB_W(3, __Vtemp246, __Vtemp244, __Vtemp245);
    __Vtemp247[0U] = __Vtemp246[0U];
    __Vtemp247[1U] = __Vtemp246[1U];
    __Vtemp247[2U] = (1U & __Vtemp246[2U]);
    VL_EXTEND_WW(97,65, __Vtemp248, __Vtemp247);
    VL_SHIFTL_WWI(97,97,32, __Vtemp249, __Vtemp248, 0x20U);
    __Vtemp250[0U] = __Vtemp249[0U];
    __Vtemp250[1U] = __Vtemp249[1U];
    __Vtemp250[2U] = __Vtemp249[2U];
    __Vtemp250[3U] = (1U & __Vtemp249[3U]);
    VL_EXTEND_WW(98,97, __Vtemp251, __Vtemp250);
    VL_EXTEND_WQ(65,64, __Vtemp254, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp255, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp256, __Vtemp254, __Vtemp255);
    __Vtemp257[0U] = __Vtemp256[0U];
    __Vtemp257[1U] = __Vtemp256[1U];
    __Vtemp257[2U] = (1U & __Vtemp256[2U]);
    VL_EXTEND_WW(66,65, __Vtemp258, __Vtemp257);
    VL_EXTEND_WQ(66,64, __Vtemp259, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp260, __Vtemp258, __Vtemp259);
    __Vtemp261[0U] = __Vtemp260[0U];
    __Vtemp261[1U] = __Vtemp260[1U];
    __Vtemp261[2U] = (3U & __Vtemp260[2U]);
    VL_EXTEND_WW(98,66, __Vtemp262, __Vtemp261);
    VL_SHIFTL_WWI(98,98,32, __Vtemp263, __Vtemp262, 0x20U);
    __Vtemp266[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_))
		       ? __Vtemp251[0U] : __Vtemp263[0U]);
    __Vtemp266[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_))
		       ? __Vtemp251[1U] : __Vtemp263[1U]);
    __Vtemp266[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_))
		       ? __Vtemp251[2U] : __Vtemp263[2U]);
    __Vtemp266[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_))
			     ? __Vtemp251[3U] : __Vtemp263[3U]));
    VL_EXTEND_WW(129,98, __Vtemp267, __Vtemp266);
    VL_ADD_W(5, __Vtemp268, __Vtemp238, __Vtemp267);
    __Vtemp269[0U] = __Vtemp268[0U];
    __Vtemp269[1U] = __Vtemp268[1U];
    __Vtemp269[2U] = __Vtemp268[2U];
    __Vtemp269[3U] = __Vtemp268[3U];
    __Vtemp269[4U] = (1U & __Vtemp268[4U]);
    VL_EXTEND_WW(130,129, __Vtemp270, __Vtemp269);
    VL_EXTEND_WQ(130,64, __Vtemp271, (((QData)((IData)(
						       vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(5, __Vtemp272, __Vtemp270, __Vtemp271);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[0U] 
	= __Vtemp272[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[1U] 
	= __Vtemp272[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[2U] 
	= __Vtemp272[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[3U] 
	= __Vtemp272[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[4U] 
	= (3U & __Vtemp272[4U]);
    VL_EXTEND_WQ(128,64, __Vtemp276, (((QData)((IData)(
						       vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp277, __Vtemp276, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp278, __Vtemp277);
    VL_EXTEND_WQ(65,64, __Vtemp282, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp283, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp284, __Vtemp282, __Vtemp283);
    VL_EXTEND_WQ(65,64, __Vtemp285, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[0U]))));
    VL_SUB_W(3, __Vtemp286, __Vtemp284, __Vtemp285);
    __Vtemp287[0U] = __Vtemp286[0U];
    __Vtemp287[1U] = __Vtemp286[1U];
    __Vtemp287[2U] = (1U & __Vtemp286[2U]);
    VL_EXTEND_WW(97,65, __Vtemp288, __Vtemp287);
    VL_SHIFTL_WWI(97,97,32, __Vtemp289, __Vtemp288, 0x20U);
    __Vtemp290[0U] = __Vtemp289[0U];
    __Vtemp290[1U] = __Vtemp289[1U];
    __Vtemp290[2U] = __Vtemp289[2U];
    __Vtemp290[3U] = (1U & __Vtemp289[3U]);
    VL_EXTEND_WW(98,97, __Vtemp291, __Vtemp290);
    VL_EXTEND_WQ(65,64, __Vtemp294, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp295, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp296, __Vtemp294, __Vtemp295);
    __Vtemp297[0U] = __Vtemp296[0U];
    __Vtemp297[1U] = __Vtemp296[1U];
    __Vtemp297[2U] = (1U & __Vtemp296[2U]);
    VL_EXTEND_WW(66,65, __Vtemp298, __Vtemp297);
    VL_EXTEND_WQ(66,64, __Vtemp299, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp300, __Vtemp298, __Vtemp299);
    __Vtemp301[0U] = __Vtemp300[0U];
    __Vtemp301[1U] = __Vtemp300[1U];
    __Vtemp301[2U] = (3U & __Vtemp300[2U]);
    VL_EXTEND_WW(98,66, __Vtemp302, __Vtemp301);
    VL_SHIFTL_WWI(98,98,32, __Vtemp303, __Vtemp302, 0x20U);
    __Vtemp306[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_))
		       ? __Vtemp291[0U] : __Vtemp303[0U]);
    __Vtemp306[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_))
		       ? __Vtemp291[1U] : __Vtemp303[1U]);
    __Vtemp306[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_))
		       ? __Vtemp291[2U] : __Vtemp303[2U]);
    __Vtemp306[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_))
			     ? __Vtemp291[3U] : __Vtemp303[3U]));
    VL_EXTEND_WW(129,98, __Vtemp307, __Vtemp306);
    VL_ADD_W(5, __Vtemp308, __Vtemp278, __Vtemp307);
    __Vtemp309[0U] = __Vtemp308[0U];
    __Vtemp309[1U] = __Vtemp308[1U];
    __Vtemp309[2U] = __Vtemp308[2U];
    __Vtemp309[3U] = __Vtemp308[3U];
    __Vtemp309[4U] = (1U & __Vtemp308[4U]);
    VL_EXTEND_WW(130,129, __Vtemp310, __Vtemp309);
    VL_EXTEND_WQ(130,64, __Vtemp311, (((QData)((IData)(
						       vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(5, __Vtemp312, __Vtemp310, __Vtemp311);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[0U] 
	= __Vtemp312[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[1U] 
	= __Vtemp312[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[2U] 
	= __Vtemp312[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[3U] 
	= __Vtemp312[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[4U] 
	= (3U & __Vtemp312[4U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp316, ((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp317, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp318, __Vtemp316, __Vtemp317);
    __Vtemp319[0U] = __Vtemp318[0U];
    __Vtemp319[1U] = __Vtemp318[1U];
    __Vtemp319[2U] = (1U & __Vtemp318[2U]);
    VL_EXTEND_WW(66,65, __Vtemp320, __Vtemp319);
    VL_EXTEND_WI(66,32, __Vtemp321, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp322, __Vtemp320, __Vtemp321);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[0U] 
	= __Vtemp322[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[1U] 
	= __Vtemp322[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[2U] 
	= (3U & __Vtemp322[2U]);
    VL_EXTEND_WQ(128,64, __Vtemp326, (((QData)((IData)(
						       vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp327, __Vtemp326, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp328, __Vtemp327);
    VL_EXTEND_WQ(65,64, __Vtemp332, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp333, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp334, __Vtemp332, __Vtemp333);
    VL_EXTEND_WQ(65,64, __Vtemp335, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[0U]))));
    VL_SUB_W(3, __Vtemp336, __Vtemp334, __Vtemp335);
    __Vtemp337[0U] = __Vtemp336[0U];
    __Vtemp337[1U] = __Vtemp336[1U];
    __Vtemp337[2U] = (1U & __Vtemp336[2U]);
    VL_EXTEND_WW(97,65, __Vtemp338, __Vtemp337);
    VL_SHIFTL_WWI(97,97,32, __Vtemp339, __Vtemp338, 0x20U);
    __Vtemp340[0U] = __Vtemp339[0U];
    __Vtemp340[1U] = __Vtemp339[1U];
    __Vtemp340[2U] = __Vtemp339[2U];
    __Vtemp340[3U] = (1U & __Vtemp339[3U]);
    VL_EXTEND_WW(98,97, __Vtemp341, __Vtemp340);
    VL_EXTEND_WQ(65,64, __Vtemp344, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp345, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp346, __Vtemp344, __Vtemp345);
    __Vtemp347[0U] = __Vtemp346[0U];
    __Vtemp347[1U] = __Vtemp346[1U];
    __Vtemp347[2U] = (1U & __Vtemp346[2U]);
    VL_EXTEND_WW(66,65, __Vtemp348, __Vtemp347);
    VL_EXTEND_WQ(66,64, __Vtemp349, (((QData)((IData)(
						      vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_[0U]))));
    VL_ADD_W(3, __Vtemp350, __Vtemp348, __Vtemp349);
    __Vtemp351[0U] = __Vtemp350[0U];
    __Vtemp351[1U] = __Vtemp350[1U];
    __Vtemp351[2U] = (3U & __Vtemp350[2U]);
    VL_EXTEND_WW(98,66, __Vtemp352, __Vtemp351);
    VL_SHIFTL_WWI(98,98,32, __Vtemp353, __Vtemp352, 0x20U);
    __Vtemp356[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_))
		       ? __Vtemp341[0U] : __Vtemp353[0U]);
    __Vtemp356[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_))
		       ? __Vtemp341[1U] : __Vtemp353[1U]);
    __Vtemp356[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_))
		       ? __Vtemp341[2U] : __Vtemp353[2U]);
    __Vtemp356[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_))
			     ? __Vtemp341[3U] : __Vtemp353[3U]));
    VL_EXTEND_WW(129,98, __Vtemp357, __Vtemp356);
    VL_ADD_W(5, __Vtemp358, __Vtemp328, __Vtemp357);
    __Vtemp359[0U] = __Vtemp358[0U];
    __Vtemp359[1U] = __Vtemp358[1U];
    __Vtemp359[2U] = __Vtemp358[2U];
    __Vtemp359[3U] = __Vtemp358[3U];
    __Vtemp359[4U] = (1U & __Vtemp358[4U]);
    VL_EXTEND_WW(130,129, __Vtemp360, __Vtemp359);
    VL_EXTEND_WQ(130,64, __Vtemp361, (((QData)((IData)(
						       vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_[0U]))));
    VL_ADD_W(5, __Vtemp362, __Vtemp360, __Vtemp361);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[0U] 
	= __Vtemp362[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[1U] 
	= __Vtemp362[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[2U] 
	= __Vtemp362[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[3U] 
	= __Vtemp362[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[4U] 
	= (3U & __Vtemp362[4U]);
    __Vtemp366[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[0U];
    __Vtemp366[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[1U];
    __Vtemp366[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[2U];
    __Vtemp366[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[3U];
    VL_EXTEND_WW(256,128, __Vtemp367, __Vtemp366);
    VL_SHIFTL_WWI(256,256,32, __Vtemp368, __Vtemp367, 0x80U);
    VL_EXTEND_WW(257,256, __Vtemp369, __Vtemp368);
    __Vtemp371[0U] = 0U;
    __Vtemp371[1U] = 0U;
    __Vtemp371[2U] = 0U;
    __Vtemp372[0U] = 0U;
    __Vtemp372[1U] = 0U;
    __Vtemp372[2U] = 0U;
    __Vtemp375[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[0U];
    __Vtemp375[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[1U];
    __Vtemp375[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[2U];
    __Vtemp375[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[3U];
    VL_EXTEND_WW(129,128, __Vtemp376, __Vtemp375);
    __Vtemp377[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[0U];
    __Vtemp377[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[1U];
    __Vtemp377[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[2U];
    __Vtemp377[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[3U];
    VL_EXTEND_WW(129,128, __Vtemp378, __Vtemp377);
    VL_ADD_W(5, __Vtemp379, __Vtemp376, __Vtemp378);
    __Vtemp380[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[0U];
    __Vtemp380[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[1U];
    __Vtemp380[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[2U];
    __Vtemp380[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[3U];
    VL_EXTEND_WW(129,128, __Vtemp381, __Vtemp380);
    VL_SUB_W(5, __Vtemp382, __Vtemp379, __Vtemp381);
    __Vtemp383[0U] = __Vtemp382[0U];
    __Vtemp383[1U] = __Vtemp382[1U];
    __Vtemp383[2U] = __Vtemp382[2U];
    __Vtemp383[3U] = __Vtemp382[3U];
    __Vtemp383[4U] = (1U & __Vtemp382[4U]);
    VL_EXTEND_WW(193,129, __Vtemp384, __Vtemp383);
    VL_SHIFTL_WWI(193,193,32, __Vtemp385, __Vtemp384, 0x40U);
    __Vtemp386[0U] = __Vtemp385[0U];
    __Vtemp386[1U] = __Vtemp385[1U];
    __Vtemp386[2U] = __Vtemp385[2U];
    __Vtemp386[3U] = __Vtemp385[3U];
    __Vtemp386[4U] = __Vtemp385[4U];
    __Vtemp386[5U] = __Vtemp385[5U];
    __Vtemp386[6U] = (1U & __Vtemp385[6U]);
    VL_EXTEND_WW(194,193, __Vtemp387, __Vtemp386);
    __Vtemp390[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[0U];
    __Vtemp390[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[1U];
    __Vtemp390[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[2U];
    __Vtemp390[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_[3U];
    VL_EXTEND_WW(129,128, __Vtemp391, __Vtemp390);
    __Vtemp392[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[0U];
    __Vtemp392[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[1U];
    __Vtemp392[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[2U];
    __Vtemp392[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[3U];
    VL_EXTEND_WW(129,128, __Vtemp393, __Vtemp392);
    VL_ADD_W(5, __Vtemp394, __Vtemp391, __Vtemp393);
    __Vtemp395[0U] = __Vtemp394[0U];
    __Vtemp395[1U] = __Vtemp394[1U];
    __Vtemp395[2U] = __Vtemp394[2U];
    __Vtemp395[3U] = __Vtemp394[3U];
    __Vtemp395[4U] = (1U & __Vtemp394[4U]);
    VL_EXTEND_WW(130,129, __Vtemp396, __Vtemp395);
    __Vtemp397[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[0U];
    __Vtemp397[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[1U];
    __Vtemp397[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[2U];
    __Vtemp397[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_[3U];
    VL_EXTEND_WW(130,128, __Vtemp398, __Vtemp397);
    VL_ADD_W(5, __Vtemp399, __Vtemp396, __Vtemp398);
    __Vtemp400[0U] = __Vtemp399[0U];
    __Vtemp400[1U] = __Vtemp399[1U];
    __Vtemp400[2U] = __Vtemp399[2U];
    __Vtemp400[3U] = __Vtemp399[3U];
    __Vtemp400[4U] = (3U & __Vtemp399[4U]);
    VL_EXTEND_WW(194,130, __Vtemp401, __Vtemp400);
    VL_SHIFTL_WWI(194,194,32, __Vtemp402, __Vtemp401, 0x40U);
    __Vtemp405[0U] = ((VL_GTS_IWW(1,65,65, __Vtemp371, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IWW(1,65,65, __Vtemp372, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp387[0U] : __Vtemp402[0U]);
    __Vtemp405[1U] = ((VL_GTS_IWW(1,65,65, __Vtemp371, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IWW(1,65,65, __Vtemp372, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp387[1U] : __Vtemp402[1U]);
    __Vtemp405[2U] = ((VL_GTS_IWW(1,65,65, __Vtemp371, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IWW(1,65,65, __Vtemp372, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp387[2U] : __Vtemp402[2U]);
    __Vtemp405[3U] = ((VL_GTS_IWW(1,65,65, __Vtemp371, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IWW(1,65,65, __Vtemp372, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp387[3U] : __Vtemp402[3U]);
    __Vtemp405[4U] = ((VL_GTS_IWW(1,65,65, __Vtemp371, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IWW(1,65,65, __Vtemp372, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp387[4U] : __Vtemp402[4U]);
    __Vtemp405[5U] = ((VL_GTS_IWW(1,65,65, __Vtemp371, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
		       ^ VL_GTS_IWW(1,65,65, __Vtemp372, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
		       ? __Vtemp387[5U] : __Vtemp402[5U]);
    __Vtemp405[6U] = (3U & ((VL_GTS_IWW(1,65,65, __Vtemp371, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_) 
			     ^ VL_GTS_IWW(1,65,65, __Vtemp372, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_))
			     ? __Vtemp387[6U] : __Vtemp402[6U]));
    VL_EXTEND_WW(257,194, __Vtemp406, __Vtemp405);
    VL_ADD_W(9, __Vtemp407, __Vtemp369, __Vtemp406);
    __Vtemp408[0U] = __Vtemp407[0U];
    __Vtemp408[1U] = __Vtemp407[1U];
    __Vtemp408[2U] = __Vtemp407[2U];
    __Vtemp408[3U] = __Vtemp407[3U];
    __Vtemp408[4U] = __Vtemp407[4U];
    __Vtemp408[5U] = __Vtemp407[5U];
    __Vtemp408[6U] = __Vtemp407[6U];
    __Vtemp408[7U] = __Vtemp407[7U];
    __Vtemp408[8U] = (1U & __Vtemp407[8U]);
    VL_EXTEND_WW(258,257, __Vtemp409, __Vtemp408);
    __Vtemp410[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[0U];
    __Vtemp410[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[1U];
    __Vtemp410[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[2U];
    __Vtemp410[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_[3U];
    VL_EXTEND_WW(258,128, __Vtemp411, __Vtemp410);
    VL_ADD_W(9, __Vtemp412, __Vtemp409, __Vtemp411);
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U] 
	= __Vtemp412[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U] 
	= __Vtemp412[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U] 
	= __Vtemp412[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U] 
	= __Vtemp412[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U] 
	= __Vtemp412[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[5U] 
	= __Vtemp412[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[6U] 
	= __Vtemp412[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[7U] 
	= __Vtemp412[7U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[8U] 
	= (3U & __Vtemp412[8U]);
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
		    __Vtemp414[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
		    __Vtemp414[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
		    __Vtemp414[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
		    __Vtemp414[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
		    __Vtemp414[4U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U];
		    __Vtemp414[5U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[5U];
		    __Vtemp414[6U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[6U];
		    __Vtemp414[7U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[7U];
		    VL_EXTEND_WW(384,256, __Vtemp415, __Vtemp414);
		    VL_SHIFTL_WWI(384,384,32, __Vtemp416, __Vtemp415, 0x80U);
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[0U] 
			= __Vtemp416[0U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[1U] 
			= __Vtemp416[1U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[2U] 
			= __Vtemp416[2U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[3U] 
			= __Vtemp416[3U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[4U] 
			= __Vtemp416[4U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[5U] 
			= __Vtemp416[5U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[6U] 
			= __Vtemp416[6U];
		    vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out[7U] 
			= __Vtemp416[7U];
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
    __Vtemp421[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
    __Vtemp421[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
    __Vtemp421[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
    __Vtemp421[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
    __Vtemp421[4U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[4U];
    __Vtemp421[5U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[5U];
    __Vtemp421[6U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[6U];
    __Vtemp421[7U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[7U];
    VL_EXTEND_WW(384,256, __Vtemp422, __Vtemp421);
    VL_SHIFTL_WWI(384,384,32, __Vtemp423, __Vtemp422, 0x80U);
    __Vtemp424[0U] = __Vtemp423[0U];
    __Vtemp424[1U] = __Vtemp423[1U];
    __Vtemp424[2U] = __Vtemp423[2U];
    __Vtemp424[3U] = __Vtemp423[3U];
    __Vtemp424[4U] = __Vtemp423[4U];
    __Vtemp424[5U] = __Vtemp423[5U];
    __Vtemp424[6U] = __Vtemp423[6U];
    __Vtemp424[7U] = __Vtemp423[7U];
    VL_ADD_W(8, __Vtemp425, vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2, __Vtemp424);
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[0U] 
	= __Vtemp425[0U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[1U] 
	= __Vtemp425[1U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[2U] 
	= __Vtemp425[2U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[3U] 
	= __Vtemp425[3U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[4U] 
	= __Vtemp425[4U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[5U] 
	= __Vtemp425[5U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[6U] 
	= __Vtemp425[6U];
    vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_[7U] 
	= __Vtemp425[7U];
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
		VL_SHIFTR_WWI(256,256,13, __Vtemp426, vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_21_, 
			      (0x1fffU & ((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k) 
					  << 4U)));
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[0U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[0U]
		        : __Vtemp426[0U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[1U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[1U]
		        : __Vtemp426[1U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[2U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[2U]
		        : __Vtemp426[2U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[3U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[3U]
		        : __Vtemp426[3U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[4U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[4U]
		        : __Vtemp426[4U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[5U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[5U]
		        : __Vtemp426[5U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[6U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[6U]
		        : __Vtemp426[6U]);
		vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out[7U] 
		    = ((1U & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg))
		        ? vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3[7U]
		        : __Vtemp426[7U]);
	    }
	}
    }
}
