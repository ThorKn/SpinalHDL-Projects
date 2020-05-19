// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlinky.h for the primary calling header

#include "VBlinky.h"           // For This
#include "VBlinky__Syms.h"


//--------------------


void VBlinky::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBlinky::eval\n"); );
    VBlinky__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VBlinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VBlinky::_eval_initial_loop(VBlinky__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VBlinky::_sequent__TOP__1(VBlinky__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlinky::_sequent__TOP__1\n"); );
    VBlinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/1_blinky/spinalHDL/tmp/job_1/Blinky.v:174
    if (vlTOPp->reset) {
	vlTOPp->Blinky__DOT__fsm_counter1_value = 0U;
	vlTOPp->Blinky__DOT__fsm_counter2_value = 0U;
	vlTOPp->Blinky__DOT__fsm_stateReg = 0U;
    } else {
	vlTOPp->Blinky__DOT__fsm_counter1_value = vlTOPp->Blinky__DOT__fsm_counter1_valueNext;
	vlTOPp->Blinky__DOT__fsm_counter2_value = vlTOPp->Blinky__DOT__fsm_counter2_valueNext;
	vlTOPp->Blinky__DOT__fsm_stateReg = vlTOPp->Blinky__DOT__fsm_stateNext;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/1_blinky/spinalHDL/tmp/job_1/Blinky.v:136
    vlTOPp->io_led = 0U;
    if ((1U != (IData)(vlTOPp->Blinky__DOT__fsm_stateReg))) {
	if ((2U == (IData)(vlTOPp->Blinky__DOT__fsm_stateReg))) {
	    vlTOPp->io_led = 1U;
	} else {
	    if ((3U == (IData)(vlTOPp->Blinky__DOT__fsm_stateReg))) {
		vlTOPp->io_led = 0U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/1_blinky/spinalHDL/tmp/job_1/Blinky.v:45
    vlTOPp->__Vtableidx1 = vlTOPp->Blinky__DOT__fsm_stateReg;
    vlTOPp->Blinky__DOT__fsm_stateReg_string[0U] = 
	vlTOPp->__Vtable1_Blinky__DOT__fsm_stateReg_string
	[vlTOPp->__Vtableidx1][0U];
    vlTOPp->Blinky__DOT__fsm_stateReg_string[1U] = 
	vlTOPp->__Vtable1_Blinky__DOT__fsm_stateReg_string
	[vlTOPp->__Vtableidx1][1U];
    vlTOPp->Blinky__DOT__fsm_stateReg_string[2U] = 
	vlTOPp->__Vtable1_Blinky__DOT__fsm_stateReg_string
	[vlTOPp->__Vtableidx1][2U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/1_blinky/spinalHDL/tmp/job_1/Blinky.v:66
    vlTOPp->Blinky__DOT__fsm_counter1_willIncrement = 0U;
    if ((1U != (IData)(vlTOPp->Blinky__DOT__fsm_stateReg))) {
	if ((2U == (IData)(vlTOPp->Blinky__DOT__fsm_stateReg))) {
	    vlTOPp->Blinky__DOT__fsm_counter1_willIncrement = 1U;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/1_blinky/spinalHDL/tmp/job_1/Blinky.v:101
    vlTOPp->Blinky__DOT__fsm_counter2_willIncrement = 0U;
    if ((1U != (IData)(vlTOPp->Blinky__DOT__fsm_stateReg))) {
	if ((2U != (IData)(vlTOPp->Blinky__DOT__fsm_stateReg))) {
	    if ((3U == (IData)(vlTOPp->Blinky__DOT__fsm_stateReg))) {
		vlTOPp->Blinky__DOT__fsm_counter2_willIncrement = 1U;
	    }
	}
    }
    vlTOPp->Blinky__DOT__fsm_counter1_willOverflow 
	= ((0xf4240U == vlTOPp->Blinky__DOT__fsm_counter1_value) 
	   & (IData)(vlTOPp->Blinky__DOT__fsm_counter1_willIncrement));
    vlTOPp->Blinky__DOT__fsm_counter2_willOverflow 
	= ((0xf4240U == vlTOPp->Blinky__DOT__fsm_counter2_value) 
	   & (IData)(vlTOPp->Blinky__DOT__fsm_counter2_willIncrement));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/1_blinky/spinalHDL/tmp/job_1/Blinky.v:152
    vlTOPp->Blinky__DOT__fsm_stateNext = vlTOPp->Blinky__DOT__fsm_stateReg;
    if ((1U == (IData)(vlTOPp->Blinky__DOT__fsm_stateReg))) {
	vlTOPp->Blinky__DOT__fsm_stateNext = 2U;
    } else {
	if ((2U == (IData)(vlTOPp->Blinky__DOT__fsm_stateReg))) {
	    if (vlTOPp->Blinky__DOT__fsm_counter1_willOverflow) {
		vlTOPp->Blinky__DOT__fsm_stateNext = 3U;
	    }
	} else {
	    if ((3U == (IData)(vlTOPp->Blinky__DOT__fsm_stateReg))) {
		if (vlTOPp->Blinky__DOT__fsm_counter2_willOverflow) {
		    vlTOPp->Blinky__DOT__fsm_stateNext = 1U;
		}
	    } else {
		vlTOPp->Blinky__DOT__fsm_stateNext = 1U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/1_blinky/spinalHDL/tmp/job_1/Blinky.v:54
    vlTOPp->__Vtableidx2 = vlTOPp->Blinky__DOT__fsm_stateNext;
    vlTOPp->Blinky__DOT__fsm_stateNext_string[0U] = 
	vlTOPp->__Vtable2_Blinky__DOT__fsm_stateNext_string
	[vlTOPp->__Vtableidx2][0U];
    vlTOPp->Blinky__DOT__fsm_stateNext_string[1U] = 
	vlTOPp->__Vtable2_Blinky__DOT__fsm_stateNext_string
	[vlTOPp->__Vtableidx2][1U];
    vlTOPp->Blinky__DOT__fsm_stateNext_string[2U] = 
	vlTOPp->__Vtable2_Blinky__DOT__fsm_stateNext_string
	[vlTOPp->__Vtableidx2][2U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/1_blinky/spinalHDL/tmp/job_1/Blinky.v:81
    vlTOPp->Blinky__DOT__fsm_counter1_willClear = 0U;
    if (((2U != (IData)(vlTOPp->Blinky__DOT__fsm_stateReg)) 
	 & (2U == (IData)(vlTOPp->Blinky__DOT__fsm_stateNext)))) {
	vlTOPp->Blinky__DOT__fsm_counter1_willClear = 1U;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/1_blinky/spinalHDL/tmp/job_1/Blinky.v:116
    vlTOPp->Blinky__DOT__fsm_counter2_willClear = 0U;
    if (((3U != (IData)(vlTOPp->Blinky__DOT__fsm_stateReg)) 
	 & (3U == (IData)(vlTOPp->Blinky__DOT__fsm_stateNext)))) {
	vlTOPp->Blinky__DOT__fsm_counter2_willClear = 1U;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/1_blinky/spinalHDL/tmp/job_1/Blinky.v:90
    vlTOPp->Blinky__DOT__fsm_counter1_valueNext = (0xfffffU 
						   & ((IData)(vlTOPp->Blinky__DOT__fsm_counter1_willOverflow)
						       ? 0U
						       : 
						      (vlTOPp->Blinky__DOT__fsm_counter1_value 
						       + (IData)(vlTOPp->Blinky__DOT__fsm_counter1_willIncrement))));
    if (vlTOPp->Blinky__DOT__fsm_counter1_willClear) {
	vlTOPp->Blinky__DOT__fsm_counter1_valueNext = 0U;
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/1_blinky/spinalHDL/tmp/job_1/Blinky.v:125
    vlTOPp->Blinky__DOT__fsm_counter2_valueNext = (0xfffffU 
						   & ((IData)(vlTOPp->Blinky__DOT__fsm_counter2_willOverflow)
						       ? 0U
						       : 
						      (vlTOPp->Blinky__DOT__fsm_counter2_value 
						       + (IData)(vlTOPp->Blinky__DOT__fsm_counter2_willIncrement))));
    if (vlTOPp->Blinky__DOT__fsm_counter2_willClear) {
	vlTOPp->Blinky__DOT__fsm_counter2_valueNext = 0U;
    }
}

void VBlinky::_eval(VBlinky__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlinky::_eval\n"); );
    VBlinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

VL_INLINE_OPT QData VBlinky::_change_request(VBlinky__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlinky::_change_request\n"); );
    VBlinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VBlinky::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlinky::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG
