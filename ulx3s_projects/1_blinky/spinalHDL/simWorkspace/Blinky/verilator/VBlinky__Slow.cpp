// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlinky.h for the primary calling header

#include "VBlinky.h"           // For This
#include "VBlinky__Syms.h"


//--------------------
// STATIC VARIABLES

VL_ST_SIGW(VBlinky::__Vtable1_Blinky__DOT__fsm_stateReg_string[4],79,0,3);
VL_ST_SIGW(VBlinky::__Vtable2_Blinky__DOT__fsm_stateNext_string[4],79,0,3);

//--------------------

VL_CTOR_IMP(VBlinky) {
    VBlinky__Syms* __restrict vlSymsp = __VlSymsp = new VBlinky__Syms(this, name());
    VBlinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VBlinky::__Vconfigure(VBlinky__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VBlinky::~VBlinky() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VBlinky::_settle__TOP__2(VBlinky__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlinky::_settle__TOP__2\n"); );
    VBlinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void VBlinky::_eval_initial(VBlinky__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlinky::_eval_initial\n"); );
    VBlinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBlinky::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlinky::final\n"); );
    // Variables
    VBlinky__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBlinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBlinky::_eval_settle(VBlinky__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlinky::_eval_settle\n"); );
    VBlinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VBlinky::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlinky::_ctor_var_reset\n"); );
    // Body
    io_led = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    Blinky__DOT__fsm_counter1_willIncrement = VL_RAND_RESET_I(1);
    Blinky__DOT__fsm_counter1_willClear = VL_RAND_RESET_I(1);
    Blinky__DOT__fsm_counter1_valueNext = VL_RAND_RESET_I(20);
    Blinky__DOT__fsm_counter1_value = VL_RAND_RESET_I(20);
    Blinky__DOT__fsm_counter1_willOverflow = VL_RAND_RESET_I(1);
    Blinky__DOT__fsm_counter2_willIncrement = VL_RAND_RESET_I(1);
    Blinky__DOT__fsm_counter2_willClear = VL_RAND_RESET_I(1);
    Blinky__DOT__fsm_counter2_valueNext = VL_RAND_RESET_I(20);
    Blinky__DOT__fsm_counter2_value = VL_RAND_RESET_I(20);
    Blinky__DOT__fsm_counter2_willOverflow = VL_RAND_RESET_I(1);
    Blinky__DOT__fsm_stateReg = VL_RAND_RESET_I(2);
    Blinky__DOT__fsm_stateNext = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(80,Blinky__DOT__fsm_stateReg_string);
    VL_RAND_RESET_W(80,Blinky__DOT__fsm_stateNext_string);
    __Vtableidx1 = VL_RAND_RESET_I(2);
    VL_CONST_W_3X(80,__Vtable1_Blinky__DOT__fsm_stateReg_string[0],0x0000626f,0x6f742020,0x20202020);
    VL_CONST_W_3X(80,__Vtable1_Blinky__DOT__fsm_stateReg_string[1],0x00006673,0x6d5f7374,0x61746541);
    VL_CONST_W_3X(80,__Vtable1_Blinky__DOT__fsm_stateReg_string[2],0x00006673,0x6d5f7374,0x61746542);
    VL_CONST_W_3X(80,__Vtable1_Blinky__DOT__fsm_stateReg_string[3],0x00006673,0x6d5f7374,0x61746543);
    __Vtableidx2 = VL_RAND_RESET_I(2);
    VL_CONST_W_3X(80,__Vtable2_Blinky__DOT__fsm_stateNext_string[0],0x0000626f,0x6f742020,0x20202020);
    VL_CONST_W_3X(80,__Vtable2_Blinky__DOT__fsm_stateNext_string[1],0x00006673,0x6d5f7374,0x61746541);
    VL_CONST_W_3X(80,__Vtable2_Blinky__DOT__fsm_stateNext_string[2],0x00006673,0x6d5f7374,0x61746542);
    VL_CONST_W_3X(80,__Vtable2_Blinky__DOT__fsm_stateNext_string[3],0x00006673,0x6d5f7374,0x61746543);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
