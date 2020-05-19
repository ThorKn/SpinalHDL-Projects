// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VUartKaraReg_H_
#define _VUartKaraReg_H_

#include "verilated.h"

class VUartKaraReg__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VUartKaraReg) {
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
    VL_SIG8(UartKaraReg__DOT__uartfsm_io_toFnct_valid,0,0);
    VL_SIG8(UartKaraReg__DOT__karareg_1___05Fio_toUart_valid,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__write_valid,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__write_ready,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__write_payload,7,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__write_m2sPipe_rValid,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__write_m2sPipe_rData,7,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__fsmIn_inCounter,4,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__fsmOut_outCounter,4,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg,2,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext,2,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg,1,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext,1,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext,2,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value,2,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value,2,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state,2,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter,2,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value,2,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state,2,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter,7,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0,0,0);
    VL_SIG8(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1,0,0);
    VL_SIG8(UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg,1,0);
    VL_SIG8(UartKaraReg__DOT__karareg_1___DOT__fsm_stateNext,1,0);
    VL_SIG8(UartKaraReg__DOT__karareg_1___DOT___zz_1_,0,0);
    VL_SIG16(UartKaraReg__DOT__uartfsm__DOT___zz_5_,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___05Fio_bhl_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___05Fio_alh_int_out,8,0);
    VL_SIG16(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___05Fio_bhl_int_out,8,0);
    VL_SIGW(UartKaraReg__DOT__uartfsm_io_toFnct_payload,255,0,8);
    VL_SIGW(UartKaraReg__DOT__karareg_1___05Fio_toUart_payload,255,0,8);
    VL_SIGW(UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer,255,0,8);
    VL_SIGW(UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer,255,0,8);
    VL_SIGW(UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg_string,159,0,5);
    VL_SIGW(UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext_string,159,0,5);
    VL_SIGW(UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg_string,159,0,5);
    VL_SIGW(UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext_string,159,0,5);
    VL_SIG(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter,19,0);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__fsm_buffer,255,0,8);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__fsm_result,255,0,8);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg_string,79,0,3);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__fsm_stateNext_string,79,0,3);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_,64,0,3);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_,64,0,3);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_,64,0,3);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_,64,0,3);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_,129,0,5);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___05Fio_low,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___05Fio_low,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___05Fio_low,31,0);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_,65,0,3);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_,16,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_,16,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___05Fio_low,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___05Fio_low,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___05Fio_low,31,0);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_,65,0,3);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_,16,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_,16,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___05Fio_low,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___05Fio_low,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___05Fio_low,31,0);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_,65,0,3);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_,16,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_,16,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_,31,0);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_,129,0,5);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___05Fio_low,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___05Fio_low,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___05Fio_low,31,0);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_,65,0,3);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_,16,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_,16,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___05Fio_low,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___05Fio_low,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___05Fio_low,31,0);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_,65,0,3);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_,16,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_,16,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___05Fio_low,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___05Fio_low,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___05Fio_low,31,0);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_,65,0,3);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_,16,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_,16,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_,31,0);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_,129,0,5);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___05Fio_low,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___05Fio_low,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___05Fio_low,31,0);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_,65,0,3);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_,16,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_,16,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___05Fio_low,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___05Fio_low,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___05Fio_low,31,0);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_,65,0,3);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_,16,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_,16,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___05Fio_low,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___05Fio_low,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___05Fio_high,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___05Fio_mid,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___05Fio_low,31,0);
    VL_SIGW(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_,65,0,3);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_,16,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_,16,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_,31,0);
    VL_SIG(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_,31,0);
    VL_SIG64(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string,47,0);
    VL_SIG64(UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string,47,0);
    VL_SIG64(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_20_,32,0);
    VL_SIG64(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_26_,32,0);
    VL_SIG64(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_,32,0);
    VL_SIG64(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_,32,0);
    VL_SIG64(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_20_,32,0);
    VL_SIG64(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_26_,32,0);
    VL_SIG64(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_,32,0);
    VL_SIG64(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_,32,0);
    VL_SIG64(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_20_,32,0);
    VL_SIG64(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_26_,32,0);
    VL_SIG64(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_,32,0);
    VL_SIG64(UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_,32,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIGW(__Vtable1_UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg_string[8],159,0,5);
    static VL_ST_SIGW(__Vtable2_UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext_string[8],159,0,5);
    static VL_ST_SIGW(__Vtable3_UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg_string[4],159,0,5);
    static VL_ST_SIGW(__Vtable4_UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext_string[4],159,0,5);
    static VL_ST_SIG64(__Vtable5_UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string[8],47,0);
    static VL_ST_SIG8(__Vtable6_UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[32],0,0);
    static VL_ST_SIG64(__Vtable7_UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string[8],47,0);
    static VL_ST_SIGW(__Vtable8_UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg_string[4],79,0,3);
    static VL_ST_SIGW(__Vtable9_UartKaraReg__DOT__karareg_1___DOT__fsm_stateNext_string[4],79,0,3);
    VL_SIG8(__Vtableidx1,2,0);
    VL_SIG8(__Vtableidx2,2,0);
    VL_SIG8(__Vtableidx3,1,0);
    VL_SIG8(__Vtableidx4,1,0);
    VL_SIG8(__Vtableidx5,2,0);
    VL_SIG8(__Vtableidx6,4,0);
    VL_SIG8(__Vtableidx7,2,0);
    VL_SIG8(__Vtableidx8,1,0);
    VL_SIG8(__Vtableidx9,1,0);
    VL_SIG8(__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state,2,0);
    VL_SIG8(__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1,0,0);
    VL_SIG8(__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2,0,0);
    VL_SIG8(__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3,0,0);
    VL_SIG8(__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4,0,0);
    VL_SIG8(__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value,0,0);
    VL_SIG8(__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state,2,0);
    VL_SIG8(__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg,0,0);
    VL_SIG8(__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0,0,0);
    VL_SIG8(__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value,2,0);
    VL_SIG8(__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity,0,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    VL_SIG(__Vdly__UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter,19,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VUartKaraReg__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VUartKaraReg& operator= (const VUartKaraReg&);  ///< Copying not allowed
    VUartKaraReg(const VUartKaraReg&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VUartKaraReg(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VUartKaraReg();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VUartKaraReg__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VUartKaraReg__Syms* symsp, bool first);
  private:
    static QData _change_request(VUartKaraReg__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(VUartKaraReg__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VUartKaraReg__Syms* __restrict vlSymsp);
    static void _eval_settle(VUartKaraReg__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VUartKaraReg__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VUartKaraReg__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VUartKaraReg__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VUartKaraReg__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VUartKaraReg__Syms* __restrict vlSymsp);
    static void traceChgThis(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
