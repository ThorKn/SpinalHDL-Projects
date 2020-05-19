// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VUartMod_H_
#define _VUartMod_H_

#include "verilated.h"

class VUartMod__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VUartMod) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_uart_txd,0,0);
    VL_IN8(io_uart_rxd,0,0);
    VL_IN8(clkIsLocked,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(UartMod__DOT__uartfsm_io_toFnct_valid,0,0);
    VL_SIG8(UartMod__DOT__multmod_1___05Fio_toUart_valid,0,0);
    VL_SIG8(UartMod__DOT__multmod_1___05Fio_temp_corr_flag,2,0);
    VL_SIG8(UartMod__DOT__multmod_1___05Fio_temp_corr_flag_2,2,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__write_valid,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__write_ready,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__write_payload,7,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__write_m2sPipe_rValid,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__write_m2sPipe_rData,7,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__fsmIn_inCounter,6,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__fsmOut_outCounter,3,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__fsmIn_stateReg,2,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__fsmIn_stateNext,2,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__fsmOut_stateReg,1,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__fsmOut_stateNext,1,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext,2,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value,2,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value,2,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state,2,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter,2,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value,2,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state,2,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter,7,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0,0,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1,0,0);
    VL_SIG8(UartMod__DOT__multmod_1___DOT___zz_10_,0,0);
    VL_SIG8(UartMod__DOT__multmod_1___DOT___zz_11_,0,0);
    VL_SIG8(UartMod__DOT__multmod_1___DOT___zz_12_,0,0);
    VL_SIG8(UartMod__DOT__multmod_1___DOT___zz_13_,0,0);
    VL_SIG8(UartMod__DOT__multmod_1___DOT___zz_14_,0,0);
    VL_SIG8(UartMod__DOT__multmod_1___DOT___zz_26_,7,0);
    VL_SIG8(UartMod__DOT__multmod_1___DOT__fsm_k,7,0);
    VL_SIG8(UartMod__DOT__multmod_1___DOT___zz_1_,1,0);
    VL_SIG8(UartMod__DOT__multmod_1___DOT__fsm_stateReg,3,0);
    VL_SIG8(UartMod__DOT__multmod_1___DOT__fsm_stateNext,3,0);
    VL_SIG16(UartMod__DOT__uartfsm__DOT___zz_5_,10,0);
    VL_SIG16(UartMod__DOT__multmod_1___DOT___zz_22_,12,0);
    VL_SIGW(UartMod__DOT__uartfsm_io_toFnct_payload,527,0,17);
    VL_SIGW(UartMod__DOT__multmod_1___05Fio_toUart_payload,127,0,4);
    VL_SIGW(UartMod__DOT__multmod_1___05Fio_temp_1_out,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___05Fio_temp_2_out,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___05Fio_temp_2a_out,127,0,4);
    VL_SIGW(UartMod__DOT__multmod_1___05Fio_temp_2b_out,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___05Fio_temp_2c_out,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___05Fio_temp_3_out,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___05Fio_temp_4_out,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___05Fio_temp_5_out,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___05Fio_temp_6_out,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___05Fio_temp_7_out,255,0,8);
    VL_SIGW(UartMod__DOT__uartfsm__DOT__fsmIn_buffer,527,0,17);
    VL_SIGW(UartMod__DOT__uartfsm__DOT__fsmOut_outBuffer,127,0,4);
    VL_SIGW(UartMod__DOT__uartfsm__DOT__fsmIn_stateReg_string,159,0,5);
    VL_SIGW(UartMod__DOT__uartfsm__DOT__fsmIn_stateNext_string,159,0,5);
    VL_SIGW(UartMod__DOT__uartfsm__DOT__fsmOut_stateReg_string,159,0,5);
    VL_SIGW(UartMod__DOT__uartfsm__DOT__fsmOut_stateNext_string,159,0,5);
    VL_SIG(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter,19,0);
    VL_SIGW(UartMod__DOT__multmod_1___DOT___zz_8_,127,0,4);
    VL_SIGW(UartMod__DOT__multmod_1___DOT___zz_9_,127,0,4);
    VL_SIGW(UartMod__DOT__multmod_1___DOT___zz_17_,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___DOT___zz_21_,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___DOT___zz_28_,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___DOT___zz_32_,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___DOT___zz_37_,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___DOT___zz_42_,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___DOT___zz_47_,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_a,127,0,4);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_b,127,0,4);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mod_n,127,0,4);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mue,135,0,5);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_result_mult,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_result_barret,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_temp_2,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_temp_3,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_temp_7,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_temp_8,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mask,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___DOT___zz_2_,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___DOT___zz_6_,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___DOT___zz_7_,255,0,8);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_stateReg_string,79,0,3);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_stateNext_string,79,0,3);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_19_,64,0,3);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_25_,64,0,3);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_42_,257,0,9);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_5_,64,0,3);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT___zz_6_,64,0,3);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_42_,129,0,5);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_42_,65,0,3);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_,16,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_,16,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_,31,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_,31,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_,31,0);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_42_,65,0,3);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_,16,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_,16,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_,31,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_,31,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_,31,0);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_42_,65,0,3);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_,16,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_,16,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_,31,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_,31,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_,31,0);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_42_,129,0,5);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_42_,65,0,3);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_,16,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_,16,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_,31,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_,31,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_,31,0);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_42_,65,0,3);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_,16,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_,16,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_,31,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_,31,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_,31,0);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_42_,65,0,3);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_,16,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_,16,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_,31,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_,31,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_,31,0);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_42_,129,0,5);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_42_,65,0,3);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_,16,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_,16,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_,31,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_,31,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_,31,0);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_42_,65,0,3);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_,16,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_,16,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_,31,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_,31,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_,31,0);
    VL_SIGW(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_42_,65,0,3);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_,16,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_,16,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_,31,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_,31,0);
    VL_SIG(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_,31,0);
    VL_SIG64(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string,47,0);
    VL_SIG64(UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string,47,0);
    VL_SIG64(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_19_,32,0);
    VL_SIG64(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_25_,32,0);
    VL_SIG64(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_5_,32,0);
    VL_SIG64(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_40___DOT___zz_6_,32,0);
    VL_SIG64(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_19_,32,0);
    VL_SIG64(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_25_,32,0);
    VL_SIG64(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_5_,32,0);
    VL_SIG64(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_41___DOT___zz_6_,32,0);
    VL_SIG64(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_19_,32,0);
    VL_SIG64(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_25_,32,0);
    VL_SIG64(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_5_,32,0);
    VL_SIG64(UartMod__DOT__multmod_1___DOT__fsm_mult__DOT__karaMult_42___DOT___zz_6_,32,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIGW(__Vtable1_UartMod__DOT__uartfsm__DOT__fsmIn_stateReg_string[8],159,0,5);
    static VL_ST_SIGW(__Vtable2_UartMod__DOT__uartfsm__DOT__fsmIn_stateNext_string[8],159,0,5);
    static VL_ST_SIGW(__Vtable3_UartMod__DOT__uartfsm__DOT__fsmOut_stateReg_string[4],159,0,5);
    static VL_ST_SIGW(__Vtable4_UartMod__DOT__uartfsm__DOT__fsmOut_stateNext_string[4],159,0,5);
    static VL_ST_SIG64(__Vtable5_UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string[8],47,0);
    static VL_ST_SIG8(__Vtable6_UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[32],0,0);
    static VL_ST_SIG64(__Vtable7_UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string[8],47,0);
    static VL_ST_SIGW(__Vtable8_UartMod__DOT__multmod_1___DOT__fsm_stateReg_string[16],79,0,3);
    static VL_ST_SIGW(__Vtable9_UartMod__DOT__multmod_1___DOT__fsm_stateNext_string[16],79,0,3);
    static VL_ST_SIG8(__Vtable10_UartMod__DOT__multmod_1___05Fio_toUart_valid[16],0,0);
    static VL_ST_SIG8(__Vtable11_UartMod__DOT__multmod_1___05Fio_temp_corr_flag[32],2,0);
    static VL_ST_SIG8(__Vtable12_UartMod__DOT__multmod_1___05Fio_temp_corr_flag_2[256],2,0);
    static VL_ST_SIG8(__Vtable13_UartMod__DOT__multmod_1___DOT__fsm_stateNext[256],3,0);
    static VL_ST_SIG8(__Vtable14_UartMod__DOT__multmod_1___DOT___zz_1_[1024],1,0);
    VL_SIG8(UartMod__DOT__uartfsm__DOT____Vlvbound1,7,0);
    VL_SIG8(__Vtableidx1,2,0);
    VL_SIG8(__Vtableidx2,2,0);
    VL_SIG8(__Vtableidx3,1,0);
    VL_SIG8(__Vtableidx4,1,0);
    VL_SIG8(__Vtableidx5,2,0);
    VL_SIG8(__Vtableidx6,4,0);
    VL_SIG8(__Vtableidx7,2,0);
    VL_SIG8(__Vtableidx8,3,0);
    VL_SIG8(__Vtableidx9,3,0);
    VL_SIG8(__Vtableidx10,3,0);
    VL_SIG8(__Vtableidx11,4,0);
    VL_SIG8(__Vtableidx12,7,0);
    VL_SIG8(__Vtableidx13,7,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state,2,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1,0,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2,0,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3,0,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4,0,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value,0,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state,2,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg,0,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0,0,0);
    VL_SIG8(__Vdly__UartMod__DOT__multmod_1___DOT__fsm_stateReg,3,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value,2,0);
    VL_SIG8(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity,0,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    VL_SIG(__Vdly__UartMod__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter,19,0);
    VL_SIG(__Vm_traceActivity,31,0);
    VL_SIG8(__Vtablechg14[1024],0,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VUartMod__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VUartMod& operator= (const VUartMod&);  ///< Copying not allowed
    VUartMod(const VUartMod&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VUartMod(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VUartMod();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VUartMod__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VUartMod__Syms* symsp, bool first);
  private:
    static QData _change_request(VUartMod__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(VUartMod__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VUartMod__Syms* __restrict vlSymsp);
    static void _eval_settle(VUartMod__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VUartMod__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VUartMod__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VUartMod__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VUartMod__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VUartMod__Syms* __restrict vlSymsp);
    static void traceChgThis(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VUartMod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
