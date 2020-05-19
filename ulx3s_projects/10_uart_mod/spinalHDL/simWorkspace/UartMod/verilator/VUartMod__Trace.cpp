// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUartMod__Syms.h"


//======================

void VUartMod::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VUartMod* t=(VUartMod*)userthis;
    VUartMod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VUartMod::traceChgThis(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 1U)) | (vlTOPp->__Vm_traceActivity 
					      >> 3U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VUartMod::traceChgThis__2(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->UartMod__DOT__uartfsm__DOT__write_valid));
	vcdp->chgArray(c+2,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg_string),160);
	vcdp->chgArray(c+7,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg_string),160);
    }
}

void VUartMod::traceChgThis__3(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+12,((7U & ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
				    + (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)))),3);
    }
}

void VUartMod::traceChgThis__4(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp221,127,0,4);
    // Body
    {
	vcdp->chgBit  (c+13,(vlTOPp->UartMod__DOT__uartfsm_io_toFnct_valid));
	vcdp->chgArray(c+14,(vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload),208);
	vcdp->chgBit  (c+21,(vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_valid));
	vcdp->chgArray(c+22,(vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload),128);
	vcdp->chgArray(c+26,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out),128);
	vcdp->chgArray(c+30,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out),128);
	vcdp->chgArray(c+34,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out),128);
	vcdp->chgArray(c+38,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out),128);
	vcdp->chgArray(c+42,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out),128);
	vcdp->chgArray(c+46,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out),128);
	vcdp->chgArray(c+50,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out),128);
	vcdp->chgBus  (c+54,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_corr_flag),3);
	vcdp->chgBit  (c+55,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready));
	vcdp->chgBit  (c+56,(vlTOPp->UartMod__DOT__uartfsm__DOT__write_ready));
	vcdp->chgBus  (c+57,(vlTOPp->UartMod__DOT__uartfsm__DOT__write_payload),8);
	vcdp->chgBus  (c+58,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext),3);
	vcdp->chgBus  (c+59,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateNext),2);
	vcdp->chgArray(c+60,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext_string),160);
	vcdp->chgArray(c+65,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateNext_string),160);
	vcdp->chgBit  (c+70,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
	vcdp->chgBit  (c+71,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick));
	vcdp->chgBit  (c+72,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
	vcdp->chgQuad (c+73,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string),48);
	vcdp->chgBit  (c+75,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick));
	vcdp->chgQuad (c+76,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string),48);
	__Vtemp221[0U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
	__Vtemp221[1U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
	__Vtemp221[2U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
	__Vtemp221[3U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
	vcdp->chgArray(c+78,(__Vtemp221),128);
	vcdp->chgBus  (c+82,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateNext),3);
	vcdp->chgArray(c+83,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg_string),80);
	vcdp->chgArray(c+86,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateNext_string),80);
	vcdp->chgQuad (c+89,(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_),64);
	vcdp->chgQuad (c+91,(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_),64);
	vcdp->chgQuad (c+93,((((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U])) 
			       << 0x20U) | (QData)((IData)(
							   vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U])))),64);
	vcdp->chgQuad (c+95,((((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U])) 
			       << 0x20U) | (QData)((IData)(
							   vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U])))),64);
	vcdp->chgQuad (c+97,((((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[1U])) 
			       << 0x20U) | (QData)((IData)(
							   vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[0U])))),64);
	vcdp->chgBus  (c+99,((IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_ 
				      >> 0x20U))),32);
	vcdp->chgBus  (c+100,((IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_ 
				       >> 0x20U))),32);
	vcdp->chgBus  (c+101,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_13___DOT___zz_2_),32);
	vcdp->chgBus  (c+102,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_14___DOT___zz_2_),32);
	vcdp->chgBus  (c+103,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_15___DOT___zz_2_),32);
	vcdp->chgBus  (c+104,((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_ 
						  >> 0x30U)))),16);
	vcdp->chgBus  (c+105,((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_ 
						  >> 0x30U)))),16);
	vcdp->chgBus  (c+106,((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_ 
						  >> 0x20U)))),16);
	vcdp->chgBus  (c+107,((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_ 
						  >> 0x20U)))),16);
	vcdp->chgBus  (c+108,((0xffffU & ((0x1ffffU 
					   & ((0x10000U 
					       & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_)
					       ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_)
					       : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_)) 
					  + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_ 
						   >> 0x10U))))),16);
	vcdp->chgBus  (c+109,((0xffffU & ((0x1ffffU 
					   & ((0x10000U 
					       & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_)
					       ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_)
					       : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_)) 
					  + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_ 
						   >> 0x10U))))),16);
	vcdp->chgBus  (c+110,((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_)),32);
	vcdp->chgBus  (c+111,((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_)),32);
	vcdp->chgBus  (c+112,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_13___DOT___zz_2_),32);
	vcdp->chgBus  (c+113,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_14___DOT___zz_2_),32);
	vcdp->chgBus  (c+114,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_15___DOT___zz_2_),32);
	vcdp->chgBus  (c+115,((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_ 
						  >> 0x10U)))),16);
	vcdp->chgBus  (c+116,((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_ 
						  >> 0x10U)))),16);
	vcdp->chgBus  (c+117,((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_6_))),16);
	vcdp->chgBus  (c+118,((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_7_))),16);
	vcdp->chgBus  (c+119,((0xffffU & ((0x1ffffU 
					   & ((0x10000U 
					       & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_)
					       ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_)
					       : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_)) 
					  + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_ 
						   >> 0x10U))))),16);
	vcdp->chgBus  (c+120,((0xffffU & ((0x1ffffU 
					   & ((0x10000U 
					       & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_)
					       ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_)
					       : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_)) 
					  + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_ 
						   >> 0x10U))))),16);
	vcdp->chgBus  (c+121,((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_)),32);
	vcdp->chgBus  (c+122,((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_)),32);
	vcdp->chgBus  (c+123,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_13___DOT___zz_2_),32);
	vcdp->chgBus  (c+124,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_14___DOT___zz_2_),32);
	vcdp->chgBus  (c+125,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_15___DOT___zz_2_),32);
	vcdp->chgBus  (c+126,((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_ 
						  >> 0x10U)))),16);
	vcdp->chgBus  (c+127,((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_ 
						  >> 0x10U)))),16);
	vcdp->chgBus  (c+128,((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_))),16);
	vcdp->chgBus  (c+129,((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_))),16);
	vcdp->chgBus  (c+130,((0xffffU & ((0x1ffffU 
					   & ((0x10000U 
					       & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_)
					       ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_)
					       : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_)) 
					  + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_ 
						   >> 0x10U))))),16);
	vcdp->chgBus  (c+131,((0xffffU & ((0x1ffffU 
					   & ((0x10000U 
					       & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_)
					       ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_)
					       : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_)) 
					  + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_ 
						   >> 0x10U))))),16);
    }
}

void VUartMod::traceChgThis__5(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+132,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext));
	vcdp->chgBit  (c+133,(vlTOPp->UartMod__DOT__uartfsm__DOT__write_m2sPipe_rValid));
	vcdp->chgBus  (c+134,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_inCounter),5);
	vcdp->chgArray(c+135,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer),208);
	vcdp->chgBus  (c+142,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outCounter),4);
	vcdp->chgArray(c+143,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outBuffer),128);
	vcdp->chgBus  (c+147,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg),3);
	vcdp->chgBus  (c+148,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg),2);
	vcdp->chgBus  (c+149,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value),3);
	vcdp->chgBit  (c+150,((7U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value))));
    }
}

void VUartMod::traceChgThis__6(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+151,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter),8);
	vcdp->chgBus  (c+152,(vlTOPp->UartMod__DOT__uartfsm__DOT__write_m2sPipe_rData),8);
	vcdp->chgBus  (c+153,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value),3);
	vcdp->chgBit  (c+154,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity));
	vcdp->chgBus  (c+155,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter),3);
	vcdp->chgArray(c+156,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3),128);
    }
}

void VUartMod::traceChgThis__7(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp222,127,0,4);
    VL_SIGW(__Vtemp223,127,0,4);
    // Body
    {
	vcdp->chgBit  (c+160,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg));
	vcdp->chgBus  (c+161,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter),20);
	vcdp->chgBit  (c+162,((0U == vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)));
	vcdp->chgBus  (c+163,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state),3);
	vcdp->chgBit  (c+164,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1));
	vcdp->chgBit  (c+165,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1));
	vcdp->chgBit  (c+166,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
	vcdp->chgBit  (c+167,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3));
	vcdp->chgBit  (c+168,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
	vcdp->chgBit  (c+169,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
	vcdp->chgBit  (c+170,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick));
	vcdp->chgBus  (c+171,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state),3);
	vcdp->chgBit  (c+172,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0));
	vcdp->chgArray(c+173,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_buffer),128);
	vcdp->chgBus  (c+177,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n),32);
	vcdp->chgQuad (c+178,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue),40);
	vcdp->chgBus  (c+180,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k),8);
	vcdp->chgArray(c+181,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult),128);
	vcdp->chgArray(c+185,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret),128);
	__Vtemp222[0U] = 0xffffffffU;
	__Vtemp222[1U] = 0xffffffffU;
	__Vtemp222[2U] = 0xffffffffU;
	__Vtemp222[3U] = 0xffffffffU;
	VL_SHIFTR_WWI(128,128,13, __Vtemp223, __Vtemp222, 
		      (0x1fffU & ((IData)(0x80U) - 
				  (0xff0U & (((IData)(1U) 
					      + (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k)) 
					     << 4U)))));
	vcdp->chgArray(c+189,(__Vtemp223),128);
	vcdp->chgBus  (c+193,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg),3);
    }
}

void VUartMod::traceChgThis__8(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+194,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value),3);
	vcdp->chgBit  (c+195,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity));
    }
}

void VUartMod::traceChgThis__9(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+196,(vlTOPp->io_uart_txd));
	vcdp->chgBit  (c+197,(vlTOPp->io_uart_rxd));
	vcdp->chgBit  (c+198,(vlTOPp->clk));
	vcdp->chgBit  (c+199,(vlTOPp->reset));
    }
}
