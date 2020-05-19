// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUartKaraReg__Syms.h"


void VUartKaraReg::traceChgThis__3(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+303,((7U & ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
				     + (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)))),3);
    }
}

void VUartKaraReg::traceChgThis__4(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+304,(vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_valid));
	vcdp->chgBit  (c+305,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready));
	vcdp->chgBit  (c+306,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_ready));
	vcdp->chgBus  (c+307,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_payload),8);
	vcdp->chgBus  (c+308,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext),3);
	vcdp->chgBus  (c+309,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext),2);
	vcdp->chgArray(c+310,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext_string),160);
	vcdp->chgArray(c+315,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext_string),160);
	vcdp->chgBit  (c+320,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
	vcdp->chgBit  (c+321,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick));
	vcdp->chgBit  (c+322,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
	vcdp->chgQuad (c+323,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string),48);
	vcdp->chgBit  (c+325,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick));
	vcdp->chgQuad (c+326,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string),48);
    }
}

void VUartKaraReg::traceChgThis__5(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp915,127,0,4);
    VL_SIGW(__Vtemp916,127,0,4);
    // Body
    {
	vcdp->chgBit  (c+328,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext));
	vcdp->chgBit  (c+329,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_m2sPipe_rValid));
	vcdp->chgBus  (c+330,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_inCounter),5);
	vcdp->chgArray(c+331,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer),256);
	vcdp->chgBus  (c+339,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outCounter),5);
	vcdp->chgArray(c+340,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer),256);
	vcdp->chgBus  (c+348,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg),3);
	vcdp->chgBus  (c+349,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg),2);
	vcdp->chgBus  (c+350,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value),3);
	vcdp->chgBit  (c+351,((7U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value))));
	vcdp->chgArray(c+352,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer),256);
	vcdp->chgArray(c+360,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result),256);
	vcdp->chgBus  (c+368,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg),2);
	__Vtemp915[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U];
	__Vtemp915[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U];
	__Vtemp915[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U];
	__Vtemp915[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U];
	vcdp->chgArray(c+369,(__Vtemp915),128);
	__Vtemp916[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U];
	__Vtemp916[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U];
	__Vtemp916[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U];
	__Vtemp916[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U];
	vcdp->chgArray(c+373,(__Vtemp916),128);
	vcdp->chgQuad (c+377,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U])))),64);
	vcdp->chgQuad (c+379,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U])))),64);
	vcdp->chgBus  (c+381,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U]),32);
	vcdp->chgBus  (c+382,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U]),32);
	vcdp->chgBus  (c+383,((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U] 
					   << 0x10U) 
					  | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U] 
					     >> 0x10U)))),16);
	vcdp->chgBus  (c+384,((0xffffU & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U] 
					  >> 0x10U))),16);
	vcdp->chgBus  (c+385,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U])),16);
	vcdp->chgBus  (c+386,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U])),16);
	vcdp->chgBus  (c+387,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U]),32);
	vcdp->chgBus  (c+388,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U]),32);
	vcdp->chgBus  (c+389,((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U] 
					   << 0x10U) 
					  | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U] 
					     >> 0x10U)))),16);
	vcdp->chgBus  (c+390,((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U] 
					   << 0x10U) 
					  | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U] 
					     >> 0x10U)))),16);
	vcdp->chgBus  (c+391,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U])),16);
	vcdp->chgBus  (c+392,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U])),16);
	vcdp->chgQuad (c+393,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U])))),64);
	vcdp->chgQuad (c+395,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U])))),64);
	vcdp->chgBus  (c+397,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U]),32);
	vcdp->chgBus  (c+398,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U]),32);
	vcdp->chgBus  (c+399,((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U] 
					   << 0x10U) 
					  | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U] 
					     >> 0x10U)))),16);
	vcdp->chgBus  (c+400,((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U] 
					   << 0x10U) 
					  | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U] 
					     >> 0x10U)))),16);
	vcdp->chgBus  (c+401,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U])),16);
	vcdp->chgBus  (c+402,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U])),16);
	vcdp->chgBus  (c+403,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U]),32);
	vcdp->chgBus  (c+404,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U]),32);
	vcdp->chgBus  (c+405,((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U] 
					   << 0x10U) 
					  | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U] 
					     >> 0x10U)))),16);
	vcdp->chgBus  (c+406,((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U] 
					   << 0x10U) 
					  | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U] 
					     >> 0x10U)))),16);
	vcdp->chgBus  (c+407,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U])),16);
	vcdp->chgBus  (c+408,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U])),16);
    }
}

void VUartKaraReg::traceChgThis__6(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+409,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter),8);
	vcdp->chgBus  (c+410,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_m2sPipe_rData),8);
	vcdp->chgBus  (c+411,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value),3);
	vcdp->chgBit  (c+412,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity));
	vcdp->chgBus  (c+413,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter),3);
    }
}

void VUartKaraReg::traceChgThis__7(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+414,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg));
	vcdp->chgBus  (c+415,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter),20);
	vcdp->chgBit  (c+416,((0U == vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)));
	vcdp->chgBus  (c+417,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state),3);
	vcdp->chgBit  (c+418,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1));
	vcdp->chgBit  (c+419,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1));
	vcdp->chgBit  (c+420,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
	vcdp->chgBit  (c+421,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3));
	vcdp->chgBit  (c+422,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
	vcdp->chgBit  (c+423,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
	vcdp->chgBit  (c+424,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick));
	vcdp->chgBus  (c+425,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state),3);
	vcdp->chgBit  (c+426,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0));
    }
}

void VUartKaraReg::traceChgThis__8(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+427,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value),3);
	vcdp->chgBit  (c+428,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity));
    }
}

void VUartKaraReg::traceChgThis__9(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+429,(vlTOPp->io_uart_txd));
	vcdp->chgBit  (c+430,(vlTOPp->io_uart_rxd));
	vcdp->chgBit  (c+431,(vlTOPp->clk));
	vcdp->chgBit  (c+432,(vlTOPp->reset));
    }
}
