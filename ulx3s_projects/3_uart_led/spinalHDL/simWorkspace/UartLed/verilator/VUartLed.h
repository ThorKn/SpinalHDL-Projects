// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VUartLed_H_
#define _VUartLed_H_

#include "verilated.h"

class VUartLed__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VUartLed) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_uart_txd,0,0);
    VL_IN8(io_uart_rxd,0,0);
    VL_OUT8(io_ledData,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(UartLed__DOT__uartfsm_io_toFnct_valid,0,0);
    VL_SIG8(UartLed__DOT__leddriver_1___05Fio_ledData,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__write_valid,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__write_ready,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__write_payload,7,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT___zz_1_,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT___zz_2_,7,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__fsmIn_inCounter,2,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__fsmIn_buffer_0,7,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__fsmIn_buffer_1,7,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__fsmIn_buffer_2,7,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__fsmIn_buffer_3,7,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__fsmIn_buffer_4,7,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__fsmIn_buffer_5,7,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__fsmOut_outCounter,2,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__fsmIn_stateReg,2,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__fsmIn_stateNext,2,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT___zz_3_,7,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__fsmOut_stateReg,1,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__fsmOut_stateNext,1,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext,2,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value,2,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value,2,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state,2,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter,2,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value,2,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state,2,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter,7,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0,0,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1,0,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT__io_fromUart_m2sPipe_valid,0,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_willIncrement,0,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_willClear,0,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_valueNext,5,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_value,5,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT___zz_1_,0,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_wantExit,0,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_willIncrement,0,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_willClear,0,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_valueNext,3,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_value,3,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_willIncrement,0,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_willClear,0,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_valueNext,3,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_value,3,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg,1,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateNext,1,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT__ledOut_stateReg,2,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT__ledOut_stateNext,2,0);
    VL_SIGW(UartLed__DOT__uartfsm__DOT__fsmIn_stateReg_string,159,0,5);
    VL_SIGW(UartLed__DOT__uartfsm__DOT__fsmIn_stateNext_string,159,0,5);
    VL_SIGW(UartLed__DOT__uartfsm__DOT__fsmOut_stateReg_string,159,0,5);
    VL_SIGW(UartLed__DOT__uartfsm__DOT__fsmOut_stateNext_string,159,0,5);
    VL_SIG(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter,19,0);
    VL_SIGW(UartLed__DOT__leddriver_1___DOT__ledOut_stateReg_string,135,0,5);
    VL_SIGW(UartLed__DOT__leddriver_1___DOT__ledOut_stateNext_string,135,0,5);
    VL_SIG64(UartLed__DOT__uartfsm_io_toFnct_payload,47,0);
    VL_SIG64(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string,47,0);
    VL_SIG64(UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string,47,0);
    VL_SIG64(UartLed__DOT__leddriver_1___DOT__buffer_1_,47,0);
    VL_SIG64(UartLed__DOT__leddriver_1___DOT__io_fromUart_m2sPipe_payload,47,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIGW(__Vtable1_UartLed__DOT__uartfsm__DOT__fsmIn_stateReg_string[8],159,0,5);
    static VL_ST_SIGW(__Vtable2_UartLed__DOT__uartfsm__DOT__fsmIn_stateNext_string[8],159,0,5);
    static VL_ST_SIGW(__Vtable3_UartLed__DOT__uartfsm__DOT__fsmOut_stateReg_string[4],159,0,5);
    static VL_ST_SIGW(__Vtable4_UartLed__DOT__uartfsm__DOT__fsmOut_stateNext_string[4],159,0,5);
    static VL_ST_SIG8(__Vtable5_UartLed__DOT__uartfsm__DOT__fsmIn_stateNext[128],2,0);
    static VL_ST_SIG64(__Vtable6_UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string[8],47,0);
    static VL_ST_SIG8(__Vtable7_UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[32],0,0);
    static VL_ST_SIG64(__Vtable8_UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string[8],47,0);
    static VL_ST_SIGW(__Vtable9_UartLed__DOT__leddriver_1___DOT__ledOut_stateReg_string[8],135,0,5);
    static VL_ST_SIGW(__Vtable10_UartLed__DOT__leddriver_1___DOT__ledOut_stateNext_string[8],135,0,5);
    static VL_ST_SIG8(__Vtable11_UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_willClear[16],0,0);
    static VL_ST_SIG8(__Vtable12_UartLed__DOT__leddriver_1___05Fio_ledData[32],0,0);
    static VL_ST_SIG8(__Vtable13_UartLed__DOT__leddriver_1___DOT__ledOut_stateNext[64],2,0);
    VL_SIG8(UartLed__DOT__uartfsm__DOT____Vxrand1,7,0);
    VL_SIG8(UartLed__DOT__leddriver_1___DOT____Vxrand1,0,0);
    VL_SIG8(__Vtableidx1,2,0);
    VL_SIG8(__Vtableidx2,2,0);
    VL_SIG8(__Vtableidx3,1,0);
    VL_SIG8(__Vtableidx4,1,0);
    VL_SIG8(__Vtableidx5,6,0);
    VL_SIG8(__Vtableidx6,2,0);
    VL_SIG8(__Vtableidx7,4,0);
    VL_SIG8(__Vtableidx8,2,0);
    VL_SIG8(__Vtableidx9,2,0);
    VL_SIG8(__Vtableidx10,2,0);
    VL_SIG8(__Vtableidx11,3,0);
    VL_SIG8(__Vtableidx12,4,0);
    VL_SIG8(__Vtableidx13,5,0);
    VL_SIG8(__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state,2,0);
    VL_SIG8(__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1,0,0);
    VL_SIG8(__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2,0,0);
    VL_SIG8(__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3,0,0);
    VL_SIG8(__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4,0,0);
    VL_SIG8(__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value,0,0);
    VL_SIG8(__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state,2,0);
    VL_SIG8(__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg,0,0);
    VL_SIG8(__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0,0,0);
    VL_SIG8(__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value,2,0);
    VL_SIG8(__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity,0,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    VL_SIG(__Vdly__UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter,19,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VUartLed__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VUartLed& operator= (const VUartLed&);  ///< Copying not allowed
    VUartLed(const VUartLed&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VUartLed(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VUartLed();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VUartLed__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VUartLed__Syms* symsp, bool first);
  private:
    static QData _change_request(VUartLed__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(VUartLed__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VUartLed__Syms* __restrict vlSymsp);
    static void _eval_settle(VUartLed__Syms* __restrict vlSymsp);
    static void _initial__TOP__1(VUartLed__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VUartLed__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VUartLed__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VUartLed__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VUartLed__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(VUartLed__Syms* __restrict vlSymsp);
    static void traceChgThis(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
