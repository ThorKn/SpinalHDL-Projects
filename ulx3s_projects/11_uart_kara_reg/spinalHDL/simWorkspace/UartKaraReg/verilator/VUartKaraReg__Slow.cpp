// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUartKaraReg.h for the primary calling header

#include "VUartKaraReg.h"      // For This
#include "VUartKaraReg__Syms.h"


//--------------------
// STATIC VARIABLES

VL_ST_SIGW(VUartKaraReg::__Vtable1_UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg_string[8],159,0,5);
VL_ST_SIGW(VUartKaraReg::__Vtable2_UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext_string[8],159,0,5);
VL_ST_SIGW(VUartKaraReg::__Vtable3_UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg_string[4],159,0,5);
VL_ST_SIGW(VUartKaraReg::__Vtable4_UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext_string[4],159,0,5);
VL_ST_SIG64(VUartKaraReg::__Vtable5_UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string[8],47,0);
VL_ST_SIG8(VUartKaraReg::__Vtable6_UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[32],0,0);
VL_ST_SIG64(VUartKaraReg::__Vtable7_UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string[8],47,0);
VL_ST_SIGW(VUartKaraReg::__Vtable8_UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg_string[4],79,0,3);
VL_ST_SIGW(VUartKaraReg::__Vtable9_UartKaraReg__DOT__karareg_1___DOT__fsm_stateNext_string[4],79,0,3);

//--------------------

VL_CTOR_IMP(VUartKaraReg) {
    VUartKaraReg__Syms* __restrict vlSymsp = __VlSymsp = new VUartKaraReg__Syms(this, name());
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VUartKaraReg::__Vconfigure(VUartKaraReg__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VUartKaraReg::~VUartKaraReg() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VUartKaraReg::_settle__TOP__3(VUartKaraReg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartKaraReg::_settle__TOP__3\n"); );
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp291,95,0,3);
    VL_SIGW(__Vtemp292,95,0,3);
    VL_SIGW(__Vtemp293,95,0,3);
    VL_SIGW(__Vtemp296,95,0,3);
    VL_SIGW(__Vtemp297,95,0,3);
    VL_SIGW(__Vtemp298,95,0,3);
    VL_SIGW(__Vtemp305,95,0,3);
    VL_SIGW(__Vtemp306,95,0,3);
    VL_SIGW(__Vtemp307,95,0,3);
    VL_SIGW(__Vtemp312,95,0,3);
    VL_SIGW(__Vtemp313,95,0,3);
    VL_SIGW(__Vtemp314,95,0,3);
    VL_SIGW(__Vtemp319,95,0,3);
    VL_SIGW(__Vtemp320,95,0,3);
    VL_SIGW(__Vtemp321,95,0,3);
    VL_SIGW(__Vtemp322,95,0,3);
    VL_SIGW(__Vtemp323,95,0,3);
    VL_SIGW(__Vtemp324,95,0,3);
    VL_SIGW(__Vtemp325,95,0,3);
    VL_SIGW(__Vtemp329,95,0,3);
    VL_SIGW(__Vtemp330,95,0,3);
    VL_SIGW(__Vtemp331,95,0,3);
    VL_SIGW(__Vtemp332,95,0,3);
    VL_SIGW(__Vtemp333,95,0,3);
    VL_SIGW(__Vtemp334,95,0,3);
    VL_SIGW(__Vtemp335,95,0,3);
    VL_SIGW(__Vtemp339,95,0,3);
    VL_SIGW(__Vtemp340,95,0,3);
    VL_SIGW(__Vtemp341,95,0,3);
    VL_SIGW(__Vtemp342,95,0,3);
    VL_SIGW(__Vtemp343,95,0,3);
    VL_SIGW(__Vtemp344,95,0,3);
    VL_SIGW(__Vtemp345,95,0,3);
    VL_SIGW(__Vtemp349,95,0,3);
    VL_SIGW(__Vtemp350,95,0,3);
    VL_SIGW(__Vtemp351,95,0,3);
    VL_SIGW(__Vtemp352,95,0,3);
    VL_SIGW(__Vtemp353,95,0,3);
    VL_SIGW(__Vtemp354,95,0,3);
    VL_SIGW(__Vtemp355,95,0,3);
    VL_SIGW(__Vtemp360,95,0,3);
    VL_SIGW(__Vtemp361,95,0,3);
    VL_SIGW(__Vtemp362,95,0,3);
    VL_SIGW(__Vtemp363,95,0,3);
    VL_SIGW(__Vtemp364,95,0,3);
    VL_SIGW(__Vtemp365,95,0,3);
    VL_SIGW(__Vtemp366,95,0,3);
    VL_SIGW(__Vtemp370,95,0,3);
    VL_SIGW(__Vtemp371,95,0,3);
    VL_SIGW(__Vtemp372,95,0,3);
    VL_SIGW(__Vtemp373,95,0,3);
    VL_SIGW(__Vtemp374,95,0,3);
    VL_SIGW(__Vtemp375,95,0,3);
    VL_SIGW(__Vtemp376,95,0,3);
    VL_SIGW(__Vtemp380,95,0,3);
    VL_SIGW(__Vtemp381,95,0,3);
    VL_SIGW(__Vtemp382,95,0,3);
    VL_SIGW(__Vtemp383,95,0,3);
    VL_SIGW(__Vtemp384,95,0,3);
    VL_SIGW(__Vtemp385,95,0,3);
    VL_SIGW(__Vtemp386,95,0,3);
    VL_SIGW(__Vtemp390,95,0,3);
    VL_SIGW(__Vtemp391,95,0,3);
    VL_SIGW(__Vtemp392,95,0,3);
    VL_SIGW(__Vtemp393,95,0,3);
    VL_SIGW(__Vtemp394,95,0,3);
    VL_SIGW(__Vtemp395,95,0,3);
    VL_SIGW(__Vtemp396,95,0,3);
    VL_SIGW(__Vtemp400,127,0,4);
    VL_SIGW(__Vtemp401,127,0,4);
    VL_SIGW(__Vtemp402,159,0,5);
    VL_SIGW(__Vtemp406,95,0,3);
    VL_SIGW(__Vtemp407,95,0,3);
    VL_SIGW(__Vtemp408,95,0,3);
    VL_SIGW(__Vtemp409,95,0,3);
    VL_SIGW(__Vtemp410,95,0,3);
    VL_SIGW(__Vtemp411,95,0,3);
    VL_SIGW(__Vtemp412,127,0,4);
    VL_SIGW(__Vtemp413,127,0,4);
    VL_SIGW(__Vtemp414,127,0,4);
    VL_SIGW(__Vtemp415,127,0,4);
    VL_SIGW(__Vtemp418,95,0,3);
    VL_SIGW(__Vtemp419,95,0,3);
    VL_SIGW(__Vtemp420,95,0,3);
    VL_SIGW(__Vtemp421,95,0,3);
    VL_SIGW(__Vtemp422,95,0,3);
    VL_SIGW(__Vtemp423,95,0,3);
    VL_SIGW(__Vtemp424,95,0,3);
    VL_SIGW(__Vtemp425,95,0,3);
    VL_SIGW(__Vtemp426,127,0,4);
    VL_SIGW(__Vtemp427,127,0,4);
    VL_SIGW(__Vtemp430,127,0,4);
    VL_SIGW(__Vtemp431,159,0,5);
    VL_SIGW(__Vtemp432,159,0,5);
    VL_SIGW(__Vtemp433,159,0,5);
    VL_SIGW(__Vtemp434,159,0,5);
    VL_SIGW(__Vtemp435,159,0,5);
    VL_SIGW(__Vtemp436,159,0,5);
    VL_SIGW(__Vtemp440,127,0,4);
    VL_SIGW(__Vtemp441,127,0,4);
    VL_SIGW(__Vtemp442,159,0,5);
    VL_SIGW(__Vtemp446,95,0,3);
    VL_SIGW(__Vtemp447,95,0,3);
    VL_SIGW(__Vtemp448,95,0,3);
    VL_SIGW(__Vtemp449,95,0,3);
    VL_SIGW(__Vtemp450,95,0,3);
    VL_SIGW(__Vtemp451,95,0,3);
    VL_SIGW(__Vtemp452,127,0,4);
    VL_SIGW(__Vtemp453,127,0,4);
    VL_SIGW(__Vtemp454,127,0,4);
    VL_SIGW(__Vtemp455,127,0,4);
    VL_SIGW(__Vtemp458,95,0,3);
    VL_SIGW(__Vtemp459,95,0,3);
    VL_SIGW(__Vtemp460,95,0,3);
    VL_SIGW(__Vtemp461,95,0,3);
    VL_SIGW(__Vtemp462,95,0,3);
    VL_SIGW(__Vtemp463,95,0,3);
    VL_SIGW(__Vtemp464,95,0,3);
    VL_SIGW(__Vtemp465,95,0,3);
    VL_SIGW(__Vtemp466,127,0,4);
    VL_SIGW(__Vtemp467,127,0,4);
    VL_SIGW(__Vtemp470,127,0,4);
    VL_SIGW(__Vtemp471,159,0,5);
    VL_SIGW(__Vtemp472,159,0,5);
    VL_SIGW(__Vtemp473,159,0,5);
    VL_SIGW(__Vtemp474,159,0,5);
    VL_SIGW(__Vtemp475,159,0,5);
    VL_SIGW(__Vtemp476,159,0,5);
    VL_SIGW(__Vtemp481,95,0,3);
    VL_SIGW(__Vtemp482,95,0,3);
    VL_SIGW(__Vtemp483,95,0,3);
    VL_SIGW(__Vtemp484,95,0,3);
    VL_SIGW(__Vtemp485,95,0,3);
    VL_SIGW(__Vtemp486,95,0,3);
    VL_SIGW(__Vtemp487,95,0,3);
    VL_SIGW(__Vtemp491,127,0,4);
    VL_SIGW(__Vtemp492,127,0,4);
    VL_SIGW(__Vtemp493,159,0,5);
    VL_SIGW(__Vtemp497,95,0,3);
    VL_SIGW(__Vtemp498,95,0,3);
    VL_SIGW(__Vtemp499,95,0,3);
    VL_SIGW(__Vtemp500,95,0,3);
    VL_SIGW(__Vtemp501,95,0,3);
    VL_SIGW(__Vtemp502,95,0,3);
    VL_SIGW(__Vtemp503,127,0,4);
    VL_SIGW(__Vtemp504,127,0,4);
    VL_SIGW(__Vtemp505,127,0,4);
    VL_SIGW(__Vtemp506,127,0,4);
    VL_SIGW(__Vtemp509,95,0,3);
    VL_SIGW(__Vtemp510,95,0,3);
    VL_SIGW(__Vtemp511,95,0,3);
    VL_SIGW(__Vtemp512,95,0,3);
    VL_SIGW(__Vtemp513,95,0,3);
    VL_SIGW(__Vtemp514,95,0,3);
    VL_SIGW(__Vtemp515,95,0,3);
    VL_SIGW(__Vtemp516,95,0,3);
    VL_SIGW(__Vtemp517,127,0,4);
    VL_SIGW(__Vtemp518,127,0,4);
    VL_SIGW(__Vtemp521,127,0,4);
    VL_SIGW(__Vtemp522,159,0,5);
    VL_SIGW(__Vtemp523,159,0,5);
    VL_SIGW(__Vtemp524,159,0,5);
    VL_SIGW(__Vtemp525,159,0,5);
    VL_SIGW(__Vtemp526,159,0,5);
    VL_SIGW(__Vtemp527,159,0,5);
    // Body
    vlTOPp->io_uart_txd = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_ 
	= (7U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value));
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
    VL_EXTEND_WQ(65,64, __Vtemp291, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp292, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U]))));
    VL_SUB_W(3, __Vtemp293, __Vtemp291, __Vtemp292);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[0U] 
	= __Vtemp293[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[1U] 
	= __Vtemp293[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[2U] 
	= (1U & __Vtemp293[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp296, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U]))));
    VL_EXTEND_WQ(65,64, __Vtemp297, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U]))));
    VL_SUB_W(3, __Vtemp298, __Vtemp296, __Vtemp297);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[0U] 
	= __Vtemp298[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[1U] 
	= __Vtemp298[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[2U] 
	= (1U & __Vtemp298[2U]);
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1356
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_valid = 0U;
    if ((1U != (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_valid = 1U;
	}
    }
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick 
	= (0U == vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter);
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_ 
	= (7U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value));
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_ 
	= vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:638
    vlTOPp->__Vtableidx7 = vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable7_UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx7];
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:421
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 0U;
    if ((0U == vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 1U;
    }
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
    __Vtemp305[0U] = ((1U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[2U])
		       ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[0U])
		       : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[0U]);
    __Vtemp305[1U] = ((1U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[2U])
		       ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[1U])
		       : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[1U]);
    __Vtemp305[2U] = ((1U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[2U])
		       ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[2U])
		       : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[2U]);
    VL_EXTEND_WI(65,1, __Vtemp306, (1U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_[2U]));
    VL_ADD_W(3, __Vtemp307, __Vtemp305, __Vtemp306);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[0U] 
	= __Vtemp307[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[1U] 
	= __Vtemp307[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[2U] 
	= (1U & __Vtemp307[2U]);
    __Vtemp312[0U] = ((1U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[2U])
		       ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[0U])
		       : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[0U]);
    __Vtemp312[1U] = ((1U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[2U])
		       ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[1U])
		       : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[1U]);
    __Vtemp312[2U] = ((1U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[2U])
		       ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[2U])
		       : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[2U]);
    VL_EXTEND_WI(65,1, __Vtemp313, (1U & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_[2U]));
    VL_ADD_W(3, __Vtemp314, __Vtemp312, __Vtemp313);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[0U] 
	= __Vtemp314[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[1U] 
	= __Vtemp314[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[2U] 
	= (1U & __Vtemp314[2U]);
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:431
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext 
	= (7U & ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
		 + (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)));
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick 
	= ((7U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value)) 
	   & (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
    VL_EXTEND_WQ(65,64, __Vtemp319, ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp320, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp321, __Vtemp319, __Vtemp320);
    __Vtemp322[0U] = __Vtemp321[0U];
    __Vtemp322[1U] = __Vtemp321[1U];
    __Vtemp322[2U] = (1U & __Vtemp321[2U]);
    VL_EXTEND_WW(66,65, __Vtemp323, __Vtemp322);
    VL_EXTEND_WI(66,32, __Vtemp324, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp325, __Vtemp323, __Vtemp324);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U] 
	= __Vtemp325[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U] 
	= __Vtemp325[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[2U] 
	= (3U & __Vtemp325[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp329, ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp330, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp331, __Vtemp329, __Vtemp330);
    __Vtemp332[0U] = __Vtemp331[0U];
    __Vtemp332[1U] = __Vtemp331[1U];
    __Vtemp332[2U] = (1U & __Vtemp331[2U]);
    VL_EXTEND_WW(66,65, __Vtemp333, __Vtemp332);
    VL_EXTEND_WI(66,32, __Vtemp334, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp335, __Vtemp333, __Vtemp334);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U] 
	= __Vtemp335[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U] 
	= __Vtemp335[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[2U] 
	= (3U & __Vtemp335[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp339, ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp340, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp341, __Vtemp339, __Vtemp340);
    __Vtemp342[0U] = __Vtemp341[0U];
    __Vtemp342[1U] = __Vtemp341[1U];
    __Vtemp342[2U] = (1U & __Vtemp341[2U]);
    VL_EXTEND_WW(66,65, __Vtemp343, __Vtemp342);
    VL_EXTEND_WI(66,32, __Vtemp344, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp345, __Vtemp343, __Vtemp344);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[0U] 
	= __Vtemp345[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[1U] 
	= __Vtemp345[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[2U] 
	= (3U & __Vtemp345[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp349, ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp350, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp351, __Vtemp349, __Vtemp350);
    __Vtemp352[0U] = __Vtemp351[0U];
    __Vtemp352[1U] = __Vtemp351[1U];
    __Vtemp352[2U] = (1U & __Vtemp351[2U]);
    VL_EXTEND_WW(66,65, __Vtemp353, __Vtemp352);
    VL_EXTEND_WI(66,32, __Vtemp354, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp355, __Vtemp353, __Vtemp354);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[0U] 
	= __Vtemp355[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[1U] 
	= __Vtemp355[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[2U] 
	= (3U & __Vtemp355[2U]);
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
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:457
    vlTOPp->__Vtableidx6 = (((7U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)) 
			     << 4U) | (((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick) 
					<< 3U) | (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state)));
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready 
	= vlTOPp->__Vtable6_UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready
	[vlTOPp->__Vtableidx6];
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
    vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_ready 
	= (1U & ((~ (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_m2sPipe_rValid)) 
		 | (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready)));
    VL_EXTEND_WQ(65,64, __Vtemp360, ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp361, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp362, __Vtemp360, __Vtemp361);
    __Vtemp363[0U] = __Vtemp362[0U];
    __Vtemp363[1U] = __Vtemp362[1U];
    __Vtemp363[2U] = (1U & __Vtemp362[2U]);
    VL_EXTEND_WW(66,65, __Vtemp364, __Vtemp363);
    VL_EXTEND_WI(66,32, __Vtemp365, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp366, __Vtemp364, __Vtemp365);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[0U] 
	= __Vtemp366[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[1U] 
	= __Vtemp366[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[2U] 
	= (3U & __Vtemp366[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp370, ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp371, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp372, __Vtemp370, __Vtemp371);
    __Vtemp373[0U] = __Vtemp372[0U];
    __Vtemp373[1U] = __Vtemp372[1U];
    __Vtemp373[2U] = (1U & __Vtemp372[2U]);
    VL_EXTEND_WW(66,65, __Vtemp374, __Vtemp373);
    VL_EXTEND_WI(66,32, __Vtemp375, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp376, __Vtemp374, __Vtemp375);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[0U] 
	= __Vtemp376[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[1U] 
	= __Vtemp376[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[2U] 
	= (3U & __Vtemp376[2U]);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_ 
	= (0x1ffffU & ((0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_20_)) 
		       - (0xffffU & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_20_ 
					     >> 0x10U)))));
    VL_EXTEND_WQ(65,64, __Vtemp380, ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp381, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp382, __Vtemp380, __Vtemp381);
    __Vtemp383[0U] = __Vtemp382[0U];
    __Vtemp383[1U] = __Vtemp382[1U];
    __Vtemp383[2U] = (1U & __Vtemp382[2U]);
    VL_EXTEND_WW(66,65, __Vtemp384, __Vtemp383);
    VL_EXTEND_WI(66,32, __Vtemp385, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp386, __Vtemp384, __Vtemp385);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[0U] 
	= __Vtemp386[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[1U] 
	= __Vtemp386[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[2U] 
	= (3U & __Vtemp386[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp390, ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp391, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp392, __Vtemp390, __Vtemp391);
    __Vtemp393[0U] = __Vtemp392[0U];
    __Vtemp393[1U] = __Vtemp392[1U];
    __Vtemp393[2U] = (1U & __Vtemp392[2U]);
    VL_EXTEND_WW(66,65, __Vtemp394, __Vtemp393);
    VL_EXTEND_WI(66,32, __Vtemp395, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp396, __Vtemp394, __Vtemp395);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[0U] 
	= __Vtemp396[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[1U] 
	= __Vtemp396[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[2U] 
	= (3U & __Vtemp396[2U]);
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
    VL_EXTEND_WQ(128,64, __Vtemp400, (((QData)((IData)(
						       vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp401, __Vtemp400, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp402, __Vtemp401);
    VL_EXTEND_WQ(65,64, __Vtemp406, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp407, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U]))));
    VL_ADD_W(3, __Vtemp408, __Vtemp406, __Vtemp407);
    VL_EXTEND_WQ(65,64, __Vtemp409, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[0U]))));
    VL_SUB_W(3, __Vtemp410, __Vtemp408, __Vtemp409);
    __Vtemp411[0U] = __Vtemp410[0U];
    __Vtemp411[1U] = __Vtemp410[1U];
    __Vtemp411[2U] = (1U & __Vtemp410[2U]);
    VL_EXTEND_WW(97,65, __Vtemp412, __Vtemp411);
    VL_SHIFTL_WWI(97,97,32, __Vtemp413, __Vtemp412, 0x20U);
    __Vtemp414[0U] = __Vtemp413[0U];
    __Vtemp414[1U] = __Vtemp413[1U];
    __Vtemp414[2U] = __Vtemp413[2U];
    __Vtemp414[3U] = (1U & __Vtemp413[3U]);
    VL_EXTEND_WW(98,97, __Vtemp415, __Vtemp414);
    VL_EXTEND_WQ(65,64, __Vtemp418, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp419, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U]))));
    VL_ADD_W(3, __Vtemp420, __Vtemp418, __Vtemp419);
    __Vtemp421[0U] = __Vtemp420[0U];
    __Vtemp421[1U] = __Vtemp420[1U];
    __Vtemp421[2U] = (1U & __Vtemp420[2U]);
    VL_EXTEND_WW(66,65, __Vtemp422, __Vtemp421);
    VL_EXTEND_WQ(66,64, __Vtemp423, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[0U]))));
    VL_ADD_W(3, __Vtemp424, __Vtemp422, __Vtemp423);
    __Vtemp425[0U] = __Vtemp424[0U];
    __Vtemp425[1U] = __Vtemp424[1U];
    __Vtemp425[2U] = (3U & __Vtemp424[2U]);
    VL_EXTEND_WW(98,66, __Vtemp426, __Vtemp425);
    VL_SHIFTL_WWI(98,98,32, __Vtemp427, __Vtemp426, 0x20U);
    __Vtemp430[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_))
		       ? __Vtemp415[0U] : __Vtemp427[0U]);
    __Vtemp430[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_))
		       ? __Vtemp415[1U] : __Vtemp427[1U]);
    __Vtemp430[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_))
		       ? __Vtemp415[2U] : __Vtemp427[2U]);
    __Vtemp430[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_))
			     ? __Vtemp415[3U] : __Vtemp427[3U]));
    VL_EXTEND_WW(129,98, __Vtemp431, __Vtemp430);
    VL_ADD_W(5, __Vtemp432, __Vtemp402, __Vtemp431);
    __Vtemp433[0U] = __Vtemp432[0U];
    __Vtemp433[1U] = __Vtemp432[1U];
    __Vtemp433[2U] = __Vtemp432[2U];
    __Vtemp433[3U] = __Vtemp432[3U];
    __Vtemp433[4U] = (1U & __Vtemp432[4U]);
    VL_EXTEND_WW(130,129, __Vtemp434, __Vtemp433);
    VL_EXTEND_WQ(130,64, __Vtemp435, (((QData)((IData)(
						       vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U]))));
    VL_ADD_W(5, __Vtemp436, __Vtemp434, __Vtemp435);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U] 
	= __Vtemp436[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U] 
	= __Vtemp436[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[2U] 
	= __Vtemp436[2U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[3U] 
	= __Vtemp436[3U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[4U] 
	= (3U & __Vtemp436[4U]);
    VL_EXTEND_WQ(128,64, __Vtemp440, (((QData)((IData)(
						       vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp441, __Vtemp440, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp442, __Vtemp441);
    VL_EXTEND_WQ(65,64, __Vtemp446, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp447, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[0U]))));
    VL_ADD_W(3, __Vtemp448, __Vtemp446, __Vtemp447);
    VL_EXTEND_WQ(65,64, __Vtemp449, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[0U]))));
    VL_SUB_W(3, __Vtemp450, __Vtemp448, __Vtemp449);
    __Vtemp451[0U] = __Vtemp450[0U];
    __Vtemp451[1U] = __Vtemp450[1U];
    __Vtemp451[2U] = (1U & __Vtemp450[2U]);
    VL_EXTEND_WW(97,65, __Vtemp452, __Vtemp451);
    VL_SHIFTL_WWI(97,97,32, __Vtemp453, __Vtemp452, 0x20U);
    __Vtemp454[0U] = __Vtemp453[0U];
    __Vtemp454[1U] = __Vtemp453[1U];
    __Vtemp454[2U] = __Vtemp453[2U];
    __Vtemp454[3U] = (1U & __Vtemp453[3U]);
    VL_EXTEND_WW(98,97, __Vtemp455, __Vtemp454);
    VL_EXTEND_WQ(65,64, __Vtemp458, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp459, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[0U]))));
    VL_ADD_W(3, __Vtemp460, __Vtemp458, __Vtemp459);
    __Vtemp461[0U] = __Vtemp460[0U];
    __Vtemp461[1U] = __Vtemp460[1U];
    __Vtemp461[2U] = (1U & __Vtemp460[2U]);
    VL_EXTEND_WW(66,65, __Vtemp462, __Vtemp461);
    VL_EXTEND_WQ(66,64, __Vtemp463, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[0U]))));
    VL_ADD_W(3, __Vtemp464, __Vtemp462, __Vtemp463);
    __Vtemp465[0U] = __Vtemp464[0U];
    __Vtemp465[1U] = __Vtemp464[1U];
    __Vtemp465[2U] = (3U & __Vtemp464[2U]);
    VL_EXTEND_WW(98,66, __Vtemp466, __Vtemp465);
    VL_SHIFTL_WWI(98,98,32, __Vtemp467, __Vtemp466, 0x20U);
    __Vtemp470[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_))
		       ? __Vtemp455[0U] : __Vtemp467[0U]);
    __Vtemp470[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_))
		       ? __Vtemp455[1U] : __Vtemp467[1U]);
    __Vtemp470[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_))
		       ? __Vtemp455[2U] : __Vtemp467[2U]);
    __Vtemp470[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_))
			     ? __Vtemp455[3U] : __Vtemp467[3U]));
    VL_EXTEND_WW(129,98, __Vtemp471, __Vtemp470);
    VL_ADD_W(5, __Vtemp472, __Vtemp442, __Vtemp471);
    __Vtemp473[0U] = __Vtemp472[0U];
    __Vtemp473[1U] = __Vtemp472[1U];
    __Vtemp473[2U] = __Vtemp472[2U];
    __Vtemp473[3U] = __Vtemp472[3U];
    __Vtemp473[4U] = (1U & __Vtemp472[4U]);
    VL_EXTEND_WW(130,129, __Vtemp474, __Vtemp473);
    VL_EXTEND_WQ(130,64, __Vtemp475, (((QData)((IData)(
						       vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[0U]))));
    VL_ADD_W(5, __Vtemp476, __Vtemp474, __Vtemp475);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U] 
	= __Vtemp476[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U] 
	= __Vtemp476[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[2U] 
	= __Vtemp476[2U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[3U] 
	= __Vtemp476[3U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[4U] 
	= (3U & __Vtemp476[4U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp481, ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
				     << 0x20U));
    VL_EXTEND_WQ(65,50, __Vtemp482, (VL_ULL(0x3ffffffffffff) 
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
    VL_ADD_W(3, __Vtemp483, __Vtemp481, __Vtemp482);
    __Vtemp484[0U] = __Vtemp483[0U];
    __Vtemp484[1U] = __Vtemp483[1U];
    __Vtemp484[2U] = (1U & __Vtemp483[2U]);
    VL_EXTEND_WW(66,65, __Vtemp485, __Vtemp484);
    VL_EXTEND_WI(66,32, __Vtemp486, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_);
    VL_ADD_W(3, __Vtemp487, __Vtemp485, __Vtemp486);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[0U] 
	= __Vtemp487[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[1U] 
	= __Vtemp487[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[2U] 
	= (3U & __Vtemp487[2U]);
    VL_EXTEND_WQ(128,64, __Vtemp491, (((QData)((IData)(
						       vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[0U]))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp492, __Vtemp491, 0x40U);
    VL_EXTEND_WW(129,128, __Vtemp493, __Vtemp492);
    VL_EXTEND_WQ(65,64, __Vtemp497, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp498, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[0U]))));
    VL_ADD_W(3, __Vtemp499, __Vtemp497, __Vtemp498);
    VL_EXTEND_WQ(65,64, __Vtemp500, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[0U]))));
    VL_SUB_W(3, __Vtemp501, __Vtemp499, __Vtemp500);
    __Vtemp502[0U] = __Vtemp501[0U];
    __Vtemp502[1U] = __Vtemp501[1U];
    __Vtemp502[2U] = (1U & __Vtemp501[2U]);
    VL_EXTEND_WW(97,65, __Vtemp503, __Vtemp502);
    VL_SHIFTL_WWI(97,97,32, __Vtemp504, __Vtemp503, 0x20U);
    __Vtemp505[0U] = __Vtemp504[0U];
    __Vtemp505[1U] = __Vtemp504[1U];
    __Vtemp505[2U] = __Vtemp504[2U];
    __Vtemp505[3U] = (1U & __Vtemp504[3U]);
    VL_EXTEND_WW(98,97, __Vtemp506, __Vtemp505);
    VL_EXTEND_WQ(65,64, __Vtemp509, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp510, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[0U]))));
    VL_ADD_W(3, __Vtemp511, __Vtemp509, __Vtemp510);
    __Vtemp512[0U] = __Vtemp511[0U];
    __Vtemp512[1U] = __Vtemp511[1U];
    __Vtemp512[2U] = (1U & __Vtemp511[2U]);
    VL_EXTEND_WW(66,65, __Vtemp513, __Vtemp512);
    VL_EXTEND_WQ(66,64, __Vtemp514, (((QData)((IData)(
						      vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[1U])) 
				      << 0x20U) | (QData)((IData)(
								  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[0U]))));
    VL_ADD_W(3, __Vtemp515, __Vtemp513, __Vtemp514);
    __Vtemp516[0U] = __Vtemp515[0U];
    __Vtemp516[1U] = __Vtemp515[1U];
    __Vtemp516[2U] = (3U & __Vtemp515[2U]);
    VL_EXTEND_WW(98,66, __Vtemp517, __Vtemp516);
    VL_SHIFTL_WWI(98,98,32, __Vtemp518, __Vtemp517, 0x20U);
    __Vtemp521[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_))
		       ? __Vtemp506[0U] : __Vtemp518[0U]);
    __Vtemp521[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_))
		       ? __Vtemp506[1U] : __Vtemp518[1U]);
    __Vtemp521[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_) 
		       ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_))
		       ? __Vtemp506[2U] : __Vtemp518[2U]);
    __Vtemp521[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_) 
			     ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_))
			     ? __Vtemp506[3U] : __Vtemp518[3U]));
    VL_EXTEND_WW(129,98, __Vtemp522, __Vtemp521);
    VL_ADD_W(5, __Vtemp523, __Vtemp493, __Vtemp522);
    __Vtemp524[0U] = __Vtemp523[0U];
    __Vtemp524[1U] = __Vtemp523[1U];
    __Vtemp524[2U] = __Vtemp523[2U];
    __Vtemp524[3U] = __Vtemp523[3U];
    __Vtemp524[4U] = (1U & __Vtemp523[4U]);
    VL_EXTEND_WW(130,129, __Vtemp525, __Vtemp524);
    VL_EXTEND_WQ(130,64, __Vtemp526, (((QData)((IData)(
						       vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[0U]))));
    VL_ADD_W(5, __Vtemp527, __Vtemp525, __Vtemp526);
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[0U] 
	= __Vtemp527[0U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[1U] 
	= __Vtemp527[1U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[2U] 
	= __Vtemp527[2U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[3U] 
	= __Vtemp527[3U];
    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[4U] 
	= (3U & __Vtemp527[4U]);
}
