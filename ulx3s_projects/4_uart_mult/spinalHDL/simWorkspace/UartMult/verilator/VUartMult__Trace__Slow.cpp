// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUartMult__Syms.h"


//======================

void VUartMult::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VUartMult::traceInit, &VUartMult::traceFull, &VUartMult::traceChg, this);
}
void VUartMult::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VUartMult* t=(VUartMult*)userthis;
    VUartMult__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VUartMult::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VUartMult* t=(VUartMult*)userthis;
    VUartMult__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VUartMult::traceInitThis(VUartMult__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMult* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VUartMult::traceFullThis(VUartMult__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMult* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VUartMult::traceInitThis__1(VUartMult__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMult* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+86,"io_uart_txd",-1);
	vcdp->declBit  (c+87,"io_uart_rxd",-1);
	vcdp->declBit  (c+88,"clk",-1);
	vcdp->declBit  (c+89,"reset",-1);
	vcdp->declBit  (c+86,"UartMult io_uart_txd",-1);
	vcdp->declBit  (c+87,"UartMult io_uart_rxd",-1);
	vcdp->declBit  (c+88,"UartMult clk",-1);
	vcdp->declBit  (c+89,"UartMult reset",-1);
	vcdp->declBit  (c+49,"UartMult uartfsm_io_uart_txd",-1);
	vcdp->declBit  (c+1,"UartMult uartfsm_io_toFnct_valid",-1);
	vcdp->declQuad (c+2,"UartMult uartfsm_io_toFnct_payload",-1,47,0);
	vcdp->declBit  (c+25,"UartMult mult_1__io_toUart_valid",-1);
	vcdp->declQuad (c+4,"UartMult mult_1__io_toUart_payload",-1,47,0);
	vcdp->declBit  (c+49,"UartMult uartfsm io_uart_txd",-1);
	vcdp->declBit  (c+87,"UartMult uartfsm io_uart_rxd",-1);
	vcdp->declBit  (c+1,"UartMult uartfsm io_toFnct_valid",-1);
	vcdp->declQuad (c+2,"UartMult uartfsm io_toFnct_payload",-1,47,0);
	vcdp->declBit  (c+25,"UartMult uartfsm io_fromFnct_valid",-1);
	vcdp->declQuad (c+4,"UartMult uartfsm io_fromFnct_payload",-1,47,0);
	vcdp->declBit  (c+88,"UartMult uartfsm clk",-1);
	vcdp->declBit  (c+89,"UartMult uartfsm reset",-1);
	// Tracing: UartMult uartfsm _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:590
	// Tracing: UartMult uartfsm _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:591
	// Tracing: UartMult uartfsm _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:592
	// Tracing: UartMult uartfsm _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:593
	vcdp->declBit  (c+26,"UartMult uartfsm uartCtrl_1__io_write_ready",-1);
	vcdp->declBit  (c+71,"UartMult uartfsm uartCtrl_1__io_read_valid",-1);
	vcdp->declBus  (c+66,"UartMult uartfsm uartCtrl_1__io_read_payload",-1,7,0);
	vcdp->declBit  (c+49,"UartMult uartfsm uartCtrl_1__io_uart_txd",-1);
	// Tracing: UartMult uartfsm _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:598
	// Tracing: UartMult uartfsm _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:599
	vcdp->declBit  (c+6,"UartMult uartfsm write_valid",-1);
	vcdp->declBit  (c+27,"UartMult uartfsm write_ready",-1);
	vcdp->declBus  (c+28,"UartMult uartfsm write_payload",-1,7,0);
	vcdp->declBit  (c+50,"UartMult uartfsm write_m2sPipe_valid",-1);
	vcdp->declBit  (c+26,"UartMult uartfsm write_m2sPipe_ready",-1);
	vcdp->declBus  (c+67,"UartMult uartfsm write_m2sPipe_payload",-1,7,0);
	// Tracing: UartMult uartfsm _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:606
	// Tracing: UartMult uartfsm _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:607
	vcdp->declBit  (c+90,"UartMult uartfsm fsmIn_wantExit",-1);
	vcdp->declBus  (c+51,"UartMult uartfsm fsmIn_inCounter",-1,2,0);
	vcdp->declQuad (c+52,"UartMult uartfsm fsmIn_buffer",-1,47,0);
	vcdp->declBit  (c+90,"UartMult uartfsm fsmOut_wantExit",-1);
	vcdp->declBus  (c+54,"UartMult uartfsm fsmOut_outCounter",-1,2,0);
	vcdp->declQuad (c+55,"UartMult uartfsm fsmOut_outBuffer",-1,47,0);
	vcdp->declBus  (c+57,"UartMult uartfsm fsmIn_stateReg",-1,2,0);
	vcdp->declBus  (c+29,"UartMult uartfsm fsmIn_stateNext",-1,2,0);
	vcdp->declBus  (c+58,"UartMult uartfsm fsmOut_stateReg",-1,1,0);
	vcdp->declBus  (c+30,"UartMult uartfsm fsmOut_stateNext",-1,1,0);
	vcdp->declArray(c+7,"UartMult uartfsm fsmIn_stateReg_string",-1,159,0);
	vcdp->declArray(c+31,"UartMult uartfsm fsmIn_stateNext_string",-1,159,0);
	vcdp->declArray(c+12,"UartMult uartfsm fsmOut_stateReg_string",-1,159,0);
	vcdp->declArray(c+36,"UartMult uartfsm fsmOut_stateNext_string",-1,159,0);
	vcdp->declBus  (c+91,"UartMult uartfsm uartCtrl_1_ io_config_frame_dataLength",-1,2,0);
	vcdp->declBus  (c+90,"UartMult uartfsm uartCtrl_1_ io_config_frame_stop",-1,0,0);
	vcdp->declBus  (c+92,"UartMult uartfsm uartCtrl_1_ io_config_frame_parity",-1,1,0);
	vcdp->declBus  (c+93,"UartMult uartfsm uartCtrl_1_ io_config_clockDivider",-1,19,0);
	vcdp->declBit  (c+50,"UartMult uartfsm uartCtrl_1_ io_write_valid",-1);
	vcdp->declBit  (c+26,"UartMult uartfsm uartCtrl_1_ io_write_ready",-1);
	vcdp->declBus  (c+67,"UartMult uartfsm uartCtrl_1_ io_write_payload",-1,7,0);
	vcdp->declBit  (c+71,"UartMult uartfsm uartCtrl_1_ io_read_valid",-1);
	vcdp->declBus  (c+66,"UartMult uartfsm uartCtrl_1_ io_read_payload",-1,7,0);
	vcdp->declBit  (c+49,"UartMult uartfsm uartCtrl_1_ io_uart_txd",-1);
	vcdp->declBit  (c+87,"UartMult uartfsm uartCtrl_1_ io_uart_rxd",-1);
	vcdp->declBit  (c+88,"UartMult uartfsm uartCtrl_1_ clk",-1);
	vcdp->declBit  (c+89,"UartMult uartfsm uartCtrl_1_ reset",-1);
	vcdp->declBit  (c+26,"UartMult uartfsm uartCtrl_1_ tx_io_write_ready",-1);
	vcdp->declBit  (c+49,"UartMult uartfsm uartCtrl_1_ tx_io_txd",-1);
	vcdp->declBit  (c+71,"UartMult uartfsm uartCtrl_1_ rx_io_read_valid",-1);
	vcdp->declBus  (c+66,"UartMult uartfsm uartCtrl_1_ rx_io_read_payload",-1,7,0);
	vcdp->declBus  (c+72,"UartMult uartfsm uartCtrl_1_ clockDivider_counter",-1,19,0);
	vcdp->declBit  (c+73,"UartMult uartfsm uartCtrl_1_ clockDivider_tick",-1);
	vcdp->declBus  (c+94,"UartMult uartfsm uartCtrl_1_ io_config_frame_stop_string",-1,23,0);
	vcdp->declBus  (c+95,"UartMult uartfsm uartCtrl_1_ io_config_frame_parity_string",-1,31,0);
	vcdp->declBus  (c+91,"UartMult uartfsm uartCtrl_1_ tx io_configFrame_dataLength",-1,2,0);
	vcdp->declBus  (c+90,"UartMult uartfsm uartCtrl_1_ tx io_configFrame_stop",-1,0,0);
	vcdp->declBus  (c+92,"UartMult uartfsm uartCtrl_1_ tx io_configFrame_parity",-1,1,0);
	vcdp->declBit  (c+73,"UartMult uartfsm uartCtrl_1_ tx io_samplingTick",-1);
	vcdp->declBit  (c+50,"UartMult uartfsm uartCtrl_1_ tx io_write_valid",-1);
	vcdp->declBit  (c+26,"UartMult uartfsm uartCtrl_1_ tx io_write_ready",-1);
	vcdp->declBus  (c+67,"UartMult uartfsm uartCtrl_1_ tx io_write_payload",-1,7,0);
	vcdp->declBit  (c+49,"UartMult uartfsm uartCtrl_1_ tx io_txd",-1);
	vcdp->declBit  (c+88,"UartMult uartfsm uartCtrl_1_ tx clk",-1);
	vcdp->declBit  (c+89,"UartMult uartfsm uartCtrl_1_ tx reset",-1);
	// Tracing: UartMult uartfsm uartCtrl_1_ tx _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:80
	// Tracing: UartMult uartfsm uartCtrl_1_ tx _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:81
	// Tracing: UartMult uartfsm uartCtrl_1_ tx _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:82
	// Tracing: UartMult uartfsm uartCtrl_1_ tx _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:83
	// Tracing: UartMult uartfsm uartCtrl_1_ tx _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:84
	vcdp->declBit  (c+41,"UartMult uartfsm uartCtrl_1_ tx clockDivider_counter_willIncrement",-1);
	vcdp->declBit  (c+90,"UartMult uartfsm uartCtrl_1_ tx clockDivider_counter_willClear",-1);
	vcdp->declBus  (c+24,"UartMult uartfsm uartCtrl_1_ tx clockDivider_counter_valueNext",-1,2,0);
	vcdp->declBus  (c+59,"UartMult uartfsm uartCtrl_1_ tx clockDivider_counter_value",-1,2,0);
	vcdp->declBit  (c+60,"UartMult uartfsm uartCtrl_1_ tx clockDivider_counter_willOverflowIfInc",-1);
	vcdp->declBit  (c+42,"UartMult uartfsm uartCtrl_1_ tx clockDivider_willOverflow",-1);
	vcdp->declBus  (c+68,"UartMult uartfsm uartCtrl_1_ tx tickCounter_value",-1,2,0);
	vcdp->declBus  (c+74,"UartMult uartfsm uartCtrl_1_ tx stateMachine_state",-1,2,0);
	vcdp->declBit  (c+69,"UartMult uartfsm uartCtrl_1_ tx stateMachine_parity",-1);
	vcdp->declBit  (c+43,"UartMult uartfsm uartCtrl_1_ tx stateMachine_txd",-1);
	vcdp->declBit  (c+49,"UartMult uartfsm uartCtrl_1_ tx stateMachine_txd_regNext",-1);
	vcdp->declBus  (c+94,"UartMult uartfsm uartCtrl_1_ tx io_configFrame_stop_string",-1,23,0);
	vcdp->declBus  (c+95,"UartMult uartfsm uartCtrl_1_ tx io_configFrame_parity_string",-1,31,0);
	vcdp->declQuad (c+44,"UartMult uartfsm uartCtrl_1_ tx stateMachine_state_string",-1,47,0);
	vcdp->declBus  (c+91,"UartMult uartfsm uartCtrl_1_ rx io_configFrame_dataLength",-1,2,0);
	vcdp->declBus  (c+90,"UartMult uartfsm uartCtrl_1_ rx io_configFrame_stop",-1,0,0);
	vcdp->declBus  (c+92,"UartMult uartfsm uartCtrl_1_ rx io_configFrame_parity",-1,1,0);
	vcdp->declBit  (c+73,"UartMult uartfsm uartCtrl_1_ rx io_samplingTick",-1);
	vcdp->declBit  (c+71,"UartMult uartfsm uartCtrl_1_ rx io_read_valid",-1);
	vcdp->declBus  (c+66,"UartMult uartfsm uartCtrl_1_ rx io_read_payload",-1,7,0);
	vcdp->declBit  (c+87,"UartMult uartfsm uartCtrl_1_ rx io_rxd",-1);
	vcdp->declBit  (c+88,"UartMult uartfsm uartCtrl_1_ rx clk",-1);
	vcdp->declBit  (c+89,"UartMult uartfsm uartCtrl_1_ rx reset",-1);
	// Tracing: UartMult uartfsm uartCtrl_1_ rx _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:284
	vcdp->declBit  (c+75,"UartMult uartfsm uartCtrl_1_ rx bufferCC_1__io_dataOut",-1);
	// Tracing: UartMult uartfsm uartCtrl_1_ rx _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:286
	// Tracing: UartMult uartfsm uartCtrl_1_ rx _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:287
	// Tracing: UartMult uartfsm uartCtrl_1_ rx _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:288
	// Tracing: UartMult uartfsm uartCtrl_1_ rx _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:289
	// Tracing: UartMult uartfsm uartCtrl_1_ rx _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:290
	// Tracing: UartMult uartfsm uartCtrl_1_ rx _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:291
	// Tracing: UartMult uartfsm uartCtrl_1_ rx _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:292
	// Tracing: UartMult uartfsm uartCtrl_1_ rx _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:293
	// Tracing: UartMult uartfsm uartCtrl_1_ rx _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:294
	// Tracing: UartMult uartfsm uartCtrl_1_ rx _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:295
	// Tracing: UartMult uartfsm uartCtrl_1_ rx _zz_12_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:296
	vcdp->declBit  (c+75,"UartMult uartfsm uartCtrl_1_ rx sampler_synchroniser",-1);
	vcdp->declBit  (c+75,"UartMult uartfsm uartCtrl_1_ rx sampler_samples_0",-1);
	vcdp->declBit  (c+76,"UartMult uartfsm uartCtrl_1_ rx sampler_samples_1",-1);
	vcdp->declBit  (c+77,"UartMult uartfsm uartCtrl_1_ rx sampler_samples_2",-1);
	vcdp->declBit  (c+78,"UartMult uartfsm uartCtrl_1_ rx sampler_samples_3",-1);
	vcdp->declBit  (c+79,"UartMult uartfsm uartCtrl_1_ rx sampler_samples_4",-1);
	vcdp->declBit  (c+80,"UartMult uartfsm uartCtrl_1_ rx sampler_value",-1);
	vcdp->declBit  (c+81,"UartMult uartfsm uartCtrl_1_ rx sampler_tick",-1);
	vcdp->declBus  (c+70,"UartMult uartfsm uartCtrl_1_ rx bitTimer_counter",-1,2,0);
	vcdp->declBit  (c+46,"UartMult uartfsm uartCtrl_1_ rx bitTimer_tick",-1);
	vcdp->declBus  (c+84,"UartMult uartfsm uartCtrl_1_ rx bitCounter_value",-1,2,0);
	vcdp->declBus  (c+82,"UartMult uartfsm uartCtrl_1_ rx stateMachine_state",-1,2,0);
	vcdp->declBit  (c+85,"UartMult uartfsm uartCtrl_1_ rx stateMachine_parity",-1);
	vcdp->declBus  (c+66,"UartMult uartfsm uartCtrl_1_ rx stateMachine_shifter",-1,7,0);
	vcdp->declBit  (c+71,"UartMult uartfsm uartCtrl_1_ rx stateMachine_validReg",-1);
	vcdp->declBus  (c+94,"UartMult uartfsm uartCtrl_1_ rx io_configFrame_stop_string",-1,23,0);
	vcdp->declBus  (c+95,"UartMult uartfsm uartCtrl_1_ rx io_configFrame_parity_string",-1,31,0);
	vcdp->declQuad (c+47,"UartMult uartfsm uartCtrl_1_ rx stateMachine_state_string",-1,47,0);
	vcdp->declBit  (c+90,"UartMult uartfsm uartCtrl_1_ rx bufferCC_1_ io_initial",-1);
	vcdp->declBit  (c+87,"UartMult uartfsm uartCtrl_1_ rx bufferCC_1_ io_dataIn",-1);
	vcdp->declBit  (c+75,"UartMult uartfsm uartCtrl_1_ rx bufferCC_1_ io_dataOut",-1);
	vcdp->declBit  (c+88,"UartMult uartfsm uartCtrl_1_ rx bufferCC_1_ clk",-1);
	vcdp->declBit  (c+89,"UartMult uartfsm uartCtrl_1_ rx bufferCC_1_ reset",-1);
	vcdp->declBit  (c+83,"UartMult uartfsm uartCtrl_1_ rx bufferCC_1_ buffers_0",-1);
	vcdp->declBit  (c+75,"UartMult uartfsm uartCtrl_1_ rx bufferCC_1_ buffers_1",-1);
	vcdp->declBit  (c+1,"UartMult mult_1_ io_fromUart_valid",-1);
	vcdp->declQuad (c+2,"UartMult mult_1_ io_fromUart_payload",-1,47,0);
	vcdp->declBit  (c+25,"UartMult mult_1_ io_toUart_valid",-1);
	vcdp->declQuad (c+4,"UartMult mult_1_ io_toUart_payload",-1,47,0);
	vcdp->declBit  (c+88,"UartMult mult_1_ clk",-1);
	vcdp->declBit  (c+89,"UartMult mult_1_ reset",-1);
	vcdp->declBit  (c+90,"UartMult mult_1_ fsm_wantExit",-1);
	vcdp->declQuad (c+61,"UartMult mult_1_ fsm_buffer",-1,47,0);
	vcdp->declQuad (c+63,"UartMult mult_1_ fsm_result",-1,47,0);
	vcdp->declBus  (c+65,"UartMult mult_1_ fsm_stateReg",-1,1,0);
	vcdp->declBus  (c+17,"UartMult mult_1_ fsm_stateNext",-1,1,0);
	// Tracing: UartMult mult_1_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/4_uart_mult/spinalHDL/tmp/job_1/UartMult.v:884
	vcdp->declArray(c+18,"UartMult mult_1_ fsm_stateReg_string",-1,79,0);
	vcdp->declArray(c+21,"UartMult mult_1_ fsm_stateNext_string",-1,79,0);
    }
}

void VUartMult::traceFullThis__1(VUartMult__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMult* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->UartMult__DOT__uartfsm_io_toFnct_valid));
	vcdp->fullQuad (c+2,(vlTOPp->UartMult__DOT__uartfsm_io_toFnct_payload),48);
	vcdp->fullQuad (c+4,(vlTOPp->UartMult__DOT__mult_1___05Fio_toUart_payload),48);
	vcdp->fullBit  (c+6,(vlTOPp->UartMult__DOT__uartfsm__DOT__write_valid));
	vcdp->fullArray(c+7,(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg_string),160);
	vcdp->fullArray(c+12,(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg_string),160);
	vcdp->fullBus  (c+17,(vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateNext),2);
	vcdp->fullArray(c+18,(vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg_string),80);
	vcdp->fullArray(c+21,(vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateNext_string),80);
	vcdp->fullBus  (c+24,((7U & ((IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
				     + (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)))),3);
	vcdp->fullBit  (c+25,(vlTOPp->UartMult__DOT__mult_1___05Fio_toUart_valid));
	vcdp->fullBit  (c+26,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready));
	vcdp->fullBit  (c+27,(vlTOPp->UartMult__DOT__uartfsm__DOT__write_ready));
	vcdp->fullBus  (c+28,(vlTOPp->UartMult__DOT__uartfsm__DOT__write_payload),8);
	vcdp->fullBus  (c+29,(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateNext),3);
	vcdp->fullBus  (c+30,(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateNext),2);
	vcdp->fullArray(c+31,(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateNext_string),160);
	vcdp->fullArray(c+36,(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateNext_string),160);
	vcdp->fullBit  (c+41,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
	vcdp->fullBit  (c+42,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow));
	vcdp->fullBit  (c+43,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
	vcdp->fullQuad (c+44,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string),48);
	vcdp->fullBit  (c+46,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick));
	vcdp->fullQuad (c+47,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string),48);
	vcdp->fullBit  (c+49,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext));
	vcdp->fullBit  (c+50,(vlTOPp->UartMult__DOT__uartfsm__DOT___zz_1_));
	vcdp->fullBus  (c+51,(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_inCounter),3);
	vcdp->fullQuad (c+52,(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_buffer),48);
	vcdp->fullBus  (c+54,(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_outCounter),3);
	vcdp->fullQuad (c+55,(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_outBuffer),48);
	vcdp->fullBus  (c+57,(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmIn_stateReg),3);
	vcdp->fullBus  (c+58,(vlTOPp->UartMult__DOT__uartfsm__DOT__fsmOut_stateReg),2);
	vcdp->fullBus  (c+59,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value),3);
	vcdp->fullBit  (c+60,((7U == (IData)(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value))));
	vcdp->fullQuad (c+61,(vlTOPp->UartMult__DOT__mult_1___DOT__fsm_buffer),48);
	vcdp->fullQuad (c+63,(vlTOPp->UartMult__DOT__mult_1___DOT__fsm_result),48);
	vcdp->fullBus  (c+65,(vlTOPp->UartMult__DOT__mult_1___DOT__fsm_stateReg),2);
	vcdp->fullBus  (c+66,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter),8);
	vcdp->fullBus  (c+67,(vlTOPp->UartMult__DOT__uartfsm__DOT___zz_2_),8);
	vcdp->fullBus  (c+68,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value),3);
	vcdp->fullBit  (c+69,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity));
	vcdp->fullBus  (c+70,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter),3);
	vcdp->fullBit  (c+71,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg));
	vcdp->fullBus  (c+72,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter),20);
	vcdp->fullBit  (c+73,((0U == vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)));
	vcdp->fullBus  (c+74,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state),3);
	vcdp->fullBit  (c+75,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1));
	vcdp->fullBit  (c+76,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1));
	vcdp->fullBit  (c+77,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
	vcdp->fullBit  (c+78,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3));
	vcdp->fullBit  (c+79,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
	vcdp->fullBit  (c+80,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
	vcdp->fullBit  (c+81,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick));
	vcdp->fullBus  (c+82,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state),3);
	vcdp->fullBit  (c+83,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0));
	vcdp->fullBus  (c+84,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value),3);
	vcdp->fullBit  (c+85,(vlTOPp->UartMult__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity));
	vcdp->fullBit  (c+86,(vlTOPp->io_uart_txd));
	vcdp->fullBit  (c+87,(vlTOPp->io_uart_rxd));
	vcdp->fullBit  (c+88,(vlTOPp->clk));
	vcdp->fullBit  (c+89,(vlTOPp->reset));
	vcdp->fullBit  (c+90,(0U));
	vcdp->fullBus  (c+91,(7U),3);
	vcdp->fullBus  (c+92,(0U),2);
	vcdp->fullBus  (c+93,(0x1aU),20);
	vcdp->fullBus  (c+94,(0x4f4e45U),24);
	vcdp->fullBus  (c+95,(0x4e4f4e45U),32);
    }
}
