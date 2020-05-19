// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUartMultFlex.h for the primary calling header

#include "VUartMultFlex.h"     // For This
#include "VUartMultFlex__Syms.h"

//--------------------
// STATIC VARIABLES

VL_ST_SIGW(VUartMultFlex::__Vtable1_v__DOT__uartfsm__DOT__fsmIn_stateReg_string[8],159,0,5);
VL_ST_SIGW(VUartMultFlex::__Vtable2_v__DOT__uartfsm__DOT__fsmIn_stateNext_string[8],159,0,5);
VL_ST_SIGW(VUartMultFlex::__Vtable3_v__DOT__uartfsm__DOT__fsmOut_stateReg_string[4],159,0,5);
VL_ST_SIGW(VUartMultFlex::__Vtable4_v__DOT__uartfsm__DOT__fsmOut_stateNext_string[4],159,0,5);
VL_ST_SIG8(VUartMultFlex::__Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[128],2,0);
VL_ST_SIG64(VUartMultFlex::__Vtable6_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string[8],47,0);
VL_ST_SIG8(VUartMultFlex::__Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[32],0,0);
VL_ST_SIG64(VUartMultFlex::__Vtable8_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string[8],47,0);
VL_ST_SIGW(VUartMultFlex::__Vtable9_v__DOT__mult_1___DOT__fsm_stateReg_string[4],79,0,3);
VL_ST_SIGW(VUartMultFlex::__Vtable10_v__DOT__mult_1___DOT__fsm_stateNext_string[4],79,0,3);

//--------------------

VL_CTOR_IMP(VUartMultFlex) {
    VUartMultFlex__Syms* __restrict vlSymsp = __VlSymsp = new VUartMultFlex__Syms(this, name());
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    io_uart_txd = VL_RAND_RESET_I(1);
    io_uart_rxd = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    v__DOT__uartfsm_io_toFnct_valid = VL_RAND_RESET_I(1);
    v__DOT__uartfsm_io_toFnct_payload = VL_RAND_RESET_Q(48);
    v__DOT__mult_1___05Fio_toUart_valid = VL_RAND_RESET_I(1);
    v__DOT__mult_1___05Fio_toUart_payload = VL_RAND_RESET_Q(48);
    v__DOT__uartfsm__DOT____Vxrand1 = VL_RAND_RESET_I(8);
    v__DOT__uartfsm__DOT___zz_7_ = VL_RAND_RESET_I(7);
    v__DOT__uartfsm__DOT__write_valid = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__write_ready = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__write_payload = VL_RAND_RESET_I(8);
    v__DOT__uartfsm__DOT___zz_1_ = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT___zz_2_ = VL_RAND_RESET_I(8);
    v__DOT__uartfsm__DOT__fsmIn_inCounter = VL_RAND_RESET_I(3);
    v__DOT__uartfsm__DOT__fsmIn_buffer = VL_RAND_RESET_Q(48);
    v__DOT__uartfsm__DOT__fsmOut_outCounter = VL_RAND_RESET_I(3);
    v__DOT__uartfsm__DOT__fsmOut_outBuffer = VL_RAND_RESET_Q(48);
    v__DOT__uartfsm__DOT__fsmIn_stateReg = VL_RAND_RESET_I(3);
    v__DOT__uartfsm__DOT__fsmIn_stateNext = VL_RAND_RESET_I(3);
    v__DOT__uartfsm__DOT__fsmOut_stateReg = VL_RAND_RESET_I(2);
    v__DOT__uartfsm__DOT__fsmOut_stateNext = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(160,v__DOT__uartfsm__DOT__fsmIn_stateReg_string);
    VL_RAND_RESET_W(160,v__DOT__uartfsm__DOT__fsmIn_stateNext_string);
    VL_RAND_RESET_W(160,v__DOT__uartfsm__DOT__fsmOut_stateReg_string);
    VL_RAND_RESET_W(160,v__DOT__uartfsm__DOT__fsmOut_stateNext_string);
    v__DOT__uartfsm__DOT____Vlvbound2 = VL_RAND_RESET_I(8);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter = VL_RAND_RESET_I(20);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_ = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext = VL_RAND_RESET_I(3);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value = VL_RAND_RESET_I(3);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = VL_RAND_RESET_I(3);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = VL_RAND_RESET_I(3);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string = VL_RAND_RESET_Q(48);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_ = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_ = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_ = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_ = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_ = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_ = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter = VL_RAND_RESET_I(3);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = VL_RAND_RESET_I(3);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = VL_RAND_RESET_I(3);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter = VL_RAND_RESET_I(8);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string = VL_RAND_RESET_Q(48);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0 = VL_RAND_RESET_I(1);
    v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1 = VL_RAND_RESET_I(1);
    v__DOT__mult_1___DOT__fsm_buffer = VL_RAND_RESET_Q(48);
    v__DOT__mult_1___DOT__fsm_result = VL_RAND_RESET_Q(48);
    v__DOT__mult_1___DOT__fsm_stateReg = VL_RAND_RESET_I(2);
    v__DOT__mult_1___DOT__fsm_stateNext = VL_RAND_RESET_I(2);
    v__DOT__mult_1___DOT___zz_1_ = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80,v__DOT__mult_1___DOT__fsm_stateReg_string);
    VL_RAND_RESET_W(80,v__DOT__mult_1___DOT__fsm_stateNext_string);
    __Vtableidx1 = VL_RAND_RESET_I(3);
    VL_CONST_W_5X(160,__Vtable1_v__DOT__uartfsm__DOT__fsmIn_stateReg_string[0],0x626f6f74,0x20202020,0x20202020,0x20202020,0x20202020);
    VL_CONST_W_5X(160,__Vtable1_v__DOT__uartfsm__DOT__fsmIn_stateReg_string[1],0x66736d49,0x6e5f696e,0x456e7472,0x79202020,0x20202020);
    VL_CONST_W_5X(160,__Vtable1_v__DOT__uartfsm__DOT__fsmIn_stateReg_string[2],0x66736d49,0x6e5f696e,0x52656164,0x42797465,0x20202020);
    VL_CONST_W_5X(160,__Vtable1_v__DOT__uartfsm__DOT__fsmIn_stateReg_string[3],0x66736d49,0x6e5f696e,0x496e6343,0x6f756e74,0x65722020);
    VL_CONST_W_5X(160,__Vtable1_v__DOT__uartfsm__DOT__fsmIn_stateReg_string[4],0x66736d49,0x6e5f696e,0x42756654,0x6f506179,0x6c6f6164);
    VL_CONST_W_5X(160,__Vtable1_v__DOT__uartfsm__DOT__fsmIn_stateReg_string[5],0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f);
    VL_CONST_W_5X(160,__Vtable1_v__DOT__uartfsm__DOT__fsmIn_stateReg_string[6],0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f);
    VL_CONST_W_5X(160,__Vtable1_v__DOT__uartfsm__DOT__fsmIn_stateReg_string[7],0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f);
    __Vtableidx2 = VL_RAND_RESET_I(3);
    VL_CONST_W_5X(160,__Vtable2_v__DOT__uartfsm__DOT__fsmIn_stateNext_string[0],0x626f6f74,0x20202020,0x20202020,0x20202020,0x20202020);
    VL_CONST_W_5X(160,__Vtable2_v__DOT__uartfsm__DOT__fsmIn_stateNext_string[1],0x66736d49,0x6e5f696e,0x456e7472,0x79202020,0x20202020);
    VL_CONST_W_5X(160,__Vtable2_v__DOT__uartfsm__DOT__fsmIn_stateNext_string[2],0x66736d49,0x6e5f696e,0x52656164,0x42797465,0x20202020);
    VL_CONST_W_5X(160,__Vtable2_v__DOT__uartfsm__DOT__fsmIn_stateNext_string[3],0x66736d49,0x6e5f696e,0x496e6343,0x6f756e74,0x65722020);
    VL_CONST_W_5X(160,__Vtable2_v__DOT__uartfsm__DOT__fsmIn_stateNext_string[4],0x66736d49,0x6e5f696e,0x42756654,0x6f506179,0x6c6f6164);
    VL_CONST_W_5X(160,__Vtable2_v__DOT__uartfsm__DOT__fsmIn_stateNext_string[5],0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f);
    VL_CONST_W_5X(160,__Vtable2_v__DOT__uartfsm__DOT__fsmIn_stateNext_string[6],0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f);
    VL_CONST_W_5X(160,__Vtable2_v__DOT__uartfsm__DOT__fsmIn_stateNext_string[7],0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f,0x3f3f3f3f);
    __Vtableidx3 = VL_RAND_RESET_I(2);
    VL_CONST_W_5X(160,__Vtable3_v__DOT__uartfsm__DOT__fsmOut_stateReg_string[0],0x626f6f74,0x20202020,0x20202020,0x20202020,0x20202020);
    VL_CONST_W_5X(160,__Vtable3_v__DOT__uartfsm__DOT__fsmOut_stateReg_string[1],0x66736d4f,0x75745f6f,0x7574456e,0x74727920,0x20202020);
    VL_CONST_W_5X(160,__Vtable3_v__DOT__uartfsm__DOT__fsmOut_stateReg_string[2],0x66736d4f,0x75745f6f,0x75745772,0x69746542,0x79746520);
    VL_CONST_W_5X(160,__Vtable3_v__DOT__uartfsm__DOT__fsmOut_stateReg_string[3],0x66736d4f,0x75745f6f,0x7574496e,0x63436f75,0x6e746572);
    __Vtableidx4 = VL_RAND_RESET_I(2);
    VL_CONST_W_5X(160,__Vtable4_v__DOT__uartfsm__DOT__fsmOut_stateNext_string[0],0x626f6f74,0x20202020,0x20202020,0x20202020,0x20202020);
    VL_CONST_W_5X(160,__Vtable4_v__DOT__uartfsm__DOT__fsmOut_stateNext_string[1],0x66736d4f,0x75745f6f,0x7574456e,0x74727920,0x20202020);
    VL_CONST_W_5X(160,__Vtable4_v__DOT__uartfsm__DOT__fsmOut_stateNext_string[2],0x66736d4f,0x75745f6f,0x75745772,0x69746542,0x79746520);
    VL_CONST_W_5X(160,__Vtable4_v__DOT__uartfsm__DOT__fsmOut_stateNext_string[3],0x66736d4f,0x75745f6f,0x7574496e,0x63436f75,0x6e746572);
    __Vtableidx5 = VL_RAND_RESET_I(7);
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[0] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[1] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[2] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[3] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[4] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[5] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[6] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[7] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[8] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[9] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[10] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[11] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[12] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[13] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[14] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[15] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[16] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[17] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[18] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[19] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[20] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[21] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[22] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[23] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[24] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[25] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[26] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[27] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[28] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[29] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[30] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[31] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[32] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[33] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[34] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[35] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[36] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[37] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[38] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[39] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[40] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[41] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[42] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[43] = 4U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[44] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[45] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[46] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[47] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[48] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[49] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[50] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[51] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[52] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[53] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[54] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[55] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[56] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[57] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[58] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[59] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[60] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[61] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[62] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[63] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[64] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[65] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[66] = 3U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[67] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[68] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[69] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[70] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[71] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[72] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[73] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[74] = 3U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[75] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[76] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[77] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[78] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[79] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[80] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[81] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[82] = 3U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[83] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[84] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[85] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[86] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[87] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[88] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[89] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[90] = 3U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[91] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[92] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[93] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[94] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[95] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[96] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[97] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[98] = 3U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[99] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[100] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[101] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[102] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[103] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[104] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[105] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[106] = 3U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[107] = 4U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[108] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[109] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[110] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[111] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[112] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[113] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[114] = 3U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[115] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[116] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[117] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[118] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[119] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[120] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[121] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[122] = 3U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[123] = 2U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[124] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[125] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[126] = 1U;
    __Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext[127] = 1U;
    __Vtableidx6 = VL_RAND_RESET_I(3);
    __Vtable6_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string[0] = VL_ULL(0x49444c452020);
    __Vtable6_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string[1] = VL_ULL(0x535441525420);
    __Vtable6_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string[2] = VL_ULL(0x444154412020);
    __Vtable6_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string[3] = VL_ULL(0x504152495459);
    __Vtable6_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string[4] = VL_ULL(0x53544f502020);
    __Vtable6_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string[5] = VL_ULL(0x3f3f3f3f3f3f);
    __Vtable6_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string[6] = VL_ULL(0x3f3f3f3f3f3f);
    __Vtable6_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string[7] = VL_ULL(0x3f3f3f3f3f3f);
    __Vtableidx7 = VL_RAND_RESET_I(5);
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[0] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[1] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[2] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[3] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[4] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[5] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[6] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[7] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[8] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[9] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[10] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[11] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[12] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[13] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[14] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[15] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[16] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[17] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[18] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[19] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[20] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[21] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[22] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[23] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[24] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[25] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[26] = 1U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[27] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[28] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[29] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[30] = 0U;
    __Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready[31] = 0U;
    __Vtableidx8 = VL_RAND_RESET_I(3);
    __Vtable8_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string[0] = VL_ULL(0x49444c452020);
    __Vtable8_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string[1] = VL_ULL(0x535441525420);
    __Vtable8_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string[2] = VL_ULL(0x444154412020);
    __Vtable8_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string[3] = VL_ULL(0x504152495459);
    __Vtable8_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string[4] = VL_ULL(0x53544f502020);
    __Vtable8_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string[5] = VL_ULL(0x3f3f3f3f3f3f);
    __Vtable8_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string[6] = VL_ULL(0x3f3f3f3f3f3f);
    __Vtable8_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string[7] = VL_ULL(0x3f3f3f3f3f3f);
    __Vtableidx9 = VL_RAND_RESET_I(2);
    VL_CONST_W_3X(80,__Vtable9_v__DOT__mult_1___DOT__fsm_stateReg_string[0],0x0000626f,0x6f742020,0x20202020);
    VL_CONST_W_3X(80,__Vtable9_v__DOT__mult_1___DOT__fsm_stateReg_string[1],0x00006673,0x6d5f7374,0x61746541);
    VL_CONST_W_3X(80,__Vtable9_v__DOT__mult_1___DOT__fsm_stateReg_string[2],0x00006673,0x6d5f7374,0x61746542);
    VL_CONST_W_3X(80,__Vtable9_v__DOT__mult_1___DOT__fsm_stateReg_string[3],0x00006673,0x6d5f7374,0x61746543);
    __Vtableidx10 = VL_RAND_RESET_I(2);
    VL_CONST_W_3X(80,__Vtable10_v__DOT__mult_1___DOT__fsm_stateNext_string[0],0x0000626f,0x6f742020,0x20202020);
    VL_CONST_W_3X(80,__Vtable10_v__DOT__mult_1___DOT__fsm_stateNext_string[1],0x00006673,0x6d5f7374,0x61746541);
    VL_CONST_W_3X(80,__Vtable10_v__DOT__mult_1___DOT__fsm_stateNext_string[2],0x00006673,0x6d5f7374,0x61746542);
    VL_CONST_W_3X(80,__Vtable10_v__DOT__mult_1___DOT__fsm_stateNext_string[3],0x00006673,0x6d5f7374,0x61746543);
    __Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter = VL_RAND_RESET_I(20);
    __Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = VL_RAND_RESET_I(3);
    __Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = VL_RAND_RESET_I(3);
    __Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0 = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = VL_RAND_RESET_I(3);
    __Vdly__v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VUartMultFlex::__Vconfigure(VUartMultFlex__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VUartMultFlex::~VUartMultFlex() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VUartMultFlex::_initial__TOP__1(VUartMultFlex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUartMultFlex::_initial__TOP__1\n"); );
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:749
    vlTOPp->v__DOT__uartfsm__DOT____Vxrand1 = VL_RAND_RESET_I(8);
}

void VUartMultFlex::_settle__TOP__4(VUartMultFlex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUartMultFlex::_settle__TOP__4\n"); );
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:891
    vlTOPp->__Vtableidx9 = vlTOPp->v__DOT__mult_1___DOT__fsm_stateReg;
    vlTOPp->v__DOT__mult_1___DOT__fsm_stateReg_string[0U] 
	= vlTOPp->__Vtable9_v__DOT__mult_1___DOT__fsm_stateReg_string
	[vlTOPp->__Vtableidx9][0U];
    vlTOPp->v__DOT__mult_1___DOT__fsm_stateReg_string[1U] 
	= vlTOPp->__Vtable9_v__DOT__mult_1___DOT__fsm_stateReg_string
	[vlTOPp->__Vtableidx9][1U];
    vlTOPp->v__DOT__mult_1___DOT__fsm_stateReg_string[2U] 
	= vlTOPp->__Vtable9_v__DOT__mult_1___DOT__fsm_stateReg_string
	[vlTOPp->__Vtableidx9][2U];
    vlTOPp->io_uart_txd = vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:912
    vlTOPp->v__DOT__mult_1___05Fio_toUart_payload = VL_ULL(0);
    if ((1U != (IData)(vlTOPp->v__DOT__mult_1___DOT__fsm_stateReg))) {
	if ((2U != (IData)(vlTOPp->v__DOT__mult_1___DOT__fsm_stateReg))) {
	    if ((3U == (IData)(vlTOPp->v__DOT__mult_1___DOT__fsm_stateReg))) {
		vlTOPp->v__DOT__mult_1___05Fio_toUart_payload 
		    = vlTOPp->v__DOT__mult_1___DOT__fsm_result;
	    }
	}
    }
    vlTOPp->v__DOT__uartfsm__DOT___zz_7_ = (0x7fU & 
					    ((IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_inCounter) 
					     << 3U));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:693
    vlTOPp->v__DOT__uartfsm_io_toFnct_payload = VL_ULL(0);
    if ((4U & (IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateReg)))) {
		vlTOPp->v__DOT__uartfsm_io_toFnct_payload 
		    = vlTOPp->v__DOT__uartfsm__DOT__fsmIn_buffer;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:643
    vlTOPp->__Vtableidx1 = vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateReg;
    vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateReg_string[0U] 
	= vlTOPp->__Vtable1_v__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][0U];
    vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateReg_string[1U] 
	= vlTOPp->__Vtable1_v__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][1U];
    vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateReg_string[2U] 
	= vlTOPp->__Vtable1_v__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][2U];
    vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateReg_string[3U] 
	= vlTOPp->__Vtable1_v__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][3U];
    vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateReg_string[4U] 
	= vlTOPp->__Vtable1_v__DOT__uartfsm__DOT__fsmIn_stateReg_string
	[vlTOPp->__Vtableidx1][4U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:710
    vlTOPp->v__DOT__uartfsm_io_toFnct_valid = 0U;
    if ((4U & (IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateReg))) {
	if ((1U & (~ ((IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateReg) 
		      >> 1U)))) {
	    if ((1U & (~ (IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateReg)))) {
		vlTOPp->v__DOT__uartfsm_io_toFnct_valid = 1U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:663
    vlTOPp->__Vtableidx3 = vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateReg;
    vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateReg_string[0U] 
	= vlTOPp->__Vtable3_v__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][0U];
    vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateReg_string[1U] 
	= vlTOPp->__Vtable3_v__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][1U];
    vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateReg_string[2U] 
	= vlTOPp->__Vtable3_v__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][2U];
    vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateReg_string[3U] 
	= vlTOPp->__Vtable3_v__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][3U];
    vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateReg_string[4U] 
	= vlTOPp->__Vtable3_v__DOT__uartfsm__DOT__fsmOut_stateReg_string
	[vlTOPp->__Vtableidx3][4U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:728
    vlTOPp->v__DOT__uartfsm__DOT__write_valid = 0U;
    if ((1U != (IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    vlTOPp->v__DOT__uartfsm__DOT__write_valid = 1U;
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:743
    vlTOPp->v__DOT__uartfsm__DOT__write_payload = 0U;
    if ((1U != (IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if ((2U == (IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    vlTOPp->v__DOT__uartfsm__DOT__write_payload 
		= (0xffU & ((0x2fU >= (0x3fU & ((IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_outCounter) 
						<< 3U)))
			     ? (IData)((vlTOPp->v__DOT__uartfsm__DOT__fsmOut_outBuffer 
					>> (0x3fU & 
					    ((IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_outCounter) 
					     << 3U))))
			     : (IData)(vlTOPp->v__DOT__uartfsm__DOT____Vxrand1)));
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:927
    vlTOPp->v__DOT__mult_1___05Fio_toUart_valid = 0U;
    if ((1U != (IData)(vlTOPp->v__DOT__mult_1___DOT__fsm_stateReg))) {
	if ((2U != (IData)(vlTOPp->v__DOT__mult_1___DOT__fsm_stateReg))) {
	    if ((3U == (IData)(vlTOPp->v__DOT__mult_1___DOT__fsm_stateReg))) {
		vlTOPp->v__DOT__mult_1___05Fio_toUart_valid 
		    = vlTOPp->v__DOT__mult_1___DOT___zz_1_;
	    }
	}
    }
    vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT___zz_1_ 
	= (7U == (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:942
    vlTOPp->v__DOT__mult_1___DOT__fsm_stateNext = vlTOPp->v__DOT__mult_1___DOT__fsm_stateReg;
    if ((1U == (IData)(vlTOPp->v__DOT__mult_1___DOT__fsm_stateReg))) {
	if (vlTOPp->v__DOT__uartfsm_io_toFnct_valid) {
	    vlTOPp->v__DOT__mult_1___DOT__fsm_stateNext = 2U;
	}
    } else {
	vlTOPp->v__DOT__mult_1___DOT__fsm_stateNext 
	    = ((2U == (IData)(vlTOPp->v__DOT__mult_1___DOT__fsm_stateReg))
	        ? 3U : 1U);
    }
}

void VUartMultFlex::_settle__TOP__6(VUartMultFlex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUartMultFlex::_settle__TOP__6\n"); );
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:152
    vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd = 1U;
    if ((1U & (~ ((IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state) 
		  >> 2U)))) {
	if ((2U & (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
	    vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd 
		= (1U & ((1U & (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))
			  ? (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity)
			  : ((IData)(vlTOPp->v__DOT__uartfsm__DOT___zz_2_) 
			     >> (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))));
	} else {
	    if ((1U & (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
		vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd = 0U;
	    }
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:123
    vlTOPp->__Vtableidx6 = vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable6_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx6];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:900
    vlTOPp->__Vtableidx10 = vlTOPp->v__DOT__mult_1___DOT__fsm_stateNext;
    vlTOPp->v__DOT__mult_1___DOT__fsm_stateNext_string[0U] 
	= vlTOPp->__Vtable10_v__DOT__mult_1___DOT__fsm_stateNext_string
	[vlTOPp->__Vtableidx10][0U];
    vlTOPp->v__DOT__mult_1___DOT__fsm_stateNext_string[1U] 
	= vlTOPp->__Vtable10_v__DOT__mult_1___DOT__fsm_stateNext_string
	[vlTOPp->__Vtableidx10][1U];
    vlTOPp->v__DOT__mult_1___DOT__fsm_stateNext_string[2U] 
	= vlTOPp->__Vtable10_v__DOT__mult_1___DOT__fsm_stateNext_string
	[vlTOPp->__Vtableidx10][2U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:352
    vlTOPp->__Vtableidx8 = vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string 
	= vlTOPp->__Vtable8_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string
	[vlTOPp->__Vtableidx8];
    vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_2_ 
	= ((IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) 
	   & (~ (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:367
    vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 0U;
    if (vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
	if ((0U == (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter))) {
	    vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 1U;
	}
    }
    vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_9_ 
	= vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:758
    vlTOPp->__Vtableidx5 = (((IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) 
			     << 6U) | (((IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_inCounter) 
					<< 3U) | (IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateReg)));
    vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateNext = 
	vlTOPp->__Vtable5_v__DOT__uartfsm__DOT__fsmIn_stateNext
	[vlTOPp->__Vtableidx5];
    vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_tick 
	= (0U == vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter);
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:135
    vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 0U;
    if ((0U == vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
	vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 1U;
    }
    vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_8_ 
	= ((IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
	   & (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
    vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_7_ 
	= (((IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
	    & (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
	   & (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
    vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_6_ 
	= ((((((IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
	       & (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
	      & (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	     | (((IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
		 & (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
		& (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3))) 
	    | (((IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1) 
		& (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	       & (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3))) 
	   | (((IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1) 
	       & (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
	      & (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:653
    vlTOPp->__Vtableidx2 = vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateNext;
    vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateNext_string[0U] 
	= vlTOPp->__Vtable2_v__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][0U];
    vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateNext_string[1U] 
	= vlTOPp->__Vtable2_v__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][1U];
    vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateNext_string[2U] 
	= vlTOPp->__Vtable2_v__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][2U];
    vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateNext_string[3U] 
	= vlTOPp->__Vtable2_v__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][3U];
    vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateNext_string[4U] 
	= vlTOPp->__Vtable2_v__DOT__uartfsm__DOT__fsmIn_stateNext_string
	[vlTOPp->__Vtableidx2][4U];
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:145
    vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext 
	= (7U & ((IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
		 + (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)));
    vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow 
	= ((7U == (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value)) 
	   & (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
}

void VUartMultFlex::_settle__TOP__9(VUartMultFlex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUartMultFlex::_settle__TOP__9\n"); );
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT___zz_3_ 
	= (7U == (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value));
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:171
    vlTOPp->__Vtableidx7 = (((7U == (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)) 
			     << 4U) | (((IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow) 
					<< 3U) | (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state)));
    vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready 
	= vlTOPp->__Vtable7_v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready
	[vlTOPp->__Vtableidx7];
    vlTOPp->v__DOT__uartfsm__DOT__write_ready = (1U 
						 & ((~ (IData)(vlTOPp->v__DOT__uartfsm__DOT___zz_1_)) 
						    | (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready)));
}

void VUartMultFlex::_settle__TOP__11(VUartMultFlex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUartMultFlex::_settle__TOP__11\n"); );
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:785
    vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateNext 
	= vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateReg;
    if ((1U == (IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	if (vlTOPp->v__DOT__mult_1___05Fio_toUart_valid) {
	    vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateNext = 2U;
	}
    } else {
	if ((2U == (IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateReg))) {
	    if (((IData)(vlTOPp->v__DOT__uartfsm__DOT__write_valid) 
		 & (IData)(vlTOPp->v__DOT__uartfsm__DOT__write_ready))) {
		vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateNext = 3U;
	    }
	} else {
	    vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateNext 
		= ((3U == (IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateReg))
		    ? ((5U == (IData)(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_outCounter))
		        ? 1U : 2U) : 1U);
	}
    }
    // ALWAYS at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:672
    vlTOPp->__Vtableidx4 = vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateNext;
    vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateNext_string[0U] 
	= vlTOPp->__Vtable4_v__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][0U];
    vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateNext_string[1U] 
	= vlTOPp->__Vtable4_v__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][1U];
    vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateNext_string[2U] 
	= vlTOPp->__Vtable4_v__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][2U];
    vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateNext_string[3U] 
	= vlTOPp->__Vtable4_v__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][3U];
    vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateNext_string[4U] 
	= vlTOPp->__Vtable4_v__DOT__uartfsm__DOT__fsmOut_stateNext_string
	[vlTOPp->__Vtableidx4][4U];
}

void VUartMultFlex::_eval_initial(VUartMultFlex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUartMultFlex::_eval_initial\n"); );
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VUartMultFlex::final() {
    VL_DEBUG_IF(VL_PRINTF("    VUartMultFlex::final\n"); );
    // Variables
    VUartMultFlex__Syms* __restrict vlSymsp = this->__VlSymsp;
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VUartMultFlex::_eval_settle(VUartMultFlex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUartMultFlex::_eval_settle\n"); );
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->_settle__TOP__11(vlSymsp);
}
