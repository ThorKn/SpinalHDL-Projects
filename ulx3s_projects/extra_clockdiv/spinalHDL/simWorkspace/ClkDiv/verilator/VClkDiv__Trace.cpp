// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VClkDiv__Syms.h"


//======================

void VClkDiv::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VClkDiv* t=(VClkDiv*)userthis;
    VClkDiv__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VClkDiv::traceChgThis(VClkDiv__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VClkDiv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VClkDiv::traceChgThis__2(VClkDiv__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VClkDiv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,((7U & ((5U == (IData)(vlTOPp->ClkDiv__DOT__counter_value))
				    ? 1U : ((IData)(1U) 
					    + (IData)(vlTOPp->ClkDiv__DOT__counter_value))))),3);
	vcdp->chgBus  (c+2,(vlTOPp->ClkDiv__DOT__counter_value),3);
	vcdp->chgBit  (c+3,((5U == (IData)(vlTOPp->ClkDiv__DOT__counter_value))));
    }
}

void VClkDiv::traceChgThis__3(VClkDiv__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VClkDiv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+4,(vlTOPp->io_clk_out));
	vcdp->chgBit  (c+5,(vlTOPp->clk));
	vcdp->chgBit  (c+6,(vlTOPp->reset));
    }
}
