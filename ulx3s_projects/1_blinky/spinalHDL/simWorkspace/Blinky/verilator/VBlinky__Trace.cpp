// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlinky__Syms.h"


//======================

void VBlinky::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBlinky* t=(VBlinky*)userthis;
    VBlinky__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VBlinky::traceChgThis(VBlinky__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBlinky::traceChgThis__2(VBlinky__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->Blinky__DOT__fsm_counter1_willIncrement));
	vcdp->chgBit  (c+2,(vlTOPp->Blinky__DOT__fsm_counter1_willClear));
	vcdp->chgBus  (c+3,(vlTOPp->Blinky__DOT__fsm_counter1_valueNext),20);
	vcdp->chgBit  (c+4,(vlTOPp->Blinky__DOT__fsm_counter1_willOverflow));
	vcdp->chgBit  (c+5,(vlTOPp->Blinky__DOT__fsm_counter2_willIncrement));
	vcdp->chgBit  (c+6,(vlTOPp->Blinky__DOT__fsm_counter2_willClear));
	vcdp->chgBus  (c+7,(vlTOPp->Blinky__DOT__fsm_counter2_valueNext),20);
	vcdp->chgBit  (c+8,(vlTOPp->Blinky__DOT__fsm_counter2_willOverflow));
	vcdp->chgBus  (c+9,(vlTOPp->Blinky__DOT__fsm_stateNext),2);
	vcdp->chgArray(c+10,(vlTOPp->Blinky__DOT__fsm_stateReg_string),80);
	vcdp->chgArray(c+13,(vlTOPp->Blinky__DOT__fsm_stateNext_string),80);
    }
}

void VBlinky::traceChgThis__3(VBlinky__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+16,(vlTOPp->Blinky__DOT__fsm_counter1_value),20);
	vcdp->chgBit  (c+17,((0xf4240U == vlTOPp->Blinky__DOT__fsm_counter1_value)));
	vcdp->chgBus  (c+18,(vlTOPp->Blinky__DOT__fsm_counter2_value),20);
	vcdp->chgBit  (c+19,((0xf4240U == vlTOPp->Blinky__DOT__fsm_counter2_value)));
	vcdp->chgBus  (c+20,(vlTOPp->Blinky__DOT__fsm_stateReg),2);
    }
}

void VBlinky::traceChgThis__4(VBlinky__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+21,(vlTOPp->io_led));
	vcdp->chgBit  (c+22,(vlTOPp->clk));
	vcdp->chgBit  (c+23,(vlTOPp->reset));
    }
}
