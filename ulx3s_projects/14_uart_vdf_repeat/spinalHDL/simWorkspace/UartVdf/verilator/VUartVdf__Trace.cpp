// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUartVdf__Syms.h"


//======================

void VUartVdf::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VUartVdf* t=(VUartVdf*)userthis;
    VUartVdf__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VUartVdf::traceChgThis(VUartVdf__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartVdf* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VUartVdf::traceChgThis__2(VUartVdf__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartVdf* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_valid));
	vcdp->chgArray(c+2,(vlTOPp->UartVdf__DOT__uartfsm_io_toFnct_payload),240);
	vcdp->chgBit  (c+10,(vlTOPp->UartVdf__DOT__uartfsm__DOT__write_valid));
	vcdp->chgArray(c+11,(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg_string),160);
	vcdp->chgArray(c+16,(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg_string),160);
    }
}

void VUartVdf::traceChgThis__3(VUartVdf__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartVdf* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+21,((7U & ((IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
				    + (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)))),3);
    }
}

void VUartVdf::traceChgThis__4(VUartVdf__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartVdf* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp288,127,0,4);
    // Body
    {
	vcdp->chgBit  (c+22,(vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_valid));
	vcdp->chgQuad (c+23,(vlTOPp->UartVdf__DOT__multmod_1___05Fio_toUart_payload),64);
	vcdp->chgArray(c+25,(vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_1_out),128);
	vcdp->chgArray(c+29,(vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2_out),128);
	vcdp->chgQuad (c+33,(vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2a_out),64);
	vcdp->chgArray(c+35,(vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2b_out),128);
	vcdp->chgArray(c+39,(vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_2c_out),128);
	vcdp->chgArray(c+43,(vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_3_out),128);
	vcdp->chgArray(c+47,(vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_4_out),128);
	vcdp->chgArray(c+51,(vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_5_out),128);
	vcdp->chgArray(c+55,(vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_6_out),128);
	vcdp->chgArray(c+59,(vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_7_out),128);
	vcdp->chgBus  (c+63,(vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_corr_flag),3);
	vcdp->chgBus  (c+64,(vlTOPp->UartVdf__DOT__multmod_1___05Fio_temp_corr_flag_2),3);
	vcdp->chgBit  (c+65,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready));
	vcdp->chgBit  (c+66,(vlTOPp->UartVdf__DOT__uartfsm__DOT__write_ready));
	vcdp->chgBus  (c+67,(vlTOPp->UartVdf__DOT__uartfsm__DOT__write_payload),8);
	vcdp->chgBus  (c+68,(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext),3);
	vcdp->chgBus  (c+69,(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext),2);
	vcdp->chgArray(c+70,(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateNext_string),160);
	vcdp->chgArray(c+75,(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateNext_string),160);
	vcdp->chgBit  (c+80,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
	vcdp->chgBit  (c+81,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick));
	vcdp->chgBit  (c+82,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
	vcdp->chgQuad (c+83,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string),48);
	vcdp->chgBit  (c+85,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick));
	vcdp->chgQuad (c+86,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string),48);
	__Vtemp288[0U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
	__Vtemp288[1U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
	__Vtemp288[2U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
	__Vtemp288[3U] = vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
	vcdp->chgArray(c+88,(__Vtemp288),128);
	vcdp->chgBus  (c+92,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext),4);
	vcdp->chgArray(c+93,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg_string),80);
	vcdp->chgArray(c+96,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateNext_string),80);
	vcdp->chgQuad (c+99,(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_),64);
	vcdp->chgQuad (c+101,(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_),64);
	vcdp->chgQuad (c+103,((((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U])))),64);
	vcdp->chgQuad (c+105,((((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U])))),64);
	vcdp->chgQuad (c+107,((((QData)((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[0U])))),64);
	vcdp->chgBus  (c+109,((IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_ 
				       >> 0x20U))),32);
	vcdp->chgBus  (c+110,((IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_ 
				       >> 0x20U))),32);
	vcdp->chgBus  (c+111,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_13___DOT___zz_2_),32);
	vcdp->chgBus  (c+112,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_14___DOT___zz_2_),32);
	vcdp->chgBus  (c+113,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_15___DOT___zz_2_),32);
	vcdp->chgBus  (c+114,((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_ 
						  >> 0x30U)))),16);
	vcdp->chgBus  (c+115,((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_ 
						  >> 0x30U)))),16);
	vcdp->chgBus  (c+116,((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_ 
						  >> 0x20U)))),16);
	vcdp->chgBus  (c+117,((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_ 
						  >> 0x20U)))),16);
	vcdp->chgBus  (c+118,((0xffffU & ((0x1ffffU 
					   & ((0x10000U 
					       & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_)
					       ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_)
					       : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_)) 
					  + (1U & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_ 
						   >> 0x10U))))),16);
	vcdp->chgBus  (c+119,((0xffffU & ((0x1ffffU 
					   & ((0x10000U 
					       & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_)
					       ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_)
					       : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_)) 
					  + (1U & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_ 
						   >> 0x10U))))),16);
	vcdp->chgBus  (c+120,((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_)),32);
	vcdp->chgBus  (c+121,((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_)),32);
	vcdp->chgBus  (c+122,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_13___DOT___zz_2_),32);
	vcdp->chgBus  (c+123,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_14___DOT___zz_2_),32);
	vcdp->chgBus  (c+124,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_15___DOT___zz_2_),32);
	vcdp->chgBus  (c+125,((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_ 
						  >> 0x10U)))),16);
	vcdp->chgBus  (c+126,((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_ 
						  >> 0x10U)))),16);
	vcdp->chgBus  (c+127,((0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_8_))),16);
	vcdp->chgBus  (c+128,((0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT___zz_9_))),16);
	vcdp->chgBus  (c+129,((0xffffU & ((0x1ffffU 
					   & ((0x10000U 
					       & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_)
					       ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_)
					       : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_)) 
					  + (1U & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_ 
						   >> 0x10U))))),16);
	vcdp->chgBus  (c+130,((0xffffU & ((0x1ffffU 
					   & ((0x10000U 
					       & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_)
					       ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_)
					       : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_)) 
					  + (1U & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_ 
						   >> 0x10U))))),16);
	vcdp->chgBus  (c+131,((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_)),32);
	vcdp->chgBus  (c+132,((IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_)),32);
	vcdp->chgBus  (c+133,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_13___DOT___zz_2_),32);
	vcdp->chgBus  (c+134,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_14___DOT___zz_2_),32);
	vcdp->chgBus  (c+135,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_15___DOT___zz_2_),32);
	vcdp->chgBus  (c+136,((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_ 
						  >> 0x10U)))),16);
	vcdp->chgBus  (c+137,((0xffffU & (IData)((vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_ 
						  >> 0x10U)))),16);
	vcdp->chgBus  (c+138,((0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_))),16);
	vcdp->chgBus  (c+139,((0xffffU & (IData)(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_))),16);
	vcdp->chgBus  (c+140,((0xffffU & ((0x1ffffU 
					   & ((0x10000U 
					       & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_)
					       ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_)
					       : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_)) 
					  + (1U & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_ 
						   >> 0x10U))))),16);
	vcdp->chgBus  (c+141,((0xffffU & ((0x1ffffU 
					   & ((0x10000U 
					       & vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_)
					       ? (~ vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_)
					       : vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_)) 
					  + (1U & (vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_6_ 
						   >> 0x10U))))),16);
    }
}

void VUartVdf::traceChgThis__5(VUartVdf__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartVdf* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+142,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext));
	vcdp->chgBit  (c+143,(vlTOPp->UartVdf__DOT__uartfsm__DOT__write_m2sPipe_rValid));
	vcdp->chgBus  (c+144,(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_inCounter),5);
	vcdp->chgArray(c+145,(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_buffer),240);
	vcdp->chgBus  (c+153,(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outCounter),3);
	vcdp->chgQuad (c+154,(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_outBuffer),64);
	vcdp->chgBus  (c+156,(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmIn_stateReg),3);
	vcdp->chgBus  (c+157,(vlTOPp->UartVdf__DOT__uartfsm__DOT__fsmOut_stateReg),2);
	vcdp->chgBus  (c+158,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value),3);
	vcdp->chgBit  (c+159,((7U == (IData)(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value))));
	vcdp->chgQuad (c+160,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_a),64);
	vcdp->chgQuad (c+162,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mod_n),64);
	vcdp->chgArray(c+164,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mue),72);
	vcdp->chgBus  (c+167,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_k),8);
	vcdp->chgBus  (c+168,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_t),32);
	vcdp->chgArray(c+169,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_mult),128);
	vcdp->chgArray(c+173,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_result_barret),128);
	vcdp->chgArray(c+177,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_2),128);
	vcdp->chgArray(c+181,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_3),128);
	vcdp->chgArray(c+185,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_7),128);
	vcdp->chgArray(c+189,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_temp_8),128);
	vcdp->chgArray(c+193,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_mask),128);
	vcdp->chgBus  (c+197,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_repeatCounter),32);
    }
}

void VUartVdf::traceChgThis__6(VUartVdf__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartVdf* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+198,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter),8);
	vcdp->chgBus  (c+199,(vlTOPp->UartVdf__DOT__uartfsm__DOT__write_m2sPipe_rData),8);
	vcdp->chgBus  (c+200,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value),3);
	vcdp->chgBit  (c+201,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity));
	vcdp->chgBus  (c+202,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter),3);
    }
}

void VUartVdf::traceChgThis__7(VUartVdf__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartVdf* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+203,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg));
	vcdp->chgBus  (c+204,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter),20);
	vcdp->chgBit  (c+205,((0U == vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)));
	vcdp->chgBus  (c+206,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state),3);
	vcdp->chgBit  (c+207,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1));
	vcdp->chgBit  (c+208,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1));
	vcdp->chgBit  (c+209,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
	vcdp->chgBit  (c+210,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3));
	vcdp->chgBit  (c+211,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
	vcdp->chgBit  (c+212,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
	vcdp->chgBit  (c+213,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick));
	vcdp->chgBus  (c+214,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state),3);
	vcdp->chgBit  (c+215,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0));
	vcdp->chgBus  (c+216,(vlTOPp->UartVdf__DOT__multmod_1___DOT__fsm_stateReg),4);
    }
}

void VUartVdf::traceChgThis__8(VUartVdf__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartVdf* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+217,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value),3);
	vcdp->chgBit  (c+218,(vlTOPp->UartVdf__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity));
    }
}

void VUartVdf::traceChgThis__9(VUartVdf__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartVdf* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+219,(vlTOPp->io_uart_txd));
	vcdp->chgBit  (c+220,(vlTOPp->io_uart_rxd));
	vcdp->chgBit  (c+221,(vlTOPp->clkIsLocked));
	vcdp->chgBit  (c+222,(vlTOPp->clk));
	vcdp->chgBit  (c+223,(vlTOPp->reset));
    }
}
