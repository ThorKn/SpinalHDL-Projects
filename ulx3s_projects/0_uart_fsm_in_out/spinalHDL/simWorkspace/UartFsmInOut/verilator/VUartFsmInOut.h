// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VUartFsmInOut_H_
#define _VUartFsmInOut_H_

#include "verilated.h"

class VUartFsmInOut__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VUartFsmInOut) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_uart_txd,0,0);
    VL_IN8(io_uart_rxd,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(UartFsmInOut__DOT__payload_0,7,0);
    VL_SIG8(UartFsmInOut__DOT__payload_1,7,0);
    VL_SIG8(UartFsmInOut__DOT__payload_2,7,0);
    VL_SIG8(UartFsmInOut__DOT__payload_3,7,0);
    VL_SIG8(UartFsmInOut__DOT__payload_4,7,0);
    VL_SIG8(UartFsmInOut__DOT__payload_5,7,0);
    VL_SIG8(UartFsmInOut__DOT__payload_6,7,0);
    VL_SIG8(UartFsmInOut__DOT__payload_7,7,0);
    VL_SIG8(UartFsmInOut__DOT__payloadValid,0,0);
    VL_SIG8(UartFsmInOut__DOT__write_valid,0,0);
    VL_SIG8(UartFsmInOut__DOT__write_ready,0,0);
    VL_SIG8(UartFsmInOut__DOT__write_payload,7,0);
    VL_SIG8(UartFsmInOut__DOT___zz_1_,0,0);
    VL_SIG8(UartFsmInOut__DOT___zz_2_,7,0);
    VL_SIG8(UartFsmInOut__DOT__fsmIn_inCounter,2,0);
    VL_SIG8(UartFsmInOut__DOT__fsmIn_buffer_0,7,0);
    VL_SIG8(UartFsmInOut__DOT__fsmIn_buffer_1,7,0);
    VL_SIG8(UartFsmInOut__DOT__fsmIn_buffer_2,7,0);
    VL_SIG8(UartFsmInOut__DOT__fsmIn_buffer_3,7,0);
    VL_SIG8(UartFsmInOut__DOT__fsmIn_buffer_4,7,0);
    VL_SIG8(UartFsmInOut__DOT__fsmIn_buffer_5,7,0);
    VL_SIG8(UartFsmInOut__DOT__fsmIn_buffer_6,7,0);
    VL_SIG8(UartFsmInOut__DOT__fsmIn_buffer_7,7,0);
    VL_SIG8(UartFsmInOut__DOT__fsmOut_outCounter,2,0);
    VL_SIG8(UartFsmInOut__DOT__fsmIn_stateReg,2,0);
    VL_SIG8(UartFsmInOut__DOT__fsmIn_stateNext,2,0);
    VL_SIG8(UartFsmInOut__DOT___zz_3_,7,0);
    VL_SIG8(UartFsmInOut__DOT__fsmOut_stateReg,1,0);
    VL_SIG8(UartFsmInOut__DOT__fsmOut_stateNext,1,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__tx_io_write_ready,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_tick,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext,2,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value,2,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value,2,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state,2,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter,2,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value,2,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state,2,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter,7,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0,0,0);
    VL_SIG8(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1,0,0);
    VL_SIGW(UartFsmInOut__DOT__fsmIn_stateReg_string,159,0,5);
    VL_SIGW(UartFsmInOut__DOT__fsmIn_stateNext_string,159,0,5);
    VL_SIGW(UartFsmInOut__DOT__fsmOut_stateReg_string,159,0,5);
    VL_SIGW(UartFsmInOut__DOT__fsmOut_stateNext_string,159,0,5);
    VL_SIG(UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter,19,0);
    VL_SIG64(UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string,47,0);
    VL_SIG64(UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string,47,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIGW(__Vtable1_UartFsmInOut__DOT__fsmIn_stateReg_string[8],159,0,5);
    static VL_ST_SIGW(__Vtable2_UartFsmInOut__DOT__fsmIn_stateNext_string[8],159,0,5);
    static VL_ST_SIGW(__Vtable3_UartFsmInOut__DOT__fsmOut_stateReg_string[4],159,0,5);
    static VL_ST_SIGW(__Vtable4_UartFsmInOut__DOT__fsmOut_stateNext_string[4],159,0,5);
    static VL_ST_SIG8(__Vtable5_UartFsmInOut__DOT__fsmIn_stateNext[128],2,0);
    static VL_ST_SIG64(__Vtable6_UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string[8],47,0);
    static VL_ST_SIG8(__Vtable7_UartFsmInOut__DOT__uartCtrl_1___DOT__tx_io_write_ready[32],0,0);
    static VL_ST_SIG64(__Vtable8_UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string[8],47,0);
    VL_SIG8(__Vtableidx1,2,0);
    VL_SIG8(__Vtableidx2,2,0);
    VL_SIG8(__Vtableidx3,1,0);
    VL_SIG8(__Vtableidx4,1,0);
    VL_SIG8(__Vtableidx5,6,0);
    VL_SIG8(__Vtableidx6,2,0);
    VL_SIG8(__Vtableidx7,4,0);
    VL_SIG8(__Vtableidx8,2,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state,2,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1,0,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2,0,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3,0,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4,0,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value,0,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state,2,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg,0,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0,0,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value,2,0);
    VL_SIG8(__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity,0,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    VL_SIG(__Vdly__UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter,19,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VUartFsmInOut__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VUartFsmInOut& operator= (const VUartFsmInOut&);  ///< Copying not allowed
    VUartFsmInOut(const VUartFsmInOut&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VUartFsmInOut(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VUartFsmInOut();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VUartFsmInOut__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VUartFsmInOut__Syms* symsp, bool first);
  private:
    static QData _change_request(VUartFsmInOut__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(VUartFsmInOut__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VUartFsmInOut__Syms* __restrict vlSymsp);
    static void _eval_settle(VUartFsmInOut__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VUartFsmInOut__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VUartFsmInOut__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VUartFsmInOut__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VUartFsmInOut__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VUartFsmInOut__Syms* __restrict vlSymsp);
    static void traceChgThis(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
