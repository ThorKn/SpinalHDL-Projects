// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUartFsmInOut__Syms.h"


//======================

void VUartFsmInOut::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VUartFsmInOut* t=(VUartFsmInOut*)userthis;
    VUartFsmInOut__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VUartFsmInOut::traceChgThis(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VUartFsmInOut::traceChgThis__2(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->UartFsmInOut__DOT__payloadValid));
	vcdp->chgBit  (c+2,(vlTOPp->UartFsmInOut__DOT__write_valid));
	vcdp->chgArray(c+3,(vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg_string),160);
	vcdp->chgArray(c+8,(vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg_string),160);
    }
}

void VUartFsmInOut::traceChgThis__3(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+13,((7U & ((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
				    + (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)))),3);
    }
}

void VUartFsmInOut::traceChgThis__4(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+14,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx_io_write_ready));
	vcdp->chgBit  (c+15,(vlTOPp->UartFsmInOut__DOT__write_ready));
	vcdp->chgBus  (c+16,(vlTOPp->UartFsmInOut__DOT__write_payload),8);
	vcdp->chgBus  (c+17,(vlTOPp->UartFsmInOut__DOT__fsmIn_stateNext),3);
	vcdp->chgBus  (c+18,(vlTOPp->UartFsmInOut__DOT__fsmOut_stateNext),2);
	vcdp->chgArray(c+19,(vlTOPp->UartFsmInOut__DOT__fsmIn_stateNext_string),160);
	vcdp->chgArray(c+24,(vlTOPp->UartFsmInOut__DOT__fsmOut_stateNext_string),160);
	vcdp->chgBit  (c+29,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
	vcdp->chgBit  (c+30,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow));
	vcdp->chgBit  (c+31,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
	vcdp->chgQuad (c+32,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string),48);
	vcdp->chgBit  (c+34,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick));
	vcdp->chgQuad (c+35,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string),48);
    }
}

void VUartFsmInOut::traceChgThis__5(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+37,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext));
	vcdp->chgBus  (c+38,(vlTOPp->UartFsmInOut__DOT__payload_0),8);
	vcdp->chgBus  (c+39,(vlTOPp->UartFsmInOut__DOT__payload_1),8);
	vcdp->chgBus  (c+40,(vlTOPp->UartFsmInOut__DOT__payload_2),8);
	vcdp->chgBus  (c+41,(vlTOPp->UartFsmInOut__DOT__payload_3),8);
	vcdp->chgBus  (c+42,(vlTOPp->UartFsmInOut__DOT__payload_4),8);
	vcdp->chgBus  (c+43,(vlTOPp->UartFsmInOut__DOT__payload_5),8);
	vcdp->chgBus  (c+44,(vlTOPp->UartFsmInOut__DOT__payload_6),8);
	vcdp->chgBus  (c+45,(vlTOPp->UartFsmInOut__DOT__payload_7),8);
	vcdp->chgBit  (c+46,(vlTOPp->UartFsmInOut__DOT___zz_1_));
	vcdp->chgBus  (c+47,(vlTOPp->UartFsmInOut__DOT__fsmIn_inCounter),3);
	vcdp->chgBus  (c+48,(vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_0),8);
	vcdp->chgBus  (c+49,(vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_1),8);
	vcdp->chgBus  (c+50,(vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_2),8);
	vcdp->chgBus  (c+51,(vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_3),8);
	vcdp->chgBus  (c+52,(vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_4),8);
	vcdp->chgBus  (c+53,(vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_5),8);
	vcdp->chgBus  (c+54,(vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_6),8);
	vcdp->chgBus  (c+55,(vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_7),8);
	vcdp->chgBus  (c+56,(vlTOPp->UartFsmInOut__DOT__fsmOut_outCounter),3);
	vcdp->chgBus  (c+57,(vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg),3);
	vcdp->chgBus  (c+58,(vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg),2);
	vcdp->chgBus  (c+59,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value),3);
	vcdp->chgBit  (c+60,((7U == (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value))));
    }
}

void VUartFsmInOut::traceChgThis__6(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+61,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter),8);
	vcdp->chgBus  (c+62,(vlTOPp->UartFsmInOut__DOT___zz_2_),8);
	vcdp->chgBus  (c+63,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value),3);
	vcdp->chgBit  (c+64,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity));
	vcdp->chgBus  (c+65,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter),3);
    }
}

void VUartFsmInOut::traceChgThis__7(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+66,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg));
	vcdp->chgBus  (c+67,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter),20);
	vcdp->chgBit  (c+68,((0U == vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter)));
	vcdp->chgBus  (c+69,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state),3);
	vcdp->chgBit  (c+70,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1));
	vcdp->chgBit  (c+71,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1));
	vcdp->chgBit  (c+72,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
	vcdp->chgBit  (c+73,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3));
	vcdp->chgBit  (c+74,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
	vcdp->chgBit  (c+75,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
	vcdp->chgBit  (c+76,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick));
	vcdp->chgBus  (c+77,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state),3);
	vcdp->chgBit  (c+78,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0));
    }
}

void VUartFsmInOut::traceChgThis__8(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+79,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value),3);
	vcdp->chgBit  (c+80,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity));
    }
}

void VUartFsmInOut::traceChgThis__9(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+81,(vlTOPp->io_uart_txd));
	vcdp->chgBit  (c+82,(vlTOPp->io_uart_rxd));
	vcdp->chgBit  (c+83,(vlTOPp->clk));
	vcdp->chgBit  (c+84,(vlTOPp->reset));
    }
}
