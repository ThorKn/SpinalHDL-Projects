// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VUartMultFlex_H_
#define _VUartMultFlex_H_

#include "verilated.h"
class VUartMultFlex__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VUartMultFlex) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_uart_txd,0,0);
    VL_IN8(io_uart_rxd,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__uartfsm_io_toFnct_valid,0,0);
    VL_SIG8(v__DOT__mult_1___05Fio_toUart_valid,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT___zz_7_,6,0);
    VL_SIG8(v__DOT__uartfsm__DOT__write_valid,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__write_ready,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__write_payload,7,0);
    VL_SIG8(v__DOT__uartfsm__DOT___zz_1_,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT___zz_2_,7,0);
    VL_SIG8(v__DOT__uartfsm__DOT__fsmIn_inCounter,2,0);
    VL_SIG8(v__DOT__uartfsm__DOT__fsmOut_outCounter,2,0);
    VL_SIG8(v__DOT__uartfsm__DOT__fsmIn_stateReg,2,0);
    VL_SIG8(v__DOT__uartfsm__DOT__fsmIn_stateNext,2,0);
    VL_SIG8(v__DOT__uartfsm__DOT__fsmOut_stateReg,1,0);
    VL_SIG8(v__DOT__uartfsm__DOT__fsmOut_stateNext,1,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext,2,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value,2,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value,2,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state,2,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter,2,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value,2,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state,2,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter,7,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0,0,0);
    VL_SIG8(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1,0,0);
    VL_SIG8(v__DOT__mult_1___DOT__fsm_stateReg,1,0);
    VL_SIG8(v__DOT__mult_1___DOT__fsm_stateNext,1,0);
    VL_SIG8(v__DOT__mult_1___DOT___zz_1_,0,0);
    //char	__VpadToAlign58[6];
    VL_SIGW(v__DOT__uartfsm__DOT__fsmIn_stateReg_string,159,0,5);
    //char	__VpadToAlign84[4];
    VL_SIGW(v__DOT__uartfsm__DOT__fsmIn_stateNext_string,159,0,5);
    //char	__VpadToAlign108[4];
    VL_SIGW(v__DOT__uartfsm__DOT__fsmOut_stateReg_string,159,0,5);
    //char	__VpadToAlign132[4];
    VL_SIGW(v__DOT__uartfsm__DOT__fsmOut_stateNext_string,159,0,5);
    VL_SIG(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter,19,0);
    VL_SIGW(v__DOT__mult_1___DOT__fsm_stateReg_string,79,0,3);
    //char	__VpadToAlign172[4];
    VL_SIGW(v__DOT__mult_1___DOT__fsm_stateNext_string,79,0,3);
    //char	__VpadToAlign188[4];
    VL_SIG64(v__DOT__uartfsm_io_toFnct_payload,47,0);
    VL_SIG64(v__DOT__mult_1___05Fio_toUart_payload,47,0);
    VL_SIG64(v__DOT__uartfsm__DOT__fsmIn_buffer,47,0);
    VL_SIG64(v__DOT__uartfsm__DOT__fsmOut_outBuffer,47,0);
    VL_SIG64(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string,47,0);
    VL_SIG64(v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string,47,0);
    VL_SIG64(v__DOT__mult_1___DOT__fsm_buffer,47,0);
    VL_SIG64(v__DOT__mult_1___DOT__fsm_result,47,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIGW(__Vtable1_v__DOT__uartfsm__DOT__fsmIn_stateReg_string[8],159,0,5);
    static VL_ST_SIGW(__Vtable2_v__DOT__uartfsm__DOT__fsmIn_stateNext_string[8],159,0,5);
    static VL_ST_SIGW(__Vtable3_v__DOT__uartfsm__DOT__fsmOut_stateReg_string[4],159,0,5);
    static VL_ST_SIGW(__Vtable4_v__DOT__uartfsm__DOT__fsmOut_stateNext_string[4],159,0,5);
    static VL_ST_SIG8(__Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[128],2,0);
    static VL_ST_SIG64(__Vtable6_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string[8],47,0);
    static VL_ST_SIG8(__Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[32],0,0);
    static VL_ST_SIG64(__Vtable8_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string[8],47,0);
    static VL_ST_SIGW(__Vtable9_v__DOT__mult_1___DOT__fsm_stateReg_string[4],79,0,3);
    static VL_ST_SIGW(__Vtable10_v__DOT__mult_1___DOT__fsm_stateNext_string[4],79,0,3);
    VL_SIG8(v__DOT__uartfsm__DOT____Vxrand1,7,0);
    VL_SIG8(v__DOT__uartfsm__DOT____Vlvbound2,7,0);
    VL_SIG8(__Vtableidx1,2,0);
    VL_SIG8(__Vtableidx2,2,0);
    VL_SIG8(__Vtableidx3,1,0);
    VL_SIG8(__Vtableidx4,1,0);
    VL_SIG8(__Vtableidx5,6,0);
    VL_SIG8(__Vtableidx6,2,0);
    VL_SIG8(__Vtableidx7,4,0);
    VL_SIG8(__Vtableidx8,2,0);
    VL_SIG8(__Vtableidx9,1,0);
    VL_SIG8(__Vtableidx10,1,0);
    VL_SIG8(__Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state,2,0);
    VL_SIG8(__Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1,0,0);
    VL_SIG8(__Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2,0,0);
    VL_SIG8(__Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3,0,0);
    VL_SIG8(__Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4,0,0);
    VL_SIG8(__Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value,0,0);
    VL_SIG8(__Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state,2,0);
    VL_SIG8(__Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0,0,0);
    VL_SIG8(__Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value,2,0);
    VL_SIG8(__Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity,0,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    VL_SIG(__Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter,19,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VUartMultFlex__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VUartMultFlex& operator= (const VUartMultFlex&);	///< Copying not allowed
    VUartMultFlex(const VUartMultFlex&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VUartMultFlex(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VUartMultFlex();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VUartMultFlex__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VUartMultFlex__Syms* symsp, bool first);
  private:
    static QData	_change_request(VUartMultFlex__Syms* __restrict vlSymsp);
  public:
    static void	_eval(VUartMultFlex__Syms* __restrict vlSymsp);
    static void	_eval_initial(VUartMultFlex__Syms* __restrict vlSymsp);
    static void	_eval_settle(VUartMultFlex__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(VUartMultFlex__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__10(VUartMultFlex__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__12(VUartMultFlex__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(VUartMultFlex__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(VUartMultFlex__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(VUartMultFlex__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(VUartMultFlex__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(VUartMultFlex__Syms* __restrict vlSymsp);
    static void	_settle__TOP__11(VUartMultFlex__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(VUartMultFlex__Syms* __restrict vlSymsp);
    static void	_settle__TOP__6(VUartMultFlex__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(VUartMultFlex__Syms* __restrict vlSymsp);
    static void	traceChgThis(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__10(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__6(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__7(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__8(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__9(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
