// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VClkDiv.h for the primary calling header

#include "VClkDiv.h"           // For This
#include "VClkDiv__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VClkDiv) {
    VClkDiv__Syms* __restrict vlSymsp = __VlSymsp = new VClkDiv__Syms(this, name());
    VClkDiv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VClkDiv::__Vconfigure(VClkDiv__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VClkDiv::~VClkDiv() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VClkDiv::_settle__TOP__2(VClkDiv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClkDiv::_settle__TOP__2\n"); );
    VClkDiv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/extra_clockdiv/spinalHDL/tmp/job_1/ClkDiv.v:27
    vlTOPp->io_clk_out = 0U;
    if ((5U == (IData)(vlTOPp->ClkDiv__DOT__counter_value))) {
	vlTOPp->io_clk_out = 1U;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/extra_clockdiv/spinalHDL/tmp/job_1/ClkDiv.v:39
    vlTOPp->ClkDiv__DOT__counter_valueNext = (7U & 
					      ((5U 
						== (IData)(vlTOPp->ClkDiv__DOT__counter_value))
					        ? 1U
					        : ((IData)(1U) 
						   + (IData)(vlTOPp->ClkDiv__DOT__counter_value))));
}

void VClkDiv::_eval_initial(VClkDiv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClkDiv::_eval_initial\n"); );
    VClkDiv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VClkDiv::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClkDiv::final\n"); );
    // Variables
    VClkDiv__Syms* __restrict vlSymsp = this->__VlSymsp;
    VClkDiv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VClkDiv::_eval_settle(VClkDiv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClkDiv::_eval_settle\n"); );
    VClkDiv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VClkDiv::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClkDiv::_ctor_var_reset\n"); );
    // Body
    io_clk_out = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    ClkDiv__DOT__counter_valueNext = VL_RAND_RESET_I(3);
    ClkDiv__DOT__counter_value = VL_RAND_RESET_I(3);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
