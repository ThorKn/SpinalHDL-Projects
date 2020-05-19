// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUartFsmInOut__Syms.h"


//======================

void VUartFsmInOut::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VUartFsmInOut::traceInit, &VUartFsmInOut::traceFull, &VUartFsmInOut::traceChg, this);
}
void VUartFsmInOut::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VUartFsmInOut* t=(VUartFsmInOut*)userthis;
    VUartFsmInOut__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VUartFsmInOut::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VUartFsmInOut* t=(VUartFsmInOut*)userthis;
    VUartFsmInOut__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VUartFsmInOut::traceInitThis(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VUartFsmInOut::traceFullThis(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VUartFsmInOut::traceInitThis__1(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+81,"io_uart_txd",-1);
	vcdp->declBit  (c+82,"io_uart_rxd",-1);
	vcdp->declBit  (c+83,"clk",-1);
	vcdp->declBit  (c+84,"reset",-1);
	vcdp->declBit  (c+81,"UartFsmInOut io_uart_txd",-1);
	vcdp->declBit  (c+82,"UartFsmInOut io_uart_rxd",-1);
	vcdp->declBit  (c+83,"UartFsmInOut clk",-1);
	vcdp->declBit  (c+84,"UartFsmInOut reset",-1);
	// Tracing: UartFsmInOut _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:580
	// Tracing: UartFsmInOut _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:581
	// Tracing: UartFsmInOut _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:582
	// Tracing: UartFsmInOut _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:583
	// Tracing: UartFsmInOut _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:584
	vcdp->declBit  (c+14,"UartFsmInOut uartCtrl_1__io_write_ready",-1);
	vcdp->declBit  (c+66,"UartFsmInOut uartCtrl_1__io_read_valid",-1);
	vcdp->declBus  (c+61,"UartFsmInOut uartCtrl_1__io_read_payload",-1,7,0);
	vcdp->declBit  (c+37,"UartFsmInOut uartCtrl_1__io_uart_txd",-1);
	vcdp->declBus  (c+38,"UartFsmInOut payload_0",-1,7,0);
	vcdp->declBus  (c+39,"UartFsmInOut payload_1",-1,7,0);
	vcdp->declBus  (c+40,"UartFsmInOut payload_2",-1,7,0);
	vcdp->declBus  (c+41,"UartFsmInOut payload_3",-1,7,0);
	vcdp->declBus  (c+42,"UartFsmInOut payload_4",-1,7,0);
	vcdp->declBus  (c+43,"UartFsmInOut payload_5",-1,7,0);
	vcdp->declBus  (c+44,"UartFsmInOut payload_6",-1,7,0);
	vcdp->declBus  (c+45,"UartFsmInOut payload_7",-1,7,0);
	vcdp->declBit  (c+1,"UartFsmInOut payloadValid",-1);
	vcdp->declBit  (c+2,"UartFsmInOut write_valid",-1);
	vcdp->declBit  (c+15,"UartFsmInOut write_ready",-1);
	vcdp->declBus  (c+16,"UartFsmInOut write_payload",-1,7,0);
	vcdp->declBit  (c+46,"UartFsmInOut write_m2sPipe_valid",-1);
	vcdp->declBit  (c+14,"UartFsmInOut write_m2sPipe_ready",-1);
	vcdp->declBus  (c+62,"UartFsmInOut write_m2sPipe_payload",-1,7,0);
	// Tracing: UartFsmInOut _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:604
	// Tracing: UartFsmInOut _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:605
	vcdp->declBit  (c+85,"UartFsmInOut fsmIn_wantExit",-1);
	vcdp->declBus  (c+47,"UartFsmInOut fsmIn_inCounter",-1,2,0);
	vcdp->declBus  (c+48,"UartFsmInOut fsmIn_buffer_0",-1,7,0);
	vcdp->declBus  (c+49,"UartFsmInOut fsmIn_buffer_1",-1,7,0);
	vcdp->declBus  (c+50,"UartFsmInOut fsmIn_buffer_2",-1,7,0);
	vcdp->declBus  (c+51,"UartFsmInOut fsmIn_buffer_3",-1,7,0);
	vcdp->declBus  (c+52,"UartFsmInOut fsmIn_buffer_4",-1,7,0);
	vcdp->declBus  (c+53,"UartFsmInOut fsmIn_buffer_5",-1,7,0);
	vcdp->declBus  (c+54,"UartFsmInOut fsmIn_buffer_6",-1,7,0);
	vcdp->declBus  (c+55,"UartFsmInOut fsmIn_buffer_7",-1,7,0);
	vcdp->declBit  (c+85,"UartFsmInOut fsmOut_wantExit",-1);
	vcdp->declBus  (c+56,"UartFsmInOut fsmOut_outCounter",-1,2,0);
	vcdp->declBus  (c+57,"UartFsmInOut fsmIn_stateReg",-1,2,0);
	vcdp->declBus  (c+17,"UartFsmInOut fsmIn_stateNext",-1,2,0);
	// Tracing: UartFsmInOut _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:620
	// Tracing: UartFsmInOut _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:621
	vcdp->declBus  (c+58,"UartFsmInOut fsmOut_stateReg",-1,1,0);
	vcdp->declBus  (c+18,"UartFsmInOut fsmOut_stateNext",-1,1,0);
	vcdp->declArray(c+3,"UartFsmInOut fsmIn_stateReg_string",-1,159,0);
	vcdp->declArray(c+19,"UartFsmInOut fsmIn_stateNext_string",-1,159,0);
	vcdp->declArray(c+8,"UartFsmInOut fsmOut_stateReg_string",-1,159,0);
	vcdp->declArray(c+24,"UartFsmInOut fsmOut_stateNext_string",-1,159,0);
	vcdp->declBus  (c+86,"UartFsmInOut uartCtrl_1_ io_config_frame_dataLength",-1,2,0);
	vcdp->declBus  (c+85,"UartFsmInOut uartCtrl_1_ io_config_frame_stop",-1,0,0);
	vcdp->declBus  (c+87,"UartFsmInOut uartCtrl_1_ io_config_frame_parity",-1,1,0);
	vcdp->declBus  (c+88,"UartFsmInOut uartCtrl_1_ io_config_clockDivider",-1,19,0);
	vcdp->declBit  (c+46,"UartFsmInOut uartCtrl_1_ io_write_valid",-1);
	vcdp->declBit  (c+14,"UartFsmInOut uartCtrl_1_ io_write_ready",-1);
	vcdp->declBus  (c+62,"UartFsmInOut uartCtrl_1_ io_write_payload",-1,7,0);
	vcdp->declBit  (c+66,"UartFsmInOut uartCtrl_1_ io_read_valid",-1);
	vcdp->declBus  (c+61,"UartFsmInOut uartCtrl_1_ io_read_payload",-1,7,0);
	vcdp->declBit  (c+37,"UartFsmInOut uartCtrl_1_ io_uart_txd",-1);
	vcdp->declBit  (c+82,"UartFsmInOut uartCtrl_1_ io_uart_rxd",-1);
	vcdp->declBit  (c+83,"UartFsmInOut uartCtrl_1_ clk",-1);
	vcdp->declBit  (c+84,"UartFsmInOut uartCtrl_1_ reset",-1);
	vcdp->declBit  (c+14,"UartFsmInOut uartCtrl_1_ tx_io_write_ready",-1);
	vcdp->declBit  (c+37,"UartFsmInOut uartCtrl_1_ tx_io_txd",-1);
	vcdp->declBit  (c+66,"UartFsmInOut uartCtrl_1_ rx_io_read_valid",-1);
	vcdp->declBus  (c+61,"UartFsmInOut uartCtrl_1_ rx_io_read_payload",-1,7,0);
	vcdp->declBus  (c+67,"UartFsmInOut uartCtrl_1_ clockDivider_counter",-1,19,0);
	vcdp->declBit  (c+68,"UartFsmInOut uartCtrl_1_ clockDivider_tick",-1);
	vcdp->declBus  (c+89,"UartFsmInOut uartCtrl_1_ io_config_frame_stop_string",-1,23,0);
	vcdp->declBus  (c+90,"UartFsmInOut uartCtrl_1_ io_config_frame_parity_string",-1,31,0);
	vcdp->declBus  (c+86,"UartFsmInOut uartCtrl_1_ tx io_configFrame_dataLength",-1,2,0);
	vcdp->declBus  (c+85,"UartFsmInOut uartCtrl_1_ tx io_configFrame_stop",-1,0,0);
	vcdp->declBus  (c+87,"UartFsmInOut uartCtrl_1_ tx io_configFrame_parity",-1,1,0);
	vcdp->declBit  (c+68,"UartFsmInOut uartCtrl_1_ tx io_samplingTick",-1);
	vcdp->declBit  (c+46,"UartFsmInOut uartCtrl_1_ tx io_write_valid",-1);
	vcdp->declBit  (c+14,"UartFsmInOut uartCtrl_1_ tx io_write_ready",-1);
	vcdp->declBus  (c+62,"UartFsmInOut uartCtrl_1_ tx io_write_payload",-1,7,0);
	vcdp->declBit  (c+37,"UartFsmInOut uartCtrl_1_ tx io_txd",-1);
	vcdp->declBit  (c+83,"UartFsmInOut uartCtrl_1_ tx clk",-1);
	vcdp->declBit  (c+84,"UartFsmInOut uartCtrl_1_ tx reset",-1);
	// Tracing: UartFsmInOut uartCtrl_1_ tx _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:74
	// Tracing: UartFsmInOut uartCtrl_1_ tx _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:75
	// Tracing: UartFsmInOut uartCtrl_1_ tx _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:76
	// Tracing: UartFsmInOut uartCtrl_1_ tx _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:77
	// Tracing: UartFsmInOut uartCtrl_1_ tx _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:78
	vcdp->declBit  (c+29,"UartFsmInOut uartCtrl_1_ tx clockDivider_counter_willIncrement",-1);
	vcdp->declBit  (c+85,"UartFsmInOut uartCtrl_1_ tx clockDivider_counter_willClear",-1);
	vcdp->declBus  (c+13,"UartFsmInOut uartCtrl_1_ tx clockDivider_counter_valueNext",-1,2,0);
	vcdp->declBus  (c+59,"UartFsmInOut uartCtrl_1_ tx clockDivider_counter_value",-1,2,0);
	vcdp->declBit  (c+60,"UartFsmInOut uartCtrl_1_ tx clockDivider_counter_willOverflowIfInc",-1);
	vcdp->declBit  (c+30,"UartFsmInOut uartCtrl_1_ tx clockDivider_willOverflow",-1);
	vcdp->declBus  (c+63,"UartFsmInOut uartCtrl_1_ tx tickCounter_value",-1,2,0);
	vcdp->declBus  (c+69,"UartFsmInOut uartCtrl_1_ tx stateMachine_state",-1,2,0);
	vcdp->declBit  (c+64,"UartFsmInOut uartCtrl_1_ tx stateMachine_parity",-1);
	vcdp->declBit  (c+31,"UartFsmInOut uartCtrl_1_ tx stateMachine_txd",-1);
	vcdp->declBit  (c+37,"UartFsmInOut uartCtrl_1_ tx stateMachine_txd_regNext",-1);
	vcdp->declBus  (c+89,"UartFsmInOut uartCtrl_1_ tx io_configFrame_stop_string",-1,23,0);
	vcdp->declBus  (c+90,"UartFsmInOut uartCtrl_1_ tx io_configFrame_parity_string",-1,31,0);
	vcdp->declQuad (c+32,"UartFsmInOut uartCtrl_1_ tx stateMachine_state_string",-1,47,0);
	vcdp->declBus  (c+86,"UartFsmInOut uartCtrl_1_ rx io_configFrame_dataLength",-1,2,0);
	vcdp->declBus  (c+85,"UartFsmInOut uartCtrl_1_ rx io_configFrame_stop",-1,0,0);
	vcdp->declBus  (c+87,"UartFsmInOut uartCtrl_1_ rx io_configFrame_parity",-1,1,0);
	vcdp->declBit  (c+68,"UartFsmInOut uartCtrl_1_ rx io_samplingTick",-1);
	vcdp->declBit  (c+66,"UartFsmInOut uartCtrl_1_ rx io_read_valid",-1);
	vcdp->declBus  (c+61,"UartFsmInOut uartCtrl_1_ rx io_read_payload",-1,7,0);
	vcdp->declBit  (c+82,"UartFsmInOut uartCtrl_1_ rx io_rxd",-1);
	vcdp->declBit  (c+83,"UartFsmInOut uartCtrl_1_ rx clk",-1);
	vcdp->declBit  (c+84,"UartFsmInOut uartCtrl_1_ rx reset",-1);
	// Tracing: UartFsmInOut uartCtrl_1_ rx _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:278
	vcdp->declBit  (c+70,"UartFsmInOut uartCtrl_1_ rx bufferCC_1__io_dataOut",-1);
	// Tracing: UartFsmInOut uartCtrl_1_ rx _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:280
	// Tracing: UartFsmInOut uartCtrl_1_ rx _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:281
	// Tracing: UartFsmInOut uartCtrl_1_ rx _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:282
	// Tracing: UartFsmInOut uartCtrl_1_ rx _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:283
	// Tracing: UartFsmInOut uartCtrl_1_ rx _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:284
	// Tracing: UartFsmInOut uartCtrl_1_ rx _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:285
	// Tracing: UartFsmInOut uartCtrl_1_ rx _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:286
	// Tracing: UartFsmInOut uartCtrl_1_ rx _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:287
	// Tracing: UartFsmInOut uartCtrl_1_ rx _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:288
	// Tracing: UartFsmInOut uartCtrl_1_ rx _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:289
	// Tracing: UartFsmInOut uartCtrl_1_ rx _zz_12_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/tmp/job_1/UartFsmInOut.v:290
	vcdp->declBit  (c+70,"UartFsmInOut uartCtrl_1_ rx sampler_synchroniser",-1);
	vcdp->declBit  (c+70,"UartFsmInOut uartCtrl_1_ rx sampler_samples_0",-1);
	vcdp->declBit  (c+71,"UartFsmInOut uartCtrl_1_ rx sampler_samples_1",-1);
	vcdp->declBit  (c+72,"UartFsmInOut uartCtrl_1_ rx sampler_samples_2",-1);
	vcdp->declBit  (c+73,"UartFsmInOut uartCtrl_1_ rx sampler_samples_3",-1);
	vcdp->declBit  (c+74,"UartFsmInOut uartCtrl_1_ rx sampler_samples_4",-1);
	vcdp->declBit  (c+75,"UartFsmInOut uartCtrl_1_ rx sampler_value",-1);
	vcdp->declBit  (c+76,"UartFsmInOut uartCtrl_1_ rx sampler_tick",-1);
	vcdp->declBus  (c+65,"UartFsmInOut uartCtrl_1_ rx bitTimer_counter",-1,2,0);
	vcdp->declBit  (c+34,"UartFsmInOut uartCtrl_1_ rx bitTimer_tick",-1);
	vcdp->declBus  (c+79,"UartFsmInOut uartCtrl_1_ rx bitCounter_value",-1,2,0);
	vcdp->declBus  (c+77,"UartFsmInOut uartCtrl_1_ rx stateMachine_state",-1,2,0);
	vcdp->declBit  (c+80,"UartFsmInOut uartCtrl_1_ rx stateMachine_parity",-1);
	vcdp->declBus  (c+61,"UartFsmInOut uartCtrl_1_ rx stateMachine_shifter",-1,7,0);
	vcdp->declBit  (c+66,"UartFsmInOut uartCtrl_1_ rx stateMachine_validReg",-1);
	vcdp->declBus  (c+89,"UartFsmInOut uartCtrl_1_ rx io_configFrame_stop_string",-1,23,0);
	vcdp->declBus  (c+90,"UartFsmInOut uartCtrl_1_ rx io_configFrame_parity_string",-1,31,0);
	vcdp->declQuad (c+35,"UartFsmInOut uartCtrl_1_ rx stateMachine_state_string",-1,47,0);
	vcdp->declBit  (c+85,"UartFsmInOut uartCtrl_1_ rx bufferCC_1_ io_initial",-1);
	vcdp->declBit  (c+82,"UartFsmInOut uartCtrl_1_ rx bufferCC_1_ io_dataIn",-1);
	vcdp->declBit  (c+70,"UartFsmInOut uartCtrl_1_ rx bufferCC_1_ io_dataOut",-1);
	vcdp->declBit  (c+83,"UartFsmInOut uartCtrl_1_ rx bufferCC_1_ clk",-1);
	vcdp->declBit  (c+84,"UartFsmInOut uartCtrl_1_ rx bufferCC_1_ reset",-1);
	vcdp->declBit  (c+78,"UartFsmInOut uartCtrl_1_ rx bufferCC_1_ buffers_0",-1);
	vcdp->declBit  (c+70,"UartFsmInOut uartCtrl_1_ rx bufferCC_1_ buffers_1",-1);
    }
}

void VUartFsmInOut::traceFullThis__1(VUartFsmInOut__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartFsmInOut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->UartFsmInOut__DOT__payloadValid));
	vcdp->fullBit  (c+2,(vlTOPp->UartFsmInOut__DOT__write_valid));
	vcdp->fullArray(c+3,(vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg_string),160);
	vcdp->fullArray(c+8,(vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg_string),160);
	vcdp->fullBus  (c+13,((7U & ((IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
				     + (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)))),3);
	vcdp->fullBit  (c+14,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx_io_write_ready));
	vcdp->fullBit  (c+15,(vlTOPp->UartFsmInOut__DOT__write_ready));
	vcdp->fullBus  (c+16,(vlTOPp->UartFsmInOut__DOT__write_payload),8);
	vcdp->fullBus  (c+17,(vlTOPp->UartFsmInOut__DOT__fsmIn_stateNext),3);
	vcdp->fullBus  (c+18,(vlTOPp->UartFsmInOut__DOT__fsmOut_stateNext),2);
	vcdp->fullArray(c+19,(vlTOPp->UartFsmInOut__DOT__fsmIn_stateNext_string),160);
	vcdp->fullArray(c+24,(vlTOPp->UartFsmInOut__DOT__fsmOut_stateNext_string),160);
	vcdp->fullBit  (c+29,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
	vcdp->fullBit  (c+30,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_willOverflow));
	vcdp->fullBit  (c+31,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
	vcdp->fullQuad (c+32,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string),48);
	vcdp->fullBit  (c+34,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick));
	vcdp->fullQuad (c+35,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string),48);
	vcdp->fullBit  (c+37,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext));
	vcdp->fullBus  (c+38,(vlTOPp->UartFsmInOut__DOT__payload_0),8);
	vcdp->fullBus  (c+39,(vlTOPp->UartFsmInOut__DOT__payload_1),8);
	vcdp->fullBus  (c+40,(vlTOPp->UartFsmInOut__DOT__payload_2),8);
	vcdp->fullBus  (c+41,(vlTOPp->UartFsmInOut__DOT__payload_3),8);
	vcdp->fullBus  (c+42,(vlTOPp->UartFsmInOut__DOT__payload_4),8);
	vcdp->fullBus  (c+43,(vlTOPp->UartFsmInOut__DOT__payload_5),8);
	vcdp->fullBus  (c+44,(vlTOPp->UartFsmInOut__DOT__payload_6),8);
	vcdp->fullBus  (c+45,(vlTOPp->UartFsmInOut__DOT__payload_7),8);
	vcdp->fullBit  (c+46,(vlTOPp->UartFsmInOut__DOT___zz_1_));
	vcdp->fullBus  (c+47,(vlTOPp->UartFsmInOut__DOT__fsmIn_inCounter),3);
	vcdp->fullBus  (c+48,(vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_0),8);
	vcdp->fullBus  (c+49,(vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_1),8);
	vcdp->fullBus  (c+50,(vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_2),8);
	vcdp->fullBus  (c+51,(vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_3),8);
	vcdp->fullBus  (c+52,(vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_4),8);
	vcdp->fullBus  (c+53,(vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_5),8);
	vcdp->fullBus  (c+54,(vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_6),8);
	vcdp->fullBus  (c+55,(vlTOPp->UartFsmInOut__DOT__fsmIn_buffer_7),8);
	vcdp->fullBus  (c+56,(vlTOPp->UartFsmInOut__DOT__fsmOut_outCounter),3);
	vcdp->fullBus  (c+57,(vlTOPp->UartFsmInOut__DOT__fsmIn_stateReg),3);
	vcdp->fullBus  (c+58,(vlTOPp->UartFsmInOut__DOT__fsmOut_stateReg),2);
	vcdp->fullBus  (c+59,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value),3);
	vcdp->fullBit  (c+60,((7U == (IData)(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value))));
	vcdp->fullBus  (c+61,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter),8);
	vcdp->fullBus  (c+62,(vlTOPp->UartFsmInOut__DOT___zz_2_),8);
	vcdp->fullBus  (c+63,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value),3);
	vcdp->fullBit  (c+64,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity));
	vcdp->fullBus  (c+65,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter),3);
	vcdp->fullBit  (c+66,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg));
	vcdp->fullBus  (c+67,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter),20);
	vcdp->fullBit  (c+68,((0U == vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__clockDivider_counter)));
	vcdp->fullBus  (c+69,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state),3);
	vcdp->fullBit  (c+70,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_1));
	vcdp->fullBit  (c+71,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1));
	vcdp->fullBit  (c+72,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
	vcdp->fullBit  (c+73,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3));
	vcdp->fullBit  (c+74,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
	vcdp->fullBit  (c+75,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
	vcdp->fullBit  (c+76,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick));
	vcdp->fullBus  (c+77,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state),3);
	vcdp->fullBit  (c+78,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bufferCC_1___DOT__buffers_0));
	vcdp->fullBus  (c+79,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value),3);
	vcdp->fullBit  (c+80,(vlTOPp->UartFsmInOut__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity));
	vcdp->fullBit  (c+81,(vlTOPp->io_uart_txd));
	vcdp->fullBit  (c+82,(vlTOPp->io_uart_rxd));
	vcdp->fullBit  (c+83,(vlTOPp->clk));
	vcdp->fullBit  (c+84,(vlTOPp->reset));
	vcdp->fullBit  (c+85,(0U));
	vcdp->fullBus  (c+86,(7U),3);
	vcdp->fullBus  (c+87,(0U),2);
	vcdp->fullBus  (c+88,(0x1aU),20);
	vcdp->fullBus  (c+89,(0x4f4e45U),24);
	vcdp->fullBus  (c+90,(0x4e4f4e45U),32);
    }
}
