// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUartLed__Syms.h"


//======================

void VUartLed::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VUartLed* t=(VUartLed*)userthis;
    VUartLed__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VUartLed::traceChgThis(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VUartLed::traceChgThis__2(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->UartLed__DOT__leddriver_1___05Fio_ledData));
	vcdp->chgBit  (c+2,(vlTOPp->UartLed__DOT__uartfsm__DOT__write_valid));
	vcdp->chgArray(c+3,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg_string),160);
	vcdp->chgArray(c+8,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg_string),160);
	vcdp->chgBit  (c+13,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_willIncrement));
	vcdp->chgBit  (c+14,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_willClear));
	vcdp->chgBus  (c+15,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_valueNext),6);
	vcdp->chgBit  (c+16,(((0x2fU == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_value)) 
			      & (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_willIncrement))));
	vcdp->chgBit  (c+17,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_willIncrement));
	vcdp->chgBit  (c+18,(((9U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_value)) 
			      & (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_willIncrement))));
	vcdp->chgBit  (c+19,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_willIncrement));
	vcdp->chgBit  (c+20,(((9U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_value)) 
			      & (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_willIncrement))));
	vcdp->chgArray(c+21,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg_string),136);
    }
}

void VUartLed::traceChgThis__3(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+26,((7U & ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
				    + (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)))),3);
    }
}

void VUartLed::traceChgThis__4(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+27,(vlTOPp->UartLed__DOT__uartfsm_io_toFnct_valid));
	vcdp->chgQuad (c+28,(vlTOPp->UartLed__DOT__uartfsm_io_toFnct_payload),48);
	vcdp->chgBit  (c+30,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready));
	vcdp->chgBit  (c+31,(vlTOPp->UartLed__DOT__uartfsm__DOT__write_ready));
	vcdp->chgBus  (c+32,(vlTOPp->UartLed__DOT__uartfsm__DOT__write_payload),8);
	vcdp->chgBus  (c+33,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateNext),3);
	vcdp->chgBus  (c+34,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateNext),2);
	vcdp->chgArray(c+35,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateNext_string),160);
	vcdp->chgArray(c+40,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateNext_string),160);
	vcdp->chgBit  (c+45,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
	vcdp->chgBit  (c+46,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow));
	vcdp->chgBit  (c+47,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
	vcdp->chgQuad (c+48,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string),48);
	vcdp->chgBit  (c+50,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick));
	vcdp->chgQuad (c+51,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string),48);
	vcdp->chgBit  (c+53,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_wantExit));
	vcdp->chgBit  (c+54,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_willClear));
	vcdp->chgBus  (c+55,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_valueNext),4);
	vcdp->chgBit  (c+56,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_willClear));
	vcdp->chgBus  (c+57,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_valueNext),4);
	vcdp->chgBus  (c+58,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateNext),2);
	vcdp->chgBus  (c+59,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateNext),3);
	vcdp->chgBus  (c+60,(((0U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateNext))
			       ? 0x626f6f74U : ((1U 
						 == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateNext))
						 ? 0x65312020U
						 : 
						((2U 
						  == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateNext))
						  ? 0x65322020U
						  : 0x3f3f3f3fU)))),32);
	vcdp->chgArray(c+61,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateNext_string),136);
    }
}

void VUartLed::traceChgThis__5(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+66,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext));
	vcdp->chgBit  (c+67,(vlTOPp->UartLed__DOT__leddriver_1___DOT__io_fromUart_m2sPipe_valid));
	vcdp->chgBit  (c+68,(vlTOPp->UartLed__DOT__uartfsm__DOT___zz_1_));
	vcdp->chgBus  (c+69,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_inCounter),3);
	vcdp->chgBus  (c+70,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_0),8);
	vcdp->chgBus  (c+71,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_1),8);
	vcdp->chgBus  (c+72,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_2),8);
	vcdp->chgBus  (c+73,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_3),8);
	vcdp->chgBus  (c+74,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_4),8);
	vcdp->chgBus  (c+75,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_5),8);
	vcdp->chgBus  (c+76,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_outCounter),3);
	vcdp->chgBus  (c+77,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg),3);
	vcdp->chgBus  (c+78,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg),2);
	vcdp->chgBus  (c+79,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value),3);
	vcdp->chgBit  (c+80,((7U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value))));
	vcdp->chgBus  (c+81,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_value),6);
	vcdp->chgBit  (c+82,((0x2fU == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_value))));
	vcdp->chgBus  (c+83,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_value),4);
	vcdp->chgBit  (c+84,((9U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_value))));
	vcdp->chgBus  (c+85,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_value),4);
	vcdp->chgBit  (c+86,((9U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_value))));
	vcdp->chgBus  (c+87,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg),2);
	vcdp->chgBus  (c+88,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg),3);
	vcdp->chgBus  (c+89,(((0U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg))
			       ? 0x626f6f74U : ((1U 
						 == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg))
						 ? 0x65312020U
						 : 
						((2U 
						  == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg))
						  ? 0x65322020U
						  : 0x3f3f3f3fU)))),32);
    }
}

void VUartLed::traceChgThis__6(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+90,(vlTOPp->UartLed__DOT__leddriver_1___DOT__io_fromUart_m2sPipe_payload),48);
	vcdp->chgBus  (c+92,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter),8);
	vcdp->chgBus  (c+93,(vlTOPp->UartLed__DOT__uartfsm__DOT___zz_2_),8);
	vcdp->chgBus  (c+94,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value),3);
	vcdp->chgBit  (c+95,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity));
	vcdp->chgBus  (c+96,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter),3);
	vcdp->chgQuad (c+97,(vlTOPp->UartLed__DOT__leddriver_1___DOT__buffer_1_),48);
    }
}

void VUartLed::traceChgThis__7(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+99,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg));
	vcdp->chgBus  (c+100,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter),20);
	vcdp->chgBit  (c+101,((0U == vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)));
	vcdp->chgBus  (c+102,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state),3);
	vcdp->chgBit  (c+103,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1));
	vcdp->chgBit  (c+104,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1));
	vcdp->chgBit  (c+105,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
	vcdp->chgBit  (c+106,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3));
	vcdp->chgBit  (c+107,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
	vcdp->chgBit  (c+108,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
	vcdp->chgBit  (c+109,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick));
	vcdp->chgBus  (c+110,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state),3);
	vcdp->chgBit  (c+111,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0));
    }
}

void VUartLed::traceChgThis__8(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+112,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value),3);
	vcdp->chgBit  (c+113,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity));
    }
}

void VUartLed::traceChgThis__9(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+114,(vlTOPp->io_uart_txd));
	vcdp->chgBit  (c+115,(vlTOPp->io_uart_rxd));
	vcdp->chgBit  (c+116,(vlTOPp->io_ledData));
	vcdp->chgBit  (c+117,(vlTOPp->clk));
	vcdp->chgBit  (c+118,(vlTOPp->reset));
    }
}
