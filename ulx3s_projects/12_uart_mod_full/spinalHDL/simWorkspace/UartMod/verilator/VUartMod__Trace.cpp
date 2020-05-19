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
	vcdp->chgBit  (c+1,(vlTOPp->UartMod__DOT__uartfsm_io_toFnct_valid));
	vcdp->chgArray(c+2,(vlTOPp->UartMod__DOT__uartfsm_io_toFnct_payload),272);
	vcdp->chgBit  (c+11,(vlTOPp->UartMod__DOT__uartfsm__DOT__write_valid));
	vcdp->chgArray(c+12,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg_string),160);
	vcdp->chgArray(c+17,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg_string),160);
    }
}

void VUartMod::traceChgThis__3(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+22,((7U & ((IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
				    + (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)))),3);
    }
}

void VUartMod::traceChgThis__4(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp286,127,0,4);
    // Body
    {
	vcdp->chgBit  (c+23,(vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_valid));
	vcdp->chgQuad (c+24,(vlTOPp->UartMod__DOT__multmod_1___05Fio_toUart_payload),64);
	vcdp->chgArray(c+26,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_1_out),128);
	vcdp->chgArray(c+30,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2_out),128);
	vcdp->chgQuad (c+34,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2a_out),64);
	vcdp->chgArray(c+36,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2b_out),128);
	vcdp->chgArray(c+40,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_2c_out),128);
	vcdp->chgArray(c+44,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_3_out),128);
	vcdp->chgArray(c+48,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_4_out),128);
	vcdp->chgArray(c+52,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_5_out),128);
	vcdp->chgArray(c+56,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_6_out),128);
	vcdp->chgArray(c+60,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_7_out),128);
	vcdp->chgBus  (c+64,(vlTOPp->UartMod__DOT__multmod_1___05Fio_temp_corr_flag),3);
	vcdp->chgBit  (c+65,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready));
	vcdp->chgBit  (c+66,(vlTOPp->UartMod__DOT__uartfsm__DOT__write_ready));
	vcdp->chgBus  (c+67,(vlTOPp->UartMod__DOT__uartfsm__DOT__write_payload),8);
	vcdp->chgBus  (c+68,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext),3);
	vcdp->chgBus  (c+69,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateNext),2);
	vcdp->chgArray(c+70,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateNext_string),160);
	vcdp->chgArray(c+75,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateNext_string),160);
	vcdp->chgBit  (c+80,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
	vcdp->chgBit  (c+81,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick));
	vcdp->chgBit  (c+82,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
	vcdp->chgQuad (c+83,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string),48);
	vcdp->chgBit  (c+85,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick));
	vcdp->chgQuad (c+86,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string),48);
	__Vtemp286[0U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[0U];
	__Vtemp286[1U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[1U];
	__Vtemp286[2U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[2U];
	__Vtemp286[3U] = vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_[3U];
	vcdp->chgArray(c+88,(__Vtemp286),128);
	vcdp->chgBus  (c+92,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateNext),3);
	vcdp->chgArray(c+93,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg_string),80);
	vcdp->chgArray(c+96,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateNext_string),80);
	vcdp->chgQuad (c+99,(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_),64);
	vcdp->chgQuad (c+101,(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_),64);
	vcdp->chgQuad (c+103,((((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_42_[0U])))),64);
	vcdp->chgQuad (c+105,((((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_42_[0U])))),64);
	vcdp->chgQuad (c+107,((((QData)((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_42_[0U])))),64);
	vcdp->chgBus  (c+109,((IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_ 
				       >> 0x20U))),32);
	vcdp->chgBus  (c+110,((IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_ 
				       >> 0x20U))),32);
	vcdp->chgBus  (c+111,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_13___DOT___zz_2_),32);
	vcdp->chgBus  (c+112,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_14___DOT___zz_2_),32);
	vcdp->chgBus  (c+113,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT__karaMult_15___DOT___zz_2_),32);
	vcdp->chgBus  (c+114,((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_ 
						  >> 0x30U)))),16);
	vcdp->chgBus  (c+115,((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_ 
						  >> 0x30U)))),16);
	vcdp->chgBus  (c+116,((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_ 
						  >> 0x20U)))),16);
	vcdp->chgBus  (c+117,((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_ 
						  >> 0x20U)))),16);
	vcdp->chgBus  (c+118,((0xffffU & ((0x1ffffU 
					   & ((0x10000U 
					       & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_)
					       ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_)
					       : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_)) 
					  + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_5_ 
						   >> 0x10U))))),16);
	vcdp->chgBus  (c+119,((0xffffU & ((0x1ffffU 
					   & ((0x10000U 
					       & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_)
					       ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_)
					       : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_)) 
					  + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_13___DOT___zz_6_ 
						   >> 0x10U))))),16);
	vcdp->chgBus  (c+120,((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_)),32);
	vcdp->chgBus  (c+121,((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_)),32);
	vcdp->chgBus  (c+122,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_13___DOT___zz_2_),32);
	vcdp->chgBus  (c+123,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_14___DOT___zz_2_),32);
	vcdp->chgBus  (c+124,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT__karaMult_15___DOT___zz_2_),32);
	vcdp->chgBus  (c+125,((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_ 
						  >> 0x10U)))),16);
	vcdp->chgBus  (c+126,((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_ 
						  >> 0x10U)))),16);
	vcdp->chgBus  (c+127,((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_8_))),16);
	vcdp->chgBus  (c+128,((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT___zz_9_))),16);
	vcdp->chgBus  (c+129,((0xffffU & ((0x1ffffU 
					   & ((0x10000U 
					       & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_)
					       ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_)
					       : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_)) 
					  + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_5_ 
						   >> 0x10U))))),16);
	vcdp->chgBus  (c+130,((0xffffU & ((0x1ffffU 
					   & ((0x10000U 
					       & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_)
					       ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_)
					       : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_)) 
					  + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_14___DOT___zz_6_ 
						   >> 0x10U))))),16);
	vcdp->chgBus  (c+131,((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_)),32);
	vcdp->chgBus  (c+132,((IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_)),32);
	vcdp->chgBus  (c+133,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_13___DOT___zz_2_),32);
	vcdp->chgBus  (c+134,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_14___DOT___zz_2_),32);
	vcdp->chgBus  (c+135,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT__karaMult_15___DOT___zz_2_),32);
	vcdp->chgBus  (c+136,((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_ 
						  >> 0x10U)))),16);
	vcdp->chgBus  (c+137,((0xffffU & (IData)((vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_ 
						  >> 0x10U)))),16);
	vcdp->chgBus  (c+138,((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_))),16);
	vcdp->chgBus  (c+139,((0xffffU & (IData)(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_))),16);
	vcdp->chgBus  (c+140,((0xffffU & ((0x1ffffU 
					   & ((0x10000U 
					       & vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_)
					       ? (~ vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_)
					       : vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_)) 
					  + (1U & (vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_15___DOT___zz_5_ 
						   >> 0x10U))))),16);
	vcdp->chgBus  (c+141,((0xffffU & ((0x1ffffU 
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
	vcdp->chgBit  (c+142,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext));
	vcdp->chgBit  (c+143,(vlTOPp->UartMod__DOT__uartfsm__DOT__write_m2sPipe_rValid));
	vcdp->chgBus  (c+144,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_inCounter),6);
	vcdp->chgArray(c+145,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_buffer),272);
	vcdp->chgBus  (c+154,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outCounter),3);
	vcdp->chgQuad (c+155,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_outBuffer),64);
	vcdp->chgBus  (c+157,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmIn_stateReg),3);
	vcdp->chgBus  (c+158,(vlTOPp->UartMod__DOT__uartfsm__DOT__fsmOut_stateReg),2);
	vcdp->chgBus  (c+159,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value),3);
	vcdp->chgBit  (c+160,((7U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value))));
	vcdp->chgQuad (c+161,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_a),64);
	vcdp->chgQuad (c+163,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_b),64);
	vcdp->chgQuad (c+165,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mod_n),64);
	vcdp->chgArray(c+167,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mue),72);
	vcdp->chgBus  (c+170,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_k),8);
	vcdp->chgArray(c+171,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_mult),128);
	vcdp->chgArray(c+175,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_result_barret),128);
	vcdp->chgArray(c+179,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_2),128);
	vcdp->chgArray(c+183,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_3),128);
	vcdp->chgArray(c+187,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_temp_7),128);
	vcdp->chgArray(c+191,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_mask),128);
    }
}

void VUartMod::traceChgThis__6(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+195,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter),8);
	vcdp->chgBus  (c+196,(vlTOPp->UartMod__DOT__uartfsm__DOT__write_m2sPipe_rData),8);
	vcdp->chgBus  (c+197,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value),3);
	vcdp->chgBit  (c+198,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity));
	vcdp->chgBus  (c+199,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter),3);
    }
}

void VUartMod::traceChgThis__7(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+200,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg));
	vcdp->chgBus  (c+201,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter),20);
	vcdp->chgBit  (c+202,((0U == vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)));
	vcdp->chgBus  (c+203,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state),3);
	vcdp->chgBit  (c+204,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1));
	vcdp->chgBit  (c+205,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1));
	vcdp->chgBit  (c+206,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
	vcdp->chgBit  (c+207,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3));
	vcdp->chgBit  (c+208,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
	vcdp->chgBit  (c+209,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
	vcdp->chgBit  (c+210,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick));
	vcdp->chgBus  (c+211,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state),3);
	vcdp->chgBit  (c+212,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0));
	vcdp->chgBus  (c+213,(vlTOPp->UartMod__DOT__multmod_1___DOT__fsm_stateReg),3);
    }
}

void VUartMod::traceChgThis__8(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+214,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value),3);
	vcdp->chgBit  (c+215,(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity));
    }
}

void VUartMod::traceChgThis__9(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+216,(vlTOPp->io_uart_txd));
	vcdp->chgBit  (c+217,(vlTOPp->io_uart_rxd));
	vcdp->chgBit  (c+218,(vlTOPp->clk));
	vcdp->chgBit  (c+219,(vlTOPp->reset));
    }
}
