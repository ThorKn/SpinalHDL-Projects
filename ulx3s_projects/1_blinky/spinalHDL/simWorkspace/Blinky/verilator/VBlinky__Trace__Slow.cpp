// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlinky__Syms.h"


//======================

void VBlinky::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VBlinky::traceInit, &VBlinky::traceFull, &VBlinky::traceChg, this);
}
void VBlinky::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VBlinky* t=(VBlinky*)userthis;
    VBlinky__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VBlinky::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBlinky* t=(VBlinky*)userthis;
    VBlinky__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VBlinky::traceInitThis(VBlinky__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VBlinky::traceFullThis(VBlinky__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBlinky::traceInitThis__1(VBlinky__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+21,"io_led",-1);
	vcdp->declBit  (c+22,"clk",-1);
	vcdp->declBit  (c+23,"reset",-1);
	vcdp->declBit  (c+21,"Blinky io_led",-1);
	vcdp->declBit  (c+22,"Blinky clk",-1);
	vcdp->declBit  (c+23,"Blinky reset",-1);
	// Tracing: Blinky _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/1_blinky/spinalHDL/tmp/job_1/Blinky.v:16
	// Tracing: Blinky _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/1_blinky/spinalHDL/tmp/job_1/Blinky.v:17
	// Tracing: Blinky _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/1_blinky/spinalHDL/tmp/job_1/Blinky.v:18
	// Tracing: Blinky _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/1_blinky/spinalHDL/tmp/job_1/Blinky.v:19
	vcdp->declBit  (c+24,"Blinky fsm_wantExit",-1);
	vcdp->declBit  (c+1,"Blinky fsm_counter1_willIncrement",-1);
	vcdp->declBit  (c+2,"Blinky fsm_counter1_willClear",-1);
	vcdp->declBus  (c+3,"Blinky fsm_counter1_valueNext",-1,19,0);
	vcdp->declBus  (c+16,"Blinky fsm_counter1_value",-1,19,0);
	vcdp->declBit  (c+17,"Blinky fsm_counter1_willOverflowIfInc",-1);
	vcdp->declBit  (c+4,"Blinky fsm_counter1_willOverflow",-1);
	vcdp->declBit  (c+5,"Blinky fsm_counter2_willIncrement",-1);
	vcdp->declBit  (c+6,"Blinky fsm_counter2_willClear",-1);
	vcdp->declBus  (c+7,"Blinky fsm_counter2_valueNext",-1,19,0);
	vcdp->declBus  (c+18,"Blinky fsm_counter2_value",-1,19,0);
	vcdp->declBit  (c+19,"Blinky fsm_counter2_willOverflowIfInc",-1);
	vcdp->declBit  (c+8,"Blinky fsm_counter2_willOverflow",-1);
	vcdp->declBus  (c+20,"Blinky fsm_stateReg",-1,1,0);
	vcdp->declBus  (c+9,"Blinky fsm_stateNext",-1,1,0);
	vcdp->declArray(c+10,"Blinky fsm_stateReg_string",-1,79,0);
	vcdp->declArray(c+13,"Blinky fsm_stateNext_string",-1,79,0);
    }
}

void VBlinky::traceFullThis__1(VBlinky__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->Blinky__DOT__fsm_counter1_willIncrement));
	vcdp->fullBit  (c+2,(vlTOPp->Blinky__DOT__fsm_counter1_willClear));
	vcdp->fullBus  (c+3,(vlTOPp->Blinky__DOT__fsm_counter1_valueNext),20);
	vcdp->fullBit  (c+4,(vlTOPp->Blinky__DOT__fsm_counter1_willOverflow));
	vcdp->fullBit  (c+5,(vlTOPp->Blinky__DOT__fsm_counter2_willIncrement));
	vcdp->fullBit  (c+6,(vlTOPp->Blinky__DOT__fsm_counter2_willClear));
	vcdp->fullBus  (c+7,(vlTOPp->Blinky__DOT__fsm_counter2_valueNext),20);
	vcdp->fullBit  (c+8,(vlTOPp->Blinky__DOT__fsm_counter2_willOverflow));
	vcdp->fullBus  (c+9,(vlTOPp->Blinky__DOT__fsm_stateNext),2);
	vcdp->fullArray(c+10,(vlTOPp->Blinky__DOT__fsm_stateReg_string),80);
	vcdp->fullArray(c+13,(vlTOPp->Blinky__DOT__fsm_stateNext_string),80);
	vcdp->fullBus  (c+16,(vlTOPp->Blinky__DOT__fsm_counter1_value),20);
	vcdp->fullBit  (c+17,((0xf4240U == vlTOPp->Blinky__DOT__fsm_counter1_value)));
	vcdp->fullBus  (c+18,(vlTOPp->Blinky__DOT__fsm_counter2_value),20);
	vcdp->fullBit  (c+19,((0xf4240U == vlTOPp->Blinky__DOT__fsm_counter2_value)));
	vcdp->fullBus  (c+20,(vlTOPp->Blinky__DOT__fsm_stateReg),2);
	vcdp->fullBit  (c+21,(vlTOPp->io_led));
	vcdp->fullBit  (c+22,(vlTOPp->clk));
	vcdp->fullBit  (c+23,(vlTOPp->reset));
	vcdp->fullBit  (c+24,(0U));
    }
}
