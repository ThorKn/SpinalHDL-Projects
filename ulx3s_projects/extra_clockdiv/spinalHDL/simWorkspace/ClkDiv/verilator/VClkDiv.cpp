// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VClkDiv.h for the primary calling header

#include "VClkDiv.h"           // For This
#include "VClkDiv__Syms.h"


//--------------------


void VClkDiv::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VClkDiv::eval\n"); );
    VClkDiv__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VClkDiv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VClkDiv::_eval_initial_loop(VClkDiv__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VClkDiv::_sequent__TOP__1(VClkDiv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClkDiv::_sequent__TOP__1\n"); );
    VClkDiv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/extra_clockdiv/spinalHDL/tmp/job_1/ClkDiv.v:50
    vlTOPp->ClkDiv__DOT__counter_value = ((IData)(vlTOPp->reset)
					   ? 1U : (IData)(vlTOPp->ClkDiv__DOT__counter_valueNext));
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

void VClkDiv::_eval(VClkDiv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClkDiv::_eval\n"); );
    VClkDiv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VClkDiv::_change_request(VClkDiv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClkDiv::_change_request\n"); );
    VClkDiv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VClkDiv::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClkDiv::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG
