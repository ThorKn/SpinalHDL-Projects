// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUartKaraReg__Syms.h"


//======================

void VUartKaraReg::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VUartKaraReg::traceInit, &VUartKaraReg::traceFull, &VUartKaraReg::traceChg, this);
}
void VUartKaraReg::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VUartKaraReg* t=(VUartKaraReg*)userthis;
    VUartKaraReg__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VUartKaraReg::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VUartKaraReg* t=(VUartKaraReg*)userthis;
    VUartKaraReg__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VUartKaraReg::traceInitThis(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VUartKaraReg::traceFullThis(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VUartKaraReg::traceInitThis__1(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+429,"io_uart_txd",-1);
	vcdp->declBit  (c+430,"io_uart_rxd",-1);
	vcdp->declBit  (c+431,"clk",-1);
	vcdp->declBit  (c+432,"reset",-1);
	vcdp->declBit  (c+429,"UartKaraReg io_uart_txd",-1);
	vcdp->declBit  (c+430,"UartKaraReg io_uart_rxd",-1);
	vcdp->declBit  (c+431,"UartKaraReg clk",-1);
	vcdp->declBit  (c+432,"UartKaraReg reset",-1);
	vcdp->declBit  (c+328,"UartKaraReg uartfsm_io_uart_txd",-1);
	vcdp->declBit  (c+1,"UartKaraReg uartfsm_io_toFnct_valid",-1);
	vcdp->declArray(c+2,"UartKaraReg uartfsm_io_toFnct_payload",-1,255,0);
	vcdp->declBit  (c+304,"UartKaraReg karareg_1__io_toUart_valid",-1);
	vcdp->declArray(c+10,"UartKaraReg karareg_1__io_toUart_payload",-1,255,0);
	vcdp->declBit  (c+328,"UartKaraReg uartfsm io_uart_txd",-1);
	vcdp->declBit  (c+430,"UartKaraReg uartfsm io_uart_rxd",-1);
	vcdp->declBit  (c+1,"UartKaraReg uartfsm io_toFnct_valid",-1);
	vcdp->declArray(c+2,"UartKaraReg uartfsm io_toFnct_payload",-1,255,0);
	vcdp->declBit  (c+304,"UartKaraReg uartfsm io_fromFnct_valid",-1);
	vcdp->declArray(c+10,"UartKaraReg uartfsm io_fromFnct_payload",-1,255,0);
	vcdp->declBit  (c+431,"UartKaraReg uartfsm clk",-1);
	vcdp->declBit  (c+432,"UartKaraReg uartfsm reset",-1);
	// Tracing: UartKaraReg uartfsm _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1218
	// Tracing: UartKaraReg uartfsm _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1219
	// Tracing: UartKaraReg uartfsm _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1220
	// Tracing: UartKaraReg uartfsm _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1221
	vcdp->declBit  (c+305,"UartKaraReg uartfsm uartCtrl_1__io_write_ready",-1);
	vcdp->declBit  (c+414,"UartKaraReg uartfsm uartCtrl_1__io_read_valid",-1);
	vcdp->declBus  (c+409,"UartKaraReg uartfsm uartCtrl_1__io_read_payload",-1,7,0);
	vcdp->declBit  (c+328,"UartKaraReg uartfsm uartCtrl_1__io_uart_txd",-1);
	// Tracing: UartKaraReg uartfsm _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1226
	// Tracing: UartKaraReg uartfsm _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1227
	vcdp->declBit  (c+18,"UartKaraReg uartfsm write_valid",-1);
	vcdp->declBit  (c+306,"UartKaraReg uartfsm write_ready",-1);
	vcdp->declBus  (c+307,"UartKaraReg uartfsm write_payload",-1,7,0);
	vcdp->declBit  (c+329,"UartKaraReg uartfsm write_m2sPipe_valid",-1);
	vcdp->declBit  (c+305,"UartKaraReg uartfsm write_m2sPipe_ready",-1);
	vcdp->declBus  (c+410,"UartKaraReg uartfsm write_m2sPipe_payload",-1,7,0);
	vcdp->declBit  (c+329,"UartKaraReg uartfsm write_m2sPipe_rValid",-1);
	vcdp->declBus  (c+410,"UartKaraReg uartfsm write_m2sPipe_rData",-1,7,0);
	vcdp->declBit  (c+433,"UartKaraReg uartfsm fsmIn_wantExit",-1);
	vcdp->declBus  (c+330,"UartKaraReg uartfsm fsmIn_inCounter",-1,4,0);
	vcdp->declArray(c+331,"UartKaraReg uartfsm fsmIn_buffer",-1,255,0);
	vcdp->declBit  (c+433,"UartKaraReg uartfsm fsmOut_wantExit",-1);
	vcdp->declBus  (c+339,"UartKaraReg uartfsm fsmOut_outCounter",-1,4,0);
	vcdp->declArray(c+340,"UartKaraReg uartfsm fsmOut_outBuffer",-1,255,0);
	vcdp->declBus  (c+348,"UartKaraReg uartfsm fsmIn_stateReg",-1,2,0);
	vcdp->declBus  (c+308,"UartKaraReg uartfsm fsmIn_stateNext",-1,2,0);
	vcdp->declBus  (c+349,"UartKaraReg uartfsm fsmOut_stateReg",-1,1,0);
	vcdp->declBus  (c+309,"UartKaraReg uartfsm fsmOut_stateNext",-1,1,0);
	vcdp->declArray(c+19,"UartKaraReg uartfsm fsmIn_stateReg_string",-1,159,0);
	vcdp->declArray(c+310,"UartKaraReg uartfsm fsmIn_stateNext_string",-1,159,0);
	vcdp->declArray(c+24,"UartKaraReg uartfsm fsmOut_stateReg_string",-1,159,0);
	vcdp->declArray(c+315,"UartKaraReg uartfsm fsmOut_stateNext_string",-1,159,0);
	vcdp->declBus  (c+434,"UartKaraReg uartfsm uartCtrl_1_ io_config_frame_dataLength",-1,2,0);
	vcdp->declBus  (c+433,"UartKaraReg uartfsm uartCtrl_1_ io_config_frame_stop",-1,0,0);
	vcdp->declBus  (c+435,"UartKaraReg uartfsm uartCtrl_1_ io_config_frame_parity",-1,1,0);
	vcdp->declBus  (c+436,"UartKaraReg uartfsm uartCtrl_1_ io_config_clockDivider",-1,19,0);
	vcdp->declBit  (c+329,"UartKaraReg uartfsm uartCtrl_1_ io_write_valid",-1);
	vcdp->declBit  (c+305,"UartKaraReg uartfsm uartCtrl_1_ io_write_ready",-1);
	vcdp->declBus  (c+410,"UartKaraReg uartfsm uartCtrl_1_ io_write_payload",-1,7,0);
	vcdp->declBit  (c+414,"UartKaraReg uartfsm uartCtrl_1_ io_read_valid",-1);
	vcdp->declBus  (c+409,"UartKaraReg uartfsm uartCtrl_1_ io_read_payload",-1,7,0);
	vcdp->declBit  (c+328,"UartKaraReg uartfsm uartCtrl_1_ io_uart_txd",-1);
	vcdp->declBit  (c+430,"UartKaraReg uartfsm uartCtrl_1_ io_uart_rxd",-1);
	vcdp->declBit  (c+431,"UartKaraReg uartfsm uartCtrl_1_ clk",-1);
	vcdp->declBit  (c+432,"UartKaraReg uartfsm uartCtrl_1_ reset",-1);
	vcdp->declBit  (c+305,"UartKaraReg uartfsm uartCtrl_1_ tx_io_write_ready",-1);
	vcdp->declBit  (c+328,"UartKaraReg uartfsm uartCtrl_1_ tx_io_txd",-1);
	vcdp->declBit  (c+414,"UartKaraReg uartfsm uartCtrl_1_ rx_io_read_valid",-1);
	vcdp->declBus  (c+409,"UartKaraReg uartfsm uartCtrl_1_ rx_io_read_payload",-1,7,0);
	vcdp->declBus  (c+415,"UartKaraReg uartfsm uartCtrl_1_ clockDivider_counter",-1,19,0);
	vcdp->declBit  (c+416,"UartKaraReg uartfsm uartCtrl_1_ clockDivider_tick",-1);
	vcdp->declBus  (c+437,"UartKaraReg uartfsm uartCtrl_1_ io_config_frame_stop_string",-1,23,0);
	vcdp->declBus  (c+438,"UartKaraReg uartfsm uartCtrl_1_ io_config_frame_parity_string",-1,31,0);
	vcdp->declBus  (c+434,"UartKaraReg uartfsm uartCtrl_1_ tx io_configFrame_dataLength",-1,2,0);
	vcdp->declBus  (c+433,"UartKaraReg uartfsm uartCtrl_1_ tx io_configFrame_stop",-1,0,0);
	vcdp->declBus  (c+435,"UartKaraReg uartfsm uartCtrl_1_ tx io_configFrame_parity",-1,1,0);
	vcdp->declBit  (c+416,"UartKaraReg uartfsm uartCtrl_1_ tx io_samplingTick",-1);
	vcdp->declBit  (c+329,"UartKaraReg uartfsm uartCtrl_1_ tx io_write_valid",-1);
	vcdp->declBit  (c+305,"UartKaraReg uartfsm uartCtrl_1_ tx io_write_ready",-1);
	vcdp->declBus  (c+410,"UartKaraReg uartfsm uartCtrl_1_ tx io_write_payload",-1,7,0);
	vcdp->declBit  (c+328,"UartKaraReg uartfsm uartCtrl_1_ tx io_txd",-1);
	vcdp->declBit  (c+431,"UartKaraReg uartfsm uartCtrl_1_ tx clk",-1);
	vcdp->declBit  (c+432,"UartKaraReg uartfsm uartCtrl_1_ tx reset",-1);
	// Tracing: UartKaraReg uartfsm uartCtrl_1_ tx _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:366
	// Tracing: UartKaraReg uartfsm uartCtrl_1_ tx _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:367
	// Tracing: UartKaraReg uartfsm uartCtrl_1_ tx _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:368
	// Tracing: UartKaraReg uartfsm uartCtrl_1_ tx _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:369
	// Tracing: UartKaraReg uartfsm uartCtrl_1_ tx _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:370
	vcdp->declBit  (c+320,"UartKaraReg uartfsm uartCtrl_1_ tx clockDivider_counter_willIncrement",-1);
	vcdp->declBit  (c+433,"UartKaraReg uartfsm uartCtrl_1_ tx clockDivider_counter_willClear",-1);
	vcdp->declBus  (c+303,"UartKaraReg uartfsm uartCtrl_1_ tx clockDivider_counter_valueNext",-1,2,0);
	vcdp->declBus  (c+350,"UartKaraReg uartfsm uartCtrl_1_ tx clockDivider_counter_value",-1,2,0);
	vcdp->declBit  (c+351,"UartKaraReg uartfsm uartCtrl_1_ tx clockDivider_counter_willOverflowIfInc",-1);
	vcdp->declBit  (c+321,"UartKaraReg uartfsm uartCtrl_1_ tx clockDivider_tick",-1);
	vcdp->declBus  (c+411,"UartKaraReg uartfsm uartCtrl_1_ tx tickCounter_value",-1,2,0);
	vcdp->declBus  (c+417,"UartKaraReg uartfsm uartCtrl_1_ tx stateMachine_state",-1,2,0);
	vcdp->declBit  (c+412,"UartKaraReg uartfsm uartCtrl_1_ tx stateMachine_parity",-1);
	vcdp->declBit  (c+322,"UartKaraReg uartfsm uartCtrl_1_ tx stateMachine_txd",-1);
	vcdp->declBit  (c+328,"UartKaraReg uartfsm uartCtrl_1_ tx stateMachine_txd_regNext",-1);
	vcdp->declBus  (c+437,"UartKaraReg uartfsm uartCtrl_1_ tx io_configFrame_stop_string",-1,23,0);
	vcdp->declBus  (c+438,"UartKaraReg uartfsm uartCtrl_1_ tx io_configFrame_parity_string",-1,31,0);
	vcdp->declQuad (c+323,"UartKaraReg uartfsm uartCtrl_1_ tx stateMachine_state_string",-1,47,0);
	vcdp->declBus  (c+434,"UartKaraReg uartfsm uartCtrl_1_ rx io_configFrame_dataLength",-1,2,0);
	vcdp->declBus  (c+433,"UartKaraReg uartfsm uartCtrl_1_ rx io_configFrame_stop",-1,0,0);
	vcdp->declBus  (c+435,"UartKaraReg uartfsm uartCtrl_1_ rx io_configFrame_parity",-1,1,0);
	vcdp->declBit  (c+416,"UartKaraReg uartfsm uartCtrl_1_ rx io_samplingTick",-1);
	vcdp->declBit  (c+414,"UartKaraReg uartfsm uartCtrl_1_ rx io_read_valid",-1);
	vcdp->declBus  (c+409,"UartKaraReg uartfsm uartCtrl_1_ rx io_read_payload",-1,7,0);
	vcdp->declBit  (c+430,"UartKaraReg uartfsm uartCtrl_1_ rx io_rxd",-1);
	vcdp->declBit  (c+431,"UartKaraReg uartfsm uartCtrl_1_ rx clk",-1);
	vcdp->declBit  (c+432,"UartKaraReg uartfsm uartCtrl_1_ rx reset",-1);
	// Tracing: UartKaraReg uartfsm uartCtrl_1_ rx _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:570
	vcdp->declBit  (c+418,"UartKaraReg uartfsm uartCtrl_1_ rx io_rxd_buffercc_io_dataOut",-1);
	// Tracing: UartKaraReg uartfsm uartCtrl_1_ rx _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:572
	// Tracing: UartKaraReg uartfsm uartCtrl_1_ rx _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:573
	// Tracing: UartKaraReg uartfsm uartCtrl_1_ rx _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:574
	// Tracing: UartKaraReg uartfsm uartCtrl_1_ rx _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:575
	// Tracing: UartKaraReg uartfsm uartCtrl_1_ rx _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:576
	// Tracing: UartKaraReg uartfsm uartCtrl_1_ rx _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:577
	// Tracing: UartKaraReg uartfsm uartCtrl_1_ rx _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:578
	// Tracing: UartKaraReg uartfsm uartCtrl_1_ rx _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:579
	// Tracing: UartKaraReg uartfsm uartCtrl_1_ rx _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:580
	// Tracing: UartKaraReg uartfsm uartCtrl_1_ rx _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:581
	// Tracing: UartKaraReg uartfsm uartCtrl_1_ rx _zz_12_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:582
	vcdp->declBit  (c+418,"UartKaraReg uartfsm uartCtrl_1_ rx sampler_synchroniser",-1);
	vcdp->declBit  (c+418,"UartKaraReg uartfsm uartCtrl_1_ rx sampler_samples_0",-1);
	vcdp->declBit  (c+419,"UartKaraReg uartfsm uartCtrl_1_ rx sampler_samples_1",-1);
	vcdp->declBit  (c+420,"UartKaraReg uartfsm uartCtrl_1_ rx sampler_samples_2",-1);
	vcdp->declBit  (c+421,"UartKaraReg uartfsm uartCtrl_1_ rx sampler_samples_3",-1);
	vcdp->declBit  (c+422,"UartKaraReg uartfsm uartCtrl_1_ rx sampler_samples_4",-1);
	vcdp->declBit  (c+423,"UartKaraReg uartfsm uartCtrl_1_ rx sampler_value",-1);
	vcdp->declBit  (c+424,"UartKaraReg uartfsm uartCtrl_1_ rx sampler_tick",-1);
	vcdp->declBus  (c+413,"UartKaraReg uartfsm uartCtrl_1_ rx bitTimer_counter",-1,2,0);
	vcdp->declBit  (c+325,"UartKaraReg uartfsm uartCtrl_1_ rx bitTimer_tick",-1);
	vcdp->declBus  (c+427,"UartKaraReg uartfsm uartCtrl_1_ rx bitCounter_value",-1,2,0);
	vcdp->declBus  (c+425,"UartKaraReg uartfsm uartCtrl_1_ rx stateMachine_state",-1,2,0);
	vcdp->declBit  (c+428,"UartKaraReg uartfsm uartCtrl_1_ rx stateMachine_parity",-1);
	vcdp->declBus  (c+409,"UartKaraReg uartfsm uartCtrl_1_ rx stateMachine_shifter",-1,7,0);
	vcdp->declBit  (c+414,"UartKaraReg uartfsm uartCtrl_1_ rx stateMachine_validReg",-1);
	vcdp->declBus  (c+437,"UartKaraReg uartfsm uartCtrl_1_ rx io_configFrame_stop_string",-1,23,0);
	vcdp->declBus  (c+438,"UartKaraReg uartfsm uartCtrl_1_ rx io_configFrame_parity_string",-1,31,0);
	vcdp->declQuad (c+326,"UartKaraReg uartfsm uartCtrl_1_ rx stateMachine_state_string",-1,47,0);
	vcdp->declBit  (c+433,"UartKaraReg uartfsm uartCtrl_1_ rx io_rxd_buffercc io_initial",-1);
	vcdp->declBit  (c+430,"UartKaraReg uartfsm uartCtrl_1_ rx io_rxd_buffercc io_dataIn",-1);
	vcdp->declBit  (c+418,"UartKaraReg uartfsm uartCtrl_1_ rx io_rxd_buffercc io_dataOut",-1);
	vcdp->declBit  (c+431,"UartKaraReg uartfsm uartCtrl_1_ rx io_rxd_buffercc clk",-1);
	vcdp->declBit  (c+432,"UartKaraReg uartfsm uartCtrl_1_ rx io_rxd_buffercc reset",-1);
	vcdp->declBit  (c+426,"UartKaraReg uartfsm uartCtrl_1_ rx io_rxd_buffercc buffers_0",-1);
	vcdp->declBit  (c+418,"UartKaraReg uartfsm uartCtrl_1_ rx io_rxd_buffercc buffers_1",-1);
	vcdp->declBit  (c+1,"UartKaraReg karareg_1_ io_fromUart_valid",-1);
	vcdp->declArray(c+2,"UartKaraReg karareg_1_ io_fromUart_payload",-1,255,0);
	vcdp->declBit  (c+304,"UartKaraReg karareg_1_ io_toUart_valid",-1);
	vcdp->declArray(c+10,"UartKaraReg karareg_1_ io_toUart_payload",-1,255,0);
	vcdp->declBit  (c+431,"UartKaraReg karareg_1_ clk",-1);
	vcdp->declBit  (c+432,"UartKaraReg karareg_1_ reset",-1);
	// Tracing: UartKaraReg karareg_1_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1507
	// Tracing: UartKaraReg karareg_1_ _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1508
	vcdp->declArray(c+29,"UartKaraReg karareg_1_ karaMult_40__io_result",-1,255,0);
	vcdp->declArray(c+37,"UartKaraReg karareg_1_ karaMult_40__io_high",-1,255,0);
	vcdp->declArray(c+45,"UartKaraReg karareg_1_ karaMult_40__io_mid",-1,255,0);
	vcdp->declArray(c+53,"UartKaraReg karareg_1_ karaMult_40__io_low",-1,255,0);
	vcdp->declArray(c+61,"UartKaraReg karareg_1_ karaMult_40__io_alh_int_out",-1,64,0);
	vcdp->declArray(c+64,"UartKaraReg karareg_1_ karaMult_40__io_bhl_int_out",-1,64,0);
	vcdp->declBit  (c+433,"UartKaraReg karareg_1_ fsm_wantExit",-1);
	vcdp->declArray(c+352,"UartKaraReg karareg_1_ fsm_buffer",-1,255,0);
	vcdp->declArray(c+360,"UartKaraReg karareg_1_ fsm_result",-1,255,0);
	vcdp->declBus  (c+368,"UartKaraReg karareg_1_ fsm_stateReg",-1,1,0);
	vcdp->declBus  (c+67,"UartKaraReg karareg_1_ fsm_stateNext",-1,1,0);
	// Tracing: UartKaraReg karareg_1_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1520
	vcdp->declArray(c+68,"UartKaraReg karareg_1_ fsm_stateReg_string",-1,79,0);
	vcdp->declArray(c+71,"UartKaraReg karareg_1_ fsm_stateNext_string",-1,79,0);
	vcdp->declArray(c+369,"UartKaraReg karareg_1_ karaMult_40_ io_a",-1,127,0);
	vcdp->declArray(c+373,"UartKaraReg karareg_1_ karaMult_40_ io_b",-1,127,0);
	vcdp->declArray(c+29,"UartKaraReg karareg_1_ karaMult_40_ io_result",-1,255,0);
	vcdp->declArray(c+37,"UartKaraReg karareg_1_ karaMult_40_ io_high",-1,255,0);
	vcdp->declArray(c+45,"UartKaraReg karareg_1_ karaMult_40_ io_mid",-1,255,0);
	vcdp->declArray(c+53,"UartKaraReg karareg_1_ karaMult_40_ io_low",-1,255,0);
	vcdp->declArray(c+61,"UartKaraReg karareg_1_ karaMult_40_ io_alh_int_out",-1,64,0);
	vcdp->declArray(c+64,"UartKaraReg karareg_1_ karaMult_40_ io_bhl_int_out",-1,64,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1050
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1051
	vcdp->declArray(c+74,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40__io_result",-1,127,0);
	vcdp->declArray(c+78,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40__io_high",-1,127,0);
	vcdp->declArray(c+82,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40__io_mid",-1,127,0);
	vcdp->declArray(c+86,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40__io_low",-1,127,0);
	vcdp->declQuad (c+90,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40__io_alh_int_out",-1,32,0);
	vcdp->declQuad (c+92,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40__io_bhl_int_out",-1,32,0);
	vcdp->declArray(c+94,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41__io_result",-1,127,0);
	vcdp->declArray(c+98,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41__io_high",-1,127,0);
	vcdp->declArray(c+102,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41__io_mid",-1,127,0);
	vcdp->declArray(c+106,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41__io_low",-1,127,0);
	vcdp->declQuad (c+110,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41__io_alh_int_out",-1,32,0);
	vcdp->declQuad (c+112,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41__io_bhl_int_out",-1,32,0);
	vcdp->declArray(c+114,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42__io_result",-1,127,0);
	vcdp->declArray(c+118,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42__io_high",-1,127,0);
	vcdp->declArray(c+122,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42__io_mid",-1,127,0);
	vcdp->declArray(c+126,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42__io_low",-1,127,0);
	vcdp->declQuad (c+130,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42__io_alh_int_out",-1,32,0);
	vcdp->declQuad (c+132,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42__io_bhl_int_out",-1,32,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1070
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_12_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1071
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_13_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1072
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_14_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1073
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_15_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1074
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_16_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1075
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_17_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1076
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_18_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1077
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_19_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1078
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_20_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1079
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_21_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1080
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_22_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1081
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_23_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1082
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_24_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1083
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_25_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1084
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_26_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1085
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_27_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1086
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_28_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1087
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_29_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1088
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_30_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1089
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_31_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1090
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_32_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1091
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_33_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1092
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_34_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1093
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_35_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1094
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_36_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1095
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_37_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1096
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_38_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1097
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_39_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1098
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_40_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1099
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_41_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1100
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_42_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1101
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_43_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1102
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_44_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1103
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_45_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1104
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_46_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1105
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_47_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1106
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_48_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1107
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1108
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1109
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1110
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1111
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1112
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1113
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1114
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:1115
	vcdp->declQuad (c+377,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ io_a",-1,63,0);
	vcdp->declQuad (c+379,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ io_b",-1,63,0);
	vcdp->declArray(c+74,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ io_result",-1,127,0);
	vcdp->declArray(c+78,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ io_high",-1,127,0);
	vcdp->declArray(c+82,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ io_mid",-1,127,0);
	vcdp->declArray(c+86,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ io_low",-1,127,0);
	vcdp->declQuad (c+90,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ io_alh_int_out",-1,32,0);
	vcdp->declQuad (c+92,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ io_bhl_int_out",-1,32,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:792
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:793
	vcdp->declQuad (c+134,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40__io_result",-1,63,0);
	vcdp->declQuad (c+136,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40__io_high",-1,63,0);
	vcdp->declQuad (c+138,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40__io_mid",-1,63,0);
	vcdp->declQuad (c+140,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40__io_low",-1,63,0);
	vcdp->declBus  (c+142,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40__io_alh_int_out",-1,16,0);
	vcdp->declBus  (c+143,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40__io_bhl_int_out",-1,16,0);
	vcdp->declQuad (c+144,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41__io_result",-1,63,0);
	vcdp->declQuad (c+146,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41__io_high",-1,63,0);
	vcdp->declQuad (c+148,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41__io_mid",-1,63,0);
	vcdp->declQuad (c+150,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41__io_low",-1,63,0);
	vcdp->declBus  (c+152,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41__io_alh_int_out",-1,16,0);
	vcdp->declBus  (c+153,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41__io_bhl_int_out",-1,16,0);
	vcdp->declQuad (c+154,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42__io_result",-1,63,0);
	vcdp->declQuad (c+156,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42__io_high",-1,63,0);
	vcdp->declQuad (c+158,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42__io_mid",-1,63,0);
	vcdp->declQuad (c+160,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42__io_low",-1,63,0);
	vcdp->declBus  (c+162,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42__io_alh_int_out",-1,16,0);
	vcdp->declBus  (c+163,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42__io_bhl_int_out",-1,16,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:812
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_12_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:813
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_13_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:814
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_14_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:815
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_15_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:816
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_16_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:817
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_17_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:818
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_18_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:819
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_19_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:820
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_20_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:821
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_21_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:822
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_22_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:823
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_23_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:824
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_24_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:825
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_25_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:826
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_26_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:827
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_27_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:828
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_28_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:829
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_29_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:830
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_30_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:831
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_31_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:832
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_32_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:833
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_33_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:834
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_34_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:835
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_35_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:836
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_36_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:837
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_37_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:838
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_38_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:839
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_39_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:840
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_40_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:841
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_41_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:842
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_42_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:843
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_43_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:844
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_44_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:845
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_45_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:846
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_46_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:847
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_47_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:848
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_48_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:849
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:850
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:851
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:852
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:853
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:854
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:855
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:856
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:857
	vcdp->declBus  (c+381,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ io_a",-1,31,0);
	vcdp->declBus  (c+382,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ io_b",-1,31,0);
	vcdp->declQuad (c+134,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ io_result",-1,63,0);
	vcdp->declQuad (c+136,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ io_high",-1,63,0);
	vcdp->declQuad (c+138,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ io_mid",-1,63,0);
	vcdp->declQuad (c+140,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ io_low",-1,63,0);
	vcdp->declBus  (c+142,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ io_alh_int_out",-1,16,0);
	vcdp->declBus  (c+143,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ io_bhl_int_out",-1,16,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:172
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:173
	vcdp->declBus  (c+164,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_40__io_result",-1,31,0);
	vcdp->declBus  (c+439,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_40__io_high",-1,31,0);
	vcdp->declBus  (c+440,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_40__io_mid",-1,31,0);
	vcdp->declBus  (c+441,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_40__io_low",-1,31,0);
	vcdp->declBus  (c+442,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_40__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+443,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_40__io_bhl_int_out",-1,8,0);
	vcdp->declBus  (c+165,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_41__io_result",-1,31,0);
	vcdp->declBus  (c+444,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_41__io_high",-1,31,0);
	vcdp->declBus  (c+445,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_41__io_mid",-1,31,0);
	vcdp->declBus  (c+446,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_41__io_low",-1,31,0);
	vcdp->declBus  (c+447,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_41__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+448,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_41__io_bhl_int_out",-1,8,0);
	vcdp->declBus  (c+166,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_42__io_result",-1,31,0);
	vcdp->declBus  (c+449,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_42__io_high",-1,31,0);
	vcdp->declBus  (c+450,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_42__io_mid",-1,31,0);
	vcdp->declBus  (c+451,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_42__io_low",-1,31,0);
	vcdp->declBus  (c+452,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_42__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+453,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_42__io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:192
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_12_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:193
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_13_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:194
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_14_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:195
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_15_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:196
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_16_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:197
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_17_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:198
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_18_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:199
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_19_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:200
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_20_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:201
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_21_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:202
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_22_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:203
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_23_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:204
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_24_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:205
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_25_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:206
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_26_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:207
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_27_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:208
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_28_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:209
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_29_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:210
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_30_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:211
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_31_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:212
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_32_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:213
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_33_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:214
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_34_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:215
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_35_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:216
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_36_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:217
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_37_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:218
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_38_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:219
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_39_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:220
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_40_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:221
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_41_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:222
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_42_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:223
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_43_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:224
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_44_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:225
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_45_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:226
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_46_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:227
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_47_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:228
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_48_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:229
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:230
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:231
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:232
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:233
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:234
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:235
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:236
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:237
	vcdp->declBus  (c+383,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_40_ io_a",-1,15,0);
	vcdp->declBus  (c+384,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_40_ io_b",-1,15,0);
	vcdp->declBus  (c+164,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_40_ io_result",-1,31,0);
	vcdp->declBus  (c+439,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_40_ io_high",-1,31,0);
	vcdp->declBus  (c+440,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_40_ io_mid",-1,31,0);
	vcdp->declBus  (c+441,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_40_ io_low",-1,31,0);
	vcdp->declBus  (c+442,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_40_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+443,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_40_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_40_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+385,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_41_ io_a",-1,15,0);
	vcdp->declBus  (c+386,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_41_ io_b",-1,15,0);
	vcdp->declBus  (c+165,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_41_ io_result",-1,31,0);
	vcdp->declBus  (c+444,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_41_ io_high",-1,31,0);
	vcdp->declBus  (c+445,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_41_ io_mid",-1,31,0);
	vcdp->declBus  (c+446,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_41_ io_low",-1,31,0);
	vcdp->declBus  (c+447,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_41_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+448,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_41_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+167,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_42_ io_a",-1,15,0);
	vcdp->declBus  (c+168,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_42_ io_b",-1,15,0);
	vcdp->declBus  (c+166,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_42_ io_result",-1,31,0);
	vcdp->declBus  (c+449,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_42_ io_high",-1,31,0);
	vcdp->declBus  (c+450,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_42_ io_mid",-1,31,0);
	vcdp->declBus  (c+451,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_42_ io_low",-1,31,0);
	vcdp->declBus  (c+452,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_42_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+453,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_42_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+387,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ io_a",-1,31,0);
	vcdp->declBus  (c+388,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ io_b",-1,31,0);
	vcdp->declQuad (c+144,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ io_result",-1,63,0);
	vcdp->declQuad (c+146,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ io_high",-1,63,0);
	vcdp->declQuad (c+148,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ io_mid",-1,63,0);
	vcdp->declQuad (c+150,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ io_low",-1,63,0);
	vcdp->declBus  (c+152,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ io_alh_int_out",-1,16,0);
	vcdp->declBus  (c+153,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ io_bhl_int_out",-1,16,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:172
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:173
	vcdp->declBus  (c+169,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_40__io_result",-1,31,0);
	vcdp->declBus  (c+454,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_40__io_high",-1,31,0);
	vcdp->declBus  (c+455,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_40__io_mid",-1,31,0);
	vcdp->declBus  (c+456,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_40__io_low",-1,31,0);
	vcdp->declBus  (c+457,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_40__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+458,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_40__io_bhl_int_out",-1,8,0);
	vcdp->declBus  (c+170,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_41__io_result",-1,31,0);
	vcdp->declBus  (c+459,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_41__io_high",-1,31,0);
	vcdp->declBus  (c+460,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_41__io_mid",-1,31,0);
	vcdp->declBus  (c+461,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_41__io_low",-1,31,0);
	vcdp->declBus  (c+462,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_41__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+463,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_41__io_bhl_int_out",-1,8,0);
	vcdp->declBus  (c+171,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_42__io_result",-1,31,0);
	vcdp->declBus  (c+464,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_42__io_high",-1,31,0);
	vcdp->declBus  (c+465,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_42__io_mid",-1,31,0);
	vcdp->declBus  (c+466,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_42__io_low",-1,31,0);
	vcdp->declBus  (c+467,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_42__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+468,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_42__io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:192
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_12_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:193
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_13_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:194
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_14_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:195
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_15_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:196
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_16_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:197
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_17_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:198
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_18_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:199
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_19_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:200
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_20_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:201
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_21_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:202
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_22_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:203
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_23_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:204
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_24_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:205
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_25_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:206
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_26_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:207
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_27_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:208
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_28_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:209
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_29_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:210
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_30_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:211
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_31_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:212
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_32_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:213
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_33_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:214
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_34_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:215
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_35_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:216
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_36_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:217
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_37_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:218
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_38_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:219
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_39_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:220
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_40_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:221
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_41_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:222
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_42_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:223
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_43_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:224
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_44_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:225
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_45_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:226
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_46_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:227
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_47_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:228
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_48_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:229
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:230
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:231
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:232
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:233
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:234
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:235
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:236
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:237
	vcdp->declBus  (c+389,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_40_ io_a",-1,15,0);
	vcdp->declBus  (c+390,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_40_ io_b",-1,15,0);
	vcdp->declBus  (c+169,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_40_ io_result",-1,31,0);
	vcdp->declBus  (c+454,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_40_ io_high",-1,31,0);
	vcdp->declBus  (c+455,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_40_ io_mid",-1,31,0);
	vcdp->declBus  (c+456,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_40_ io_low",-1,31,0);
	vcdp->declBus  (c+457,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_40_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+458,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_40_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+391,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_41_ io_a",-1,15,0);
	vcdp->declBus  (c+392,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_41_ io_b",-1,15,0);
	vcdp->declBus  (c+170,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_41_ io_result",-1,31,0);
	vcdp->declBus  (c+459,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_41_ io_high",-1,31,0);
	vcdp->declBus  (c+460,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_41_ io_mid",-1,31,0);
	vcdp->declBus  (c+461,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_41_ io_low",-1,31,0);
	vcdp->declBus  (c+462,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_41_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+463,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_41_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+172,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_42_ io_a",-1,15,0);
	vcdp->declBus  (c+173,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_42_ io_b",-1,15,0);
	vcdp->declBus  (c+171,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_42_ io_result",-1,31,0);
	vcdp->declBus  (c+464,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_42_ io_high",-1,31,0);
	vcdp->declBus  (c+465,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_42_ io_mid",-1,31,0);
	vcdp->declBus  (c+466,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_42_ io_low",-1,31,0);
	vcdp->declBus  (c+467,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_42_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+468,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_42_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+174,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ io_a",-1,31,0);
	vcdp->declBus  (c+175,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ io_b",-1,31,0);
	vcdp->declQuad (c+154,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ io_result",-1,63,0);
	vcdp->declQuad (c+156,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ io_high",-1,63,0);
	vcdp->declQuad (c+158,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ io_mid",-1,63,0);
	vcdp->declQuad (c+160,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ io_low",-1,63,0);
	vcdp->declBus  (c+162,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ io_alh_int_out",-1,16,0);
	vcdp->declBus  (c+163,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ io_bhl_int_out",-1,16,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:172
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:173
	vcdp->declBus  (c+176,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_40__io_result",-1,31,0);
	vcdp->declBus  (c+469,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_40__io_high",-1,31,0);
	vcdp->declBus  (c+470,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_40__io_mid",-1,31,0);
	vcdp->declBus  (c+471,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_40__io_low",-1,31,0);
	vcdp->declBus  (c+472,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_40__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+473,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_40__io_bhl_int_out",-1,8,0);
	vcdp->declBus  (c+177,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_41__io_result",-1,31,0);
	vcdp->declBus  (c+474,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_41__io_high",-1,31,0);
	vcdp->declBus  (c+475,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_41__io_mid",-1,31,0);
	vcdp->declBus  (c+476,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_41__io_low",-1,31,0);
	vcdp->declBus  (c+477,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_41__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+478,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_41__io_bhl_int_out",-1,8,0);
	vcdp->declBus  (c+178,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_42__io_result",-1,31,0);
	vcdp->declBus  (c+479,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_42__io_high",-1,31,0);
	vcdp->declBus  (c+480,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_42__io_mid",-1,31,0);
	vcdp->declBus  (c+481,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_42__io_low",-1,31,0);
	vcdp->declBus  (c+482,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_42__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+483,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_42__io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:192
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_12_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:193
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_13_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:194
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_14_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:195
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_15_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:196
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_16_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:197
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_17_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:198
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_18_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:199
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_19_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:200
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_20_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:201
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_21_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:202
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_22_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:203
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_23_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:204
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_24_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:205
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_25_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:206
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_26_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:207
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_27_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:208
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_28_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:209
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_29_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:210
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_30_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:211
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_31_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:212
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_32_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:213
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_33_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:214
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_34_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:215
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_35_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:216
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_36_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:217
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_37_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:218
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_38_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:219
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_39_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:220
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_40_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:221
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_41_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:222
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_42_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:223
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_43_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:224
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_44_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:225
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_45_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:226
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_46_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:227
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_47_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:228
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_48_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:229
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:230
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:231
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:232
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:233
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:234
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:235
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:236
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:237
	vcdp->declBus  (c+179,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_40_ io_a",-1,15,0);
	vcdp->declBus  (c+180,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_40_ io_b",-1,15,0);
	vcdp->declBus  (c+176,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_40_ io_result",-1,31,0);
	vcdp->declBus  (c+469,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_40_ io_high",-1,31,0);
	vcdp->declBus  (c+470,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_40_ io_mid",-1,31,0);
	vcdp->declBus  (c+471,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_40_ io_low",-1,31,0);
	vcdp->declBus  (c+472,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_40_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+473,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_40_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+181,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_41_ io_a",-1,15,0);
	vcdp->declBus  (c+182,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_41_ io_b",-1,15,0);
	vcdp->declBus  (c+177,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_41_ io_result",-1,31,0);
	vcdp->declBus  (c+474,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_41_ io_high",-1,31,0);
	vcdp->declBus  (c+475,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_41_ io_mid",-1,31,0);
	vcdp->declBus  (c+476,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_41_ io_low",-1,31,0);
	vcdp->declBus  (c+477,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_41_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+478,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_41_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+183,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_42_ io_a",-1,15,0);
	vcdp->declBus  (c+184,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_42_ io_b",-1,15,0);
	vcdp->declBus  (c+178,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_42_ io_result",-1,31,0);
	vcdp->declBus  (c+479,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_42_ io_high",-1,31,0);
	vcdp->declBus  (c+480,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_42_ io_mid",-1,31,0);
	vcdp->declBus  (c+481,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_42_ io_low",-1,31,0);
	vcdp->declBus  (c+482,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_42_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+483,"UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_42_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declQuad (c+393,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ io_a",-1,63,0);
	vcdp->declQuad (c+395,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ io_b",-1,63,0);
	vcdp->declArray(c+94,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ io_result",-1,127,0);
	vcdp->declArray(c+98,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ io_high",-1,127,0);
	vcdp->declArray(c+102,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ io_mid",-1,127,0);
	vcdp->declArray(c+106,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ io_low",-1,127,0);
	vcdp->declQuad (c+110,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ io_alh_int_out",-1,32,0);
	vcdp->declQuad (c+112,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ io_bhl_int_out",-1,32,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:792
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:793
	vcdp->declQuad (c+185,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40__io_result",-1,63,0);
	vcdp->declQuad (c+187,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40__io_high",-1,63,0);
	vcdp->declQuad (c+189,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40__io_mid",-1,63,0);
	vcdp->declQuad (c+191,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40__io_low",-1,63,0);
	vcdp->declBus  (c+193,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40__io_alh_int_out",-1,16,0);
	vcdp->declBus  (c+194,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40__io_bhl_int_out",-1,16,0);
	vcdp->declQuad (c+195,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41__io_result",-1,63,0);
	vcdp->declQuad (c+197,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41__io_high",-1,63,0);
	vcdp->declQuad (c+199,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41__io_mid",-1,63,0);
	vcdp->declQuad (c+201,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41__io_low",-1,63,0);
	vcdp->declBus  (c+203,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41__io_alh_int_out",-1,16,0);
	vcdp->declBus  (c+204,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41__io_bhl_int_out",-1,16,0);
	vcdp->declQuad (c+205,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42__io_result",-1,63,0);
	vcdp->declQuad (c+207,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42__io_high",-1,63,0);
	vcdp->declQuad (c+209,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42__io_mid",-1,63,0);
	vcdp->declQuad (c+211,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42__io_low",-1,63,0);
	vcdp->declBus  (c+213,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42__io_alh_int_out",-1,16,0);
	vcdp->declBus  (c+214,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42__io_bhl_int_out",-1,16,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:812
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_12_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:813
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_13_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:814
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_14_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:815
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_15_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:816
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_16_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:817
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_17_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:818
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_18_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:819
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_19_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:820
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_20_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:821
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_21_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:822
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_22_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:823
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_23_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:824
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_24_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:825
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_25_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:826
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_26_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:827
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_27_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:828
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_28_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:829
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_29_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:830
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_30_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:831
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_31_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:832
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_32_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:833
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_33_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:834
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_34_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:835
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_35_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:836
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_36_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:837
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_37_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:838
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_38_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:839
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_39_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:840
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_40_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:841
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_41_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:842
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_42_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:843
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_43_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:844
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_44_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:845
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_45_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:846
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_46_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:847
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_47_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:848
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_48_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:849
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:850
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:851
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:852
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:853
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:854
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:855
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:856
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:857
	vcdp->declBus  (c+397,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ io_a",-1,31,0);
	vcdp->declBus  (c+398,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ io_b",-1,31,0);
	vcdp->declQuad (c+185,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ io_result",-1,63,0);
	vcdp->declQuad (c+187,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ io_high",-1,63,0);
	vcdp->declQuad (c+189,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ io_mid",-1,63,0);
	vcdp->declQuad (c+191,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ io_low",-1,63,0);
	vcdp->declBus  (c+193,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ io_alh_int_out",-1,16,0);
	vcdp->declBus  (c+194,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ io_bhl_int_out",-1,16,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:172
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:173
	vcdp->declBus  (c+215,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_40__io_result",-1,31,0);
	vcdp->declBus  (c+484,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_40__io_high",-1,31,0);
	vcdp->declBus  (c+485,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_40__io_mid",-1,31,0);
	vcdp->declBus  (c+486,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_40__io_low",-1,31,0);
	vcdp->declBus  (c+487,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_40__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+488,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_40__io_bhl_int_out",-1,8,0);
	vcdp->declBus  (c+216,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_41__io_result",-1,31,0);
	vcdp->declBus  (c+489,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_41__io_high",-1,31,0);
	vcdp->declBus  (c+490,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_41__io_mid",-1,31,0);
	vcdp->declBus  (c+491,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_41__io_low",-1,31,0);
	vcdp->declBus  (c+492,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_41__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+493,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_41__io_bhl_int_out",-1,8,0);
	vcdp->declBus  (c+217,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_42__io_result",-1,31,0);
	vcdp->declBus  (c+494,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_42__io_high",-1,31,0);
	vcdp->declBus  (c+495,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_42__io_mid",-1,31,0);
	vcdp->declBus  (c+496,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_42__io_low",-1,31,0);
	vcdp->declBus  (c+497,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_42__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+498,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_42__io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:192
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_12_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:193
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_13_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:194
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_14_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:195
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_15_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:196
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_16_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:197
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_17_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:198
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_18_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:199
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_19_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:200
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_20_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:201
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_21_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:202
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_22_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:203
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_23_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:204
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_24_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:205
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_25_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:206
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_26_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:207
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_27_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:208
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_28_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:209
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_29_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:210
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_30_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:211
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_31_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:212
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_32_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:213
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_33_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:214
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_34_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:215
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_35_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:216
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_36_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:217
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_37_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:218
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_38_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:219
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_39_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:220
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_40_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:221
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_41_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:222
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_42_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:223
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_43_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:224
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_44_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:225
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_45_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:226
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_46_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:227
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_47_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:228
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_48_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:229
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:230
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:231
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:232
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:233
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:234
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:235
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:236
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:237
	vcdp->declBus  (c+399,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_40_ io_a",-1,15,0);
	vcdp->declBus  (c+400,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_40_ io_b",-1,15,0);
	vcdp->declBus  (c+215,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_40_ io_result",-1,31,0);
	vcdp->declBus  (c+484,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_40_ io_high",-1,31,0);
	vcdp->declBus  (c+485,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_40_ io_mid",-1,31,0);
	vcdp->declBus  (c+486,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_40_ io_low",-1,31,0);
	vcdp->declBus  (c+487,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_40_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+488,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_40_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_40_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_40_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+401,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_41_ io_a",-1,15,0);
	vcdp->declBus  (c+402,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_41_ io_b",-1,15,0);
	vcdp->declBus  (c+216,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_41_ io_result",-1,31,0);
	vcdp->declBus  (c+489,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_41_ io_high",-1,31,0);
	vcdp->declBus  (c+490,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_41_ io_mid",-1,31,0);
	vcdp->declBus  (c+491,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_41_ io_low",-1,31,0);
	vcdp->declBus  (c+492,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_41_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+493,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_41_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_41_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_41_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+218,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_42_ io_a",-1,15,0);
	vcdp->declBus  (c+219,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_42_ io_b",-1,15,0);
	vcdp->declBus  (c+217,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_42_ io_result",-1,31,0);
	vcdp->declBus  (c+494,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_42_ io_high",-1,31,0);
	vcdp->declBus  (c+495,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_42_ io_mid",-1,31,0);
	vcdp->declBus  (c+496,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_42_ io_low",-1,31,0);
	vcdp->declBus  (c+497,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_42_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+498,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_42_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_42_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_40_ karaMult_42_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+403,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ io_a",-1,31,0);
	vcdp->declBus  (c+404,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ io_b",-1,31,0);
	vcdp->declQuad (c+195,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ io_result",-1,63,0);
	vcdp->declQuad (c+197,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ io_high",-1,63,0);
	vcdp->declQuad (c+199,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ io_mid",-1,63,0);
	vcdp->declQuad (c+201,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ io_low",-1,63,0);
	vcdp->declBus  (c+203,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ io_alh_int_out",-1,16,0);
	vcdp->declBus  (c+204,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ io_bhl_int_out",-1,16,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:172
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:173
	vcdp->declBus  (c+220,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_40__io_result",-1,31,0);
	vcdp->declBus  (c+499,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_40__io_high",-1,31,0);
	vcdp->declBus  (c+500,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_40__io_mid",-1,31,0);
	vcdp->declBus  (c+501,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_40__io_low",-1,31,0);
	vcdp->declBus  (c+502,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_40__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+503,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_40__io_bhl_int_out",-1,8,0);
	vcdp->declBus  (c+221,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_41__io_result",-1,31,0);
	vcdp->declBus  (c+504,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_41__io_high",-1,31,0);
	vcdp->declBus  (c+505,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_41__io_mid",-1,31,0);
	vcdp->declBus  (c+506,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_41__io_low",-1,31,0);
	vcdp->declBus  (c+507,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_41__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+508,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_41__io_bhl_int_out",-1,8,0);
	vcdp->declBus  (c+222,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_42__io_result",-1,31,0);
	vcdp->declBus  (c+509,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_42__io_high",-1,31,0);
	vcdp->declBus  (c+510,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_42__io_mid",-1,31,0);
	vcdp->declBus  (c+511,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_42__io_low",-1,31,0);
	vcdp->declBus  (c+512,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_42__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+513,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_42__io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:192
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_12_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:193
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_13_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:194
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_14_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:195
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_15_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:196
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_16_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:197
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_17_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:198
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_18_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:199
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_19_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:200
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_20_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:201
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_21_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:202
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_22_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:203
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_23_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:204
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_24_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:205
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_25_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:206
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_26_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:207
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_27_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:208
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_28_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:209
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_29_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:210
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_30_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:211
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_31_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:212
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_32_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:213
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_33_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:214
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_34_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:215
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_35_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:216
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_36_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:217
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_37_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:218
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_38_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:219
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_39_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:220
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_40_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:221
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_41_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:222
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_42_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:223
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_43_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:224
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_44_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:225
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_45_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:226
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_46_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:227
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_47_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:228
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_48_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:229
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:230
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:231
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:232
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:233
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:234
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:235
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:236
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:237
	vcdp->declBus  (c+405,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_40_ io_a",-1,15,0);
	vcdp->declBus  (c+406,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_40_ io_b",-1,15,0);
	vcdp->declBus  (c+220,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_40_ io_result",-1,31,0);
	vcdp->declBus  (c+499,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_40_ io_high",-1,31,0);
	vcdp->declBus  (c+500,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_40_ io_mid",-1,31,0);
	vcdp->declBus  (c+501,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_40_ io_low",-1,31,0);
	vcdp->declBus  (c+502,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_40_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+503,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_40_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_40_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_40_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+407,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_41_ io_a",-1,15,0);
	vcdp->declBus  (c+408,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_41_ io_b",-1,15,0);
	vcdp->declBus  (c+221,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_41_ io_result",-1,31,0);
	vcdp->declBus  (c+504,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_41_ io_high",-1,31,0);
	vcdp->declBus  (c+505,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_41_ io_mid",-1,31,0);
	vcdp->declBus  (c+506,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_41_ io_low",-1,31,0);
	vcdp->declBus  (c+507,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_41_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+508,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_41_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_41_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_41_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+223,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_42_ io_a",-1,15,0);
	vcdp->declBus  (c+224,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_42_ io_b",-1,15,0);
	vcdp->declBus  (c+222,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_42_ io_result",-1,31,0);
	vcdp->declBus  (c+509,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_42_ io_high",-1,31,0);
	vcdp->declBus  (c+510,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_42_ io_mid",-1,31,0);
	vcdp->declBus  (c+511,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_42_ io_low",-1,31,0);
	vcdp->declBus  (c+512,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_42_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+513,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_42_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_42_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_41_ karaMult_42_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+225,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ io_a",-1,31,0);
	vcdp->declBus  (c+226,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ io_b",-1,31,0);
	vcdp->declQuad (c+205,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ io_result",-1,63,0);
	vcdp->declQuad (c+207,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ io_high",-1,63,0);
	vcdp->declQuad (c+209,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ io_mid",-1,63,0);
	vcdp->declQuad (c+211,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ io_low",-1,63,0);
	vcdp->declBus  (c+213,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ io_alh_int_out",-1,16,0);
	vcdp->declBus  (c+214,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ io_bhl_int_out",-1,16,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:172
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:173
	vcdp->declBus  (c+227,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_40__io_result",-1,31,0);
	vcdp->declBus  (c+514,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_40__io_high",-1,31,0);
	vcdp->declBus  (c+515,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_40__io_mid",-1,31,0);
	vcdp->declBus  (c+516,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_40__io_low",-1,31,0);
	vcdp->declBus  (c+517,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_40__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+518,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_40__io_bhl_int_out",-1,8,0);
	vcdp->declBus  (c+228,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_41__io_result",-1,31,0);
	vcdp->declBus  (c+519,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_41__io_high",-1,31,0);
	vcdp->declBus  (c+520,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_41__io_mid",-1,31,0);
	vcdp->declBus  (c+521,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_41__io_low",-1,31,0);
	vcdp->declBus  (c+522,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_41__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+523,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_41__io_bhl_int_out",-1,8,0);
	vcdp->declBus  (c+229,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_42__io_result",-1,31,0);
	vcdp->declBus  (c+524,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_42__io_high",-1,31,0);
	vcdp->declBus  (c+525,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_42__io_mid",-1,31,0);
	vcdp->declBus  (c+526,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_42__io_low",-1,31,0);
	vcdp->declBus  (c+527,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_42__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+528,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_42__io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:192
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_12_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:193
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_13_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:194
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_14_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:195
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_15_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:196
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_16_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:197
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_17_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:198
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_18_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:199
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_19_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:200
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_20_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:201
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_21_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:202
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_22_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:203
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_23_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:204
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_24_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:205
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_25_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:206
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_26_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:207
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_27_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:208
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_28_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:209
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_29_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:210
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_30_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:211
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_31_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:212
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_32_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:213
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_33_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:214
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_34_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:215
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_35_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:216
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_36_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:217
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_37_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:218
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_38_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:219
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_39_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:220
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_40_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:221
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_41_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:222
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_42_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:223
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_43_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:224
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_44_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:225
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_45_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:226
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_46_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:227
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_47_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:228
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_48_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:229
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:230
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:231
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:232
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:233
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:234
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:235
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:236
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:237
	vcdp->declBus  (c+230,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_40_ io_a",-1,15,0);
	vcdp->declBus  (c+231,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_40_ io_b",-1,15,0);
	vcdp->declBus  (c+227,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_40_ io_result",-1,31,0);
	vcdp->declBus  (c+514,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_40_ io_high",-1,31,0);
	vcdp->declBus  (c+515,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_40_ io_mid",-1,31,0);
	vcdp->declBus  (c+516,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_40_ io_low",-1,31,0);
	vcdp->declBus  (c+517,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_40_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+518,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_40_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_40_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_40_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+232,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_41_ io_a",-1,15,0);
	vcdp->declBus  (c+233,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_41_ io_b",-1,15,0);
	vcdp->declBus  (c+228,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_41_ io_result",-1,31,0);
	vcdp->declBus  (c+519,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_41_ io_high",-1,31,0);
	vcdp->declBus  (c+520,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_41_ io_mid",-1,31,0);
	vcdp->declBus  (c+521,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_41_ io_low",-1,31,0);
	vcdp->declBus  (c+522,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_41_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+523,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_41_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_41_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_41_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+234,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_42_ io_a",-1,15,0);
	vcdp->declBus  (c+235,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_42_ io_b",-1,15,0);
	vcdp->declBus  (c+229,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_42_ io_result",-1,31,0);
	vcdp->declBus  (c+524,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_42_ io_high",-1,31,0);
	vcdp->declBus  (c+525,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_42_ io_mid",-1,31,0);
	vcdp->declBus  (c+526,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_42_ io_low",-1,31,0);
	vcdp->declBus  (c+527,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_42_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+528,"UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_42_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_42_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_41_ karaMult_42_ karaMult_42_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declQuad (c+236,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ io_a",-1,63,0);
	vcdp->declQuad (c+238,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ io_b",-1,63,0);
	vcdp->declArray(c+114,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ io_result",-1,127,0);
	vcdp->declArray(c+118,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ io_high",-1,127,0);
	vcdp->declArray(c+122,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ io_mid",-1,127,0);
	vcdp->declArray(c+126,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ io_low",-1,127,0);
	vcdp->declQuad (c+130,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ io_alh_int_out",-1,32,0);
	vcdp->declQuad (c+132,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ io_bhl_int_out",-1,32,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:792
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:793
	vcdp->declQuad (c+240,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40__io_result",-1,63,0);
	vcdp->declQuad (c+242,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40__io_high",-1,63,0);
	vcdp->declQuad (c+244,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40__io_mid",-1,63,0);
	vcdp->declQuad (c+246,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40__io_low",-1,63,0);
	vcdp->declBus  (c+248,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40__io_alh_int_out",-1,16,0);
	vcdp->declBus  (c+249,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40__io_bhl_int_out",-1,16,0);
	vcdp->declQuad (c+250,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41__io_result",-1,63,0);
	vcdp->declQuad (c+252,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41__io_high",-1,63,0);
	vcdp->declQuad (c+254,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41__io_mid",-1,63,0);
	vcdp->declQuad (c+256,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41__io_low",-1,63,0);
	vcdp->declBus  (c+258,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41__io_alh_int_out",-1,16,0);
	vcdp->declBus  (c+259,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41__io_bhl_int_out",-1,16,0);
	vcdp->declQuad (c+260,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42__io_result",-1,63,0);
	vcdp->declQuad (c+262,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42__io_high",-1,63,0);
	vcdp->declQuad (c+264,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42__io_mid",-1,63,0);
	vcdp->declQuad (c+266,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42__io_low",-1,63,0);
	vcdp->declBus  (c+268,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42__io_alh_int_out",-1,16,0);
	vcdp->declBus  (c+269,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42__io_bhl_int_out",-1,16,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:812
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_12_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:813
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_13_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:814
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_14_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:815
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_15_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:816
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_16_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:817
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_17_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:818
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_18_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:819
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_19_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:820
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_20_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:821
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_21_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:822
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_22_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:823
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_23_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:824
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_24_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:825
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_25_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:826
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_26_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:827
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_27_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:828
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_28_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:829
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_29_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:830
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_30_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:831
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_31_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:832
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_32_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:833
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_33_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:834
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_34_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:835
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_35_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:836
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_36_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:837
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_37_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:838
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_38_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:839
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_39_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:840
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_40_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:841
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_41_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:842
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_42_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:843
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_43_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:844
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_44_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:845
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_45_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:846
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_46_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:847
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_47_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:848
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_48_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:849
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:850
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:851
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:852
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:853
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:854
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:855
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:856
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:857
	vcdp->declBus  (c+270,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ io_a",-1,31,0);
	vcdp->declBus  (c+271,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ io_b",-1,31,0);
	vcdp->declQuad (c+240,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ io_result",-1,63,0);
	vcdp->declQuad (c+242,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ io_high",-1,63,0);
	vcdp->declQuad (c+244,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ io_mid",-1,63,0);
	vcdp->declQuad (c+246,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ io_low",-1,63,0);
	vcdp->declBus  (c+248,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ io_alh_int_out",-1,16,0);
	vcdp->declBus  (c+249,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ io_bhl_int_out",-1,16,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:172
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:173
	vcdp->declBus  (c+272,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_40__io_result",-1,31,0);
	vcdp->declBus  (c+529,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_40__io_high",-1,31,0);
	vcdp->declBus  (c+530,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_40__io_mid",-1,31,0);
	vcdp->declBus  (c+531,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_40__io_low",-1,31,0);
	vcdp->declBus  (c+532,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_40__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+533,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_40__io_bhl_int_out",-1,8,0);
	vcdp->declBus  (c+273,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_41__io_result",-1,31,0);
	vcdp->declBus  (c+534,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_41__io_high",-1,31,0);
	vcdp->declBus  (c+535,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_41__io_mid",-1,31,0);
	vcdp->declBus  (c+536,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_41__io_low",-1,31,0);
	vcdp->declBus  (c+537,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_41__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+538,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_41__io_bhl_int_out",-1,8,0);
	vcdp->declBus  (c+274,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_42__io_result",-1,31,0);
	vcdp->declBus  (c+539,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_42__io_high",-1,31,0);
	vcdp->declBus  (c+540,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_42__io_mid",-1,31,0);
	vcdp->declBus  (c+541,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_42__io_low",-1,31,0);
	vcdp->declBus  (c+542,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_42__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+543,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_42__io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:192
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_12_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:193
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_13_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:194
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_14_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:195
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_15_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:196
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_16_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:197
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_17_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:198
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_18_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:199
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_19_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:200
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_20_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:201
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_21_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:202
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_22_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:203
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_23_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:204
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_24_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:205
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_25_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:206
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_26_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:207
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_27_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:208
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_28_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:209
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_29_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:210
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_30_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:211
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_31_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:212
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_32_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:213
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_33_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:214
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_34_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:215
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_35_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:216
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_36_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:217
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_37_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:218
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_38_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:219
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_39_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:220
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_40_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:221
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_41_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:222
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_42_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:223
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_43_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:224
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_44_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:225
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_45_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:226
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_46_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:227
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_47_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:228
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_48_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:229
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:230
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:231
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:232
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:233
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:234
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:235
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:236
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:237
	vcdp->declBus  (c+275,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_40_ io_a",-1,15,0);
	vcdp->declBus  (c+276,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_40_ io_b",-1,15,0);
	vcdp->declBus  (c+272,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_40_ io_result",-1,31,0);
	vcdp->declBus  (c+529,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_40_ io_high",-1,31,0);
	vcdp->declBus  (c+530,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_40_ io_mid",-1,31,0);
	vcdp->declBus  (c+531,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_40_ io_low",-1,31,0);
	vcdp->declBus  (c+532,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_40_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+533,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_40_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_40_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_40_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+277,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_41_ io_a",-1,15,0);
	vcdp->declBus  (c+278,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_41_ io_b",-1,15,0);
	vcdp->declBus  (c+273,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_41_ io_result",-1,31,0);
	vcdp->declBus  (c+534,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_41_ io_high",-1,31,0);
	vcdp->declBus  (c+535,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_41_ io_mid",-1,31,0);
	vcdp->declBus  (c+536,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_41_ io_low",-1,31,0);
	vcdp->declBus  (c+537,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_41_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+538,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_41_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_41_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_41_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+279,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_42_ io_a",-1,15,0);
	vcdp->declBus  (c+280,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_42_ io_b",-1,15,0);
	vcdp->declBus  (c+274,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_42_ io_result",-1,31,0);
	vcdp->declBus  (c+539,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_42_ io_high",-1,31,0);
	vcdp->declBus  (c+540,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_42_ io_mid",-1,31,0);
	vcdp->declBus  (c+541,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_42_ io_low",-1,31,0);
	vcdp->declBus  (c+542,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_42_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+543,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_42_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_42_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_40_ karaMult_42_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+281,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ io_a",-1,31,0);
	vcdp->declBus  (c+282,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ io_b",-1,31,0);
	vcdp->declQuad (c+250,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ io_result",-1,63,0);
	vcdp->declQuad (c+252,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ io_high",-1,63,0);
	vcdp->declQuad (c+254,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ io_mid",-1,63,0);
	vcdp->declQuad (c+256,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ io_low",-1,63,0);
	vcdp->declBus  (c+258,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ io_alh_int_out",-1,16,0);
	vcdp->declBus  (c+259,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ io_bhl_int_out",-1,16,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:172
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:173
	vcdp->declBus  (c+283,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_40__io_result",-1,31,0);
	vcdp->declBus  (c+544,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_40__io_high",-1,31,0);
	vcdp->declBus  (c+545,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_40__io_mid",-1,31,0);
	vcdp->declBus  (c+546,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_40__io_low",-1,31,0);
	vcdp->declBus  (c+547,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_40__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+548,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_40__io_bhl_int_out",-1,8,0);
	vcdp->declBus  (c+284,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_41__io_result",-1,31,0);
	vcdp->declBus  (c+549,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_41__io_high",-1,31,0);
	vcdp->declBus  (c+550,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_41__io_mid",-1,31,0);
	vcdp->declBus  (c+551,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_41__io_low",-1,31,0);
	vcdp->declBus  (c+552,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_41__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+553,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_41__io_bhl_int_out",-1,8,0);
	vcdp->declBus  (c+285,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_42__io_result",-1,31,0);
	vcdp->declBus  (c+554,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_42__io_high",-1,31,0);
	vcdp->declBus  (c+555,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_42__io_mid",-1,31,0);
	vcdp->declBus  (c+556,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_42__io_low",-1,31,0);
	vcdp->declBus  (c+557,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_42__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+558,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_42__io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:192
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_12_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:193
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_13_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:194
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_14_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:195
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_15_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:196
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_16_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:197
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_17_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:198
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_18_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:199
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_19_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:200
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_20_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:201
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_21_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:202
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_22_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:203
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_23_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:204
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_24_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:205
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_25_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:206
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_26_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:207
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_27_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:208
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_28_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:209
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_29_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:210
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_30_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:211
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_31_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:212
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_32_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:213
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_33_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:214
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_34_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:215
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_35_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:216
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_36_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:217
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_37_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:218
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_38_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:219
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_39_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:220
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_40_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:221
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_41_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:222
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_42_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:223
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_43_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:224
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_44_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:225
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_45_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:226
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_46_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:227
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_47_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:228
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_48_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:229
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:230
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:231
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:232
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:233
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:234
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:235
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:236
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:237
	vcdp->declBus  (c+286,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_40_ io_a",-1,15,0);
	vcdp->declBus  (c+287,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_40_ io_b",-1,15,0);
	vcdp->declBus  (c+283,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_40_ io_result",-1,31,0);
	vcdp->declBus  (c+544,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_40_ io_high",-1,31,0);
	vcdp->declBus  (c+545,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_40_ io_mid",-1,31,0);
	vcdp->declBus  (c+546,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_40_ io_low",-1,31,0);
	vcdp->declBus  (c+547,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_40_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+548,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_40_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_40_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_40_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+288,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_41_ io_a",-1,15,0);
	vcdp->declBus  (c+289,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_41_ io_b",-1,15,0);
	vcdp->declBus  (c+284,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_41_ io_result",-1,31,0);
	vcdp->declBus  (c+549,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_41_ io_high",-1,31,0);
	vcdp->declBus  (c+550,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_41_ io_mid",-1,31,0);
	vcdp->declBus  (c+551,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_41_ io_low",-1,31,0);
	vcdp->declBus  (c+552,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_41_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+553,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_41_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_41_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_41_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+290,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_42_ io_a",-1,15,0);
	vcdp->declBus  (c+291,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_42_ io_b",-1,15,0);
	vcdp->declBus  (c+285,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_42_ io_result",-1,31,0);
	vcdp->declBus  (c+554,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_42_ io_high",-1,31,0);
	vcdp->declBus  (c+555,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_42_ io_mid",-1,31,0);
	vcdp->declBus  (c+556,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_42_ io_low",-1,31,0);
	vcdp->declBus  (c+557,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_42_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+558,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_42_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_42_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_41_ karaMult_42_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+292,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ io_a",-1,31,0);
	vcdp->declBus  (c+293,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ io_b",-1,31,0);
	vcdp->declQuad (c+260,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ io_result",-1,63,0);
	vcdp->declQuad (c+262,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ io_high",-1,63,0);
	vcdp->declQuad (c+264,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ io_mid",-1,63,0);
	vcdp->declQuad (c+266,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ io_low",-1,63,0);
	vcdp->declBus  (c+268,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ io_alh_int_out",-1,16,0);
	vcdp->declBus  (c+269,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ io_bhl_int_out",-1,16,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_9_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:172
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_10_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:173
	vcdp->declBus  (c+294,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_40__io_result",-1,31,0);
	vcdp->declBus  (c+559,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_40__io_high",-1,31,0);
	vcdp->declBus  (c+560,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_40__io_mid",-1,31,0);
	vcdp->declBus  (c+561,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_40__io_low",-1,31,0);
	vcdp->declBus  (c+562,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_40__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+563,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_40__io_bhl_int_out",-1,8,0);
	vcdp->declBus  (c+295,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_41__io_result",-1,31,0);
	vcdp->declBus  (c+564,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_41__io_high",-1,31,0);
	vcdp->declBus  (c+565,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_41__io_mid",-1,31,0);
	vcdp->declBus  (c+566,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_41__io_low",-1,31,0);
	vcdp->declBus  (c+567,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_41__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+568,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_41__io_bhl_int_out",-1,8,0);
	vcdp->declBus  (c+296,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_42__io_result",-1,31,0);
	vcdp->declBus  (c+569,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_42__io_high",-1,31,0);
	vcdp->declBus  (c+570,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_42__io_mid",-1,31,0);
	vcdp->declBus  (c+571,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_42__io_low",-1,31,0);
	vcdp->declBus  (c+572,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_42__io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+573,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_42__io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_11_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:192
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_12_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:193
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_13_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:194
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_14_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:195
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_15_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:196
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_16_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:197
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_17_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:198
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_18_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:199
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_19_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:200
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_20_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:201
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_21_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:202
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_22_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:203
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_23_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:204
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_24_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:205
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_25_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:206
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_26_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:207
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_27_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:208
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_28_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:209
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_29_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:210
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_30_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:211
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_31_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:212
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_32_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:213
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_33_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:214
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_34_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:215
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_35_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:216
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_36_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:217
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_37_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:218
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_38_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:219
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_39_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:220
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_40_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:221
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_41_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:222
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_42_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:223
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_43_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:224
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_44_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:225
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_45_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:226
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_46_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:227
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_47_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:228
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_48_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:229
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:230
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:231
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_3_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:232
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_4_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:233
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_5_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:234
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_6_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:235
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_7_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:236
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ _zz_8_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:237
	vcdp->declBus  (c+297,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_40_ io_a",-1,15,0);
	vcdp->declBus  (c+298,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_40_ io_b",-1,15,0);
	vcdp->declBus  (c+294,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_40_ io_result",-1,31,0);
	vcdp->declBus  (c+559,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_40_ io_high",-1,31,0);
	vcdp->declBus  (c+560,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_40_ io_mid",-1,31,0);
	vcdp->declBus  (c+561,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_40_ io_low",-1,31,0);
	vcdp->declBus  (c+562,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_40_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+563,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_40_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_40_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_40_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+299,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_41_ io_a",-1,15,0);
	vcdp->declBus  (c+300,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_41_ io_b",-1,15,0);
	vcdp->declBus  (c+295,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_41_ io_result",-1,31,0);
	vcdp->declBus  (c+564,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_41_ io_high",-1,31,0);
	vcdp->declBus  (c+565,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_41_ io_mid",-1,31,0);
	vcdp->declBus  (c+566,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_41_ io_low",-1,31,0);
	vcdp->declBus  (c+567,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_41_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+568,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_41_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_41_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_41_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
	vcdp->declBus  (c+301,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_42_ io_a",-1,15,0);
	vcdp->declBus  (c+302,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_42_ io_b",-1,15,0);
	vcdp->declBus  (c+296,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_42_ io_result",-1,31,0);
	vcdp->declBus  (c+569,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_42_ io_high",-1,31,0);
	vcdp->declBus  (c+570,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_42_ io_mid",-1,31,0);
	vcdp->declBus  (c+571,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_42_ io_low",-1,31,0);
	vcdp->declBus  (c+572,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_42_ io_alh_int_out",-1,8,0);
	vcdp->declBus  (c+573,"UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_42_ io_bhl_int_out",-1,8,0);
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_42_ _zz_1_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:57
	// Tracing: UartKaraReg karareg_1_ karaMult_40_ karaMult_42_ karaMult_42_ karaMult_42_ _zz_2_ // Ignored: Inlined leading underscore at /home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/11_uart_kara_reg/spinalHDL/tmp/job_1/UartKaraReg.v:58
    }
}

void VUartKaraReg::traceFullThis__1(VUartKaraReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUartKaraReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp532,127,0,4);
    VL_SIGW(__Vtemp533,255,0,8);
    VL_SIGW(__Vtemp534,255,0,8);
    VL_SIGW(__Vtemp535,287,0,9);
    VL_SIGW(__Vtemp537,95,0,3);
    VL_SIGW(__Vtemp538,95,0,3);
    VL_SIGW(__Vtemp541,127,0,4);
    VL_SIGW(__Vtemp542,159,0,5);
    VL_SIGW(__Vtemp543,127,0,4);
    VL_SIGW(__Vtemp544,159,0,5);
    VL_SIGW(__Vtemp545,159,0,5);
    VL_SIGW(__Vtemp546,127,0,4);
    VL_SIGW(__Vtemp547,159,0,5);
    VL_SIGW(__Vtemp548,159,0,5);
    VL_SIGW(__Vtemp549,159,0,5);
    VL_SIGW(__Vtemp550,223,0,7);
    VL_SIGW(__Vtemp551,223,0,7);
    VL_SIGW(__Vtemp552,223,0,7);
    VL_SIGW(__Vtemp553,223,0,7);
    VL_SIGW(__Vtemp556,127,0,4);
    VL_SIGW(__Vtemp557,159,0,5);
    VL_SIGW(__Vtemp558,127,0,4);
    VL_SIGW(__Vtemp559,159,0,5);
    VL_SIGW(__Vtemp560,159,0,5);
    VL_SIGW(__Vtemp561,159,0,5);
    VL_SIGW(__Vtemp562,159,0,5);
    VL_SIGW(__Vtemp563,127,0,4);
    VL_SIGW(__Vtemp564,159,0,5);
    VL_SIGW(__Vtemp565,159,0,5);
    VL_SIGW(__Vtemp566,159,0,5);
    VL_SIGW(__Vtemp567,223,0,7);
    VL_SIGW(__Vtemp568,223,0,7);
    VL_SIGW(__Vtemp571,223,0,7);
    VL_SIGW(__Vtemp572,287,0,9);
    VL_SIGW(__Vtemp573,287,0,9);
    VL_SIGW(__Vtemp574,287,0,9);
    VL_SIGW(__Vtemp575,287,0,9);
    VL_SIGW(__Vtemp576,255,0,8);
    VL_SIGW(__Vtemp577,127,0,4);
    VL_SIGW(__Vtemp578,287,0,9);
    VL_SIGW(__Vtemp579,255,0,8);
    VL_SIGW(__Vtemp580,255,0,8);
    VL_SIGW(__Vtemp581,127,0,4);
    VL_SIGW(__Vtemp582,255,0,8);
    VL_SIGW(__Vtemp583,255,0,8);
    VL_SIGW(__Vtemp585,95,0,3);
    VL_SIGW(__Vtemp586,95,0,3);
    VL_SIGW(__Vtemp589,127,0,4);
    VL_SIGW(__Vtemp590,159,0,5);
    VL_SIGW(__Vtemp591,127,0,4);
    VL_SIGW(__Vtemp592,159,0,5);
    VL_SIGW(__Vtemp593,159,0,5);
    VL_SIGW(__Vtemp594,127,0,4);
    VL_SIGW(__Vtemp595,159,0,5);
    VL_SIGW(__Vtemp596,159,0,5);
    VL_SIGW(__Vtemp597,159,0,5);
    VL_SIGW(__Vtemp598,223,0,7);
    VL_SIGW(__Vtemp599,223,0,7);
    VL_SIGW(__Vtemp600,223,0,7);
    VL_SIGW(__Vtemp601,223,0,7);
    VL_SIGW(__Vtemp604,127,0,4);
    VL_SIGW(__Vtemp605,159,0,5);
    VL_SIGW(__Vtemp606,127,0,4);
    VL_SIGW(__Vtemp607,159,0,5);
    VL_SIGW(__Vtemp608,159,0,5);
    VL_SIGW(__Vtemp609,159,0,5);
    VL_SIGW(__Vtemp610,159,0,5);
    VL_SIGW(__Vtemp611,127,0,4);
    VL_SIGW(__Vtemp612,159,0,5);
    VL_SIGW(__Vtemp613,159,0,5);
    VL_SIGW(__Vtemp614,159,0,5);
    VL_SIGW(__Vtemp615,223,0,7);
    VL_SIGW(__Vtemp616,223,0,7);
    VL_SIGW(__Vtemp619,223,0,7);
    VL_SIGW(__Vtemp620,255,0,8);
    VL_SIGW(__Vtemp621,127,0,4);
    VL_SIGW(__Vtemp622,255,0,8);
    VL_SIGW(__Vtemp623,127,0,4);
    VL_SIGW(__Vtemp624,127,0,4);
    VL_SIGW(__Vtemp625,127,0,4);
    VL_SIGW(__Vtemp629,95,0,3);
    VL_SIGW(__Vtemp630,95,0,3);
    VL_SIGW(__Vtemp631,95,0,3);
    VL_SIGW(__Vtemp632,95,0,3);
    VL_SIGW(__Vtemp633,95,0,3);
    VL_SIGW(__Vtemp634,95,0,3);
    VL_SIGW(__Vtemp635,127,0,4);
    VL_SIGW(__Vtemp636,127,0,4);
    VL_SIGW(__Vtemp637,127,0,4);
    VL_SIGW(__Vtemp638,127,0,4);
    VL_SIGW(__Vtemp641,95,0,3);
    VL_SIGW(__Vtemp642,95,0,3);
    VL_SIGW(__Vtemp643,95,0,3);
    VL_SIGW(__Vtemp644,95,0,3);
    VL_SIGW(__Vtemp645,95,0,3);
    VL_SIGW(__Vtemp646,95,0,3);
    VL_SIGW(__Vtemp647,95,0,3);
    VL_SIGW(__Vtemp648,95,0,3);
    VL_SIGW(__Vtemp649,127,0,4);
    VL_SIGW(__Vtemp650,127,0,4);
    VL_SIGW(__Vtemp653,127,0,4);
    VL_SIGW(__Vtemp654,127,0,4);
    VL_SIGW(__Vtemp655,127,0,4);
    VL_SIGW(__Vtemp656,127,0,4);
    VL_SIGW(__Vtemp657,127,0,4);
    VL_SIGW(__Vtemp658,127,0,4);
    VL_SIGW(__Vtemp662,95,0,3);
    VL_SIGW(__Vtemp663,95,0,3);
    VL_SIGW(__Vtemp664,95,0,3);
    VL_SIGW(__Vtemp665,95,0,3);
    VL_SIGW(__Vtemp666,95,0,3);
    VL_SIGW(__Vtemp667,95,0,3);
    VL_SIGW(__Vtemp668,127,0,4);
    VL_SIGW(__Vtemp669,127,0,4);
    VL_SIGW(__Vtemp670,127,0,4);
    VL_SIGW(__Vtemp671,127,0,4);
    VL_SIGW(__Vtemp674,95,0,3);
    VL_SIGW(__Vtemp675,95,0,3);
    VL_SIGW(__Vtemp676,95,0,3);
    VL_SIGW(__Vtemp677,95,0,3);
    VL_SIGW(__Vtemp678,95,0,3);
    VL_SIGW(__Vtemp679,95,0,3);
    VL_SIGW(__Vtemp680,95,0,3);
    VL_SIGW(__Vtemp681,95,0,3);
    VL_SIGW(__Vtemp682,127,0,4);
    VL_SIGW(__Vtemp683,127,0,4);
    VL_SIGW(__Vtemp686,127,0,4);
    VL_SIGW(__Vtemp687,127,0,4);
    VL_SIGW(__Vtemp688,127,0,4);
    VL_SIGW(__Vtemp689,127,0,4);
    VL_SIGW(__Vtemp690,127,0,4);
    VL_SIGW(__Vtemp691,127,0,4);
    VL_SIGW(__Vtemp695,95,0,3);
    VL_SIGW(__Vtemp696,95,0,3);
    VL_SIGW(__Vtemp697,95,0,3);
    VL_SIGW(__Vtemp698,95,0,3);
    VL_SIGW(__Vtemp699,95,0,3);
    VL_SIGW(__Vtemp700,95,0,3);
    VL_SIGW(__Vtemp701,127,0,4);
    VL_SIGW(__Vtemp702,127,0,4);
    VL_SIGW(__Vtemp703,127,0,4);
    VL_SIGW(__Vtemp704,127,0,4);
    VL_SIGW(__Vtemp707,95,0,3);
    VL_SIGW(__Vtemp708,95,0,3);
    VL_SIGW(__Vtemp709,95,0,3);
    VL_SIGW(__Vtemp710,95,0,3);
    VL_SIGW(__Vtemp711,95,0,3);
    VL_SIGW(__Vtemp712,95,0,3);
    VL_SIGW(__Vtemp713,95,0,3);
    VL_SIGW(__Vtemp714,95,0,3);
    VL_SIGW(__Vtemp715,127,0,4);
    VL_SIGW(__Vtemp716,127,0,4);
    VL_SIGW(__Vtemp719,127,0,4);
    VL_SIGW(__Vtemp720,127,0,4);
    VL_SIGW(__Vtemp721,127,0,4);
    VL_SIGW(__Vtemp722,127,0,4);
    VL_SIGW(__Vtemp723,127,0,4);
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_valid));
	vcdp->fullArray(c+2,(vlTOPp->UartKaraReg__DOT__uartfsm_io_toFnct_payload),256);
	vcdp->fullArray(c+10,(vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_payload),256);
	vcdp->fullBit  (c+18,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_valid));
	vcdp->fullArray(c+19,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg_string),160);
	vcdp->fullArray(c+24,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg_string),160);
	__Vtemp532[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U];
	__Vtemp532[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U];
	__Vtemp532[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[2U];
	__Vtemp532[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[3U];
	VL_EXTEND_WW(256,128, __Vtemp533, __Vtemp532);
	VL_SHIFTL_WWI(256,256,32, __Vtemp534, __Vtemp533, 0x80U);
	VL_EXTEND_WW(257,256, __Vtemp535, __Vtemp534);
	__Vtemp537[0U] = 0U;
	__Vtemp537[1U] = 0U;
	__Vtemp537[2U] = 0U;
	__Vtemp538[0U] = 0U;
	__Vtemp538[1U] = 0U;
	__Vtemp538[2U] = 0U;
	__Vtemp541[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U];
	__Vtemp541[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U];
	__Vtemp541[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[2U];
	__Vtemp541[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[3U];
	VL_EXTEND_WW(129,128, __Vtemp542, __Vtemp541);
	__Vtemp543[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U];
	__Vtemp543[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U];
	__Vtemp543[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[2U];
	__Vtemp543[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[3U];
	VL_EXTEND_WW(129,128, __Vtemp544, __Vtemp543);
	VL_ADD_W(5, __Vtemp545, __Vtemp542, __Vtemp544);
	__Vtemp546[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[0U];
	__Vtemp546[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[1U];
	__Vtemp546[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[2U];
	__Vtemp546[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[3U];
	VL_EXTEND_WW(129,128, __Vtemp547, __Vtemp546);
	VL_SUB_W(5, __Vtemp548, __Vtemp545, __Vtemp547);
	__Vtemp549[0U] = __Vtemp548[0U];
	__Vtemp549[1U] = __Vtemp548[1U];
	__Vtemp549[2U] = __Vtemp548[2U];
	__Vtemp549[3U] = __Vtemp548[3U];
	__Vtemp549[4U] = (1U & __Vtemp548[4U]);
	VL_EXTEND_WW(193,129, __Vtemp550, __Vtemp549);
	VL_SHIFTL_WWI(193,193,32, __Vtemp551, __Vtemp550, 0x40U);
	__Vtemp552[0U] = __Vtemp551[0U];
	__Vtemp552[1U] = __Vtemp551[1U];
	__Vtemp552[2U] = __Vtemp551[2U];
	__Vtemp552[3U] = __Vtemp551[3U];
	__Vtemp552[4U] = __Vtemp551[4U];
	__Vtemp552[5U] = __Vtemp551[5U];
	__Vtemp552[6U] = (1U & __Vtemp551[6U]);
	VL_EXTEND_WW(194,193, __Vtemp553, __Vtemp552);
	__Vtemp556[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U];
	__Vtemp556[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U];
	__Vtemp556[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[2U];
	__Vtemp556[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[3U];
	VL_EXTEND_WW(129,128, __Vtemp557, __Vtemp556);
	__Vtemp558[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U];
	__Vtemp558[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U];
	__Vtemp558[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[2U];
	__Vtemp558[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[3U];
	VL_EXTEND_WW(129,128, __Vtemp559, __Vtemp558);
	VL_ADD_W(5, __Vtemp560, __Vtemp557, __Vtemp559);
	__Vtemp561[0U] = __Vtemp560[0U];
	__Vtemp561[1U] = __Vtemp560[1U];
	__Vtemp561[2U] = __Vtemp560[2U];
	__Vtemp561[3U] = __Vtemp560[3U];
	__Vtemp561[4U] = (1U & __Vtemp560[4U]);
	VL_EXTEND_WW(130,129, __Vtemp562, __Vtemp561);
	__Vtemp563[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[0U];
	__Vtemp563[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[1U];
	__Vtemp563[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[2U];
	__Vtemp563[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[3U];
	VL_EXTEND_WW(130,128, __Vtemp564, __Vtemp563);
	VL_ADD_W(5, __Vtemp565, __Vtemp562, __Vtemp564);
	__Vtemp566[0U] = __Vtemp565[0U];
	__Vtemp566[1U] = __Vtemp565[1U];
	__Vtemp566[2U] = __Vtemp565[2U];
	__Vtemp566[3U] = __Vtemp565[3U];
	__Vtemp566[4U] = (3U & __Vtemp565[4U]);
	VL_EXTEND_WW(194,130, __Vtemp567, __Vtemp566);
	VL_SHIFTL_WWI(194,194,32, __Vtemp568, __Vtemp567, 0x40U);
	__Vtemp571[0U] = ((VL_GTS_IWW(1,65,65, __Vtemp537, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
			   ^ VL_GTS_IWW(1,65,65, __Vtemp538, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
			   ? __Vtemp553[0U] : __Vtemp568[0U]);
	__Vtemp571[1U] = ((VL_GTS_IWW(1,65,65, __Vtemp537, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
			   ^ VL_GTS_IWW(1,65,65, __Vtemp538, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
			   ? __Vtemp553[1U] : __Vtemp568[1U]);
	__Vtemp571[2U] = ((VL_GTS_IWW(1,65,65, __Vtemp537, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
			   ^ VL_GTS_IWW(1,65,65, __Vtemp538, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
			   ? __Vtemp553[2U] : __Vtemp568[2U]);
	__Vtemp571[3U] = ((VL_GTS_IWW(1,65,65, __Vtemp537, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
			   ^ VL_GTS_IWW(1,65,65, __Vtemp538, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
			   ? __Vtemp553[3U] : __Vtemp568[3U]);
	__Vtemp571[4U] = ((VL_GTS_IWW(1,65,65, __Vtemp537, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
			   ^ VL_GTS_IWW(1,65,65, __Vtemp538, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
			   ? __Vtemp553[4U] : __Vtemp568[4U]);
	__Vtemp571[5U] = ((VL_GTS_IWW(1,65,65, __Vtemp537, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
			   ^ VL_GTS_IWW(1,65,65, __Vtemp538, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
			   ? __Vtemp553[5U] : __Vtemp568[5U]);
	__Vtemp571[6U] = (3U & ((VL_GTS_IWW(1,65,65, __Vtemp537, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
				 ^ VL_GTS_IWW(1,65,65, __Vtemp538, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
				 ? __Vtemp553[6U] : 
				__Vtemp568[6U]));
	VL_EXTEND_WW(257,194, __Vtemp572, __Vtemp571);
	VL_ADD_W(9, __Vtemp573, __Vtemp535, __Vtemp572);
	__Vtemp574[0U] = __Vtemp573[0U];
	__Vtemp574[1U] = __Vtemp573[1U];
	__Vtemp574[2U] = __Vtemp573[2U];
	__Vtemp574[3U] = __Vtemp573[3U];
	__Vtemp574[4U] = __Vtemp573[4U];
	__Vtemp574[5U] = __Vtemp573[5U];
	__Vtemp574[6U] = __Vtemp573[6U];
	__Vtemp574[7U] = __Vtemp573[7U];
	__Vtemp574[8U] = (1U & __Vtemp573[8U]);
	VL_EXTEND_WW(258,257, __Vtemp575, __Vtemp574);
	__Vtemp576[0U] = __Vtemp575[0U];
	__Vtemp576[1U] = __Vtemp575[1U];
	__Vtemp576[2U] = __Vtemp575[2U];
	__Vtemp576[3U] = __Vtemp575[3U];
	__Vtemp576[4U] = __Vtemp575[4U];
	__Vtemp576[5U] = __Vtemp575[5U];
	__Vtemp576[6U] = __Vtemp575[6U];
	__Vtemp576[7U] = __Vtemp575[7U];
	__Vtemp577[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U];
	__Vtemp577[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U];
	__Vtemp577[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[2U];
	__Vtemp577[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[3U];
	VL_EXTEND_WW(258,128, __Vtemp578, __Vtemp577);
	__Vtemp579[0U] = __Vtemp578[0U];
	__Vtemp579[1U] = __Vtemp578[1U];
	__Vtemp579[2U] = __Vtemp578[2U];
	__Vtemp579[3U] = __Vtemp578[3U];
	__Vtemp579[4U] = __Vtemp578[4U];
	__Vtemp579[5U] = __Vtemp578[5U];
	__Vtemp579[6U] = __Vtemp578[6U];
	__Vtemp579[7U] = __Vtemp578[7U];
	VL_ADD_W(8, __Vtemp580, __Vtemp576, __Vtemp579);
	vcdp->fullArray(c+29,(__Vtemp580),256);
	__Vtemp581[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U];
	__Vtemp581[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U];
	__Vtemp581[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[2U];
	__Vtemp581[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[3U];
	VL_EXTEND_WW(256,128, __Vtemp582, __Vtemp581);
	VL_SHIFTL_WWI(256,256,32, __Vtemp583, __Vtemp582, 0x80U);
	vcdp->fullArray(c+37,(__Vtemp583),256);
	__Vtemp585[0U] = 0U;
	__Vtemp585[1U] = 0U;
	__Vtemp585[2U] = 0U;
	__Vtemp586[0U] = 0U;
	__Vtemp586[1U] = 0U;
	__Vtemp586[2U] = 0U;
	__Vtemp589[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U];
	__Vtemp589[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U];
	__Vtemp589[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[2U];
	__Vtemp589[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[3U];
	VL_EXTEND_WW(129,128, __Vtemp590, __Vtemp589);
	__Vtemp591[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U];
	__Vtemp591[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U];
	__Vtemp591[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[2U];
	__Vtemp591[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[3U];
	VL_EXTEND_WW(129,128, __Vtemp592, __Vtemp591);
	VL_ADD_W(5, __Vtemp593, __Vtemp590, __Vtemp592);
	__Vtemp594[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[0U];
	__Vtemp594[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[1U];
	__Vtemp594[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[2U];
	__Vtemp594[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[3U];
	VL_EXTEND_WW(129,128, __Vtemp595, __Vtemp594);
	VL_SUB_W(5, __Vtemp596, __Vtemp593, __Vtemp595);
	__Vtemp597[0U] = __Vtemp596[0U];
	__Vtemp597[1U] = __Vtemp596[1U];
	__Vtemp597[2U] = __Vtemp596[2U];
	__Vtemp597[3U] = __Vtemp596[3U];
	__Vtemp597[4U] = (1U & __Vtemp596[4U]);
	VL_EXTEND_WW(193,129, __Vtemp598, __Vtemp597);
	VL_SHIFTL_WWI(193,193,32, __Vtemp599, __Vtemp598, 0x40U);
	__Vtemp600[0U] = __Vtemp599[0U];
	__Vtemp600[1U] = __Vtemp599[1U];
	__Vtemp600[2U] = __Vtemp599[2U];
	__Vtemp600[3U] = __Vtemp599[3U];
	__Vtemp600[4U] = __Vtemp599[4U];
	__Vtemp600[5U] = __Vtemp599[5U];
	__Vtemp600[6U] = (1U & __Vtemp599[6U]);
	VL_EXTEND_WW(194,193, __Vtemp601, __Vtemp600);
	__Vtemp604[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U];
	__Vtemp604[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U];
	__Vtemp604[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[2U];
	__Vtemp604[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[3U];
	VL_EXTEND_WW(129,128, __Vtemp605, __Vtemp604);
	__Vtemp606[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U];
	__Vtemp606[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U];
	__Vtemp606[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[2U];
	__Vtemp606[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[3U];
	VL_EXTEND_WW(129,128, __Vtemp607, __Vtemp606);
	VL_ADD_W(5, __Vtemp608, __Vtemp605, __Vtemp607);
	__Vtemp609[0U] = __Vtemp608[0U];
	__Vtemp609[1U] = __Vtemp608[1U];
	__Vtemp609[2U] = __Vtemp608[2U];
	__Vtemp609[3U] = __Vtemp608[3U];
	__Vtemp609[4U] = (1U & __Vtemp608[4U]);
	VL_EXTEND_WW(130,129, __Vtemp610, __Vtemp609);
	__Vtemp611[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[0U];
	__Vtemp611[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[1U];
	__Vtemp611[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[2U];
	__Vtemp611[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[3U];
	VL_EXTEND_WW(130,128, __Vtemp612, __Vtemp611);
	VL_ADD_W(5, __Vtemp613, __Vtemp610, __Vtemp612);
	__Vtemp614[0U] = __Vtemp613[0U];
	__Vtemp614[1U] = __Vtemp613[1U];
	__Vtemp614[2U] = __Vtemp613[2U];
	__Vtemp614[3U] = __Vtemp613[3U];
	__Vtemp614[4U] = (3U & __Vtemp613[4U]);
	VL_EXTEND_WW(194,130, __Vtemp615, __Vtemp614);
	VL_SHIFTL_WWI(194,194,32, __Vtemp616, __Vtemp615, 0x40U);
	__Vtemp619[0U] = ((VL_GTS_IWW(1,65,65, __Vtemp585, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
			   ^ VL_GTS_IWW(1,65,65, __Vtemp586, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
			   ? __Vtemp601[0U] : __Vtemp616[0U]);
	__Vtemp619[1U] = ((VL_GTS_IWW(1,65,65, __Vtemp585, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
			   ^ VL_GTS_IWW(1,65,65, __Vtemp586, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
			   ? __Vtemp601[1U] : __Vtemp616[1U]);
	__Vtemp619[2U] = ((VL_GTS_IWW(1,65,65, __Vtemp585, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
			   ^ VL_GTS_IWW(1,65,65, __Vtemp586, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
			   ? __Vtemp601[2U] : __Vtemp616[2U]);
	__Vtemp619[3U] = ((VL_GTS_IWW(1,65,65, __Vtemp585, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
			   ^ VL_GTS_IWW(1,65,65, __Vtemp586, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
			   ? __Vtemp601[3U] : __Vtemp616[3U]);
	__Vtemp619[4U] = ((VL_GTS_IWW(1,65,65, __Vtemp585, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
			   ^ VL_GTS_IWW(1,65,65, __Vtemp586, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
			   ? __Vtemp601[4U] : __Vtemp616[4U]);
	__Vtemp619[5U] = ((VL_GTS_IWW(1,65,65, __Vtemp585, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
			   ^ VL_GTS_IWW(1,65,65, __Vtemp586, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
			   ? __Vtemp601[5U] : __Vtemp616[5U]);
	__Vtemp619[6U] = (3U & ((VL_GTS_IWW(1,65,65, __Vtemp585, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_) 
				 ^ VL_GTS_IWW(1,65,65, __Vtemp586, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_))
				 ? __Vtemp601[6U] : 
				__Vtemp616[6U]));
	VL_EXTEND_WW(256,194, __Vtemp620, __Vtemp619);
	vcdp->fullArray(c+45,(__Vtemp620),256);
	__Vtemp621[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U];
	__Vtemp621[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U];
	__Vtemp621[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[2U];
	__Vtemp621[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[3U];
	VL_EXTEND_WW(256,128, __Vtemp622, __Vtemp621);
	vcdp->fullArray(c+53,(__Vtemp622),256);
	vcdp->fullArray(c+61,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_5_),65);
	vcdp->fullArray(c+64,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_6_),65);
	vcdp->fullBus  (c+67,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateNext),2);
	vcdp->fullArray(c+68,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg_string),80);
	vcdp->fullArray(c+71,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateNext_string),80);
	__Vtemp623[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U];
	__Vtemp623[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U];
	__Vtemp623[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[2U];
	__Vtemp623[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[3U];
	vcdp->fullArray(c+74,(__Vtemp623),128);
	VL_EXTEND_WQ(128,64, __Vtemp624, (((QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U])) 
					   << 0x20U) 
					  | (QData)((IData)(
							    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U]))));
	VL_SHIFTL_WWI(128,128,32, __Vtemp625, __Vtemp624, 0x40U);
	vcdp->fullArray(c+78,(__Vtemp625),128);
	VL_EXTEND_WQ(65,64, __Vtemp629, (((QData)((IData)(
							  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U]))));
	VL_EXTEND_WQ(65,64, __Vtemp630, (((QData)((IData)(
							  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U]))));
	VL_ADD_W(3, __Vtemp631, __Vtemp629, __Vtemp630);
	VL_EXTEND_WQ(65,64, __Vtemp632, (((QData)((IData)(
							  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[0U]))));
	VL_SUB_W(3, __Vtemp633, __Vtemp631, __Vtemp632);
	__Vtemp634[0U] = __Vtemp633[0U];
	__Vtemp634[1U] = __Vtemp633[1U];
	__Vtemp634[2U] = (1U & __Vtemp633[2U]);
	VL_EXTEND_WW(97,65, __Vtemp635, __Vtemp634);
	VL_SHIFTL_WWI(97,97,32, __Vtemp636, __Vtemp635, 0x20U);
	__Vtemp637[0U] = __Vtemp636[0U];
	__Vtemp637[1U] = __Vtemp636[1U];
	__Vtemp637[2U] = __Vtemp636[2U];
	__Vtemp637[3U] = (1U & __Vtemp636[3U]);
	VL_EXTEND_WW(98,97, __Vtemp638, __Vtemp637);
	VL_EXTEND_WQ(65,64, __Vtemp641, (((QData)((IData)(
							  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U]))));
	VL_EXTEND_WQ(65,64, __Vtemp642, (((QData)((IData)(
							  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U]))));
	VL_ADD_W(3, __Vtemp643, __Vtemp641, __Vtemp642);
	__Vtemp644[0U] = __Vtemp643[0U];
	__Vtemp644[1U] = __Vtemp643[1U];
	__Vtemp644[2U] = (1U & __Vtemp643[2U]);
	VL_EXTEND_WW(66,65, __Vtemp645, __Vtemp644);
	VL_EXTEND_WQ(66,64, __Vtemp646, (((QData)((IData)(
							  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[0U]))));
	VL_ADD_W(3, __Vtemp647, __Vtemp645, __Vtemp646);
	__Vtemp648[0U] = __Vtemp647[0U];
	__Vtemp648[1U] = __Vtemp647[1U];
	__Vtemp648[2U] = (3U & __Vtemp647[2U]);
	VL_EXTEND_WW(98,66, __Vtemp649, __Vtemp648);
	VL_SHIFTL_WWI(98,98,32, __Vtemp650, __Vtemp649, 0x20U);
	__Vtemp653[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_) 
			   ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_))
			   ? __Vtemp638[0U] : __Vtemp650[0U]);
	__Vtemp653[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_) 
			   ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_))
			   ? __Vtemp638[1U] : __Vtemp650[1U]);
	__Vtemp653[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_) 
			   ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_))
			   ? __Vtemp638[2U] : __Vtemp650[2U]);
	__Vtemp653[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_) 
				 ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_))
				 ? __Vtemp638[3U] : 
				__Vtemp650[3U]));
	VL_EXTEND_WW(128,98, __Vtemp654, __Vtemp653);
	vcdp->fullArray(c+82,(__Vtemp654),128);
	VL_EXTEND_WQ(128,64, __Vtemp655, (((QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U])) 
					   << 0x20U) 
					  | (QData)((IData)(
							    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U]))));
	vcdp->fullArray(c+86,(__Vtemp655),128);
	vcdp->fullQuad (c+90,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_),33);
	vcdp->fullQuad (c+92,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_),33);
	__Vtemp656[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U];
	__Vtemp656[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U];
	__Vtemp656[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[2U];
	__Vtemp656[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[3U];
	vcdp->fullArray(c+94,(__Vtemp656),128);
	VL_EXTEND_WQ(128,64, __Vtemp657, (((QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[1U])) 
					   << 0x20U) 
					  | (QData)((IData)(
							    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[0U]))));
	VL_SHIFTL_WWI(128,128,32, __Vtemp658, __Vtemp657, 0x40U);
	vcdp->fullArray(c+98,(__Vtemp658),128);
	VL_EXTEND_WQ(65,64, __Vtemp662, (((QData)((IData)(
							  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[0U]))));
	VL_EXTEND_WQ(65,64, __Vtemp663, (((QData)((IData)(
							  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[0U]))));
	VL_ADD_W(3, __Vtemp664, __Vtemp662, __Vtemp663);
	VL_EXTEND_WQ(65,64, __Vtemp665, (((QData)((IData)(
							  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[0U]))));
	VL_SUB_W(3, __Vtemp666, __Vtemp664, __Vtemp665);
	__Vtemp667[0U] = __Vtemp666[0U];
	__Vtemp667[1U] = __Vtemp666[1U];
	__Vtemp667[2U] = (1U & __Vtemp666[2U]);
	VL_EXTEND_WW(97,65, __Vtemp668, __Vtemp667);
	VL_SHIFTL_WWI(97,97,32, __Vtemp669, __Vtemp668, 0x20U);
	__Vtemp670[0U] = __Vtemp669[0U];
	__Vtemp670[1U] = __Vtemp669[1U];
	__Vtemp670[2U] = __Vtemp669[2U];
	__Vtemp670[3U] = (1U & __Vtemp669[3U]);
	VL_EXTEND_WW(98,97, __Vtemp671, __Vtemp670);
	VL_EXTEND_WQ(65,64, __Vtemp674, (((QData)((IData)(
							  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[0U]))));
	VL_EXTEND_WQ(65,64, __Vtemp675, (((QData)((IData)(
							  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[0U]))));
	VL_ADD_W(3, __Vtemp676, __Vtemp674, __Vtemp675);
	__Vtemp677[0U] = __Vtemp676[0U];
	__Vtemp677[1U] = __Vtemp676[1U];
	__Vtemp677[2U] = (1U & __Vtemp676[2U]);
	VL_EXTEND_WW(66,65, __Vtemp678, __Vtemp677);
	VL_EXTEND_WQ(66,64, __Vtemp679, (((QData)((IData)(
							  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[0U]))));
	VL_ADD_W(3, __Vtemp680, __Vtemp678, __Vtemp679);
	__Vtemp681[0U] = __Vtemp680[0U];
	__Vtemp681[1U] = __Vtemp680[1U];
	__Vtemp681[2U] = (3U & __Vtemp680[2U]);
	VL_EXTEND_WW(98,66, __Vtemp682, __Vtemp681);
	VL_SHIFTL_WWI(98,98,32, __Vtemp683, __Vtemp682, 0x20U);
	__Vtemp686[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_) 
			   ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_))
			   ? __Vtemp671[0U] : __Vtemp683[0U]);
	__Vtemp686[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_) 
			   ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_))
			   ? __Vtemp671[1U] : __Vtemp683[1U]);
	__Vtemp686[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_) 
			   ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_))
			   ? __Vtemp671[2U] : __Vtemp683[2U]);
	__Vtemp686[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_) 
				 ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_))
				 ? __Vtemp671[3U] : 
				__Vtemp683[3U]));
	VL_EXTEND_WW(128,98, __Vtemp687, __Vtemp686);
	vcdp->fullArray(c+102,(__Vtemp687),128);
	VL_EXTEND_WQ(128,64, __Vtemp688, (((QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[1U])) 
					   << 0x20U) 
					  | (QData)((IData)(
							    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[0U]))));
	vcdp->fullArray(c+106,(__Vtemp688),128);
	vcdp->fullQuad (c+110,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_),33);
	vcdp->fullQuad (c+112,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_),33);
	__Vtemp689[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[0U];
	__Vtemp689[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[1U];
	__Vtemp689[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[2U];
	__Vtemp689[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[3U];
	vcdp->fullArray(c+114,(__Vtemp689),128);
	VL_EXTEND_WQ(128,64, __Vtemp690, (((QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[1U])) 
					   << 0x20U) 
					  | (QData)((IData)(
							    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[0U]))));
	VL_SHIFTL_WWI(128,128,32, __Vtemp691, __Vtemp690, 0x40U);
	vcdp->fullArray(c+118,(__Vtemp691),128);
	VL_EXTEND_WQ(65,64, __Vtemp695, (((QData)((IData)(
							  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[0U]))));
	VL_EXTEND_WQ(65,64, __Vtemp696, (((QData)((IData)(
							  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[0U]))));
	VL_ADD_W(3, __Vtemp697, __Vtemp695, __Vtemp696);
	VL_EXTEND_WQ(65,64, __Vtemp698, (((QData)((IData)(
							  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[0U]))));
	VL_SUB_W(3, __Vtemp699, __Vtemp697, __Vtemp698);
	__Vtemp700[0U] = __Vtemp699[0U];
	__Vtemp700[1U] = __Vtemp699[1U];
	__Vtemp700[2U] = (1U & __Vtemp699[2U]);
	VL_EXTEND_WW(97,65, __Vtemp701, __Vtemp700);
	VL_SHIFTL_WWI(97,97,32, __Vtemp702, __Vtemp701, 0x20U);
	__Vtemp703[0U] = __Vtemp702[0U];
	__Vtemp703[1U] = __Vtemp702[1U];
	__Vtemp703[2U] = __Vtemp702[2U];
	__Vtemp703[3U] = (1U & __Vtemp702[3U]);
	VL_EXTEND_WW(98,97, __Vtemp704, __Vtemp703);
	VL_EXTEND_WQ(65,64, __Vtemp707, (((QData)((IData)(
							  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[0U]))));
	VL_EXTEND_WQ(65,64, __Vtemp708, (((QData)((IData)(
							  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[0U]))));
	VL_ADD_W(3, __Vtemp709, __Vtemp707, __Vtemp708);
	__Vtemp710[0U] = __Vtemp709[0U];
	__Vtemp710[1U] = __Vtemp709[1U];
	__Vtemp710[2U] = (1U & __Vtemp709[2U]);
	VL_EXTEND_WW(66,65, __Vtemp711, __Vtemp710);
	VL_EXTEND_WQ(66,64, __Vtemp712, (((QData)((IData)(
							  vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[0U]))));
	VL_ADD_W(3, __Vtemp713, __Vtemp711, __Vtemp712);
	__Vtemp714[0U] = __Vtemp713[0U];
	__Vtemp714[1U] = __Vtemp713[1U];
	__Vtemp714[2U] = (3U & __Vtemp713[2U]);
	VL_EXTEND_WW(98,66, __Vtemp715, __Vtemp714);
	VL_SHIFTL_WWI(98,98,32, __Vtemp716, __Vtemp715, 0x20U);
	__Vtemp719[0U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_) 
			   ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_))
			   ? __Vtemp704[0U] : __Vtemp716[0U]);
	__Vtemp719[1U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_) 
			   ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_))
			   ? __Vtemp704[1U] : __Vtemp716[1U]);
	__Vtemp719[2U] = ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_) 
			   ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_))
			   ? __Vtemp704[2U] : __Vtemp716[2U]);
	__Vtemp719[3U] = (3U & ((VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_) 
				 ^ VL_GTS_IQQ(1,33,33, VL_ULL(0), vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_))
				 ? __Vtemp704[3U] : 
				__Vtemp716[3U]));
	VL_EXTEND_WW(128,98, __Vtemp720, __Vtemp719);
	vcdp->fullArray(c+122,(__Vtemp720),128);
	VL_EXTEND_WQ(128,64, __Vtemp721, (((QData)((IData)(
							   vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[1U])) 
					   << 0x20U) 
					  | (QData)((IData)(
							    vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[0U]))));
	vcdp->fullArray(c+126,(__Vtemp721),128);
	vcdp->fullQuad (c+130,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_),33);
	vcdp->fullQuad (c+132,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_),33);
	vcdp->fullQuad (c+134,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_43_[0U])))),64);
	vcdp->fullQuad (c+136,(((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
				<< 0x20U)),64);
	vcdp->fullQuad (c+138,((VL_ULL(0x3ffffffffffff) 
				& ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_) 
				    ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_))
				    ? (VL_ULL(0x1ffffffff0000) 
				       & ((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
					    + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_))) 
					   - (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					  << 0x10U))
				    : (VL_ULL(0x3ffffffff0000) 
				       & (((VL_ULL(0x1ffffffff) 
					    & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
					       + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_)))) 
					   + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					  << 0x10U))))),64);
	vcdp->fullQuad (c+140,((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_))),64);
	vcdp->fullBus  (c+142,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_),17);
	vcdp->fullBus  (c+143,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_),17);
	vcdp->fullQuad (c+144,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_43_[0U])))),64);
	vcdp->fullQuad (c+146,(((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
				<< 0x20U)),64);
	vcdp->fullQuad (c+148,((VL_ULL(0x3ffffffffffff) 
				& ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_) 
				    ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_))
				    ? (VL_ULL(0x1ffffffff0000) 
				       & ((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
					    + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_))) 
					   - (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					  << 0x10U))
				    : (VL_ULL(0x3ffffffff0000) 
				       & (((VL_ULL(0x1ffffffff) 
					    & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
					       + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_)))) 
					   + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					  << 0x10U))))),64);
	vcdp->fullQuad (c+150,((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_))),64);
	vcdp->fullBus  (c+152,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_),17);
	vcdp->fullBus  (c+153,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_),17);
	vcdp->fullQuad (c+154,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_43_[0U])))),64);
	vcdp->fullQuad (c+156,(((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
				<< 0x20U)),64);
	vcdp->fullQuad (c+158,((VL_ULL(0x3ffffffffffff) 
				& ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_) 
				    ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_))
				    ? (VL_ULL(0x1ffffffff0000) 
				       & ((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
					    + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_))) 
					   - (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					  << 0x10U))
				    : (VL_ULL(0x3ffffffff0000) 
				       & (((VL_ULL(0x1ffffffff) 
					    & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
					       + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_)))) 
					   + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					  << 0x10U))))),64);
	vcdp->fullQuad (c+160,((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_))),64);
	vcdp->fullBus  (c+162,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_),17);
	vcdp->fullBus  (c+163,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_),17);
	vcdp->fullBus  (c+164,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_),32);
	vcdp->fullBus  (c+165,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_),32);
	vcdp->fullBus  (c+166,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_),32);
	vcdp->fullBus  (c+167,((0xffffU & ((0x1ffffU 
					    & ((0x10000U 
						& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_)
					        ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_)
					        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_)) 
					   + (1U & 
					      (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_5_ 
					       >> 0x10U))))),16);
	vcdp->fullBus  (c+168,((0xffffU & ((0x1ffffU 
					    & ((0x10000U 
						& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_)
					        ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_)
					        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_)) 
					   + (1U & 
					      (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_6_ 
					       >> 0x10U))))),16);
	vcdp->fullBus  (c+169,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_),32);
	vcdp->fullBus  (c+170,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_),32);
	vcdp->fullBus  (c+171,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_),32);
	vcdp->fullBus  (c+172,((0xffffU & ((0x1ffffU 
					    & ((0x10000U 
						& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_)
					        ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_)
					        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_)) 
					   + (1U & 
					      (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_5_ 
					       >> 0x10U))))),16);
	vcdp->fullBus  (c+173,((0xffffU & ((0x1ffffU 
					    & ((0x10000U 
						& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_)
					        ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_)
					        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_)) 
					   + (1U & 
					      (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_6_ 
					       >> 0x10U))))),16);
	vcdp->fullBus  (c+174,((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_20_)),32);
	vcdp->fullBus  (c+175,((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_26_)),32);
	vcdp->fullBus  (c+176,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_),32);
	vcdp->fullBus  (c+177,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_),32);
	vcdp->fullBus  (c+178,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_),32);
	vcdp->fullBus  (c+179,((0xffffU & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_20_ 
						   >> 0x10U)))),16);
	vcdp->fullBus  (c+180,((0xffffU & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_26_ 
						   >> 0x10U)))),16);
	vcdp->fullBus  (c+181,((0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_20_))),16);
	vcdp->fullBus  (c+182,((0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_26_))),16);
	vcdp->fullBus  (c+183,((0xffffU & ((0x1ffffU 
					    & ((0x10000U 
						& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_)
					        ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_)
					        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_)) 
					   + (1U & 
					      (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_5_ 
					       >> 0x10U))))),16);
	vcdp->fullBus  (c+184,((0xffffU & ((0x1ffffU 
					    & ((0x10000U 
						& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_)
					        ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_)
					        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_)) 
					   + (1U & 
					      (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_6_ 
					       >> 0x10U))))),16);
	vcdp->fullQuad (c+185,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_43_[0U])))),64);
	vcdp->fullQuad (c+187,(((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
				<< 0x20U)),64);
	vcdp->fullQuad (c+189,((VL_ULL(0x3ffffffffffff) 
				& ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_) 
				    ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_))
				    ? (VL_ULL(0x1ffffffff0000) 
				       & ((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
					    + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_))) 
					   - (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					  << 0x10U))
				    : (VL_ULL(0x3ffffffff0000) 
				       & (((VL_ULL(0x1ffffffff) 
					    & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
					       + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_)))) 
					   + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					  << 0x10U))))),64);
	vcdp->fullQuad (c+191,((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_))),64);
	vcdp->fullBus  (c+193,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_),17);
	vcdp->fullBus  (c+194,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_),17);
	vcdp->fullQuad (c+195,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_43_[0U])))),64);
	vcdp->fullQuad (c+197,(((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
				<< 0x20U)),64);
	vcdp->fullQuad (c+199,((VL_ULL(0x3ffffffffffff) 
				& ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_) 
				    ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_))
				    ? (VL_ULL(0x1ffffffff0000) 
				       & ((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
					    + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_))) 
					   - (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					  << 0x10U))
				    : (VL_ULL(0x3ffffffff0000) 
				       & (((VL_ULL(0x1ffffffff) 
					    & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
					       + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_)))) 
					   + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					  << 0x10U))))),64);
	vcdp->fullQuad (c+201,((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_))),64);
	vcdp->fullBus  (c+203,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_),17);
	vcdp->fullBus  (c+204,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_),17);
	vcdp->fullQuad (c+205,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_43_[0U])))),64);
	vcdp->fullQuad (c+207,(((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
				<< 0x20U)),64);
	vcdp->fullQuad (c+209,((VL_ULL(0x3ffffffffffff) 
				& ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_) 
				    ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_))
				    ? (VL_ULL(0x1ffffffff0000) 
				       & ((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
					    + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_))) 
					   - (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					  << 0x10U))
				    : (VL_ULL(0x3ffffffff0000) 
				       & (((VL_ULL(0x1ffffffff) 
					    & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
					       + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_)))) 
					   + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					  << 0x10U))))),64);
	vcdp->fullQuad (c+211,((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_))),64);
	vcdp->fullBus  (c+213,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_),17);
	vcdp->fullBus  (c+214,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_),17);
	vcdp->fullBus  (c+215,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_),32);
	vcdp->fullBus  (c+216,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_),32);
	vcdp->fullBus  (c+217,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_),32);
	vcdp->fullBus  (c+218,((0xffffU & ((0x1ffffU 
					    & ((0x10000U 
						& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_)
					        ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_)
					        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_)) 
					   + (1U & 
					      (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_5_ 
					       >> 0x10U))))),16);
	vcdp->fullBus  (c+219,((0xffffU & ((0x1ffffU 
					    & ((0x10000U 
						& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_)
					        ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_)
					        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_)) 
					   + (1U & 
					      (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_6_ 
					       >> 0x10U))))),16);
	vcdp->fullBus  (c+220,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_),32);
	vcdp->fullBus  (c+221,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_),32);
	vcdp->fullBus  (c+222,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_),32);
	vcdp->fullBus  (c+223,((0xffffU & ((0x1ffffU 
					    & ((0x10000U 
						& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_)
					        ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_)
					        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_)) 
					   + (1U & 
					      (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_5_ 
					       >> 0x10U))))),16);
	vcdp->fullBus  (c+224,((0xffffU & ((0x1ffffU 
					    & ((0x10000U 
						& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_)
					        ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_)
					        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_)) 
					   + (1U & 
					      (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_6_ 
					       >> 0x10U))))),16);
	vcdp->fullBus  (c+225,((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_20_)),32);
	vcdp->fullBus  (c+226,((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_26_)),32);
	vcdp->fullBus  (c+227,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_),32);
	vcdp->fullBus  (c+228,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_),32);
	vcdp->fullBus  (c+229,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_),32);
	vcdp->fullBus  (c+230,((0xffffU & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_20_ 
						   >> 0x10U)))),16);
	vcdp->fullBus  (c+231,((0xffffU & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_26_ 
						   >> 0x10U)))),16);
	vcdp->fullBus  (c+232,((0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_20_))),16);
	vcdp->fullBus  (c+233,((0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_26_))),16);
	vcdp->fullBus  (c+234,((0xffffU & ((0x1ffffU 
					    & ((0x10000U 
						& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_)
					        ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_)
					        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_)) 
					   + (1U & 
					      (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_5_ 
					       >> 0x10U))))),16);
	vcdp->fullBus  (c+235,((0xffffU & ((0x1ffffU 
					    & ((0x10000U 
						& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_)
					        ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_)
					        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_)) 
					   + (1U & 
					      (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_6_ 
					       >> 0x10U))))),16);
	vcdp->fullQuad (c+236,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[0U])))),64);
	vcdp->fullQuad (c+238,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[0U])))),64);
	vcdp->fullQuad (c+240,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_43_[0U])))),64);
	vcdp->fullQuad (c+242,(((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
				<< 0x20U)),64);
	vcdp->fullQuad (c+244,((VL_ULL(0x3ffffffffffff) 
				& ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_) 
				    ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_))
				    ? (VL_ULL(0x1ffffffff0000) 
				       & ((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
					    + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_))) 
					   - (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					  << 0x10U))
				    : (VL_ULL(0x3ffffffff0000) 
				       & (((VL_ULL(0x1ffffffff) 
					    & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_)) 
					       + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_)))) 
					   + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_))) 
					  << 0x10U))))),64);
	vcdp->fullQuad (c+246,((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_))),64);
	vcdp->fullBus  (c+248,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_),17);
	vcdp->fullBus  (c+249,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_),17);
	vcdp->fullQuad (c+250,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_43_[0U])))),64);
	vcdp->fullQuad (c+252,(((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
				<< 0x20U)),64);
	vcdp->fullQuad (c+254,((VL_ULL(0x3ffffffffffff) 
				& ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_) 
				    ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_))
				    ? (VL_ULL(0x1ffffffff0000) 
				       & ((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
					    + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_))) 
					   - (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					  << 0x10U))
				    : (VL_ULL(0x3ffffffff0000) 
				       & (((VL_ULL(0x1ffffffff) 
					    & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_)) 
					       + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_)))) 
					   + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_))) 
					  << 0x10U))))),64);
	vcdp->fullQuad (c+256,((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_))),64);
	vcdp->fullBus  (c+258,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_),17);
	vcdp->fullBus  (c+259,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_),17);
	vcdp->fullQuad (c+260,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_43_[0U])))),64);
	vcdp->fullQuad (c+262,(((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
				<< 0x20U)),64);
	vcdp->fullQuad (c+264,((VL_ULL(0x3ffffffffffff) 
				& ((VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_) 
				    ^ VL_GTS_III(1,17,17, 0U, vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_))
				    ? (VL_ULL(0x1ffffffff0000) 
				       & ((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
					    + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_))) 
					   - (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					  << 0x10U))
				    : (VL_ULL(0x3ffffffff0000) 
				       & (((VL_ULL(0x1ffffffff) 
					    & ((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_)) 
					       + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_)))) 
					   + (QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_))) 
					  << 0x10U))))),64);
	vcdp->fullQuad (c+266,((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_))),64);
	vcdp->fullBus  (c+268,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_),17);
	vcdp->fullBus  (c+269,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_),17);
	vcdp->fullBus  (c+270,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[1U]),32);
	vcdp->fullBus  (c+271,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[1U]),32);
	vcdp->fullBus  (c+272,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___DOT___zz_2_),32);
	vcdp->fullBus  (c+273,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___DOT___zz_2_),32);
	vcdp->fullBus  (c+274,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_2_),32);
	vcdp->fullBus  (c+275,((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[2U] 
					    << 0x10U) 
					   | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[1U] 
					      >> 0x10U)))),16);
	vcdp->fullBus  (c+276,((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[2U] 
					    << 0x10U) 
					   | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[1U] 
					      >> 0x10U)))),16);
	vcdp->fullBus  (c+277,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[1U])),16);
	vcdp->fullBus  (c+278,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[1U])),16);
	vcdp->fullBus  (c+279,((0xffffU & ((0x1ffffU 
					    & ((0x10000U 
						& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_)
					        ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_)
					        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_)) 
					   + (1U & 
					      (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_5_ 
					       >> 0x10U))))),16);
	vcdp->fullBus  (c+280,((0xffffU & ((0x1ffffU 
					    & ((0x10000U 
						& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_)
					        ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_)
					        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_)) 
					   + (1U & 
					      (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_6_ 
					       >> 0x10U))))),16);
	vcdp->fullBus  (c+281,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[0U]),32);
	vcdp->fullBus  (c+282,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[0U]),32);
	vcdp->fullBus  (c+283,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___DOT___zz_2_),32);
	vcdp->fullBus  (c+284,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___DOT___zz_2_),32);
	vcdp->fullBus  (c+285,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___DOT___zz_2_),32);
	vcdp->fullBus  (c+286,((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[1U] 
					    << 0x10U) 
					   | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[0U] 
					      >> 0x10U)))),16);
	vcdp->fullBus  (c+287,((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[1U] 
					    << 0x10U) 
					   | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[0U] 
					      >> 0x10U)))),16);
	vcdp->fullBus  (c+288,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_20_[0U])),16);
	vcdp->fullBus  (c+289,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT___zz_26_[0U])),16);
	vcdp->fullBus  (c+290,((0xffffU & ((0x1ffffU 
					    & ((0x10000U 
						& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_)
					        ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_)
					        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_)) 
					   + (1U & 
					      (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_5_ 
					       >> 0x10U))))),16);
	vcdp->fullBus  (c+291,((0xffffU & ((0x1ffffU 
					    & ((0x10000U 
						& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_)
					        ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_)
					        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_)) 
					   + (1U & 
					      (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_6_ 
					       >> 0x10U))))),16);
	vcdp->fullBus  (c+292,((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_20_)),32);
	vcdp->fullBus  (c+293,((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_26_)),32);
	vcdp->fullBus  (c+294,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___DOT___zz_2_),32);
	vcdp->fullBus  (c+295,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___DOT___zz_2_),32);
	vcdp->fullBus  (c+296,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_2_),32);
	vcdp->fullBus  (c+297,((0xffffU & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_20_ 
						   >> 0x10U)))),16);
	vcdp->fullBus  (c+298,((0xffffU & (IData)((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_26_ 
						   >> 0x10U)))),16);
	vcdp->fullBus  (c+299,((0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_20_))),16);
	vcdp->fullBus  (c+300,((0xffffU & (IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT___zz_26_))),16);
	vcdp->fullBus  (c+301,((0xffffU & ((0x1ffffU 
					    & ((0x10000U 
						& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_)
					        ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_)
					        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_)) 
					   + (1U & 
					      (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_5_ 
					       >> 0x10U))))),16);
	vcdp->fullBus  (c+302,((0xffffU & ((0x1ffffU 
					    & ((0x10000U 
						& vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_)
					        ? (~ vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_)
					        : vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_)) 
					   + (1U & 
					      (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT___zz_6_ 
					       >> 0x10U))))),16);
	vcdp->fullBus  (c+303,((7U & ((IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
				      + (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)))),3);
	vcdp->fullBit  (c+304,(vlTOPp->UartKaraReg__DOT__karareg_1___05Fio_toUart_valid));
	vcdp->fullBit  (c+305,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx_io_write_ready));
	vcdp->fullBit  (c+306,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_ready));
	vcdp->fullBus  (c+307,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_payload),8);
	vcdp->fullBus  (c+308,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext),3);
	vcdp->fullBus  (c+309,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext),2);
	vcdp->fullArray(c+310,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateNext_string),160);
	vcdp->fullArray(c+315,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateNext_string),160);
	vcdp->fullBit  (c+320,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
	vcdp->fullBit  (c+321,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_tick));
	vcdp->fullBit  (c+322,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
	vcdp->fullQuad (c+323,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state_string),48);
	vcdp->fullBit  (c+325,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick));
	vcdp->fullQuad (c+326,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state_string),48);
	vcdp->fullBit  (c+328,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd_regNext));
	vcdp->fullBit  (c+329,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_m2sPipe_rValid));
	vcdp->fullBus  (c+330,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_inCounter),5);
	vcdp->fullArray(c+331,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_buffer),256);
	vcdp->fullBus  (c+339,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outCounter),5);
	vcdp->fullArray(c+340,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_outBuffer),256);
	vcdp->fullBus  (c+348,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmIn_stateReg),3);
	vcdp->fullBus  (c+349,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__fsmOut_stateReg),2);
	vcdp->fullBus  (c+350,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value),3);
	vcdp->fullBit  (c+351,((7U == (IData)(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value))));
	vcdp->fullArray(c+352,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer),256);
	vcdp->fullArray(c+360,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_result),256);
	vcdp->fullBus  (c+368,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_stateReg),2);
	__Vtemp722[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U];
	__Vtemp722[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U];
	__Vtemp722[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U];
	__Vtemp722[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U];
	vcdp->fullArray(c+369,(__Vtemp722),128);
	__Vtemp723[0U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U];
	__Vtemp723[1U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U];
	__Vtemp723[2U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U];
	__Vtemp723[3U] = vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U];
	vcdp->fullArray(c+373,(__Vtemp723),128);
	vcdp->fullQuad (c+377,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U])))),64);
	vcdp->fullQuad (c+379,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U])))),64);
	vcdp->fullBus  (c+381,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U]),32);
	vcdp->fullBus  (c+382,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U]),32);
	vcdp->fullBus  (c+383,((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U] 
					    << 0x10U) 
					   | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U] 
					      >> 0x10U)))),16);
	vcdp->fullBus  (c+384,((0xffffU & (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U] 
					   >> 0x10U))),16);
	vcdp->fullBus  (c+385,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U])),16);
	vcdp->fullBus  (c+386,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U])),16);
	vcdp->fullBus  (c+387,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U]),32);
	vcdp->fullBus  (c+388,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U]),32);
	vcdp->fullBus  (c+389,((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[3U] 
					    << 0x10U) 
					   | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U] 
					      >> 0x10U)))),16);
	vcdp->fullBus  (c+390,((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[7U] 
					    << 0x10U) 
					   | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U] 
					      >> 0x10U)))),16);
	vcdp->fullBus  (c+391,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U])),16);
	vcdp->fullBus  (c+392,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U])),16);
	vcdp->fullQuad (c+393,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U])))),64);
	vcdp->fullQuad (c+395,((((QData)((IData)(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U])))),64);
	vcdp->fullBus  (c+397,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U]),32);
	vcdp->fullBus  (c+398,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U]),32);
	vcdp->fullBus  (c+399,((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[2U] 
					    << 0x10U) 
					   | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U] 
					      >> 0x10U)))),16);
	vcdp->fullBus  (c+400,((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[6U] 
					    << 0x10U) 
					   | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U] 
					      >> 0x10U)))),16);
	vcdp->fullBus  (c+401,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U])),16);
	vcdp->fullBus  (c+402,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U])),16);
	vcdp->fullBus  (c+403,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U]),32);
	vcdp->fullBus  (c+404,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U]),32);
	vcdp->fullBus  (c+405,((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[1U] 
					    << 0x10U) 
					   | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U] 
					      >> 0x10U)))),16);
	vcdp->fullBus  (c+406,((0xffffU & ((vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[5U] 
					    << 0x10U) 
					   | (vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U] 
					      >> 0x10U)))),16);
	vcdp->fullBus  (c+407,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[0U])),16);
	vcdp->fullBus  (c+408,((0xffffU & vlTOPp->UartKaraReg__DOT__karareg_1___DOT__fsm_buffer[4U])),16);
	vcdp->fullBus  (c+409,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter),8);
	vcdp->fullBus  (c+410,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__write_m2sPipe_rData),8);
	vcdp->fullBus  (c+411,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value),3);
	vcdp->fullBit  (c+412,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity));
	vcdp->fullBus  (c+413,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter),3);
	vcdp->fullBit  (c+414,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg));
	vcdp->fullBus  (c+415,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter),20);
	vcdp->fullBit  (c+416,((0U == vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__clockDivider_counter)));
	vcdp->fullBus  (c+417,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state),3);
	vcdp->fullBit  (c+418,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1));
	vcdp->fullBit  (c+419,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1));
	vcdp->fullBit  (c+420,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
	vcdp->fullBit  (c+421,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3));
	vcdp->fullBit  (c+422,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
	vcdp->fullBit  (c+423,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
	vcdp->fullBit  (c+424,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick));
	vcdp->fullBus  (c+425,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state),3);
	vcdp->fullBit  (c+426,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0));
	vcdp->fullBus  (c+427,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value),3);
	vcdp->fullBit  (c+428,(vlTOPp->UartKaraReg__DOT__uartfsm__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity));
	vcdp->fullBit  (c+429,(vlTOPp->io_uart_txd));
	vcdp->fullBit  (c+430,(vlTOPp->io_uart_rxd));
	vcdp->fullBit  (c+431,(vlTOPp->clk));
	vcdp->fullBit  (c+432,(vlTOPp->reset));
	vcdp->fullBit  (c+433,(0U));
	vcdp->fullBus  (c+434,(7U),3);
	vcdp->fullBus  (c+435,(0U),2);
	vcdp->fullBus  (c+436,(0x1aU),20);
	vcdp->fullBus  (c+437,(0x4f4e45U),24);
	vcdp->fullBus  (c+438,(0x4e4f4e45U),32);
	vcdp->fullBus  (c+439,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___05Fio_high),32);
	vcdp->fullBus  (c+440,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___05Fio_mid),32);
	vcdp->fullBus  (c+441,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___05Fio_low),32);
	vcdp->fullBus  (c+442,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+443,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+444,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___05Fio_high),32);
	vcdp->fullBus  (c+445,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___05Fio_mid),32);
	vcdp->fullBus  (c+446,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___05Fio_low),32);
	vcdp->fullBus  (c+447,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+448,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+449,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___05Fio_high),32);
	vcdp->fullBus  (c+450,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___05Fio_mid),32);
	vcdp->fullBus  (c+451,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___05Fio_low),32);
	vcdp->fullBus  (c+452,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+453,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+454,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___05Fio_high),32);
	vcdp->fullBus  (c+455,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___05Fio_mid),32);
	vcdp->fullBus  (c+456,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___05Fio_low),32);
	vcdp->fullBus  (c+457,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+458,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+459,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___05Fio_high),32);
	vcdp->fullBus  (c+460,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___05Fio_mid),32);
	vcdp->fullBus  (c+461,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___05Fio_low),32);
	vcdp->fullBus  (c+462,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+463,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+464,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___05Fio_high),32);
	vcdp->fullBus  (c+465,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___05Fio_mid),32);
	vcdp->fullBus  (c+466,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___05Fio_low),32);
	vcdp->fullBus  (c+467,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+468,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+469,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___05Fio_high),32);
	vcdp->fullBus  (c+470,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___05Fio_mid),32);
	vcdp->fullBus  (c+471,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___05Fio_low),32);
	vcdp->fullBus  (c+472,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+473,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+474,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___05Fio_high),32);
	vcdp->fullBus  (c+475,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___05Fio_mid),32);
	vcdp->fullBus  (c+476,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___05Fio_low),32);
	vcdp->fullBus  (c+477,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+478,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+479,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___05Fio_high),32);
	vcdp->fullBus  (c+480,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___05Fio_mid),32);
	vcdp->fullBus  (c+481,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___05Fio_low),32);
	vcdp->fullBus  (c+482,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+483,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+484,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___05Fio_high),32);
	vcdp->fullBus  (c+485,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___05Fio_mid),32);
	vcdp->fullBus  (c+486,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___05Fio_low),32);
	vcdp->fullBus  (c+487,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+488,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_40___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+489,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___05Fio_high),32);
	vcdp->fullBus  (c+490,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___05Fio_mid),32);
	vcdp->fullBus  (c+491,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___05Fio_low),32);
	vcdp->fullBus  (c+492,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+493,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_41___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+494,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___05Fio_high),32);
	vcdp->fullBus  (c+495,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___05Fio_mid),32);
	vcdp->fullBus  (c+496,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___05Fio_low),32);
	vcdp->fullBus  (c+497,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+498,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_40___DOT__karaMult_42___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+499,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___05Fio_high),32);
	vcdp->fullBus  (c+500,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___05Fio_mid),32);
	vcdp->fullBus  (c+501,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___05Fio_low),32);
	vcdp->fullBus  (c+502,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+503,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_40___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+504,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___05Fio_high),32);
	vcdp->fullBus  (c+505,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___05Fio_mid),32);
	vcdp->fullBus  (c+506,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___05Fio_low),32);
	vcdp->fullBus  (c+507,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+508,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_41___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+509,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___05Fio_high),32);
	vcdp->fullBus  (c+510,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___05Fio_mid),32);
	vcdp->fullBus  (c+511,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___05Fio_low),32);
	vcdp->fullBus  (c+512,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+513,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_41___DOT__karaMult_42___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+514,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___05Fio_high),32);
	vcdp->fullBus  (c+515,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___05Fio_mid),32);
	vcdp->fullBus  (c+516,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___05Fio_low),32);
	vcdp->fullBus  (c+517,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+518,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_40___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+519,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___05Fio_high),32);
	vcdp->fullBus  (c+520,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___05Fio_mid),32);
	vcdp->fullBus  (c+521,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___05Fio_low),32);
	vcdp->fullBus  (c+522,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+523,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_41___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+524,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___05Fio_high),32);
	vcdp->fullBus  (c+525,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___05Fio_mid),32);
	vcdp->fullBus  (c+526,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___05Fio_low),32);
	vcdp->fullBus  (c+527,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+528,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_41___DOT__karaMult_42___DOT__karaMult_42___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+529,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___05Fio_high),32);
	vcdp->fullBus  (c+530,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___05Fio_mid),32);
	vcdp->fullBus  (c+531,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___05Fio_low),32);
	vcdp->fullBus  (c+532,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+533,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_40___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+534,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___05Fio_high),32);
	vcdp->fullBus  (c+535,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___05Fio_mid),32);
	vcdp->fullBus  (c+536,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___05Fio_low),32);
	vcdp->fullBus  (c+537,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+538,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_41___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+539,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___05Fio_high),32);
	vcdp->fullBus  (c+540,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___05Fio_mid),32);
	vcdp->fullBus  (c+541,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___05Fio_low),32);
	vcdp->fullBus  (c+542,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+543,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_40___DOT__karaMult_42___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+544,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___05Fio_high),32);
	vcdp->fullBus  (c+545,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___05Fio_mid),32);
	vcdp->fullBus  (c+546,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___05Fio_low),32);
	vcdp->fullBus  (c+547,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+548,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_40___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+549,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___05Fio_high),32);
	vcdp->fullBus  (c+550,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___05Fio_mid),32);
	vcdp->fullBus  (c+551,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___05Fio_low),32);
	vcdp->fullBus  (c+552,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+553,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_41___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+554,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___05Fio_high),32);
	vcdp->fullBus  (c+555,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___05Fio_mid),32);
	vcdp->fullBus  (c+556,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___05Fio_low),32);
	vcdp->fullBus  (c+557,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+558,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_41___DOT__karaMult_42___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+559,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___05Fio_high),32);
	vcdp->fullBus  (c+560,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___05Fio_mid),32);
	vcdp->fullBus  (c+561,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___05Fio_low),32);
	vcdp->fullBus  (c+562,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+563,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_40___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+564,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___05Fio_high),32);
	vcdp->fullBus  (c+565,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___05Fio_mid),32);
	vcdp->fullBus  (c+566,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___05Fio_low),32);
	vcdp->fullBus  (c+567,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+568,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_41___05Fio_bhl_int_out),9);
	vcdp->fullBus  (c+569,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___05Fio_high),32);
	vcdp->fullBus  (c+570,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___05Fio_mid),32);
	vcdp->fullBus  (c+571,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___05Fio_low),32);
	vcdp->fullBus  (c+572,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___05Fio_alh_int_out),9);
	vcdp->fullBus  (c+573,(vlTOPp->UartKaraReg__DOT__karareg_1___DOT__karaMult_40___DOT__karaMult_42___DOT__karaMult_42___DOT__karaMult_42___05Fio_bhl_int_out),9);
    }
}
