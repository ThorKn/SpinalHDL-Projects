// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBlinky_H_
#define _VBlinky_H_

#include "verilated.h"

class VBlinky__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VBlinky) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_led,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(Blinky__DOT__fsm_counter1_willIncrement,0,0);
    VL_SIG8(Blinky__DOT__fsm_counter1_willClear,0,0);
    VL_SIG8(Blinky__DOT__fsm_counter1_willOverflow,0,0);
    VL_SIG8(Blinky__DOT__fsm_counter2_willIncrement,0,0);
    VL_SIG8(Blinky__DOT__fsm_counter2_willClear,0,0);
    VL_SIG8(Blinky__DOT__fsm_counter2_willOverflow,0,0);
    VL_SIG8(Blinky__DOT__fsm_stateReg,1,0);
    VL_SIG8(Blinky__DOT__fsm_stateNext,1,0);
    VL_SIG(Blinky__DOT__fsm_counter1_valueNext,19,0);
    VL_SIG(Blinky__DOT__fsm_counter1_value,19,0);
    VL_SIG(Blinky__DOT__fsm_counter2_valueNext,19,0);
    VL_SIG(Blinky__DOT__fsm_counter2_value,19,0);
    VL_SIGW(Blinky__DOT__fsm_stateReg_string,79,0,3);
    VL_SIGW(Blinky__DOT__fsm_stateNext_string,79,0,3);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIGW(__Vtable1_Blinky__DOT__fsm_stateReg_string[4],79,0,3);
    static VL_ST_SIGW(__Vtable2_Blinky__DOT__fsm_stateNext_string[4],79,0,3);
    VL_SIG8(__Vtableidx1,1,0);
    VL_SIG8(__Vtableidx2,1,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VBlinky__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VBlinky& operator= (const VBlinky&);  ///< Copying not allowed
    VBlinky(const VBlinky&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VBlinky(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VBlinky();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VBlinky__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VBlinky__Syms* symsp, bool first);
  private:
    static QData _change_request(VBlinky__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(VBlinky__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VBlinky__Syms* __restrict vlSymsp);
    static void _eval_settle(VBlinky__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VBlinky__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VBlinky__Syms* __restrict vlSymsp);
    static void traceChgThis(VBlinky__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VBlinky__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VBlinky__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VBlinky__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VBlinky__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VBlinky__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VBlinky__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VBlinky__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
