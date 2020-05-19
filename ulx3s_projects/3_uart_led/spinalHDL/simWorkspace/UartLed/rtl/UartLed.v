// Generator : SpinalHDL v1.3.5    git head : f0505d24810c8661a24530409359554b7cfa271a
// Date      : 25/02/2020, 11:37:24
// Component : UartLed


`define UartParityType_defaultEncoding_type [1:0]
`define UartParityType_defaultEncoding_NONE 2'b00
`define UartParityType_defaultEncoding_EVEN 2'b01
`define UartParityType_defaultEncoding_ODD 2'b10

`define UartStopType_defaultEncoding_type [0:0]
`define UartStopType_defaultEncoding_ONE 1'b0
`define UartStopType_defaultEncoding_TWO 1'b1

`define fsmIn_enumDefinition_defaultEncoding_type [2:0]
`define fsmIn_enumDefinition_defaultEncoding_boot 3'b000
`define fsmIn_enumDefinition_defaultEncoding_fsmIn_inEntry 3'b001
`define fsmIn_enumDefinition_defaultEncoding_fsmIn_inReadByte 3'b010
`define fsmIn_enumDefinition_defaultEncoding_fsmIn_inIncCounter 3'b011
`define fsmIn_enumDefinition_defaultEncoding_fsmIn_inBufToPayload 3'b100

`define fsmOut_enumDefinition_defaultEncoding_type [1:0]
`define fsmOut_enumDefinition_defaultEncoding_boot 2'b00
`define fsmOut_enumDefinition_defaultEncoding_fsmOut_outEntry 2'b01
`define fsmOut_enumDefinition_defaultEncoding_fsmOut_outWriteByte 2'b10
`define fsmOut_enumDefinition_defaultEncoding_fsmOut_outIncCounter 2'b11

`define UartCtrlTxState_defaultEncoding_type [2:0]
`define UartCtrlTxState_defaultEncoding_IDLE 3'b000
`define UartCtrlTxState_defaultEncoding_START 3'b001
`define UartCtrlTxState_defaultEncoding_DATA 3'b010
`define UartCtrlTxState_defaultEncoding_PARITY 3'b011
`define UartCtrlTxState_defaultEncoding_STOP 3'b100

`define UartCtrlRxState_defaultEncoding_type [2:0]
`define UartCtrlRxState_defaultEncoding_IDLE 3'b000
`define UartCtrlRxState_defaultEncoding_START 3'b001
`define UartCtrlRxState_defaultEncoding_DATA 3'b010
`define UartCtrlRxState_defaultEncoding_PARITY 3'b011
`define UartCtrlRxState_defaultEncoding_STOP 3'b100

`define ledOut_stateA_fsm_enumDefinition_defaultEncoding_type [1:0]
`define ledOut_stateA_fsm_enumDefinition_defaultEncoding_boot 2'b00
`define ledOut_stateA_fsm_enumDefinition_defaultEncoding_e1 2'b01
`define ledOut_stateA_fsm_enumDefinition_defaultEncoding_e2 2'b10

`define ledOut_enumDefinition_defaultEncoding_type [2:0]
`define ledOut_enumDefinition_defaultEncoding_boot 3'b000
`define ledOut_enumDefinition_defaultEncoding_ledOut_stateEntry 3'b001
`define ledOut_enumDefinition_defaultEncoding_ledOut_stateA 3'b010
`define ledOut_enumDefinition_defaultEncoding_ledOut_stateB 3'b011
`define ledOut_enumDefinition_defaultEncoding_ledOut_stateC 3'b100

module BufferCC (
      input   io_initial,
      input   io_dataIn,
      output  io_dataOut,
      input   clk,
      input   reset);
  reg  buffers_0;
  reg  buffers_1;
  assign io_dataOut = buffers_1;
  always @ (posedge clk or posedge reset) begin
    if (reset) begin
      buffers_0 <= io_initial;
      buffers_1 <= io_initial;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end

endmodule

module UartCtrlTx (
      input  [2:0] io_configFrame_dataLength,
      input  `UartStopType_defaultEncoding_type io_configFrame_stop,
      input  `UartParityType_defaultEncoding_type io_configFrame_parity,
      input   io_samplingTick,
      input   io_write_valid,
      output reg  io_write_ready,
      input  [7:0] io_write_payload,
      output  io_txd,
      input   clk,
      input   reset);
  wire  _zz_1_;
  wire [0:0] _zz_2_;
  wire [2:0] _zz_3_;
  wire [0:0] _zz_4_;
  wire [2:0] _zz_5_;
  reg  clockDivider_counter_willIncrement;
  wire  clockDivider_counter_willClear;
  reg [2:0] clockDivider_counter_valueNext;
  reg [2:0] clockDivider_counter_value;
  wire  clockDivider_counter_willOverflowIfInc;
  wire  clockDivider_willOverflow;
  reg [2:0] tickCounter_value;
  reg `UartCtrlTxState_defaultEncoding_type stateMachine_state;
  reg  stateMachine_parity;
  reg  stateMachine_txd;
  reg  stateMachine_txd_regNext;
  `ifndef SYNTHESIS
  reg [23:0] io_configFrame_stop_string;
  reg [31:0] io_configFrame_parity_string;
  reg [47:0] stateMachine_state_string;
  `endif

  assign _zz_1_ = (tickCounter_value == io_configFrame_dataLength);
  assign _zz_2_ = clockDivider_counter_willIncrement;
  assign _zz_3_ = {2'd0, _zz_2_};
  assign _zz_4_ = ((io_configFrame_stop == `UartStopType_defaultEncoding_ONE) ? (1'b0) : (1'b1));
  assign _zz_5_ = {2'd0, _zz_4_};
  `ifndef SYNTHESIS
  always @(*) begin
    case(io_configFrame_stop)
      `UartStopType_defaultEncoding_ONE : io_configFrame_stop_string = "ONE";
      `UartStopType_defaultEncoding_TWO : io_configFrame_stop_string = "TWO";
      default : io_configFrame_stop_string = "???";
    endcase
  end
  always @(*) begin
    case(io_configFrame_parity)
      `UartParityType_defaultEncoding_NONE : io_configFrame_parity_string = "NONE";
      `UartParityType_defaultEncoding_EVEN : io_configFrame_parity_string = "EVEN";
      `UartParityType_defaultEncoding_ODD : io_configFrame_parity_string = "ODD ";
      default : io_configFrame_parity_string = "????";
    endcase
  end
  always @(*) begin
    case(stateMachine_state)
      `UartCtrlTxState_defaultEncoding_IDLE : stateMachine_state_string = "IDLE  ";
      `UartCtrlTxState_defaultEncoding_START : stateMachine_state_string = "START ";
      `UartCtrlTxState_defaultEncoding_DATA : stateMachine_state_string = "DATA  ";
      `UartCtrlTxState_defaultEncoding_PARITY : stateMachine_state_string = "PARITY";
      `UartCtrlTxState_defaultEncoding_STOP : stateMachine_state_string = "STOP  ";
      default : stateMachine_state_string = "??????";
    endcase
  end
  `endif

  always @ (*) begin
    clockDivider_counter_willIncrement = 1'b0;
    if(io_samplingTick)begin
      clockDivider_counter_willIncrement = 1'b1;
    end
  end

  assign clockDivider_counter_willClear = 1'b0;
  assign clockDivider_counter_willOverflowIfInc = (clockDivider_counter_value == (3'b111));
  assign clockDivider_willOverflow = (clockDivider_counter_willOverflowIfInc && clockDivider_counter_willIncrement);
  always @ (*) begin
    clockDivider_counter_valueNext = (clockDivider_counter_value + _zz_3_);
    if(clockDivider_counter_willClear)begin
      clockDivider_counter_valueNext = (3'b000);
    end
  end

  always @ (*) begin
    stateMachine_txd = 1'b1;
    case(stateMachine_state)
      `UartCtrlTxState_defaultEncoding_IDLE : begin
      end
      `UartCtrlTxState_defaultEncoding_START : begin
        stateMachine_txd = 1'b0;
      end
      `UartCtrlTxState_defaultEncoding_DATA : begin
        stateMachine_txd = io_write_payload[tickCounter_value];
      end
      `UartCtrlTxState_defaultEncoding_PARITY : begin
        stateMachine_txd = stateMachine_parity;
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    io_write_ready = 1'b0;
    case(stateMachine_state)
      `UartCtrlTxState_defaultEncoding_IDLE : begin
      end
      `UartCtrlTxState_defaultEncoding_START : begin
      end
      `UartCtrlTxState_defaultEncoding_DATA : begin
        if(clockDivider_willOverflow)begin
          if(_zz_1_)begin
            io_write_ready = 1'b1;
          end
        end
      end
      `UartCtrlTxState_defaultEncoding_PARITY : begin
      end
      default : begin
      end
    endcase
  end

  assign io_txd = stateMachine_txd_regNext;
  always @ (posedge clk or posedge reset) begin
    if (reset) begin
      clockDivider_counter_value <= (3'b000);
      stateMachine_state <= `UartCtrlTxState_defaultEncoding_IDLE;
      stateMachine_txd_regNext <= 1'b1;
    end else begin
      clockDivider_counter_value <= clockDivider_counter_valueNext;
      case(stateMachine_state)
        `UartCtrlTxState_defaultEncoding_IDLE : begin
          if((io_write_valid && clockDivider_willOverflow))begin
            stateMachine_state <= `UartCtrlTxState_defaultEncoding_START;
          end
        end
        `UartCtrlTxState_defaultEncoding_START : begin
          if(clockDivider_willOverflow)begin
            stateMachine_state <= `UartCtrlTxState_defaultEncoding_DATA;
          end
        end
        `UartCtrlTxState_defaultEncoding_DATA : begin
          if(clockDivider_willOverflow)begin
            if(_zz_1_)begin
              if((io_configFrame_parity == `UartParityType_defaultEncoding_NONE))begin
                stateMachine_state <= `UartCtrlTxState_defaultEncoding_STOP;
              end else begin
                stateMachine_state <= `UartCtrlTxState_defaultEncoding_PARITY;
              end
            end
          end
        end
        `UartCtrlTxState_defaultEncoding_PARITY : begin
          if(clockDivider_willOverflow)begin
            stateMachine_state <= `UartCtrlTxState_defaultEncoding_STOP;
          end
        end
        default : begin
          if(clockDivider_willOverflow)begin
            if((tickCounter_value == _zz_5_))begin
              stateMachine_state <= (io_write_valid ? `UartCtrlTxState_defaultEncoding_START : `UartCtrlTxState_defaultEncoding_IDLE);
            end
          end
        end
      endcase
      stateMachine_txd_regNext <= stateMachine_txd;
    end
  end

  always @ (posedge clk) begin
    if(clockDivider_willOverflow)begin
      tickCounter_value <= (tickCounter_value + (3'b001));
    end
    if(clockDivider_willOverflow)begin
      stateMachine_parity <= (stateMachine_parity ^ stateMachine_txd);
    end
    case(stateMachine_state)
      `UartCtrlTxState_defaultEncoding_IDLE : begin
      end
      `UartCtrlTxState_defaultEncoding_START : begin
        if(clockDivider_willOverflow)begin
          stateMachine_parity <= (io_configFrame_parity == `UartParityType_defaultEncoding_ODD);
          tickCounter_value <= (3'b000);
        end
      end
      `UartCtrlTxState_defaultEncoding_DATA : begin
        if(clockDivider_willOverflow)begin
          if(_zz_1_)begin
            tickCounter_value <= (3'b000);
          end
        end
      end
      `UartCtrlTxState_defaultEncoding_PARITY : begin
        if(clockDivider_willOverflow)begin
          tickCounter_value <= (3'b000);
        end
      end
      default : begin
      end
    endcase
  end

endmodule

module UartCtrlRx (
      input  [2:0] io_configFrame_dataLength,
      input  `UartStopType_defaultEncoding_type io_configFrame_stop,
      input  `UartParityType_defaultEncoding_type io_configFrame_parity,
      input   io_samplingTick,
      output  io_read_valid,
      output [7:0] io_read_payload,
      input   io_rxd,
      input   clk,
      input   reset);
  wire  _zz_1_;
  wire  bufferCC_1__io_dataOut;
  wire  _zz_2_;
  wire  _zz_3_;
  wire [0:0] _zz_4_;
  wire [2:0] _zz_5_;
  wire  _zz_6_;
  wire  _zz_7_;
  wire  _zz_8_;
  wire  _zz_9_;
  wire  _zz_10_;
  wire  _zz_11_;
  wire  _zz_12_;
  wire  sampler_synchroniser;
  wire  sampler_samples_0;
  reg  sampler_samples_1;
  reg  sampler_samples_2;
  reg  sampler_samples_3;
  reg  sampler_samples_4;
  reg  sampler_value;
  reg  sampler_tick;
  reg [2:0] bitTimer_counter;
  reg  bitTimer_tick;
  reg [2:0] bitCounter_value;
  reg `UartCtrlRxState_defaultEncoding_type stateMachine_state;
  reg  stateMachine_parity;
  reg [7:0] stateMachine_shifter;
  reg  stateMachine_validReg;
  `ifndef SYNTHESIS
  reg [23:0] io_configFrame_stop_string;
  reg [31:0] io_configFrame_parity_string;
  reg [47:0] stateMachine_state_string;
  `endif

  assign _zz_2_ = (sampler_tick && (! sampler_value));
  assign _zz_3_ = (bitCounter_value == io_configFrame_dataLength);
  assign _zz_4_ = ((io_configFrame_stop == `UartStopType_defaultEncoding_ONE) ? (1'b0) : (1'b1));
  assign _zz_5_ = {2'd0, _zz_4_};
  assign _zz_6_ = ((((1'b0 || ((_zz_11_ && sampler_samples_1) && sampler_samples_2)) || (((_zz_12_ && sampler_samples_0) && sampler_samples_1) && sampler_samples_3)) || (((1'b1 && sampler_samples_0) && sampler_samples_2) && sampler_samples_3)) || (((1'b1 && sampler_samples_1) && sampler_samples_2) && sampler_samples_3));
  assign _zz_7_ = (((1'b1 && sampler_samples_0) && sampler_samples_1) && sampler_samples_4);
  assign _zz_8_ = ((1'b1 && sampler_samples_0) && sampler_samples_2);
  assign _zz_9_ = (1'b1 && sampler_samples_1);
  assign _zz_10_ = 1'b1;
  assign _zz_11_ = (1'b1 && sampler_samples_0);
  assign _zz_12_ = 1'b1;
  BufferCC bufferCC_1_ ( 
    .io_initial(_zz_1_),
    .io_dataIn(io_rxd),
    .io_dataOut(bufferCC_1__io_dataOut),
    .clk(clk),
    .reset(reset) 
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(io_configFrame_stop)
      `UartStopType_defaultEncoding_ONE : io_configFrame_stop_string = "ONE";
      `UartStopType_defaultEncoding_TWO : io_configFrame_stop_string = "TWO";
      default : io_configFrame_stop_string = "???";
    endcase
  end
  always @(*) begin
    case(io_configFrame_parity)
      `UartParityType_defaultEncoding_NONE : io_configFrame_parity_string = "NONE";
      `UartParityType_defaultEncoding_EVEN : io_configFrame_parity_string = "EVEN";
      `UartParityType_defaultEncoding_ODD : io_configFrame_parity_string = "ODD ";
      default : io_configFrame_parity_string = "????";
    endcase
  end
  always @(*) begin
    case(stateMachine_state)
      `UartCtrlRxState_defaultEncoding_IDLE : stateMachine_state_string = "IDLE  ";
      `UartCtrlRxState_defaultEncoding_START : stateMachine_state_string = "START ";
      `UartCtrlRxState_defaultEncoding_DATA : stateMachine_state_string = "DATA  ";
      `UartCtrlRxState_defaultEncoding_PARITY : stateMachine_state_string = "PARITY";
      `UartCtrlRxState_defaultEncoding_STOP : stateMachine_state_string = "STOP  ";
      default : stateMachine_state_string = "??????";
    endcase
  end
  `endif

  assign _zz_1_ = 1'b0;
  assign sampler_synchroniser = bufferCC_1__io_dataOut;
  assign sampler_samples_0 = sampler_synchroniser;
  always @ (*) begin
    bitTimer_tick = 1'b0;
    if(sampler_tick)begin
      if((bitTimer_counter == (3'b000)))begin
        bitTimer_tick = 1'b1;
      end
    end
  end

  assign io_read_valid = stateMachine_validReg;
  assign io_read_payload = stateMachine_shifter;
  always @ (posedge clk or posedge reset) begin
    if (reset) begin
      sampler_samples_1 <= 1'b1;
      sampler_samples_2 <= 1'b1;
      sampler_samples_3 <= 1'b1;
      sampler_samples_4 <= 1'b1;
      sampler_value <= 1'b1;
      sampler_tick <= 1'b0;
      stateMachine_state <= `UartCtrlRxState_defaultEncoding_IDLE;
      stateMachine_validReg <= 1'b0;
    end else begin
      if(io_samplingTick)begin
        sampler_samples_1 <= sampler_samples_0;
      end
      if(io_samplingTick)begin
        sampler_samples_2 <= sampler_samples_1;
      end
      if(io_samplingTick)begin
        sampler_samples_3 <= sampler_samples_2;
      end
      if(io_samplingTick)begin
        sampler_samples_4 <= sampler_samples_3;
      end
      sampler_value <= ((((((_zz_6_ || _zz_7_) || (_zz_8_ && sampler_samples_4)) || ((_zz_9_ && sampler_samples_2) && sampler_samples_4)) || (((_zz_10_ && sampler_samples_0) && sampler_samples_3) && sampler_samples_4)) || (((1'b1 && sampler_samples_1) && sampler_samples_3) && sampler_samples_4)) || (((1'b1 && sampler_samples_2) && sampler_samples_3) && sampler_samples_4));
      sampler_tick <= io_samplingTick;
      stateMachine_validReg <= 1'b0;
      case(stateMachine_state)
        `UartCtrlRxState_defaultEncoding_IDLE : begin
          if(_zz_2_)begin
            stateMachine_state <= `UartCtrlRxState_defaultEncoding_START;
          end
        end
        `UartCtrlRxState_defaultEncoding_START : begin
          if(bitTimer_tick)begin
            stateMachine_state <= `UartCtrlRxState_defaultEncoding_DATA;
            if((sampler_value == 1'b1))begin
              stateMachine_state <= `UartCtrlRxState_defaultEncoding_IDLE;
            end
          end
        end
        `UartCtrlRxState_defaultEncoding_DATA : begin
          if(bitTimer_tick)begin
            if(_zz_3_)begin
              if((io_configFrame_parity == `UartParityType_defaultEncoding_NONE))begin
                stateMachine_state <= `UartCtrlRxState_defaultEncoding_STOP;
                stateMachine_validReg <= 1'b1;
              end else begin
                stateMachine_state <= `UartCtrlRxState_defaultEncoding_PARITY;
              end
            end
          end
        end
        `UartCtrlRxState_defaultEncoding_PARITY : begin
          if(bitTimer_tick)begin
            if((stateMachine_parity == sampler_value))begin
              stateMachine_state <= `UartCtrlRxState_defaultEncoding_STOP;
              stateMachine_validReg <= 1'b1;
            end else begin
              stateMachine_state <= `UartCtrlRxState_defaultEncoding_IDLE;
            end
          end
        end
        default : begin
          if(bitTimer_tick)begin
            if((! sampler_value))begin
              stateMachine_state <= `UartCtrlRxState_defaultEncoding_IDLE;
            end else begin
              if((bitCounter_value == _zz_5_))begin
                stateMachine_state <= `UartCtrlRxState_defaultEncoding_IDLE;
              end
            end
          end
        end
      endcase
    end
  end

  always @ (posedge clk) begin
    if(sampler_tick)begin
      bitTimer_counter <= (bitTimer_counter - (3'b001));
    end
    if(bitTimer_tick)begin
      bitCounter_value <= (bitCounter_value + (3'b001));
    end
    if(bitTimer_tick)begin
      stateMachine_parity <= (stateMachine_parity ^ sampler_value);
    end
    case(stateMachine_state)
      `UartCtrlRxState_defaultEncoding_IDLE : begin
        if(_zz_2_)begin
          bitTimer_counter <= (3'b010);
        end
      end
      `UartCtrlRxState_defaultEncoding_START : begin
        if(bitTimer_tick)begin
          bitCounter_value <= (3'b000);
          stateMachine_parity <= (io_configFrame_parity == `UartParityType_defaultEncoding_ODD);
        end
      end
      `UartCtrlRxState_defaultEncoding_DATA : begin
        if(bitTimer_tick)begin
          stateMachine_shifter[bitCounter_value] <= sampler_value;
          if(_zz_3_)begin
            bitCounter_value <= (3'b000);
          end
        end
      end
      `UartCtrlRxState_defaultEncoding_PARITY : begin
        if(bitTimer_tick)begin
          bitCounter_value <= (3'b000);
        end
      end
      default : begin
      end
    endcase
  end

endmodule

module UartCtrl (
      input  [2:0] io_config_frame_dataLength,
      input  `UartStopType_defaultEncoding_type io_config_frame_stop,
      input  `UartParityType_defaultEncoding_type io_config_frame_parity,
      input  [19:0] io_config_clockDivider,
      input   io_write_valid,
      output  io_write_ready,
      input  [7:0] io_write_payload,
      output  io_read_valid,
      output [7:0] io_read_payload,
      output  io_uart_txd,
      input   io_uart_rxd,
      input   clk,
      input   reset);
  wire  tx_io_write_ready;
  wire  tx_io_txd;
  wire  rx_io_read_valid;
  wire [7:0] rx_io_read_payload;
  reg [19:0] clockDivider_counter;
  wire  clockDivider_tick;
  `ifndef SYNTHESIS
  reg [23:0] io_config_frame_stop_string;
  reg [31:0] io_config_frame_parity_string;
  `endif

  UartCtrlTx tx ( 
    .io_configFrame_dataLength(io_config_frame_dataLength),
    .io_configFrame_stop(io_config_frame_stop),
    .io_configFrame_parity(io_config_frame_parity),
    .io_samplingTick(clockDivider_tick),
    .io_write_valid(io_write_valid),
    .io_write_ready(tx_io_write_ready),
    .io_write_payload(io_write_payload),
    .io_txd(tx_io_txd),
    .clk(clk),
    .reset(reset) 
  );
  UartCtrlRx rx ( 
    .io_configFrame_dataLength(io_config_frame_dataLength),
    .io_configFrame_stop(io_config_frame_stop),
    .io_configFrame_parity(io_config_frame_parity),
    .io_samplingTick(clockDivider_tick),
    .io_read_valid(rx_io_read_valid),
    .io_read_payload(rx_io_read_payload),
    .io_rxd(io_uart_rxd),
    .clk(clk),
    .reset(reset) 
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(io_config_frame_stop)
      `UartStopType_defaultEncoding_ONE : io_config_frame_stop_string = "ONE";
      `UartStopType_defaultEncoding_TWO : io_config_frame_stop_string = "TWO";
      default : io_config_frame_stop_string = "???";
    endcase
  end
  always @(*) begin
    case(io_config_frame_parity)
      `UartParityType_defaultEncoding_NONE : io_config_frame_parity_string = "NONE";
      `UartParityType_defaultEncoding_EVEN : io_config_frame_parity_string = "EVEN";
      `UartParityType_defaultEncoding_ODD : io_config_frame_parity_string = "ODD ";
      default : io_config_frame_parity_string = "????";
    endcase
  end
  `endif

  assign clockDivider_tick = (clockDivider_counter == (20'b00000000000000000000));
  assign io_write_ready = tx_io_write_ready;
  assign io_read_valid = rx_io_read_valid;
  assign io_read_payload = rx_io_read_payload;
  assign io_uart_txd = tx_io_txd;
  always @ (posedge clk or posedge reset) begin
    if (reset) begin
      clockDivider_counter <= (20'b00000000000000000000);
    end else begin
      clockDivider_counter <= (clockDivider_counter - (20'b00000000000000000001));
      if(clockDivider_tick)begin
        clockDivider_counter <= io_config_clockDivider;
      end
    end
  end

endmodule

module UartFsmInOut (
      output  io_uart_txd,
      input   io_uart_rxd,
      output reg  io_toFnct_valid,
      output reg [47:0] io_toFnct_payload,
      input   io_fromFnct_valid,
      input  [47:0] io_fromFnct_payload,
      input   clk,
      input   reset);
  wire [2:0] _zz_5_;
  wire `UartStopType_defaultEncoding_type _zz_6_;
  wire `UartParityType_defaultEncoding_type _zz_7_;
  wire [19:0] _zz_8_;
  wire  uartCtrl_1__io_write_ready;
  wire  uartCtrl_1__io_read_valid;
  wire [7:0] uartCtrl_1__io_read_payload;
  wire  uartCtrl_1__io_uart_txd;
  wire [6:0] _zz_9_;
  reg  write_valid;
  wire  write_ready;
  reg [7:0] write_payload;
  wire  write_m2sPipe_valid;
  wire  write_m2sPipe_ready;
  wire [7:0] write_m2sPipe_payload;
  reg  _zz_1_;
  reg [7:0] _zz_2_;
  wire  fsmIn_wantExit;
  reg [2:0] fsmIn_inCounter;
  reg [7:0] fsmIn_buffer_0;
  reg [7:0] fsmIn_buffer_1;
  reg [7:0] fsmIn_buffer_2;
  reg [7:0] fsmIn_buffer_3;
  reg [7:0] fsmIn_buffer_4;
  reg [7:0] fsmIn_buffer_5;
  wire  fsmOut_wantExit;
  reg [2:0] fsmOut_outCounter;
  reg `fsmIn_enumDefinition_defaultEncoding_type fsmIn_stateReg;
  reg `fsmIn_enumDefinition_defaultEncoding_type fsmIn_stateNext;
  wire [7:0] _zz_3_;
  wire [7:0] _zz_4_;
  reg `fsmOut_enumDefinition_defaultEncoding_type fsmOut_stateReg;
  reg `fsmOut_enumDefinition_defaultEncoding_type fsmOut_stateNext;
  `ifndef SYNTHESIS
  reg [159:0] fsmIn_stateReg_string;
  reg [159:0] fsmIn_stateNext_string;
  reg [159:0] fsmOut_stateReg_string;
  reg [159:0] fsmOut_stateNext_string;
  `endif

  assign _zz_9_ = (fsmOut_outCounter * (4'b1000));
  UartCtrl uartCtrl_1_ ( 
    .io_config_frame_dataLength(_zz_5_),
    .io_config_frame_stop(_zz_6_),
    .io_config_frame_parity(_zz_7_),
    .io_config_clockDivider(_zz_8_),
    .io_write_valid(write_m2sPipe_valid),
    .io_write_ready(uartCtrl_1__io_write_ready),
    .io_write_payload(write_m2sPipe_payload),
    .io_read_valid(uartCtrl_1__io_read_valid),
    .io_read_payload(uartCtrl_1__io_read_payload),
    .io_uart_txd(uartCtrl_1__io_uart_txd),
    .io_uart_rxd(io_uart_rxd),
    .clk(clk),
    .reset(reset) 
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(fsmIn_stateReg)
      `fsmIn_enumDefinition_defaultEncoding_boot : fsmIn_stateReg_string = "boot                ";
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inEntry : fsmIn_stateReg_string = "fsmIn_inEntry       ";
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inReadByte : fsmIn_stateReg_string = "fsmIn_inReadByte    ";
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inIncCounter : fsmIn_stateReg_string = "fsmIn_inIncCounter  ";
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inBufToPayload : fsmIn_stateReg_string = "fsmIn_inBufToPayload";
      default : fsmIn_stateReg_string = "????????????????????";
    endcase
  end
  always @(*) begin
    case(fsmIn_stateNext)
      `fsmIn_enumDefinition_defaultEncoding_boot : fsmIn_stateNext_string = "boot                ";
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inEntry : fsmIn_stateNext_string = "fsmIn_inEntry       ";
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inReadByte : fsmIn_stateNext_string = "fsmIn_inReadByte    ";
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inIncCounter : fsmIn_stateNext_string = "fsmIn_inIncCounter  ";
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inBufToPayload : fsmIn_stateNext_string = "fsmIn_inBufToPayload";
      default : fsmIn_stateNext_string = "????????????????????";
    endcase
  end
  always @(*) begin
    case(fsmOut_stateReg)
      `fsmOut_enumDefinition_defaultEncoding_boot : fsmOut_stateReg_string = "boot                ";
      `fsmOut_enumDefinition_defaultEncoding_fsmOut_outEntry : fsmOut_stateReg_string = "fsmOut_outEntry     ";
      `fsmOut_enumDefinition_defaultEncoding_fsmOut_outWriteByte : fsmOut_stateReg_string = "fsmOut_outWriteByte ";
      `fsmOut_enumDefinition_defaultEncoding_fsmOut_outIncCounter : fsmOut_stateReg_string = "fsmOut_outIncCounter";
      default : fsmOut_stateReg_string = "????????????????????";
    endcase
  end
  always @(*) begin
    case(fsmOut_stateNext)
      `fsmOut_enumDefinition_defaultEncoding_boot : fsmOut_stateNext_string = "boot                ";
      `fsmOut_enumDefinition_defaultEncoding_fsmOut_outEntry : fsmOut_stateNext_string = "fsmOut_outEntry     ";
      `fsmOut_enumDefinition_defaultEncoding_fsmOut_outWriteByte : fsmOut_stateNext_string = "fsmOut_outWriteByte ";
      `fsmOut_enumDefinition_defaultEncoding_fsmOut_outIncCounter : fsmOut_stateNext_string = "fsmOut_outIncCounter";
      default : fsmOut_stateNext_string = "????????????????????";
    endcase
  end
  `endif

  assign _zz_8_ = (20'b00000000000000011010);
  assign _zz_5_ = (3'b111);
  assign _zz_7_ = `UartParityType_defaultEncoding_NONE;
  assign _zz_6_ = `UartStopType_defaultEncoding_ONE;
  assign io_uart_txd = uartCtrl_1__io_uart_txd;
  assign write_ready = ((1'b1 && (! write_m2sPipe_valid)) || write_m2sPipe_ready);
  assign write_m2sPipe_valid = _zz_1_;
  assign write_m2sPipe_payload = _zz_2_;
  assign write_m2sPipe_ready = uartCtrl_1__io_write_ready;
  assign fsmIn_wantExit = 1'b0;
  always @ (*) begin
    io_toFnct_payload = (48'b000000000000000000000000000000000000000000000000);
    case(fsmIn_stateReg)
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inEntry : begin
      end
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inReadByte : begin
      end
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inIncCounter : begin
      end
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inBufToPayload : begin
        io_toFnct_payload = {fsmIn_buffer_5,{fsmIn_buffer_4,{fsmIn_buffer_3,{fsmIn_buffer_2,{fsmIn_buffer_1,fsmIn_buffer_0}}}}};
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    io_toFnct_valid = 1'b0;
    case(fsmIn_stateReg)
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inEntry : begin
      end
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inReadByte : begin
      end
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inIncCounter : begin
      end
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inBufToPayload : begin
        io_toFnct_valid = 1'b1;
      end
      default : begin
      end
    endcase
  end

  assign fsmOut_wantExit = 1'b0;
  always @ (*) begin
    write_valid = 1'b0;
    case(fsmOut_stateReg)
      `fsmOut_enumDefinition_defaultEncoding_fsmOut_outEntry : begin
      end
      `fsmOut_enumDefinition_defaultEncoding_fsmOut_outWriteByte : begin
        write_valid = 1'b1;
      end
      `fsmOut_enumDefinition_defaultEncoding_fsmOut_outIncCounter : begin
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    write_payload = (8'b00000000);
    case(fsmOut_stateReg)
      `fsmOut_enumDefinition_defaultEncoding_fsmOut_outEntry : begin
      end
      `fsmOut_enumDefinition_defaultEncoding_fsmOut_outWriteByte : begin
        write_payload = io_fromFnct_payload[_zz_9_ +: 8];
      end
      `fsmOut_enumDefinition_defaultEncoding_fsmOut_outIncCounter : begin
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    fsmIn_stateNext = fsmIn_stateReg;
    case(fsmIn_stateReg)
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inEntry : begin
        fsmIn_stateNext = `fsmIn_enumDefinition_defaultEncoding_fsmIn_inReadByte;
      end
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inReadByte : begin
        if(uartCtrl_1__io_read_valid)begin
          fsmIn_stateNext = `fsmIn_enumDefinition_defaultEncoding_fsmIn_inIncCounter;
        end
      end
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inIncCounter : begin
        if((fsmIn_inCounter == (3'b101)))begin
          fsmIn_stateNext = `fsmIn_enumDefinition_defaultEncoding_fsmIn_inBufToPayload;
        end else begin
          fsmIn_stateNext = `fsmIn_enumDefinition_defaultEncoding_fsmIn_inReadByte;
        end
      end
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inBufToPayload : begin
        fsmIn_stateNext = `fsmIn_enumDefinition_defaultEncoding_fsmIn_inEntry;
      end
      default : begin
        fsmIn_stateNext = `fsmIn_enumDefinition_defaultEncoding_fsmIn_inEntry;
      end
    endcase
  end

  assign _zz_3_ = ({7'd0,(1'b1)} <<< fsmIn_inCounter);
  assign _zz_4_ = uartCtrl_1__io_read_payload;
  always @ (*) begin
    fsmOut_stateNext = fsmOut_stateReg;
    case(fsmOut_stateReg)
      `fsmOut_enumDefinition_defaultEncoding_fsmOut_outEntry : begin
        if(io_fromFnct_valid)begin
          fsmOut_stateNext = `fsmOut_enumDefinition_defaultEncoding_fsmOut_outWriteByte;
        end
      end
      `fsmOut_enumDefinition_defaultEncoding_fsmOut_outWriteByte : begin
        if((write_valid && write_ready))begin
          fsmOut_stateNext = `fsmOut_enumDefinition_defaultEncoding_fsmOut_outIncCounter;
        end
      end
      `fsmOut_enumDefinition_defaultEncoding_fsmOut_outIncCounter : begin
        if((fsmOut_outCounter == (3'b101)))begin
          fsmOut_stateNext = `fsmOut_enumDefinition_defaultEncoding_fsmOut_outEntry;
        end else begin
          fsmOut_stateNext = `fsmOut_enumDefinition_defaultEncoding_fsmOut_outWriteByte;
        end
      end
      default : begin
        fsmOut_stateNext = `fsmOut_enumDefinition_defaultEncoding_fsmOut_outEntry;
      end
    endcase
  end

  always @ (posedge clk or posedge reset) begin
    if (reset) begin
      _zz_1_ <= 1'b0;
      fsmIn_inCounter <= (3'b000);
      fsmIn_buffer_0 <= (8'b00000000);
      fsmIn_buffer_1 <= (8'b00000000);
      fsmIn_buffer_2 <= (8'b00000000);
      fsmIn_buffer_3 <= (8'b00000000);
      fsmIn_buffer_4 <= (8'b00000000);
      fsmIn_buffer_5 <= (8'b00000000);
      fsmOut_outCounter <= (3'b000);
      fsmIn_stateReg <= `fsmIn_enumDefinition_defaultEncoding_boot;
      fsmOut_stateReg <= `fsmOut_enumDefinition_defaultEncoding_boot;
    end else begin
      if(write_ready)begin
        _zz_1_ <= write_valid;
      end
      fsmIn_stateReg <= fsmIn_stateNext;
      case(fsmIn_stateReg)
        `fsmIn_enumDefinition_defaultEncoding_fsmIn_inEntry : begin
        end
        `fsmIn_enumDefinition_defaultEncoding_fsmIn_inReadByte : begin
          if(uartCtrl_1__io_read_valid)begin
            if(_zz_3_[0])begin
              fsmIn_buffer_0 <= _zz_4_;
            end
            if(_zz_3_[1])begin
              fsmIn_buffer_1 <= _zz_4_;
            end
            if(_zz_3_[2])begin
              fsmIn_buffer_2 <= _zz_4_;
            end
            if(_zz_3_[3])begin
              fsmIn_buffer_3 <= _zz_4_;
            end
            if(_zz_3_[4])begin
              fsmIn_buffer_4 <= _zz_4_;
            end
            if(_zz_3_[5])begin
              fsmIn_buffer_5 <= _zz_4_;
            end
          end
        end
        `fsmIn_enumDefinition_defaultEncoding_fsmIn_inIncCounter : begin
          fsmIn_inCounter <= (fsmIn_inCounter + (3'b001));
        end
        `fsmIn_enumDefinition_defaultEncoding_fsmIn_inBufToPayload : begin
        end
        default : begin
        end
      endcase
      if(((fsmIn_stateReg == `fsmIn_enumDefinition_defaultEncoding_fsmIn_inEntry) && (! (fsmIn_stateNext == `fsmIn_enumDefinition_defaultEncoding_fsmIn_inEntry))))begin
        fsmIn_inCounter <= (3'b000);
        fsmIn_buffer_0 <= (8'b00000000);
        fsmIn_buffer_1 <= (8'b00000000);
        fsmIn_buffer_2 <= (8'b00000000);
        fsmIn_buffer_3 <= (8'b00000000);
        fsmIn_buffer_4 <= (8'b00000000);
      end
      fsmOut_stateReg <= fsmOut_stateNext;
      case(fsmOut_stateReg)
        `fsmOut_enumDefinition_defaultEncoding_fsmOut_outEntry : begin
          if(io_fromFnct_valid)begin
            fsmOut_outCounter <= (3'b000);
          end
        end
        `fsmOut_enumDefinition_defaultEncoding_fsmOut_outWriteByte : begin
        end
        `fsmOut_enumDefinition_defaultEncoding_fsmOut_outIncCounter : begin
          fsmOut_outCounter <= (fsmOut_outCounter + (3'b001));
        end
        default : begin
        end
      endcase
    end
  end

  always @ (posedge clk) begin
    if(write_ready)begin
      _zz_2_ <= write_payload;
    end
  end

endmodule

module LedDriver (
      output reg  io_ledData,
      input   io_fromUart_valid,
      input  [47:0] io_fromUart_payload,
      output  io_toUart_valid,
      output [47:0] io_toUart_payload,
      input   clk,
      input   reset);
  wire  _zz_2_;
  wire  _zz_3_;
  wire  _zz_4_;
  wire [0:0] _zz_5_;
  wire [5:0] _zz_6_;
  wire [5:0] _zz_7_;
  wire [0:0] _zz_8_;
  wire [3:0] _zz_9_;
  wire [0:0] _zz_10_;
  wire [3:0] _zz_11_;
  reg [47:0] buffer_1_;
  reg  io_fromUart_m2sPipe_valid;
  reg [47:0] io_fromUart_m2sPipe_payload;
  wire  ledOut_wantExit;
  reg  ledOut_bitCounter_willIncrement;
  reg  ledOut_bitCounter_willClear;
  reg [5:0] ledOut_bitCounter_valueNext;
  reg [5:0] ledOut_bitCounter_value;
  wire  ledOut_bitCounter_willOverflowIfInc;
  wire  ledOut_bitCounter_willOverflow;
  wire  _zz_1_;
  reg  ledOut_stateA_fsm_wantExit;
  reg  ledOut_stateA_fsm_counterA_willIncrement;
  reg  ledOut_stateA_fsm_counterA_willClear;
  reg [3:0] ledOut_stateA_fsm_counterA_valueNext;
  reg [3:0] ledOut_stateA_fsm_counterA_value;
  wire  ledOut_stateA_fsm_counterA_willOverflowIfInc;
  wire  ledOut_stateA_fsm_counterA_willOverflow;
  reg  ledOut_stateA_fsm_counterB_willIncrement;
  reg  ledOut_stateA_fsm_counterB_willClear;
  reg [3:0] ledOut_stateA_fsm_counterB_valueNext;
  reg [3:0] ledOut_stateA_fsm_counterB_value;
  wire  ledOut_stateA_fsm_counterB_willOverflowIfInc;
  wire  ledOut_stateA_fsm_counterB_willOverflow;
  reg `ledOut_stateA_fsm_enumDefinition_defaultEncoding_type ledOut_stateA_fsm_stateReg;
  reg `ledOut_stateA_fsm_enumDefinition_defaultEncoding_type ledOut_stateA_fsm_stateNext;
  reg `ledOut_enumDefinition_defaultEncoding_type ledOut_stateReg;
  reg `ledOut_enumDefinition_defaultEncoding_type ledOut_stateNext;
  `ifndef SYNTHESIS
  reg [31:0] ledOut_stateA_fsm_stateReg_string;
  reg [31:0] ledOut_stateA_fsm_stateNext_string;
  reg [135:0] ledOut_stateReg_string;
  reg [135:0] ledOut_stateNext_string;
  `endif

  assign _zz_2_ = (ledOut_bitCounter_value == (6'b101111));
  assign _zz_3_ = (ledOut_stateA_fsm_counterB_value == (4'b0100));
  assign _zz_4_ = (ledOut_stateA_fsm_counterB_value == (4'b1001));
  assign _zz_5_ = ledOut_bitCounter_willIncrement;
  assign _zz_6_ = {5'd0, _zz_5_};
  assign _zz_7_ = ((6'b101111) - ledOut_bitCounter_value);
  assign _zz_8_ = ledOut_stateA_fsm_counterA_willIncrement;
  assign _zz_9_ = {3'd0, _zz_8_};
  assign _zz_10_ = ledOut_stateA_fsm_counterB_willIncrement;
  assign _zz_11_ = {3'd0, _zz_10_};
  `ifndef SYNTHESIS
  always @(*) begin
    case(ledOut_stateA_fsm_stateReg)
      `ledOut_stateA_fsm_enumDefinition_defaultEncoding_boot : ledOut_stateA_fsm_stateReg_string = "boot";
      `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e1 : ledOut_stateA_fsm_stateReg_string = "e1  ";
      `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e2 : ledOut_stateA_fsm_stateReg_string = "e2  ";
      default : ledOut_stateA_fsm_stateReg_string = "????";
    endcase
  end
  always @(*) begin
    case(ledOut_stateA_fsm_stateNext)
      `ledOut_stateA_fsm_enumDefinition_defaultEncoding_boot : ledOut_stateA_fsm_stateNext_string = "boot";
      `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e1 : ledOut_stateA_fsm_stateNext_string = "e1  ";
      `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e2 : ledOut_stateA_fsm_stateNext_string = "e2  ";
      default : ledOut_stateA_fsm_stateNext_string = "????";
    endcase
  end
  always @(*) begin
    case(ledOut_stateReg)
      `ledOut_enumDefinition_defaultEncoding_boot : ledOut_stateReg_string = "boot             ";
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateEntry : ledOut_stateReg_string = "ledOut_stateEntry";
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateA : ledOut_stateReg_string = "ledOut_stateA    ";
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateB : ledOut_stateReg_string = "ledOut_stateB    ";
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateC : ledOut_stateReg_string = "ledOut_stateC    ";
      default : ledOut_stateReg_string = "?????????????????";
    endcase
  end
  always @(*) begin
    case(ledOut_stateNext)
      `ledOut_enumDefinition_defaultEncoding_boot : ledOut_stateNext_string = "boot             ";
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateEntry : ledOut_stateNext_string = "ledOut_stateEntry";
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateA : ledOut_stateNext_string = "ledOut_stateA    ";
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateB : ledOut_stateNext_string = "ledOut_stateB    ";
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateC : ledOut_stateNext_string = "ledOut_stateC    ";
      default : ledOut_stateNext_string = "?????????????????";
    endcase
  end
  `endif

  assign io_toUart_valid = io_fromUart_m2sPipe_valid;
  assign io_toUart_payload = io_fromUart_m2sPipe_payload;
  assign ledOut_wantExit = 1'b0;
  always @ (*) begin
    ledOut_bitCounter_willIncrement = 1'b0;
    case(ledOut_stateReg)
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateEntry : begin
      end
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateA : begin
      end
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateB : begin
        ledOut_bitCounter_willIncrement = 1'b1;
      end
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateC : begin
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    ledOut_bitCounter_willClear = 1'b0;
    case(ledOut_stateReg)
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateEntry : begin
      end
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateA : begin
      end
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateB : begin
        if(_zz_2_)begin
          ledOut_bitCounter_willClear = 1'b1;
        end
      end
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateC : begin
      end
      default : begin
      end
    endcase
  end

  assign ledOut_bitCounter_willOverflowIfInc = (ledOut_bitCounter_value == (6'b101111));
  assign ledOut_bitCounter_willOverflow = (ledOut_bitCounter_willOverflowIfInc && ledOut_bitCounter_willIncrement);
  always @ (*) begin
    if(ledOut_bitCounter_willOverflow)begin
      ledOut_bitCounter_valueNext = (6'b000000);
    end else begin
      ledOut_bitCounter_valueNext = (ledOut_bitCounter_value + _zz_6_);
    end
    if(ledOut_bitCounter_willClear)begin
      ledOut_bitCounter_valueNext = (6'b000000);
    end
  end

  always @ (*) begin
    io_ledData = 1'b0;
    case(ledOut_stateA_fsm_stateReg)
      `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e1 : begin
        io_ledData = 1'b1;
      end
      `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e2 : begin
        io_ledData = 1'b0;
      end
      default : begin
      end
    endcase
    case(ledOut_stateReg)
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateEntry : begin
      end
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateA : begin
      end
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateB : begin
      end
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateC : begin
        io_ledData = 1'b0;
      end
      default : begin
      end
    endcase
  end

  assign _zz_1_ = buffer_1_[_zz_7_];
  always @ (*) begin
    ledOut_stateA_fsm_wantExit = 1'b0;
    case(ledOut_stateA_fsm_stateReg)
      `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e1 : begin
      end
      `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e2 : begin
        if(_zz_1_)begin
          if(_zz_3_)begin
            ledOut_stateA_fsm_wantExit = 1'b1;
          end
        end else begin
          if(_zz_4_)begin
            ledOut_stateA_fsm_wantExit = 1'b1;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    ledOut_stateA_fsm_counterA_willIncrement = 1'b0;
    case(ledOut_stateA_fsm_stateReg)
      `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e1 : begin
        ledOut_stateA_fsm_counterA_willIncrement = 1'b1;
      end
      `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e2 : begin
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    ledOut_stateA_fsm_counterA_willClear = 1'b0;
    if(((! (ledOut_stateA_fsm_stateReg == `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e1)) && (ledOut_stateA_fsm_stateNext == `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e1)))begin
      ledOut_stateA_fsm_counterA_willClear = 1'b1;
    end
  end

  assign ledOut_stateA_fsm_counterA_willOverflowIfInc = (ledOut_stateA_fsm_counterA_value == (4'b1001));
  assign ledOut_stateA_fsm_counterA_willOverflow = (ledOut_stateA_fsm_counterA_willOverflowIfInc && ledOut_stateA_fsm_counterA_willIncrement);
  always @ (*) begin
    if(ledOut_stateA_fsm_counterA_willOverflow)begin
      ledOut_stateA_fsm_counterA_valueNext = (4'b0000);
    end else begin
      ledOut_stateA_fsm_counterA_valueNext = (ledOut_stateA_fsm_counterA_value + _zz_9_);
    end
    if(ledOut_stateA_fsm_counterA_willClear)begin
      ledOut_stateA_fsm_counterA_valueNext = (4'b0000);
    end
  end

  always @ (*) begin
    ledOut_stateA_fsm_counterB_willIncrement = 1'b0;
    case(ledOut_stateA_fsm_stateReg)
      `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e1 : begin
      end
      `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e2 : begin
        ledOut_stateA_fsm_counterB_willIncrement = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    ledOut_stateA_fsm_counterB_willClear = 1'b0;
    if(((! (ledOut_stateA_fsm_stateReg == `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e2)) && (ledOut_stateA_fsm_stateNext == `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e2)))begin
      ledOut_stateA_fsm_counterB_willClear = 1'b1;
    end
  end

  assign ledOut_stateA_fsm_counterB_willOverflowIfInc = (ledOut_stateA_fsm_counterB_value == (4'b1001));
  assign ledOut_stateA_fsm_counterB_willOverflow = (ledOut_stateA_fsm_counterB_willOverflowIfInc && ledOut_stateA_fsm_counterB_willIncrement);
  always @ (*) begin
    if(ledOut_stateA_fsm_counterB_willOverflow)begin
      ledOut_stateA_fsm_counterB_valueNext = (4'b0000);
    end else begin
      ledOut_stateA_fsm_counterB_valueNext = (ledOut_stateA_fsm_counterB_value + _zz_11_);
    end
    if(ledOut_stateA_fsm_counterB_willClear)begin
      ledOut_stateA_fsm_counterB_valueNext = (4'b0000);
    end
  end

  always @ (*) begin
    ledOut_stateA_fsm_stateNext = ledOut_stateA_fsm_stateReg;
    case(ledOut_stateA_fsm_stateReg)
      `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e1 : begin
        if(_zz_1_)begin
          if((ledOut_stateA_fsm_counterA_value == (4'b1001)))begin
            ledOut_stateA_fsm_stateNext = `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e2;
          end
        end else begin
          if((ledOut_stateA_fsm_counterA_value == (4'b0100)))begin
            ledOut_stateA_fsm_stateNext = `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e2;
          end
        end
      end
      `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e2 : begin
        if(_zz_1_)begin
          if(_zz_3_)begin
            ledOut_stateA_fsm_stateNext = `ledOut_stateA_fsm_enumDefinition_defaultEncoding_boot;
          end
        end else begin
          if(_zz_4_)begin
            ledOut_stateA_fsm_stateNext = `ledOut_stateA_fsm_enumDefinition_defaultEncoding_boot;
          end
        end
      end
      default : begin
      end
    endcase
    if(((! (ledOut_stateReg == `ledOut_enumDefinition_defaultEncoding_ledOut_stateA)) && (ledOut_stateNext == `ledOut_enumDefinition_defaultEncoding_ledOut_stateA)))begin
      ledOut_stateA_fsm_stateNext = `ledOut_stateA_fsm_enumDefinition_defaultEncoding_e1;
    end
  end

  always @ (*) begin
    ledOut_stateNext = ledOut_stateReg;
    case(ledOut_stateReg)
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateEntry : begin
        if(io_fromUart_valid)begin
          ledOut_stateNext = `ledOut_enumDefinition_defaultEncoding_ledOut_stateA;
        end
      end
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateA : begin
        if(ledOut_stateA_fsm_wantExit)begin
          ledOut_stateNext = `ledOut_enumDefinition_defaultEncoding_ledOut_stateB;
        end
      end
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateB : begin
        if(_zz_2_)begin
          ledOut_stateNext = `ledOut_enumDefinition_defaultEncoding_ledOut_stateC;
        end else begin
          ledOut_stateNext = `ledOut_enumDefinition_defaultEncoding_ledOut_stateA;
        end
      end
      `ledOut_enumDefinition_defaultEncoding_ledOut_stateC : begin
        ledOut_stateNext = `ledOut_enumDefinition_defaultEncoding_ledOut_stateEntry;
      end
      default : begin
        ledOut_stateNext = `ledOut_enumDefinition_defaultEncoding_ledOut_stateEntry;
      end
    endcase
  end

  always @ (posedge clk) begin
    if(io_fromUart_valid)begin
      buffer_1_ <= io_fromUart_payload;
    end
    if(io_fromUart_valid)begin
      io_fromUart_m2sPipe_payload <= io_fromUart_payload;
    end
  end

  always @ (posedge clk or posedge reset) begin
    if (reset) begin
      io_fromUart_m2sPipe_valid <= 1'b0;
      ledOut_bitCounter_value <= (6'b000000);
      ledOut_stateA_fsm_counterA_value <= (4'b0000);
      ledOut_stateA_fsm_counterB_value <= (4'b0000);
      ledOut_stateA_fsm_stateReg <= `ledOut_stateA_fsm_enumDefinition_defaultEncoding_boot;
      ledOut_stateReg <= `ledOut_enumDefinition_defaultEncoding_boot;
    end else begin
      io_fromUart_m2sPipe_valid <= io_fromUart_valid;
      ledOut_bitCounter_value <= ledOut_bitCounter_valueNext;
      ledOut_stateA_fsm_counterA_value <= ledOut_stateA_fsm_counterA_valueNext;
      ledOut_stateA_fsm_counterB_value <= ledOut_stateA_fsm_counterB_valueNext;
      ledOut_stateA_fsm_stateReg <= ledOut_stateA_fsm_stateNext;
      ledOut_stateReg <= ledOut_stateNext;
    end
  end

endmodule

module UartLed (
      output  io_uart_txd,
      input   io_uart_rxd,
      output  io_ledData,
      input   clk,
      input   reset);
  wire  uartfsm_io_uart_txd;
  wire  uartfsm_io_toFnct_valid;
  wire [47:0] uartfsm_io_toFnct_payload;
  wire  leddriver_1__io_ledData;
  wire  leddriver_1__io_toUart_valid;
  wire [47:0] leddriver_1__io_toUart_payload;
  UartFsmInOut uartfsm ( 
    .io_uart_txd(uartfsm_io_uart_txd),
    .io_uart_rxd(io_uart_rxd),
    .io_toFnct_valid(uartfsm_io_toFnct_valid),
    .io_toFnct_payload(uartfsm_io_toFnct_payload),
    .io_fromFnct_valid(leddriver_1__io_toUart_valid),
    .io_fromFnct_payload(leddriver_1__io_toUart_payload),
    .clk(clk),
    .reset(reset) 
  );
  LedDriver leddriver_1_ ( 
    .io_ledData(leddriver_1__io_ledData),
    .io_fromUart_valid(uartfsm_io_toFnct_valid),
    .io_fromUart_payload(uartfsm_io_toFnct_payload),
    .io_toUart_valid(leddriver_1__io_toUart_valid),
    .io_toUart_payload(leddriver_1__io_toUart_payload),
    .clk(clk),
    .reset(reset) 
  );
  assign io_uart_txd = uartfsm_io_uart_txd;
  assign io_ledData = leddriver_1__io_ledData;
endmodule

