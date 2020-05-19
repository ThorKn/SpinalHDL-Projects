// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUartMultFlex__Syms.h"


//======================

void VUartMultFlex::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VUartMultFlex* t=(VUartMultFlex*)userthis;
    VUartMultFlex__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VUartMultFlex::traceChgThis(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VUartMultFlex::traceChgThis__2(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+6,(vlTOPp->v__DOT__uartfsm__DOT__write_valid));
	vcdp->chgArray(c+7,(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateReg_string),160);
	vcdp->chgArray(c+12,(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateReg_string),160);
	vcdp->chgBit  (c+1,(vlTOPp->v__DOT__uartfsm_io_toFnct_valid));
	vcdp->chgQuad (c+2,(vlTOPp->v__DOT__uartfsm_io_toFnct_payload),48);
	vcdp->chgQuad (c+4,(vlTOPp->v__DOT__mult_1___05Fio_toUart_payload),48);
	vcdp->chgArray(c+17,(vlTOPp->v__DOT__mult_1___DOT__fsm_stateReg_string),80);
    }
}

void VUartMultFlex::traceChgThis__3(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+20,((7U & ((IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
				    + (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)))),3);
    }
}

void VUartMultFlex::traceChgThis__4(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+22,(vlTOPp->v__DOT__uartfsm__DOT__write_payload),8);
	vcdp->chgBus  (c+23,(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateNext),3);
	vcdp->chgBit  (c+24,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
	vcdp->chgBit  (c+25,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
	vcdp->chgQuad (c+26,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string),48);
	vcdp->chgBit  (c+28,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick));
	vcdp->chgQuad (c+29,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string),48);
	vcdp->chgBit  (c+21,(vlTOPp->v__DOT__mult_1___05Fio_toUart_valid));
	vcdp->chgBus  (c+31,(vlTOPp->v__DOT__mult_1___DOT__fsm_stateNext),2);
	vcdp->chgArray(c+32,(vlTOPp->v__DOT__mult_1___DOT__fsm_stateNext_string),80);
    }
}

void VUartMultFlex::traceChgThis__5(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+36,(vlTOPp->v__DOT__uartfsm__DOT__write_ready));
	vcdp->chgBus  (c+37,(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateNext),2);
	vcdp->chgArray(c+38,(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateNext_string),160);
	vcdp->chgArray(c+43,(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateNext_string),160);
	vcdp->chgBit  (c+35,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready));
	vcdp->chgBit  (c+48,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow));
    }
}

void VUartMultFlex::traceChgThis__6(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+51,(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_inCounter),3);
	vcdp->chgQuad (c+52,(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_buffer),48);
	vcdp->chgBus  (c+54,(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_outCounter),3);
	vcdp->chgQuad (c+55,(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_outBuffer),48);
	vcdp->chgBus  (c+57,(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateReg),3);
	vcdp->chgBus  (c+58,(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateReg),2);
	vcdp->chgBit  (c+50,(vlTOPp->v__DOT__uartfsm__DOT___zz_1_));
	vcdp->chgBus  (c+59,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value),3);
	vcdp->chgBit  (c+60,((7U == (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value))));
	vcdp->chgBit  (c+49,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext));
	vcdp->chgQuad (c+61,(vlTOPp->v__DOT__mult_1___DOT__fsm_buffer),48);
	vcdp->chgQuad (c+63,(vlTOPp->v__DOT__mult_1___DOT__fsm_result),48);
	vcdp->chgBus  (c+65,(vlTOPp->v__DOT__mult_1___DOT__fsm_stateReg),2);
    }
}

void VUartMultFlex::traceChgThis__7(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+67,(vlTOPp->v__DOT__uartfsm__DOT___zz_2_),8);
	vcdp->chgBus  (c+68,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value),3);
	vcdp->chgBit  (c+69,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity));
	vcdp->chgBus  (c+70,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter),3);
	vcdp->chgBus  (c+66,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter),8);
    }
}

void VUartMultFlex::traceChgThis__8(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+72,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter),20);
	vcdp->chgBus  (c+74,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state),3);
	vcdp->chgBit  (c+73,((0U == vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)));
	vcdp->chgBit  (c+76,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1));
	vcdp->chgBit  (c+77,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
	vcdp->chgBit  (c+78,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3));
	vcdp->chgBit  (c+79,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
	vcdp->chgBit  (c+80,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
	vcdp->chgBit  (c+81,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick));
	vcdp->chgBus  (c+82,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state),3);
	vcdp->chgBit  (c+71,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg));
	vcdp->chgBit  (c+83,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0));
	vcdp->chgBit  (c+75,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1));
    }
}

void VUartMultFlex::traceChgThis__9(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+84,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value),3);
	vcdp->chgBit  (c+85,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity));
    }
}

void VUartMultFlex::traceChgThis__10(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+86,(vlTOPp->io_uart_txd));
	vcdp->chgBit  (c+87,(vlTOPp->io_uart_rxd));
	vcdp->chgBit  (c+88,(vlTOPp->clk));
	vcdp->chgBit  (c+89,(vlTOPp->reset));
    }
}
