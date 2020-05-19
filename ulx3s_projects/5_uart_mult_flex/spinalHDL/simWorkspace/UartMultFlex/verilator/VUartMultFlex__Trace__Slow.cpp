// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUartMultFlex__Syms.h"


//======================

void VUartMultFlex::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VUartMultFlex::traceInit, &VUartMultFlex::traceFull, &VUartMultFlex::traceChg, this);
}
void VUartMultFlex::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VUartMultFlex* t=(VUartMultFlex*)userthis;
    VUartMultFlex__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VUartMultFlex::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VUartMultFlex* t=(VUartMultFlex*)userthis;
    VUartMultFlex__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VUartMultFlex::traceInitThis(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VUartMultFlex::traceFullThis(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VUartMultFlex::traceInitThis__1(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+86,"io_uart_txd",-1);
	vcdp->declBit  (c+87,"io_uart_rxd",-1);
	vcdp->declBit  (c+88,"clk",-1);
	vcdp->declBit  (c+89,"reset",-1);
	vcdp->declBit  (c+86,"v io_uart_txd",-1);
	vcdp->declBit  (c+87,"v io_uart_rxd",-1);
	vcdp->declBit  (c+88,"v clk",-1);
	vcdp->declBit  (c+89,"v reset",-1);
	vcdp->declBit  (c+49,"v uartfsm_io_uart_txd",-1);
	vcdp->declBit  (c+1,"v uartfsm_io_toFnct_valid",-1);
	vcdp->declQuad (c+2,"v uartfsm_io_toFnct_payload",-1,47,0);
	vcdp->declBit  (c+21,"v mult_1__io_toUart_valid",-1);
	vcdp->declQuad (c+4,"v mult_1__io_toUart_payload",-1,47,0);
	vcdp->declBit  (c+49,"v uartfsm io_uart_txd",-1);
	vcdp->declBit  (c+87,"v uartfsm io_uart_rxd",-1);
	vcdp->declBit  (c+1,"v uartfsm io_toFnct_valid",-1);
	vcdp->declQuad (c+2,"v uartfsm io_toFnct_payload",-1,47,0);
	vcdp->declBit  (c+21,"v uartfsm io_fromFnct_valid",-1);
	vcdp->declQuad (c+4,"v uartfsm io_fromFnct_payload",-1,47,0);
	vcdp->declBit  (c+88,"v uartfsm clk",-1);
	vcdp->declBit  (c+89,"v uartfsm reset",-1);
	// Tracing: v uartfsm _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:590
	// Tracing: v uartfsm _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:591
	// Tracing: v uartfsm _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:592
	// Tracing: v uartfsm _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:593
	vcdp->declBit  (c+35,"v uartfsm uartCtrl_1__io_write_ready",-1);
	vcdp->declBit  (c+71,"v uartfsm uartCtrl_1__io_read_valid",-1);
	vcdp->declBus  (c+66,"v uartfsm uartCtrl_1__io_read_payload",-1,7,0);
	vcdp->declBit  (c+49,"v uartfsm uartCtrl_1__io_uart_txd",-1);
	// Tracing: v uartfsm _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:598
	// Tracing: v uartfsm _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:599
	vcdp->declBit  (c+6,"v uartfsm write_valid",-1);
	vcdp->declBit  (c+36,"v uartfsm write_ready",-1);
	vcdp->declBus  (c+22,"v uartfsm write_payload",-1,7,0);
	vcdp->declBit  (c+50,"v uartfsm write_m2sPipe_valid",-1);
	vcdp->declBit  (c+35,"v uartfsm write_m2sPipe_ready",-1);
	vcdp->declBus  (c+67,"v uartfsm write_m2sPipe_payload",-1,7,0);
	// Tracing: v uartfsm _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:606
	// Tracing: v uartfsm _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:607
	vcdp->declBit  (c+90,"v uartfsm fsmIn_wantExit",-1);
	vcdp->declBus  (c+51,"v uartfsm fsmIn_inCounter",-1,2,0);
	vcdp->declQuad (c+52,"v uartfsm fsmIn_buffer",-1,47,0);
	vcdp->declBit  (c+90,"v uartfsm fsmOut_wantExit",-1);
	vcdp->declBus  (c+54,"v uartfsm fsmOut_outCounter",-1,2,0);
	vcdp->declQuad (c+55,"v uartfsm fsmOut_outBuffer",-1,47,0);
	vcdp->declBus  (c+57,"v uartfsm fsmIn_stateReg",-1,2,0);
	vcdp->declBus  (c+23,"v uartfsm fsmIn_stateNext",-1,2,0);
	vcdp->declBus  (c+58,"v uartfsm fsmOut_stateReg",-1,1,0);
	vcdp->declBus  (c+37,"v uartfsm fsmOut_stateNext",-1,1,0);
	vcdp->declArray(c+7,"v uartfsm fsmIn_stateReg_string",-1,159,0);
	vcdp->declArray(c+38,"v uartfsm fsmIn_stateNext_string",-1,159,0);
	vcdp->declArray(c+12,"v uartfsm fsmOut_stateReg_string",-1,159,0);
	vcdp->declArray(c+43,"v uartfsm fsmOut_stateNext_string",-1,159,0);
	vcdp->declBus  (c+91,"v uartfsm uartCtrl_1_ io_config_frame_dataLength",-1,2,0);
	vcdp->declBus  (c+90,"v uartfsm uartCtrl_1_ io_config_frame_stop",-1,0,0);
	vcdp->declBus  (c+92,"v uartfsm uartCtrl_1_ io_config_frame_parity",-1,1,0);
	vcdp->declBus  (c+93,"v uartfsm uartCtrl_1_ io_config_clockDivider",-1,19,0);
	vcdp->declBit  (c+50,"v uartfsm uartCtrl_1_ io_write_valid",-1);
	vcdp->declBit  (c+35,"v uartfsm uartCtrl_1_ io_write_ready",-1);
	vcdp->declBus  (c+67,"v uartfsm uartCtrl_1_ io_write_payload",-1,7,0);
	vcdp->declBit  (c+71,"v uartfsm uartCtrl_1_ io_read_valid",-1);
	vcdp->declBus  (c+66,"v uartfsm uartCtrl_1_ io_read_payload",-1,7,0);
	vcdp->declBit  (c+49,"v uartfsm uartCtrl_1_ io_uart_txd",-1);
	vcdp->declBit  (c+87,"v uartfsm uartCtrl_1_ io_uart_rxd",-1);
	vcdp->declBit  (c+88,"v uartfsm uartCtrl_1_ clk",-1);
	vcdp->declBit  (c+89,"v uartfsm uartCtrl_1_ reset",-1);
	vcdp->declBit  (c+35,"v uartfsm uartCtrl_1_ tx_io_write_ready",-1);
	vcdp->declBit  (c+49,"v uartfsm uartCtrl_1_ tx_io_txd",-1);
	vcdp->declBit  (c+71,"v uartfsm uartCtrl_1_ rx_io_read_valid",-1);
	vcdp->declBus  (c+66,"v uartfsm uartCtrl_1_ rx_io_read_payload",-1,7,0);
	vcdp->declBus  (c+72,"v uartfsm uartCtrl_1_ clockDivider_counter",-1,19,0);
	vcdp->declBit  (c+73,"v uartfsm uartCtrl_1_ clockDivider_tick",-1);
	vcdp->declBus  (c+94,"v uartfsm uartCtrl_1_ io_config_frame_stop_string",-1,23,0);
	vcdp->declBus  (c+95,"v uartfsm uartCtrl_1_ io_config_frame_parity_string",-1,31,0);
	vcdp->declBus  (c+91,"v uartfsm uartCtrl_1_ tx io_configFrame_dataLength",-1,2,0);
	vcdp->declBus  (c+90,"v uartfsm uartCtrl_1_ tx io_configFrame_stop",-1,0,0);
	vcdp->declBus  (c+92,"v uartfsm uartCtrl_1_ tx io_configFrame_parity",-1,1,0);
	vcdp->declBit  (c+73,"v uartfsm uartCtrl_1_ tx io_samplingTick",-1);
	vcdp->declBit  (c+50,"v uartfsm uartCtrl_1_ tx io_write_valid",-1);
	vcdp->declBit  (c+35,"v uartfsm uartCtrl_1_ tx io_write_ready",-1);
	vcdp->declBus  (c+67,"v uartfsm uartCtrl_1_ tx io_write_payload",-1,7,0);
	vcdp->declBit  (c+49,"v uartfsm uartCtrl_1_ tx io_txd",-1);
	vcdp->declBit  (c+88,"v uartfsm uartCtrl_1_ tx clk",-1);
	vcdp->declBit  (c+89,"v uartfsm uartCtrl_1_ tx reset",-1);
	// Tracing: v uartfsm uartCtrl_1_ tx _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:80
	// Tracing: v uartfsm uartCtrl_1_ tx _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:81
	// Tracing: v uartfsm uartCtrl_1_ tx _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:82
	// Tracing: v uartfsm uartCtrl_1_ tx _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:83
	// Tracing: v uartfsm uartCtrl_1_ tx _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:84
	vcdp->declBit  (c+24,"v uartfsm uartCtrl_1_ tx clockDivider_counter_willIncrement",-1);
	vcdp->declBit  (c+90,"v uartfsm uartCtrl_1_ tx clockDivider_counter_willClear",-1);
	vcdp->declBus  (c+20,"v uartfsm uartCtrl_1_ tx clockDivider_counter_valueNext",-1,2,0);
	vcdp->declBus  (c+59,"v uartfsm uartCtrl_1_ tx clockDivider_counter_value",-1,2,0);
	vcdp->declBit  (c+60,"v uartfsm uartCtrl_1_ tx clockDivider_counter_willOverflowIfInc",-1);
	vcdp->declBit  (c+48,"v uartfsm uartCtrl_1_ tx clockDivider_willOverflow",-1);
	vcdp->declBus  (c+68,"v uartfsm uartCtrl_1_ tx tickCounter_value",-1,2,0);
	vcdp->declBus  (c+74,"v uartfsm uartCtrl_1_ tx stateMachine_state",-1,2,0);
	vcdp->declBit  (c+69,"v uartfsm uartCtrl_1_ tx stateMachine_parity",-1);
	vcdp->declBit  (c+25,"v uartfsm uartCtrl_1_ tx stateMachine_txd",-1);
	vcdp->declBit  (c+49,"v uartfsm uartCtrl_1_ tx stateMachine_txd_regNext",-1);
	vcdp->declBus  (c+94,"v uartfsm uartCtrl_1_ tx io_configFrame_stop_string",-1,23,0);
	vcdp->declBus  (c+95,"v uartfsm uartCtrl_1_ tx io_configFrame_parity_string",-1,31,0);
	vcdp->declQuad (c+26,"v uartfsm uartCtrl_1_ tx stateMachine_state_string",-1,47,0);
	vcdp->declBus  (c+91,"v uartfsm uartCtrl_1_ rx io_configFrame_dataLength",-1,2,0);
	vcdp->declBus  (c+90,"v uartfsm uartCtrl_1_ rx io_configFrame_stop",-1,0,0);
	vcdp->declBus  (c+92,"v uartfsm uartCtrl_1_ rx io_configFrame_parity",-1,1,0);
	vcdp->declBit  (c+73,"v uartfsm uartCtrl_1_ rx io_samplingTick",-1);
	vcdp->declBit  (c+71,"v uartfsm uartCtrl_1_ rx io_read_valid",-1);
	vcdp->declBus  (c+66,"v uartfsm uartCtrl_1_ rx io_read_payload",-1,7,0);
	vcdp->declBit  (c+87,"v uartfsm uartCtrl_1_ rx io_rxd",-1);
	vcdp->declBit  (c+88,"v uartfsm uartCtrl_1_ rx clk",-1);
	vcdp->declBit  (c+89,"v uartfsm uartCtrl_1_ rx reset",-1);
	// Tracing: v uartfsm uartCtrl_1_ rx _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:284
	vcdp->declBit  (c+75,"v uartfsm uartCtrl_1_ rx bufferCC_1__io_dataOut",-1);
	// Tracing: v uartfsm uartCtrl_1_ rx _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:286
	// Tracing: v uartfsm uartCtrl_1_ rx _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:287
	// Tracing: v uartfsm uartCtrl_1_ rx _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:288
	// Tracing: v uartfsm uartCtrl_1_ rx _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:289
	// Tracing: v uartfsm uartCtrl_1_ rx _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:290
	// Tracing: v uartfsm uartCtrl_1_ rx _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:291
	// Tracing: v uartfsm uartCtrl_1_ rx _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:292
	// Tracing: v uartfsm uartCtrl_1_ rx _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:293
	// Tracing: v uartfsm uartCtrl_1_ rx _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:294
	// Tracing: v uartfsm uartCtrl_1_ rx _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:295
	// Tracing: v uartfsm uartCtrl_1_ rx _zz_12_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:296
	vcdp->declBit  (c+75,"v uartfsm uartCtrl_1_ rx sampler_synchroniser",-1);
	vcdp->declBit  (c+75,"v uartfsm uartCtrl_1_ rx sampler_samples_0",-1);
	vcdp->declBit  (c+76,"v uartfsm uartCtrl_1_ rx sampler_samples_1",-1);
	vcdp->declBit  (c+77,"v uartfsm uartCtrl_1_ rx sampler_samples_2",-1);
	vcdp->declBit  (c+78,"v uartfsm uartCtrl_1_ rx sampler_samples_3",-1);
	vcdp->declBit  (c+79,"v uartfsm uartCtrl_1_ rx sampler_samples_4",-1);
	vcdp->declBit  (c+80,"v uartfsm uartCtrl_1_ rx sampler_value",-1);
	vcdp->declBit  (c+81,"v uartfsm uartCtrl_1_ rx sampler_tick",-1);
	vcdp->declBus  (c+70,"v uartfsm uartCtrl_1_ rx bitTimer_counter",-1,2,0);
	vcdp->declBit  (c+28,"v uartfsm uartCtrl_1_ rx bitTimer_tick",-1);
	vcdp->declBus  (c+84,"v uartfsm uartCtrl_1_ rx bitCounter_value",-1,2,0);
	vcdp->declBus  (c+82,"v uartfsm uartCtrl_1_ rx stateMachine_state",-1,2,0);
	vcdp->declBit  (c+85,"v uartfsm uartCtrl_1_ rx stateMachine_parity",-1);
	vcdp->declBus  (c+66,"v uartfsm uartCtrl_1_ rx stateMachine_shifter",-1,7,0);
	vcdp->declBit  (c+71,"v uartfsm uartCtrl_1_ rx stateMachine_validReg",-1);
	vcdp->declBus  (c+94,"v uartfsm uartCtrl_1_ rx io_configFrame_stop_string",-1,23,0);
	vcdp->declBus  (c+95,"v uartfsm uartCtrl_1_ rx io_configFrame_parity_string",-1,31,0);
	vcdp->declQuad (c+29,"v uartfsm uartCtrl_1_ rx stateMachine_state_string",-1,47,0);
	vcdp->declBit  (c+90,"v uartfsm uartCtrl_1_ rx bufferCC_1_ io_initial",-1);
	vcdp->declBit  (c+87,"v uartfsm uartCtrl_1_ rx bufferCC_1_ io_dataIn",-1);
	vcdp->declBit  (c+75,"v uartfsm uartCtrl_1_ rx bufferCC_1_ io_dataOut",-1);
	vcdp->declBit  (c+88,"v uartfsm uartCtrl_1_ rx bufferCC_1_ clk",-1);
	vcdp->declBit  (c+89,"v uartfsm uartCtrl_1_ rx bufferCC_1_ reset",-1);
	vcdp->declBit  (c+83,"v uartfsm uartCtrl_1_ rx bufferCC_1_ buffers_0",-1);
	vcdp->declBit  (c+75,"v uartfsm uartCtrl_1_ rx bufferCC_1_ buffers_1",-1);
	vcdp->declBit  (c+1,"v mult_1_ io_fromUart_valid",-1);
	vcdp->declQuad (c+2,"v mult_1_ io_fromUart_payload",-1,47,0);
	vcdp->declBit  (c+21,"v mult_1_ io_toUart_valid",-1);
	vcdp->declQuad (c+4,"v mult_1_ io_toUart_payload",-1,47,0);
	vcdp->declBit  (c+88,"v mult_1_ clk",-1);
	vcdp->declBit  (c+89,"v mult_1_ reset",-1);
	vcdp->declBit  (c+90,"v mult_1_ fsm_wantExit",-1);
	vcdp->declQuad (c+61,"v mult_1_ fsm_buffer",-1,47,0);
	vcdp->declQuad (c+63,"v mult_1_ fsm_result",-1,47,0);
	vcdp->declBus  (c+65,"v mult_1_ fsm_stateReg",-1,1,0);
	vcdp->declBus  (c+31,"v mult_1_ fsm_stateNext",-1,1,0);
	// Tracing: v mult_1_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/5_uart_mult_flex/spinalHDL/tmp/job_1/UartMultFlex.v:884
	vcdp->declArray(c+17,"v mult_1_ fsm_stateReg_string",-1,79,0);
	vcdp->declArray(c+32,"v mult_1_ fsm_stateNext_string",-1,79,0);
    }
}

void VUartMultFlex::traceFullThis__1(VUartMultFlex__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartMultFlex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+6,(vlTOPp->v__DOT__uartfsm__DOT__write_valid));
	vcdp->fullArray(c+7,(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateReg_string),160);
	vcdp->fullArray(c+12,(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateReg_string),160);
	vcdp->fullBit  (c+1,(vlTOPp->v__DOT__uartfsm_io_toFnct_valid));
	vcdp->fullQuad (c+2,(vlTOPp->v__DOT__uartfsm_io_toFnct_payload),48);
	vcdp->fullQuad (c+4,(vlTOPp->v__DOT__mult_1___05Fio_toUart_payload),48);
	vcdp->fullArray(c+17,(vlTOPp->v__DOT__mult_1___DOT__fsm_stateReg_string),80);
	vcdp->fullBus  (c+20,((7U & ((IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
				     + (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)))),3);
	vcdp->fullBus  (c+22,(vlTOPp->v__DOT__uartfsm__DOT__write_payload),8);
	vcdp->fullBus  (c+23,(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateNext),3);
	vcdp->fullBit  (c+24,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
	vcdp->fullBit  (c+25,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
	vcdp->fullQuad (c+26,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string),48);
	vcdp->fullBit  (c+28,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick));
	vcdp->fullQuad (c+29,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string),48);
	vcdp->fullBit  (c+21,(vlTOPp->v__DOT__mult_1___05Fio_toUart_valid));
	vcdp->fullBus  (c+31,(vlTOPp->v__DOT__mult_1___DOT__fsm_stateNext),2);
	vcdp->fullArray(c+32,(vlTOPp->v__DOT__mult_1___DOT__fsm_stateNext_string),80);
	vcdp->fullBit  (c+36,(vlTOPp->v__DOT__uartfsm__DOT__write_ready));
	vcdp->fullBus  (c+37,(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateNext),2);
	vcdp->fullArray(c+38,(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateNext_string),160);
	vcdp->fullArray(c+43,(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateNext_string),160);
	vcdp->fullBit  (c+35,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready));
	vcdp->fullBit  (c+48,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow));
	vcdp->fullBus  (c+51,(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_inCounter),3);
	vcdp->fullQuad (c+52,(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_buffer),48);
	vcdp->fullBus  (c+54,(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_outCounter),3);
	vcdp->fullQuad (c+55,(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_outBuffer),48);
	vcdp->fullBus  (c+57,(vlTOPp->v__DOT__uartfsm__DOT__fsmIn_stateReg),3);
	vcdp->fullBus  (c+58,(vlTOPp->v__DOT__uartfsm__DOT__fsmOut_stateReg),2);
	vcdp->fullBit  (c+50,(vlTOPp->v__DOT__uartfsm__DOT___zz_1_));
	vcdp->fullBus  (c+59,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value),3);
	vcdp->fullBit  (c+60,((7U == (IData)(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value))));
	vcdp->fullBit  (c+49,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext));
	vcdp->fullQuad (c+61,(vlTOPp->v__DOT__mult_1___DOT__fsm_buffer),48);
	vcdp->fullQuad (c+63,(vlTOPp->v__DOT__mult_1___DOT__fsm_result),48);
	vcdp->fullBus  (c+65,(vlTOPp->v__DOT__mult_1___DOT__fsm_stateReg),2);
	vcdp->fullBus  (c+67,(vlTOPp->v__DOT__uartfsm__DOT___zz_2_),8);
	vcdp->fullBus  (c+68,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value),3);
	vcdp->fullBit  (c+69,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity));
	vcdp->fullBus  (c+70,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter),3);
	vcdp->fullBus  (c+66,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter),8);
	vcdp->fullBus  (c+72,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter),20);
	vcdp->fullBus  (c+74,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state),3);
	vcdp->fullBit  (c+73,((0U == vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)));
	vcdp->fullBit  (c+76,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1));
	vcdp->fullBit  (c+77,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
	vcdp->fullBit  (c+78,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3));
	vcdp->fullBit  (c+79,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
	vcdp->fullBit  (c+80,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
	vcdp->fullBit  (c+81,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick));
	vcdp->fullBus  (c+82,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state),3);
	vcdp->fullBit  (c+71,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg));
	vcdp->fullBit  (c+83,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0));
	vcdp->fullBit  (c+75,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1));
	vcdp->fullBus  (c+84,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value),3);
	vcdp->fullBit  (c+85,(vlTOPp->v__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity));
	vcdp->fullBit  (c+86,(vlTOPp->io_uart_txd));
	vcdp->fullBit  (c+87,(vlTOPp->io_uart_rxd));
	vcdp->fullBit  (c+88,(vlTOPp->clk));
	vcdp->fullBit  (c+89,(vlTOPp->reset));
	vcdp->fullBus  (c+93,(0x1aU),20);
	vcdp->fullBus  (c+91,(7U),3);
	vcdp->fullBus  (c+92,(0U),2);
	vcdp->fullBus  (c+94,(0x4f4e45U),24);
	vcdp->fullBus  (c+95,(0x4e4f4e45U),32);
	vcdp->fullBit  (c+90,(0U));
    }
}
