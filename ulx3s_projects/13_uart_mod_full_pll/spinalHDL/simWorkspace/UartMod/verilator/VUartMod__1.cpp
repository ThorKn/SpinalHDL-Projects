// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUartMod.h for the primary calling header

#include "VUartMod.h"          // For This
#include "VUartMod__Syms.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VUartMod::_sequent__TOP__5(VUartMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMod::_sequent__TOP__5\n"); );
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
	= vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
	= vlTOPp->__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value;
    vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_ 
	= (7U == (IData)(vlTOPp->UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value));
}

void VUartMod::_eval(VUartMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMod::_eval\n"); );
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VUartMod::_change_request(VUartMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMod::_change_request\n"); );
    VUartMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VUartMod::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUartMod::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((io_uart_rxd & 0xfeU))) {
	Verilated::overWidthError("io_uart_rxd");}
    if (VL_UNLIKELY((clkIsLocked & 0xfeU))) {
	Verilated::overWidthError("clkIsLocked");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG
