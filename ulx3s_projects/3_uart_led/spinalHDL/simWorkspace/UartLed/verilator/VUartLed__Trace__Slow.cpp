// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUartLed__Syms.h"


//======================

void VUartLed::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VUartLed::traceInit, &VUartLed::traceFull, &VUartLed::traceChg, this);
}
void VUartLed::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VUartLed* t=(VUartLed*)userthis;
    VUartLed__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VUartLed::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VUartLed* t=(VUartLed*)userthis;
    VUartLed__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VUartLed::traceInitThis(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VUartLed::traceFullThis(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VUartLed::traceInitThis__1(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+114,"io_uart_txd",-1);
	vcdp->declBit  (c+115,"io_uart_rxd",-1);
	vcdp->declBit  (c+116,"io_ledData",-1);
	vcdp->declBit  (c+117,"clk",-1);
	vcdp->declBit  (c+118,"reset",-1);
	vcdp->declBit  (c+114,"UartLed io_uart_txd",-1);
	vcdp->declBit  (c+115,"UartLed io_uart_rxd",-1);
	vcdp->declBit  (c+116,"UartLed io_ledData",-1);
	vcdp->declBit  (c+117,"UartLed clk",-1);
	vcdp->declBit  (c+118,"UartLed reset",-1);
	vcdp->declBit  (c+66,"UartLed uartfsm_io_uart_txd",-1);
	vcdp->declBit  (c+27,"UartLed uartfsm_io_toFnct_valid",-1);
	vcdp->declQuad (c+28,"UartLed uartfsm_io_toFnct_payload",-1,47,0);
	vcdp->declBit  (c+1,"UartLed leddriver_1__io_ledData",-1);
	vcdp->declBit  (c+67,"UartLed leddriver_1__io_toUart_valid",-1);
	vcdp->declQuad (c+90,"UartLed leddriver_1__io_toUart_payload",-1,47,0);
	vcdp->declBit  (c+66,"UartLed uartfsm io_uart_txd",-1);
	vcdp->declBit  (c+115,"UartLed uartfsm io_uart_rxd",-1);
	vcdp->declBit  (c+27,"UartLed uartfsm io_toFnct_valid",-1);
	vcdp->declQuad (c+28,"UartLed uartfsm io_toFnct_payload",-1,47,0);
	vcdp->declBit  (c+67,"UartLed uartfsm io_fromFnct_valid",-1);
	vcdp->declQuad (c+90,"UartLed uartfsm io_fromFnct_payload",-1,47,0);
	vcdp->declBit  (c+117,"UartLed uartfsm clk",-1);
	vcdp->declBit  (c+118,"UartLed uartfsm reset",-1);
	// Tracing: UartLed uartfsm _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:596
	// Tracing: UartLed uartfsm _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:597
	// Tracing: UartLed uartfsm _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:598
	// Tracing: UartLed uartfsm _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:599
	vcdp->declBit  (c+30,"UartLed uartfsm uartCtrl_1__io_write_ready",-1);
	vcdp->declBit  (c+99,"UartLed uartfsm uartCtrl_1__io_read_valid",-1);
	vcdp->declBus  (c+92,"UartLed uartfsm uartCtrl_1__io_read_payload",-1,7,0);
	vcdp->declBit  (c+66,"UartLed uartfsm uartCtrl_1__io_uart_txd",-1);
	// Tracing: UartLed uartfsm _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:604
	vcdp->declBit  (c+2,"UartLed uartfsm write_valid",-1);
	vcdp->declBit  (c+31,"UartLed uartfsm write_ready",-1);
	vcdp->declBus  (c+32,"UartLed uartfsm write_payload",-1,7,0);
	vcdp->declBit  (c+68,"UartLed uartfsm write_m2sPipe_valid",-1);
	vcdp->declBit  (c+30,"UartLed uartfsm write_m2sPipe_ready",-1);
	vcdp->declBus  (c+93,"UartLed uartfsm write_m2sPipe_payload",-1,7,0);
	// Tracing: UartLed uartfsm _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:611
	// Tracing: UartLed uartfsm _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:612
	vcdp->declBit  (c+119,"UartLed uartfsm fsmIn_wantExit",-1);
	vcdp->declBus  (c+69,"UartLed uartfsm fsmIn_inCounter",-1,2,0);
	vcdp->declBus  (c+70,"UartLed uartfsm fsmIn_buffer_0",-1,7,0);
	vcdp->declBus  (c+71,"UartLed uartfsm fsmIn_buffer_1",-1,7,0);
	vcdp->declBus  (c+72,"UartLed uartfsm fsmIn_buffer_2",-1,7,0);
	vcdp->declBus  (c+73,"UartLed uartfsm fsmIn_buffer_3",-1,7,0);
	vcdp->declBus  (c+74,"UartLed uartfsm fsmIn_buffer_4",-1,7,0);
	vcdp->declBus  (c+75,"UartLed uartfsm fsmIn_buffer_5",-1,7,0);
	vcdp->declBit  (c+119,"UartLed uartfsm fsmOut_wantExit",-1);
	vcdp->declBus  (c+76,"UartLed uartfsm fsmOut_outCounter",-1,2,0);
	vcdp->declBus  (c+77,"UartLed uartfsm fsmIn_stateReg",-1,2,0);
	vcdp->declBus  (c+33,"UartLed uartfsm fsmIn_stateNext",-1,2,0);
	// Tracing: UartLed uartfsm _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:625
	// Tracing: UartLed uartfsm _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:626
	vcdp->declBus  (c+78,"UartLed uartfsm fsmOut_stateReg",-1,1,0);
	vcdp->declBus  (c+34,"UartLed uartfsm fsmOut_stateNext",-1,1,0);
	vcdp->declArray(c+3,"UartLed uartfsm fsmIn_stateReg_string",-1,159,0);
	vcdp->declArray(c+35,"UartLed uartfsm fsmIn_stateNext_string",-1,159,0);
	vcdp->declArray(c+8,"UartLed uartfsm fsmOut_stateReg_string",-1,159,0);
	vcdp->declArray(c+40,"UartLed uartfsm fsmOut_stateNext_string",-1,159,0);
	vcdp->declBus  (c+120,"UartLed uartfsm uartCtrl_1_ io_config_frame_dataLength",-1,2,0);
	vcdp->declBus  (c+119,"UartLed uartfsm uartCtrl_1_ io_config_frame_stop",-1,0,0);
	vcdp->declBus  (c+121,"UartLed uartfsm uartCtrl_1_ io_config_frame_parity",-1,1,0);
	vcdp->declBus  (c+122,"UartLed uartfsm uartCtrl_1_ io_config_clockDivider",-1,19,0);
	vcdp->declBit  (c+68,"UartLed uartfsm uartCtrl_1_ io_write_valid",-1);
	vcdp->declBit  (c+30,"UartLed uartfsm uartCtrl_1_ io_write_ready",-1);
	vcdp->declBus  (c+93,"UartLed uartfsm uartCtrl_1_ io_write_payload",-1,7,0);
	vcdp->declBit  (c+99,"UartLed uartfsm uartCtrl_1_ io_read_valid",-1);
	vcdp->declBus  (c+92,"UartLed uartfsm uartCtrl_1_ io_read_payload",-1,7,0);
	vcdp->declBit  (c+66,"UartLed uartfsm uartCtrl_1_ io_uart_txd",-1);
	vcdp->declBit  (c+115,"UartLed uartfsm uartCtrl_1_ io_uart_rxd",-1);
	vcdp->declBit  (c+117,"UartLed uartfsm uartCtrl_1_ clk",-1);
	vcdp->declBit  (c+118,"UartLed uartfsm uartCtrl_1_ reset",-1);
	vcdp->declBit  (c+30,"UartLed uartfsm uartCtrl_1_ tx_io_write_ready",-1);
	vcdp->declBit  (c+66,"UartLed uartfsm uartCtrl_1_ tx_io_txd",-1);
	vcdp->declBit  (c+99,"UartLed uartfsm uartCtrl_1_ rx_io_read_valid",-1);
	vcdp->declBus  (c+92,"UartLed uartfsm uartCtrl_1_ rx_io_read_payload",-1,7,0);
	vcdp->declBus  (c+100,"UartLed uartfsm uartCtrl_1_ clockDivider_counter",-1,19,0);
	vcdp->declBit  (c+101,"UartLed uartfsm uartCtrl_1_ clockDivider_tick",-1);
	vcdp->declBus  (c+123,"UartLed uartfsm uartCtrl_1_ io_config_frame_stop_string",-1,23,0);
	vcdp->declBus  (c+124,"UartLed uartfsm uartCtrl_1_ io_config_frame_parity_string",-1,31,0);
	vcdp->declBus  (c+120,"UartLed uartfsm uartCtrl_1_ tx io_configFrame_dataLength",-1,2,0);
	vcdp->declBus  (c+119,"UartLed uartfsm uartCtrl_1_ tx io_configFrame_stop",-1,0,0);
	vcdp->declBus  (c+121,"UartLed uartfsm uartCtrl_1_ tx io_configFrame_parity",-1,1,0);
	vcdp->declBit  (c+101,"UartLed uartfsm uartCtrl_1_ tx io_samplingTick",-1);
	vcdp->declBit  (c+68,"UartLed uartfsm uartCtrl_1_ tx io_write_valid",-1);
	vcdp->declBit  (c+30,"UartLed uartfsm uartCtrl_1_ tx io_write_ready",-1);
	vcdp->declBus  (c+93,"UartLed uartfsm uartCtrl_1_ tx io_write_payload",-1,7,0);
	vcdp->declBit  (c+66,"UartLed uartfsm uartCtrl_1_ tx io_txd",-1);
	vcdp->declBit  (c+117,"UartLed uartfsm uartCtrl_1_ tx clk",-1);
	vcdp->declBit  (c+118,"UartLed uartfsm uartCtrl_1_ tx reset",-1);
	// Tracing: UartLed uartfsm uartCtrl_1_ tx _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:86
	// Tracing: UartLed uartfsm uartCtrl_1_ tx _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:87
	// Tracing: UartLed uartfsm uartCtrl_1_ tx _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:88
	// Tracing: UartLed uartfsm uartCtrl_1_ tx _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:89
	// Tracing: UartLed uartfsm uartCtrl_1_ tx _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:90
	vcdp->declBit  (c+45,"UartLed uartfsm uartCtrl_1_ tx clockDivider_counter_willIncrement",-1);
	vcdp->declBit  (c+119,"UartLed uartfsm uartCtrl_1_ tx clockDivider_counter_willClear",-1);
	vcdp->declBus  (c+26,"UartLed uartfsm uartCtrl_1_ tx clockDivider_counter_valueNext",-1,2,0);
	vcdp->declBus  (c+79,"UartLed uartfsm uartCtrl_1_ tx clockDivider_counter_value",-1,2,0);
	vcdp->declBit  (c+80,"UartLed uartfsm uartCtrl_1_ tx clockDivider_counter_willOverflowIfInc",-1);
	vcdp->declBit  (c+46,"UartLed uartfsm uartCtrl_1_ tx clockDivider_willOverflow",-1);
	vcdp->declBus  (c+94,"UartLed uartfsm uartCtrl_1_ tx tickCounter_value",-1,2,0);
	vcdp->declBus  (c+102,"UartLed uartfsm uartCtrl_1_ tx stateMachine_state",-1,2,0);
	vcdp->declBit  (c+95,"UartLed uartfsm uartCtrl_1_ tx stateMachine_parity",-1);
	vcdp->declBit  (c+47,"UartLed uartfsm uartCtrl_1_ tx stateMachine_txd",-1);
	vcdp->declBit  (c+66,"UartLed uartfsm uartCtrl_1_ tx stateMachine_txd_regNext",-1);
	vcdp->declBus  (c+123,"UartLed uartfsm uartCtrl_1_ tx io_configFrame_stop_string",-1,23,0);
	vcdp->declBus  (c+124,"UartLed uartfsm uartCtrl_1_ tx io_configFrame_parity_string",-1,31,0);
	vcdp->declQuad (c+48,"UartLed uartfsm uartCtrl_1_ tx stateMachine_state_string",-1,47,0);
	vcdp->declBus  (c+120,"UartLed uartfsm uartCtrl_1_ rx io_configFrame_dataLength",-1,2,0);
	vcdp->declBus  (c+119,"UartLed uartfsm uartCtrl_1_ rx io_configFrame_stop",-1,0,0);
	vcdp->declBus  (c+121,"UartLed uartfsm uartCtrl_1_ rx io_configFrame_parity",-1,1,0);
	vcdp->declBit  (c+101,"UartLed uartfsm uartCtrl_1_ rx io_samplingTick",-1);
	vcdp->declBit  (c+99,"UartLed uartfsm uartCtrl_1_ rx io_read_valid",-1);
	vcdp->declBus  (c+92,"UartLed uartfsm uartCtrl_1_ rx io_read_payload",-1,7,0);
	vcdp->declBit  (c+115,"UartLed uartfsm uartCtrl_1_ rx io_rxd",-1);
	vcdp->declBit  (c+117,"UartLed uartfsm uartCtrl_1_ rx clk",-1);
	vcdp->declBit  (c+118,"UartLed uartfsm uartCtrl_1_ rx reset",-1);
	// Tracing: UartLed uartfsm uartCtrl_1_ rx _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:290
	vcdp->declBit  (c+103,"UartLed uartfsm uartCtrl_1_ rx bufferCC_1__io_dataOut",-1);
	// Tracing: UartLed uartfsm uartCtrl_1_ rx _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:292
	// Tracing: UartLed uartfsm uartCtrl_1_ rx _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:293
	// Tracing: UartLed uartfsm uartCtrl_1_ rx _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:294
	// Tracing: UartLed uartfsm uartCtrl_1_ rx _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:295
	// Tracing: UartLed uartfsm uartCtrl_1_ rx _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:296
	// Tracing: UartLed uartfsm uartCtrl_1_ rx _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:297
	// Tracing: UartLed uartfsm uartCtrl_1_ rx _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:298
	// Tracing: UartLed uartfsm uartCtrl_1_ rx _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:299
	// Tracing: UartLed uartfsm uartCtrl_1_ rx _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:300
	// Tracing: UartLed uartfsm uartCtrl_1_ rx _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:301
	// Tracing: UartLed uartfsm uartCtrl_1_ rx _zz_12_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:302
	vcdp->declBit  (c+103,"UartLed uartfsm uartCtrl_1_ rx sampler_synchroniser",-1);
	vcdp->declBit  (c+103,"UartLed uartfsm uartCtrl_1_ rx sampler_samples_0",-1);
	vcdp->declBit  (c+104,"UartLed uartfsm uartCtrl_1_ rx sampler_samples_1",-1);
	vcdp->declBit  (c+105,"UartLed uartfsm uartCtrl_1_ rx sampler_samples_2",-1);
	vcdp->declBit  (c+106,"UartLed uartfsm uartCtrl_1_ rx sampler_samples_3",-1);
	vcdp->declBit  (c+107,"UartLed uartfsm uartCtrl_1_ rx sampler_samples_4",-1);
	vcdp->declBit  (c+108,"UartLed uartfsm uartCtrl_1_ rx sampler_value",-1);
	vcdp->declBit  (c+109,"UartLed uartfsm uartCtrl_1_ rx sampler_tick",-1);
	vcdp->declBus  (c+96,"UartLed uartfsm uartCtrl_1_ rx bitTimer_counter",-1,2,0);
	vcdp->declBit  (c+50,"UartLed uartfsm uartCtrl_1_ rx bitTimer_tick",-1);
	vcdp->declBus  (c+112,"UartLed uartfsm uartCtrl_1_ rx bitCounter_value",-1,2,0);
	vcdp->declBus  (c+110,"UartLed uartfsm uartCtrl_1_ rx stateMachine_state",-1,2,0);
	vcdp->declBit  (c+113,"UartLed uartfsm uartCtrl_1_ rx stateMachine_parity",-1);
	vcdp->declBus  (c+92,"UartLed uartfsm uartCtrl_1_ rx stateMachine_shifter",-1,7,0);
	vcdp->declBit  (c+99,"UartLed uartfsm uartCtrl_1_ rx stateMachine_validReg",-1);
	vcdp->declBus  (c+123,"UartLed uartfsm uartCtrl_1_ rx io_configFrame_stop_string",-1,23,0);
	vcdp->declBus  (c+124,"UartLed uartfsm uartCtrl_1_ rx io_configFrame_parity_string",-1,31,0);
	vcdp->declQuad (c+51,"UartLed uartfsm uartCtrl_1_ rx stateMachine_state_string",-1,47,0);
	vcdp->declBit  (c+119,"UartLed uartfsm uartCtrl_1_ rx bufferCC_1_ io_initial",-1);
	vcdp->declBit  (c+115,"UartLed uartfsm uartCtrl_1_ rx bufferCC_1_ io_dataIn",-1);
	vcdp->declBit  (c+103,"UartLed uartfsm uartCtrl_1_ rx bufferCC_1_ io_dataOut",-1);
	vcdp->declBit  (c+117,"UartLed uartfsm uartCtrl_1_ rx bufferCC_1_ clk",-1);
	vcdp->declBit  (c+118,"UartLed uartfsm uartCtrl_1_ rx bufferCC_1_ reset",-1);
	vcdp->declBit  (c+111,"UartLed uartfsm uartCtrl_1_ rx bufferCC_1_ buffers_0",-1);
	vcdp->declBit  (c+103,"UartLed uartfsm uartCtrl_1_ rx bufferCC_1_ buffers_1",-1);
	vcdp->declBit  (c+1,"UartLed leddriver_1_ io_ledData",-1);
	vcdp->declBit  (c+27,"UartLed leddriver_1_ io_fromUart_valid",-1);
	vcdp->declQuad (c+28,"UartLed leddriver_1_ io_fromUart_payload",-1,47,0);
	vcdp->declBit  (c+67,"UartLed leddriver_1_ io_toUart_valid",-1);
	vcdp->declQuad (c+90,"UartLed leddriver_1_ io_toUart_payload",-1,47,0);
	vcdp->declBit  (c+117,"UartLed leddriver_1_ clk",-1);
	vcdp->declBit  (c+118,"UartLed leddriver_1_ reset",-1);
	// Tracing: UartLed leddriver_1_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:916
	// Tracing: UartLed leddriver_1_ _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:917
	// Tracing: UartLed leddriver_1_ _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:918
	// Tracing: UartLed leddriver_1_ _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:919
	// Tracing: UartLed leddriver_1_ _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:920
	// Tracing: UartLed leddriver_1_ _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:921
	// Tracing: UartLed leddriver_1_ _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:922
	// Tracing: UartLed leddriver_1_ _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:923
	// Tracing: UartLed leddriver_1_ _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:924
	// Tracing: UartLed leddriver_1_ _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:925
	vcdp->declQuad (c+97,"UartLed leddriver_1_ buffer_1_",-1,47,0);
	vcdp->declBit  (c+67,"UartLed leddriver_1_ io_fromUart_m2sPipe_valid",-1);
	vcdp->declQuad (c+90,"UartLed leddriver_1_ io_fromUart_m2sPipe_payload",-1,47,0);
	vcdp->declBit  (c+119,"UartLed leddriver_1_ ledOut_wantExit",-1);
	vcdp->declBit  (c+13,"UartLed leddriver_1_ ledOut_bitCounter_willIncrement",-1);
	vcdp->declBit  (c+14,"UartLed leddriver_1_ ledOut_bitCounter_willClear",-1);
	vcdp->declBus  (c+15,"UartLed leddriver_1_ ledOut_bitCounter_valueNext",-1,5,0);
	vcdp->declBus  (c+81,"UartLed leddriver_1_ ledOut_bitCounter_value",-1,5,0);
	vcdp->declBit  (c+82,"UartLed leddriver_1_ ledOut_bitCounter_willOverflowIfInc",-1);
	vcdp->declBit  (c+16,"UartLed leddriver_1_ ledOut_bitCounter_willOverflow",-1);
	// Tracing: UartLed leddriver_1_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/3_uart_led/spinalHDL/tmp/job_1/UartLed.v:936
	vcdp->declBit  (c+53,"UartLed leddriver_1_ ledOut_stateA_fsm_wantExit",-1);
	vcdp->declBit  (c+17,"UartLed leddriver_1_ ledOut_stateA_fsm_counterA_willIncrement",-1);
	vcdp->declBit  (c+54,"UartLed leddriver_1_ ledOut_stateA_fsm_counterA_willClear",-1);
	vcdp->declBus  (c+55,"UartLed leddriver_1_ ledOut_stateA_fsm_counterA_valueNext",-1,3,0);
	vcdp->declBus  (c+83,"UartLed leddriver_1_ ledOut_stateA_fsm_counterA_value",-1,3,0);
	vcdp->declBit  (c+84,"UartLed leddriver_1_ ledOut_stateA_fsm_counterA_willOverflowIfInc",-1);
	vcdp->declBit  (c+18,"UartLed leddriver_1_ ledOut_stateA_fsm_counterA_willOverflow",-1);
	vcdp->declBit  (c+19,"UartLed leddriver_1_ ledOut_stateA_fsm_counterB_willIncrement",-1);
	vcdp->declBit  (c+56,"UartLed leddriver_1_ ledOut_stateA_fsm_counterB_willClear",-1);
	vcdp->declBus  (c+57,"UartLed leddriver_1_ ledOut_stateA_fsm_counterB_valueNext",-1,3,0);
	vcdp->declBus  (c+85,"UartLed leddriver_1_ ledOut_stateA_fsm_counterB_value",-1,3,0);
	vcdp->declBit  (c+86,"UartLed leddriver_1_ ledOut_stateA_fsm_counterB_willOverflowIfInc",-1);
	vcdp->declBit  (c+20,"UartLed leddriver_1_ ledOut_stateA_fsm_counterB_willOverflow",-1);
	vcdp->declBus  (c+87,"UartLed leddriver_1_ ledOut_stateA_fsm_stateReg",-1,1,0);
	vcdp->declBus  (c+58,"UartLed leddriver_1_ ledOut_stateA_fsm_stateNext",-1,1,0);
	vcdp->declBus  (c+88,"UartLed leddriver_1_ ledOut_stateReg",-1,2,0);
	vcdp->declBus  (c+59,"UartLed leddriver_1_ ledOut_stateNext",-1,2,0);
	vcdp->declBus  (c+89,"UartLed leddriver_1_ ledOut_stateA_fsm_stateReg_string",-1,31,0);
	vcdp->declBus  (c+60,"UartLed leddriver_1_ ledOut_stateA_fsm_stateNext_string",-1,31,0);
	vcdp->declArray(c+21,"UartLed leddriver_1_ ledOut_stateReg_string",-1,135,0);
	vcdp->declArray(c+61,"UartLed leddriver_1_ ledOut_stateNext_string",-1,135,0);
    }
}

void VUartLed::traceFullThis__1(VUartLed__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartLed* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->UartLed__DOT__leddriver_1___05Fio_ledData));
	vcdp->fullBit  (c+2,(vlTOPp->UartLed__DOT__uartfsm__DOT__write_valid));
	vcdp->fullArray(c+3,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg_string),160);
	vcdp->fullArray(c+8,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg_string),160);
	vcdp->fullBit  (c+13,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_willIncrement));
	vcdp->fullBit  (c+14,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_willClear));
	vcdp->fullBus  (c+15,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_valueNext),6);
	vcdp->fullBit  (c+16,(((0x2fU == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_value)) 
			       & (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_willIncrement))));
	vcdp->fullBit  (c+17,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_willIncrement));
	vcdp->fullBit  (c+18,(((9U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_value)) 
			       & (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_willIncrement))));
	vcdp->fullBit  (c+19,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_willIncrement));
	vcdp->fullBit  (c+20,(((9U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_value)) 
			       & (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_willIncrement))));
	vcdp->fullArray(c+21,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg_string),136);
	vcdp->fullBus  (c+26,((7U & ((IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
				     + (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)))),3);
	vcdp->fullBit  (c+27,(vlTOPp->UartLed__DOT__uartfsm_io_toFnct_valid));
	vcdp->fullQuad (c+28,(vlTOPp->UartLed__DOT__uartfsm_io_toFnct_payload),48);
	vcdp->fullBit  (c+30,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready));
	vcdp->fullBit  (c+31,(vlTOPp->UartLed__DOT__uartfsm__DOT__write_ready));
	vcdp->fullBus  (c+32,(vlTOPp->UartLed__DOT__uartfsm__DOT__write_payload),8);
	vcdp->fullBus  (c+33,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateNext),3);
	vcdp->fullBus  (c+34,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateNext),2);
	vcdp->fullArray(c+35,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateNext_string),160);
	vcdp->fullArray(c+40,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateNext_string),160);
	vcdp->fullBit  (c+45,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
	vcdp->fullBit  (c+46,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow));
	vcdp->fullBit  (c+47,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
	vcdp->fullQuad (c+48,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string),48);
	vcdp->fullBit  (c+50,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick));
	vcdp->fullQuad (c+51,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string),48);
	vcdp->fullBit  (c+53,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_wantExit));
	vcdp->fullBit  (c+54,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_willClear));
	vcdp->fullBus  (c+55,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_valueNext),4);
	vcdp->fullBit  (c+56,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_willClear));
	vcdp->fullBus  (c+57,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_valueNext),4);
	vcdp->fullBus  (c+58,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateNext),2);
	vcdp->fullBus  (c+59,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateNext),3);
	vcdp->fullBus  (c+60,(((0U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateNext))
			        ? 0x626f6f74U : ((1U 
						  == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateNext))
						  ? 0x65312020U
						  : 
						 ((2U 
						   == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateNext))
						   ? 0x65322020U
						   : 0x3f3f3f3fU)))),32);
	vcdp->fullArray(c+61,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateNext_string),136);
	vcdp->fullBit  (c+66,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext));
	vcdp->fullBit  (c+67,(vlTOPp->UartLed__DOT__leddriver_1___DOT__io_fromUart_m2sPipe_valid));
	vcdp->fullBit  (c+68,(vlTOPp->UartLed__DOT__uartfsm__DOT___zz_1_));
	vcdp->fullBus  (c+69,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_inCounter),3);
	vcdp->fullBus  (c+70,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_0),8);
	vcdp->fullBus  (c+71,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_1),8);
	vcdp->fullBus  (c+72,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_2),8);
	vcdp->fullBus  (c+73,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_3),8);
	vcdp->fullBus  (c+74,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_4),8);
	vcdp->fullBus  (c+75,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_buffer_5),8);
	vcdp->fullBus  (c+76,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_outCounter),3);
	vcdp->fullBus  (c+77,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmIn_stateReg),3);
	vcdp->fullBus  (c+78,(vlTOPp->UartLed__DOT__uartfsm__DOT__fsmOut_stateReg),2);
	vcdp->fullBus  (c+79,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value),3);
	vcdp->fullBit  (c+80,((7U == (IData)(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value))));
	vcdp->fullBus  (c+81,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_value),6);
	vcdp->fullBit  (c+82,((0x2fU == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_bitCounter_value))));
	vcdp->fullBus  (c+83,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_value),4);
	vcdp->fullBit  (c+84,((9U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterA_value))));
	vcdp->fullBus  (c+85,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_value),4);
	vcdp->fullBit  (c+86,((9U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_counterB_value))));
	vcdp->fullBus  (c+87,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg),2);
	vcdp->fullBus  (c+88,(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateReg),3);
	vcdp->fullBus  (c+89,(((0U == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg))
			        ? 0x626f6f74U : ((1U 
						  == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg))
						  ? 0x65312020U
						  : 
						 ((2U 
						   == (IData)(vlTOPp->UartLed__DOT__leddriver_1___DOT__ledOut_stateA_fsm_stateReg))
						   ? 0x65322020U
						   : 0x3f3f3f3fU)))),32);
	vcdp->fullQuad (c+90,(vlTOPp->UartLed__DOT__leddriver_1___DOT__io_fromUart_m2sPipe_payload),48);
	vcdp->fullBus  (c+92,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter),8);
	vcdp->fullBus  (c+93,(vlTOPp->UartLed__DOT__uartfsm__DOT___zz_2_),8);
	vcdp->fullBus  (c+94,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value),3);
	vcdp->fullBit  (c+95,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity));
	vcdp->fullBus  (c+96,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter),3);
	vcdp->fullQuad (c+97,(vlTOPp->UartLed__DOT__leddriver_1___DOT__buffer_1_),48);
	vcdp->fullBit  (c+99,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg));
	vcdp->fullBus  (c+100,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter),20);
	vcdp->fullBit  (c+101,((0U == vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)));
	vcdp->fullBus  (c+102,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state),3);
	vcdp->fullBit  (c+103,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1));
	vcdp->fullBit  (c+104,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1));
	vcdp->fullBit  (c+105,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
	vcdp->fullBit  (c+106,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3));
	vcdp->fullBit  (c+107,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
	vcdp->fullBit  (c+108,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
	vcdp->fullBit  (c+109,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick));
	vcdp->fullBus  (c+110,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state),3);
	vcdp->fullBit  (c+111,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0));
	vcdp->fullBus  (c+112,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value),3);
	vcdp->fullBit  (c+113,(vlTOPp->UartLed__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity));
	vcdp->fullBit  (c+114,(vlTOPp->io_uart_txd));
	vcdp->fullBit  (c+115,(vlTOPp->io_uart_rxd));
	vcdp->fullBit  (c+116,(vlTOPp->io_ledData));
	vcdp->fullBit  (c+117,(vlTOPp->clk));
	vcdp->fullBit  (c+118,(vlTOPp->reset));
	vcdp->fullBit  (c+119,(0U));
	vcdp->fullBus  (c+120,(7U),3);
	vcdp->fullBus  (c+121,(0U),2);
	vcdp->fullBus  (c+122,(0x1aU),20);
	vcdp->fullBus  (c+123,(0x4f4e45U),24);
	vcdp->fullBus  (c+124,(0x4e4f4e45U),32);
    }
}
