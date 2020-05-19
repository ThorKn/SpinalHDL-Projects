// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VClkDiv__Syms.h"


//======================

void VClkDiv::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VClkDiv::traceInit, &VClkDiv::traceFull, &VClkDiv::traceChg, this);
}
void VClkDiv::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VClkDiv* t=(VClkDiv*)userthis;
    VClkDiv__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VClkDiv::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VClkDiv* t=(VClkDiv*)userthis;
    VClkDiv__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VClkDiv::traceInitThis(VClkDiv__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VClkDiv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VClkDiv::traceFullThis(VClkDiv__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VClkDiv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VClkDiv::traceInitThis__1(VClkDiv__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VClkDiv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+4,"io_clk_out",-1);
	vcdp->declBit  (c+5,"clk",-1);
	vcdp->declBit  (c+6,"reset",-1);
	vcdp->declBit  (c+4,"ClkDiv io_clk_out",-1);
	vcdp->declBit  (c+5,"ClkDiv clk",-1);
	vcdp->declBit  (c+6,"ClkDiv reset",-1);
	// Tracing: ClkDiv _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/extra_clockdiv/spinalHDL/tmp/job_1/ClkDiv.v:10
	// Tracing: ClkDiv _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/extra_clockdiv/spinalHDL/tmp/job_1/ClkDiv.v:11
	vcdp->declBit  (c+7,"ClkDiv counter_willIncrement",-1);
	vcdp->declBit  (c+8,"ClkDiv counter_willClear",-1);
	vcdp->declBus  (c+1,"ClkDiv counter_valueNext",-1,2,0);
	vcdp->declBus  (c+2,"ClkDiv counter_value",-1,2,0);
	vcdp->declBit  (c+3,"ClkDiv counter_willOverflowIfInc",-1);
	vcdp->declBit  (c+3,"ClkDiv counter_willOverflow",-1);
	// Tracing: ClkDiv _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/extra_clockdiv/spinalHDL/tmp/job_1/ClkDiv.v:24
    }
}

void VClkDiv::traceFullThis__1(VClkDiv__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VClkDiv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,((7U & ((5U == (IData)(vlTOPp->ClkDiv__DOT__counter_value))
				     ? 1U : ((IData)(1U) 
					     + (IData)(vlTOPp->ClkDiv__DOT__counter_value))))),3);
	vcdp->fullBus  (c+2,(vlTOPp->ClkDiv__DOT__counter_value),3);
	vcdp->fullBit  (c+3,((5U == (IData)(vlTOPp->ClkDiv__DOT__counter_value))));
	vcdp->fullBit  (c+4,(vlTOPp->io_clk_out));
	vcdp->fullBit  (c+5,(vlTOPp->clk));
	vcdp->fullBit  (c+6,(vlTOPp->reset));
	vcdp->fullBit  (c+7,(1U));
	vcdp->fullBit  (c+8,(0U));
    }
}
