// Generator : SpinalHDL v1.3.5    git head : f0505d24810c8661a24530409359554b7cfa271a
// Date      : 06/03/2020, 23:46:33
// Component : UartRecursive


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

`define fsm_enumDefinition_defaultEncoding_type [1:0]
`define fsm_enumDefinition_defaultEncoding_boot 2'b00
`define fsm_enumDefinition_defaultEncoding_fsm_stateA 2'b01
`define fsm_enumDefinition_defaultEncoding_fsm_stateB 2'b10
`define fsm_enumDefinition_defaultEncoding_fsm_stateC 2'b11

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
      output reg [2047:0] io_toFnct_payload,
      input   io_fromFnct_valid,
      input  [2047:0] io_fromFnct_payload,
      input   clk,
      input   reset);
  wire [2:0] _zz_3_;
  wire `UartStopType_defaultEncoding_type _zz_4_;
  wire `UartParityType_defaultEncoding_type _zz_5_;
  wire [19:0] _zz_6_;
  wire  uartCtrl_1__io_write_ready;
  wire  uartCtrl_1__io_read_valid;
  wire [7:0] uartCtrl_1__io_read_payload;
  wire  uartCtrl_1__io_uart_txd;
  wire [11:0] _zz_7_;
  wire [11:0] _zz_8_;
  reg  write_valid;
  wire  write_ready;
  reg [7:0] write_payload;
  wire  write_m2sPipe_valid;
  wire  write_m2sPipe_ready;
  wire [7:0] write_m2sPipe_payload;
  reg  _zz_1_;
  reg [7:0] _zz_2_;
  wire  fsmIn_wantExit;
  reg [7:0] fsmIn_inCounter;
  reg [2047:0] fsmIn_buffer;
  wire  fsmOut_wantExit;
  reg [7:0] fsmOut_outCounter;
  reg [2047:0] fsmOut_outBuffer;
  reg `fsmIn_enumDefinition_defaultEncoding_type fsmIn_stateReg;
  reg `fsmIn_enumDefinition_defaultEncoding_type fsmIn_stateNext;
  reg `fsmOut_enumDefinition_defaultEncoding_type fsmOut_stateReg;
  reg `fsmOut_enumDefinition_defaultEncoding_type fsmOut_stateNext;
  `ifndef SYNTHESIS
  reg [159:0] fsmIn_stateReg_string;
  reg [159:0] fsmIn_stateNext_string;
  reg [159:0] fsmOut_stateReg_string;
  reg [159:0] fsmOut_stateNext_string;
  `endif

  assign _zz_7_ = (fsmIn_inCounter * (4'b1000));
  assign _zz_8_ = (fsmOut_outCounter * (4'b1000));
  UartCtrl uartCtrl_1_ ( 
    .io_config_frame_dataLength(_zz_3_),
    .io_config_frame_stop(_zz_4_),
    .io_config_frame_parity(_zz_5_),
    .io_config_clockDivider(_zz_6_),
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

  assign _zz_6_ = (20'b00000000000000011010);
  assign _zz_3_ = (3'b111);
  assign _zz_5_ = `UartParityType_defaultEncoding_NONE;
  assign _zz_4_ = `UartStopType_defaultEncoding_ONE;
  assign io_uart_txd = uartCtrl_1__io_uart_txd;
  assign write_ready = ((1'b1 && (! write_m2sPipe_valid)) || write_m2sPipe_ready);
  assign write_m2sPipe_valid = _zz_1_;
  assign write_m2sPipe_payload = _zz_2_;
  assign write_m2sPipe_ready = uartCtrl_1__io_write_ready;
  assign fsmIn_wantExit = 1'b0;
  always @ (*) begin
    io_toFnct_payload = (2048'b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
    case(fsmIn_stateReg)
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inEntry : begin
      end
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inReadByte : begin
      end
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inIncCounter : begin
      end
      `fsmIn_enumDefinition_defaultEncoding_fsmIn_inBufToPayload : begin
        io_toFnct_payload = fsmIn_buffer;
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
        write_payload = fsmOut_outBuffer[_zz_8_ +: 8];
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
        if((fsmIn_inCounter == (8'b11111111)))begin
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
        if((fsmOut_outCounter == (8'b11111111)))begin
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
      fsmIn_inCounter <= (8'b00000000);
      fsmIn_buffer <= (2048'b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
      fsmOut_outCounter <= (8'b00000000);
      fsmOut_outBuffer <= (2048'b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
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
            fsmIn_buffer[_zz_7_ +: 8] <= uartCtrl_1__io_read_payload;
          end
        end
        `fsmIn_enumDefinition_defaultEncoding_fsmIn_inIncCounter : begin
          fsmIn_inCounter <= (fsmIn_inCounter + (8'b00000001));
        end
        `fsmIn_enumDefinition_defaultEncoding_fsmIn_inBufToPayload : begin
        end
        default : begin
        end
      endcase
      if(((fsmIn_stateReg == `fsmIn_enumDefinition_defaultEncoding_fsmIn_inEntry) && (! (fsmIn_stateNext == `fsmIn_enumDefinition_defaultEncoding_fsmIn_inEntry))))begin
        fsmIn_inCounter <= (8'b00000000);
        fsmIn_buffer <= (2048'b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
      end
      fsmOut_stateReg <= fsmOut_stateNext;
      case(fsmOut_stateReg)
        `fsmOut_enumDefinition_defaultEncoding_fsmOut_outEntry : begin
          if(io_fromFnct_valid)begin
            fsmOut_outCounter <= (8'b00000000);
            fsmOut_outBuffer <= io_fromFnct_payload;
          end
        end
        `fsmOut_enumDefinition_defaultEncoding_fsmOut_outWriteByte : begin
        end
        `fsmOut_enumDefinition_defaultEncoding_fsmOut_outIncCounter : begin
          fsmOut_outCounter <= (fsmOut_outCounter + (8'b00000001));
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

module Square (
      input   io_fromUart_valid,
      input  [2047:0] io_fromUart_payload,
      output reg  io_toUart_valid,
      output reg [2047:0] io_toUart_payload,
      input   clk,
      input   reset);
  wire [1023:0] _zz_128_;
  wire [2047:0] _zz_129_;
  wire [1023:0] _zz_130_;
  wire [511:0] _zz_131_;
  wire [1023:0] _zz_132_;
  wire [511:0] _zz_133_;
  wire [255:0] _zz_134_;
  wire [511:0] _zz_135_;
  wire [255:0] _zz_136_;
  wire [127:0] _zz_137_;
  wire [255:0] _zz_138_;
  wire [127:0] _zz_139_;
  wire [63:0] _zz_140_;
  wire [127:0] _zz_141_;
  wire [63:0] _zz_142_;
  wire [31:0] _zz_143_;
  wire [63:0] _zz_144_;
  wire [31:0] _zz_145_;
  wire [31:0] _zz_146_;
  wire [31:0] _zz_147_;
  wire [31:0] _zz_148_;
  wire [31:0] _zz_149_;
  wire [31:0] _zz_150_;
  wire [31:0] _zz_151_;
  wire [31:0] _zz_152_;
  wire [63:0] _zz_153_;
  wire [31:0] _zz_154_;
  wire [31:0] _zz_155_;
  wire [31:0] _zz_156_;
  wire [31:0] _zz_157_;
  wire [31:0] _zz_158_;
  wire [31:0] _zz_159_;
  wire [31:0] _zz_160_;
  wire [63:0] _zz_161_;
  wire [127:0] _zz_162_;
  wire [63:0] _zz_163_;
  wire [31:0] _zz_164_;
  wire [63:0] _zz_165_;
  wire [31:0] _zz_166_;
  wire [31:0] _zz_167_;
  wire [31:0] _zz_168_;
  wire [31:0] _zz_169_;
  wire [31:0] _zz_170_;
  wire [31:0] _zz_171_;
  wire [31:0] _zz_172_;
  wire [31:0] _zz_173_;
  wire [63:0] _zz_174_;
  wire [31:0] _zz_175_;
  wire [31:0] _zz_176_;
  wire [31:0] _zz_177_;
  wire [31:0] _zz_178_;
  wire [31:0] _zz_179_;
  wire [31:0] _zz_180_;
  wire [31:0] _zz_181_;
  wire [127:0] _zz_182_;
  wire [255:0] _zz_183_;
  wire [127:0] _zz_184_;
  wire [63:0] _zz_185_;
  wire [127:0] _zz_186_;
  wire [63:0] _zz_187_;
  wire [31:0] _zz_188_;
  wire [63:0] _zz_189_;
  wire [31:0] _zz_190_;
  wire [31:0] _zz_191_;
  wire [31:0] _zz_192_;
  wire [31:0] _zz_193_;
  wire [31:0] _zz_194_;
  wire [31:0] _zz_195_;
  wire [31:0] _zz_196_;
  wire [31:0] _zz_197_;
  wire [63:0] _zz_198_;
  wire [31:0] _zz_199_;
  wire [31:0] _zz_200_;
  wire [31:0] _zz_201_;
  wire [31:0] _zz_202_;
  wire [31:0] _zz_203_;
  wire [31:0] _zz_204_;
  wire [31:0] _zz_205_;
  wire [63:0] _zz_206_;
  wire [127:0] _zz_207_;
  wire [63:0] _zz_208_;
  wire [31:0] _zz_209_;
  wire [63:0] _zz_210_;
  wire [31:0] _zz_211_;
  wire [31:0] _zz_212_;
  wire [31:0] _zz_213_;
  wire [31:0] _zz_214_;
  wire [31:0] _zz_215_;
  wire [31:0] _zz_216_;
  wire [31:0] _zz_217_;
  wire [31:0] _zz_218_;
  wire [63:0] _zz_219_;
  wire [31:0] _zz_220_;
  wire [31:0] _zz_221_;
  wire [31:0] _zz_222_;
  wire [31:0] _zz_223_;
  wire [31:0] _zz_224_;
  wire [31:0] _zz_225_;
  wire [31:0] _zz_226_;
  wire [255:0] _zz_227_;
  wire [511:0] _zz_228_;
  wire [255:0] _zz_229_;
  wire [127:0] _zz_230_;
  wire [255:0] _zz_231_;
  wire [127:0] _zz_232_;
  wire [63:0] _zz_233_;
  wire [127:0] _zz_234_;
  wire [63:0] _zz_235_;
  wire [31:0] _zz_236_;
  wire [63:0] _zz_237_;
  wire [31:0] _zz_238_;
  wire [31:0] _zz_239_;
  wire [31:0] _zz_240_;
  wire [31:0] _zz_241_;
  wire [31:0] _zz_242_;
  wire [31:0] _zz_243_;
  wire [31:0] _zz_244_;
  wire [31:0] _zz_245_;
  wire [63:0] _zz_246_;
  wire [31:0] _zz_247_;
  wire [31:0] _zz_248_;
  wire [31:0] _zz_249_;
  wire [31:0] _zz_250_;
  wire [31:0] _zz_251_;
  wire [31:0] _zz_252_;
  wire [31:0] _zz_253_;
  wire [63:0] _zz_254_;
  wire [127:0] _zz_255_;
  wire [63:0] _zz_256_;
  wire [31:0] _zz_257_;
  wire [63:0] _zz_258_;
  wire [31:0] _zz_259_;
  wire [31:0] _zz_260_;
  wire [31:0] _zz_261_;
  wire [31:0] _zz_262_;
  wire [31:0] _zz_263_;
  wire [31:0] _zz_264_;
  wire [31:0] _zz_265_;
  wire [31:0] _zz_266_;
  wire [63:0] _zz_267_;
  wire [31:0] _zz_268_;
  wire [31:0] _zz_269_;
  wire [31:0] _zz_270_;
  wire [31:0] _zz_271_;
  wire [31:0] _zz_272_;
  wire [31:0] _zz_273_;
  wire [31:0] _zz_274_;
  wire [127:0] _zz_275_;
  wire [255:0] _zz_276_;
  wire [127:0] _zz_277_;
  wire [63:0] _zz_278_;
  wire [127:0] _zz_279_;
  wire [63:0] _zz_280_;
  wire [31:0] _zz_281_;
  wire [63:0] _zz_282_;
  wire [31:0] _zz_283_;
  wire [31:0] _zz_284_;
  wire [31:0] _zz_285_;
  wire [31:0] _zz_286_;
  wire [31:0] _zz_287_;
  wire [31:0] _zz_288_;
  wire [31:0] _zz_289_;
  wire [31:0] _zz_290_;
  wire [63:0] _zz_291_;
  wire [31:0] _zz_292_;
  wire [31:0] _zz_293_;
  wire [31:0] _zz_294_;
  wire [31:0] _zz_295_;
  wire [31:0] _zz_296_;
  wire [31:0] _zz_297_;
  wire [31:0] _zz_298_;
  wire [63:0] _zz_299_;
  wire [127:0] _zz_300_;
  wire [63:0] _zz_301_;
  wire [31:0] _zz_302_;
  wire [63:0] _zz_303_;
  wire [31:0] _zz_304_;
  wire [31:0] _zz_305_;
  wire [31:0] _zz_306_;
  wire [31:0] _zz_307_;
  wire [31:0] _zz_308_;
  wire [31:0] _zz_309_;
  wire [31:0] _zz_310_;
  wire [31:0] _zz_311_;
  wire [63:0] _zz_312_;
  wire [31:0] _zz_313_;
  wire [31:0] _zz_314_;
  wire [31:0] _zz_315_;
  wire [31:0] _zz_316_;
  wire [31:0] _zz_317_;
  wire [31:0] _zz_318_;
  wire [31:0] _zz_319_;
  wire [511:0] _zz_320_;
  wire [1023:0] _zz_321_;
  wire [511:0] _zz_322_;
  wire [255:0] _zz_323_;
  wire [511:0] _zz_324_;
  wire [255:0] _zz_325_;
  wire [127:0] _zz_326_;
  wire [255:0] _zz_327_;
  wire [127:0] _zz_328_;
  wire [63:0] _zz_329_;
  wire [127:0] _zz_330_;
  wire [63:0] _zz_331_;
  wire [31:0] _zz_332_;
  wire [63:0] _zz_333_;
  wire [31:0] _zz_334_;
  wire [31:0] _zz_335_;
  wire [31:0] _zz_336_;
  wire [31:0] _zz_337_;
  wire [31:0] _zz_338_;
  wire [31:0] _zz_339_;
  wire [31:0] _zz_340_;
  wire [31:0] _zz_341_;
  wire [63:0] _zz_342_;
  wire [31:0] _zz_343_;
  wire [31:0] _zz_344_;
  wire [31:0] _zz_345_;
  wire [31:0] _zz_346_;
  wire [31:0] _zz_347_;
  wire [31:0] _zz_348_;
  wire [31:0] _zz_349_;
  wire [63:0] _zz_350_;
  wire [127:0] _zz_351_;
  wire [63:0] _zz_352_;
  wire [31:0] _zz_353_;
  wire [63:0] _zz_354_;
  wire [31:0] _zz_355_;
  wire [31:0] _zz_356_;
  wire [31:0] _zz_357_;
  wire [31:0] _zz_358_;
  wire [31:0] _zz_359_;
  wire [31:0] _zz_360_;
  wire [31:0] _zz_361_;
  wire [31:0] _zz_362_;
  wire [63:0] _zz_363_;
  wire [31:0] _zz_364_;
  wire [31:0] _zz_365_;
  wire [31:0] _zz_366_;
  wire [31:0] _zz_367_;
  wire [31:0] _zz_368_;
  wire [31:0] _zz_369_;
  wire [31:0] _zz_370_;
  wire [127:0] _zz_371_;
  wire [255:0] _zz_372_;
  wire [127:0] _zz_373_;
  wire [63:0] _zz_374_;
  wire [127:0] _zz_375_;
  wire [63:0] _zz_376_;
  wire [31:0] _zz_377_;
  wire [63:0] _zz_378_;
  wire [31:0] _zz_379_;
  wire [31:0] _zz_380_;
  wire [31:0] _zz_381_;
  wire [31:0] _zz_382_;
  wire [31:0] _zz_383_;
  wire [31:0] _zz_384_;
  wire [31:0] _zz_385_;
  wire [31:0] _zz_386_;
  wire [63:0] _zz_387_;
  wire [31:0] _zz_388_;
  wire [31:0] _zz_389_;
  wire [31:0] _zz_390_;
  wire [31:0] _zz_391_;
  wire [31:0] _zz_392_;
  wire [31:0] _zz_393_;
  wire [31:0] _zz_394_;
  wire [63:0] _zz_395_;
  wire [127:0] _zz_396_;
  wire [63:0] _zz_397_;
  wire [31:0] _zz_398_;
  wire [63:0] _zz_399_;
  wire [31:0] _zz_400_;
  wire [31:0] _zz_401_;
  wire [31:0] _zz_402_;
  wire [31:0] _zz_403_;
  wire [31:0] _zz_404_;
  wire [31:0] _zz_405_;
  wire [31:0] _zz_406_;
  wire [31:0] _zz_407_;
  wire [63:0] _zz_408_;
  wire [31:0] _zz_409_;
  wire [31:0] _zz_410_;
  wire [31:0] _zz_411_;
  wire [31:0] _zz_412_;
  wire [31:0] _zz_413_;
  wire [31:0] _zz_414_;
  wire [31:0] _zz_415_;
  wire [255:0] _zz_416_;
  wire [511:0] _zz_417_;
  wire [255:0] _zz_418_;
  wire [127:0] _zz_419_;
  wire [255:0] _zz_420_;
  wire [127:0] _zz_421_;
  wire [63:0] _zz_422_;
  wire [127:0] _zz_423_;
  wire [63:0] _zz_424_;
  wire [31:0] _zz_425_;
  wire [63:0] _zz_426_;
  wire [31:0] _zz_427_;
  wire [31:0] _zz_428_;
  wire [31:0] _zz_429_;
  wire [31:0] _zz_430_;
  wire [31:0] _zz_431_;
  wire [31:0] _zz_432_;
  wire [31:0] _zz_433_;
  wire [31:0] _zz_434_;
  wire [63:0] _zz_435_;
  wire [31:0] _zz_436_;
  wire [31:0] _zz_437_;
  wire [31:0] _zz_438_;
  wire [31:0] _zz_439_;
  wire [31:0] _zz_440_;
  wire [31:0] _zz_441_;
  wire [31:0] _zz_442_;
  wire [63:0] _zz_443_;
  wire [127:0] _zz_444_;
  wire [63:0] _zz_445_;
  wire [31:0] _zz_446_;
  wire [63:0] _zz_447_;
  wire [31:0] _zz_448_;
  wire [31:0] _zz_449_;
  wire [31:0] _zz_450_;
  wire [31:0] _zz_451_;
  wire [31:0] _zz_452_;
  wire [31:0] _zz_453_;
  wire [31:0] _zz_454_;
  wire [31:0] _zz_455_;
  wire [63:0] _zz_456_;
  wire [31:0] _zz_457_;
  wire [31:0] _zz_458_;
  wire [31:0] _zz_459_;
  wire [31:0] _zz_460_;
  wire [31:0] _zz_461_;
  wire [31:0] _zz_462_;
  wire [31:0] _zz_463_;
  wire [127:0] _zz_464_;
  wire [255:0] _zz_465_;
  wire [127:0] _zz_466_;
  wire [63:0] _zz_467_;
  wire [127:0] _zz_468_;
  wire [63:0] _zz_469_;
  wire [31:0] _zz_470_;
  wire [63:0] _zz_471_;
  wire [31:0] _zz_472_;
  wire [31:0] _zz_473_;
  wire [31:0] _zz_474_;
  wire [31:0] _zz_475_;
  wire [31:0] _zz_476_;
  wire [31:0] _zz_477_;
  wire [31:0] _zz_478_;
  wire [31:0] _zz_479_;
  wire [63:0] _zz_480_;
  wire [31:0] _zz_481_;
  wire [31:0] _zz_482_;
  wire [31:0] _zz_483_;
  wire [31:0] _zz_484_;
  wire [31:0] _zz_485_;
  wire [31:0] _zz_486_;
  wire [31:0] _zz_487_;
  wire [63:0] _zz_488_;
  wire [127:0] _zz_489_;
  wire [63:0] _zz_490_;
  wire [31:0] _zz_491_;
  wire [63:0] _zz_492_;
  wire [31:0] _zz_493_;
  wire [31:0] _zz_494_;
  wire [31:0] _zz_495_;
  wire [31:0] _zz_496_;
  wire [31:0] _zz_497_;
  wire [31:0] _zz_498_;
  wire [31:0] _zz_499_;
  wire [31:0] _zz_500_;
  wire [63:0] _zz_501_;
  wire [31:0] _zz_502_;
  wire [31:0] _zz_503_;
  wire [31:0] _zz_504_;
  wire [31:0] _zz_505_;
  wire [31:0] _zz_506_;
  wire [31:0] _zz_507_;
  wire [31:0] _zz_508_;
  wire  fsm_wantExit;
  reg [2047:0] fsm_buffer;
  reg [2047:0] fsm_result;
  reg `fsm_enumDefinition_defaultEncoding_type fsm_stateReg;
  reg `fsm_enumDefinition_defaultEncoding_type fsm_stateNext;
  wire [1023:0] _zz_1_;
  wire [1023:0] _zz_2_;
  wire [511:0] _zz_3_;
  wire [511:0] _zz_4_;
  wire [255:0] _zz_5_;
  wire [255:0] _zz_6_;
  wire [127:0] _zz_7_;
  wire [127:0] _zz_8_;
  wire [63:0] _zz_9_;
  wire [63:0] _zz_10_;
  wire [31:0] _zz_11_;
  wire [31:0] _zz_12_;
  wire [31:0] _zz_13_;
  wire [31:0] _zz_14_;
  wire [63:0] _zz_15_;
  wire [63:0] _zz_16_;
  wire [31:0] _zz_17_;
  wire [31:0] _zz_18_;
  wire [31:0] _zz_19_;
  wire [31:0] _zz_20_;
  wire [127:0] _zz_21_;
  wire [127:0] _zz_22_;
  wire [63:0] _zz_23_;
  wire [63:0] _zz_24_;
  wire [31:0] _zz_25_;
  wire [31:0] _zz_26_;
  wire [31:0] _zz_27_;
  wire [31:0] _zz_28_;
  wire [63:0] _zz_29_;
  wire [63:0] _zz_30_;
  wire [31:0] _zz_31_;
  wire [31:0] _zz_32_;
  wire [31:0] _zz_33_;
  wire [31:0] _zz_34_;
  wire [255:0] _zz_35_;
  wire [255:0] _zz_36_;
  wire [127:0] _zz_37_;
  wire [127:0] _zz_38_;
  wire [63:0] _zz_39_;
  wire [63:0] _zz_40_;
  wire [31:0] _zz_41_;
  wire [31:0] _zz_42_;
  wire [31:0] _zz_43_;
  wire [31:0] _zz_44_;
  wire [63:0] _zz_45_;
  wire [63:0] _zz_46_;
  wire [31:0] _zz_47_;
  wire [31:0] _zz_48_;
  wire [31:0] _zz_49_;
  wire [31:0] _zz_50_;
  wire [127:0] _zz_51_;
  wire [127:0] _zz_52_;
  wire [63:0] _zz_53_;
  wire [63:0] _zz_54_;
  wire [31:0] _zz_55_;
  wire [31:0] _zz_56_;
  wire [31:0] _zz_57_;
  wire [31:0] _zz_58_;
  wire [63:0] _zz_59_;
  wire [63:0] _zz_60_;
  wire [31:0] _zz_61_;
  wire [31:0] _zz_62_;
  wire [31:0] _zz_63_;
  wire [31:0] _zz_64_;
  wire [511:0] _zz_65_;
  wire [511:0] _zz_66_;
  wire [255:0] _zz_67_;
  wire [255:0] _zz_68_;
  wire [127:0] _zz_69_;
  wire [127:0] _zz_70_;
  wire [63:0] _zz_71_;
  wire [63:0] _zz_72_;
  wire [31:0] _zz_73_;
  wire [31:0] _zz_74_;
  wire [31:0] _zz_75_;
  wire [31:0] _zz_76_;
  wire [63:0] _zz_77_;
  wire [63:0] _zz_78_;
  wire [31:0] _zz_79_;
  wire [31:0] _zz_80_;
  wire [31:0] _zz_81_;
  wire [31:0] _zz_82_;
  wire [127:0] _zz_83_;
  wire [127:0] _zz_84_;
  wire [63:0] _zz_85_;
  wire [63:0] _zz_86_;
  wire [31:0] _zz_87_;
  wire [31:0] _zz_88_;
  wire [31:0] _zz_89_;
  wire [31:0] _zz_90_;
  wire [63:0] _zz_91_;
  wire [63:0] _zz_92_;
  wire [31:0] _zz_93_;
  wire [31:0] _zz_94_;
  wire [31:0] _zz_95_;
  wire [31:0] _zz_96_;
  wire [255:0] _zz_97_;
  wire [255:0] _zz_98_;
  wire [127:0] _zz_99_;
  wire [127:0] _zz_100_;
  wire [63:0] _zz_101_;
  wire [63:0] _zz_102_;
  wire [31:0] _zz_103_;
  wire [31:0] _zz_104_;
  wire [31:0] _zz_105_;
  wire [31:0] _zz_106_;
  wire [63:0] _zz_107_;
  wire [63:0] _zz_108_;
  wire [31:0] _zz_109_;
  wire [31:0] _zz_110_;
  wire [31:0] _zz_111_;
  wire [31:0] _zz_112_;
  wire [127:0] _zz_113_;
  wire [127:0] _zz_114_;
  wire [63:0] _zz_115_;
  wire [63:0] _zz_116_;
  wire [31:0] _zz_117_;
  wire [31:0] _zz_118_;
  wire [31:0] _zz_119_;
  wire [31:0] _zz_120_;
  wire [63:0] _zz_121_;
  wire [63:0] _zz_122_;
  wire [31:0] _zz_123_;
  wire [31:0] _zz_124_;
  wire [31:0] _zz_125_;
  wire [31:0] _zz_126_;
  reg  _zz_127_;
  `ifndef SYNTHESIS
  reg [79:0] fsm_stateReg_string;
  reg [79:0] fsm_stateNext_string;
  `endif

  assign _zz_128_ = _zz_130_;
  assign _zz_129_ = {1024'd0, _zz_128_};
  assign _zz_130_ = (_zz_132_ + _zz_321_);
  assign _zz_131_ = _zz_133_;
  assign _zz_132_ = {512'd0, _zz_131_};
  assign _zz_133_ = (_zz_135_ + _zz_228_);
  assign _zz_134_ = _zz_136_;
  assign _zz_135_ = {256'd0, _zz_134_};
  assign _zz_136_ = (_zz_138_ + _zz_183_);
  assign _zz_137_ = _zz_139_;
  assign _zz_138_ = {128'd0, _zz_137_};
  assign _zz_139_ = (_zz_141_ + _zz_162_);
  assign _zz_140_ = _zz_142_;
  assign _zz_141_ = {64'd0, _zz_140_};
  assign _zz_142_ = (_zz_144_ + _zz_153_);
  assign _zz_143_ = _zz_145_;
  assign _zz_144_ = {32'd0, _zz_143_};
  assign _zz_145_ = (_zz_147_ + _zz_150_);
  assign _zz_146_ = _zz_148_;
  assign _zz_147_ = _zz_146_;
  assign _zz_148_ = (_zz_11_[15 : 0] * _zz_12_[15 : 0]);
  assign _zz_149_ = _zz_151_;
  assign _zz_150_ = _zz_149_;
  assign _zz_151_ = (_zz_11_[31 : 16] * _zz_12_[31 : 16]);
  assign _zz_152_ = _zz_154_;
  assign _zz_153_ = {32'd0, _zz_152_};
  assign _zz_154_ = (_zz_156_ + _zz_159_);
  assign _zz_155_ = _zz_157_;
  assign _zz_156_ = _zz_155_;
  assign _zz_157_ = (_zz_13_[15 : 0] * _zz_14_[15 : 0]);
  assign _zz_158_ = _zz_160_;
  assign _zz_159_ = _zz_158_;
  assign _zz_160_ = (_zz_13_[31 : 16] * _zz_14_[31 : 16]);
  assign _zz_161_ = _zz_163_;
  assign _zz_162_ = {64'd0, _zz_161_};
  assign _zz_163_ = (_zz_165_ + _zz_174_);
  assign _zz_164_ = _zz_166_;
  assign _zz_165_ = {32'd0, _zz_164_};
  assign _zz_166_ = (_zz_168_ + _zz_171_);
  assign _zz_167_ = _zz_169_;
  assign _zz_168_ = _zz_167_;
  assign _zz_169_ = (_zz_17_[15 : 0] * _zz_18_[15 : 0]);
  assign _zz_170_ = _zz_172_;
  assign _zz_171_ = _zz_170_;
  assign _zz_172_ = (_zz_17_[31 : 16] * _zz_18_[31 : 16]);
  assign _zz_173_ = _zz_175_;
  assign _zz_174_ = {32'd0, _zz_173_};
  assign _zz_175_ = (_zz_177_ + _zz_180_);
  assign _zz_176_ = _zz_178_;
  assign _zz_177_ = _zz_176_;
  assign _zz_178_ = (_zz_19_[15 : 0] * _zz_20_[15 : 0]);
  assign _zz_179_ = _zz_181_;
  assign _zz_180_ = _zz_179_;
  assign _zz_181_ = (_zz_19_[31 : 16] * _zz_20_[31 : 16]);
  assign _zz_182_ = _zz_184_;
  assign _zz_183_ = {128'd0, _zz_182_};
  assign _zz_184_ = (_zz_186_ + _zz_207_);
  assign _zz_185_ = _zz_187_;
  assign _zz_186_ = {64'd0, _zz_185_};
  assign _zz_187_ = (_zz_189_ + _zz_198_);
  assign _zz_188_ = _zz_190_;
  assign _zz_189_ = {32'd0, _zz_188_};
  assign _zz_190_ = (_zz_192_ + _zz_195_);
  assign _zz_191_ = _zz_193_;
  assign _zz_192_ = _zz_191_;
  assign _zz_193_ = (_zz_25_[15 : 0] * _zz_26_[15 : 0]);
  assign _zz_194_ = _zz_196_;
  assign _zz_195_ = _zz_194_;
  assign _zz_196_ = (_zz_25_[31 : 16] * _zz_26_[31 : 16]);
  assign _zz_197_ = _zz_199_;
  assign _zz_198_ = {32'd0, _zz_197_};
  assign _zz_199_ = (_zz_201_ + _zz_204_);
  assign _zz_200_ = _zz_202_;
  assign _zz_201_ = _zz_200_;
  assign _zz_202_ = (_zz_27_[15 : 0] * _zz_28_[15 : 0]);
  assign _zz_203_ = _zz_205_;
  assign _zz_204_ = _zz_203_;
  assign _zz_205_ = (_zz_27_[31 : 16] * _zz_28_[31 : 16]);
  assign _zz_206_ = _zz_208_;
  assign _zz_207_ = {64'd0, _zz_206_};
  assign _zz_208_ = (_zz_210_ + _zz_219_);
  assign _zz_209_ = _zz_211_;
  assign _zz_210_ = {32'd0, _zz_209_};
  assign _zz_211_ = (_zz_213_ + _zz_216_);
  assign _zz_212_ = _zz_214_;
  assign _zz_213_ = _zz_212_;
  assign _zz_214_ = (_zz_31_[15 : 0] * _zz_32_[15 : 0]);
  assign _zz_215_ = _zz_217_;
  assign _zz_216_ = _zz_215_;
  assign _zz_217_ = (_zz_31_[31 : 16] * _zz_32_[31 : 16]);
  assign _zz_218_ = _zz_220_;
  assign _zz_219_ = {32'd0, _zz_218_};
  assign _zz_220_ = (_zz_222_ + _zz_225_);
  assign _zz_221_ = _zz_223_;
  assign _zz_222_ = _zz_221_;
  assign _zz_223_ = (_zz_33_[15 : 0] * _zz_34_[15 : 0]);
  assign _zz_224_ = _zz_226_;
  assign _zz_225_ = _zz_224_;
  assign _zz_226_ = (_zz_33_[31 : 16] * _zz_34_[31 : 16]);
  assign _zz_227_ = _zz_229_;
  assign _zz_228_ = {256'd0, _zz_227_};
  assign _zz_229_ = (_zz_231_ + _zz_276_);
  assign _zz_230_ = _zz_232_;
  assign _zz_231_ = {128'd0, _zz_230_};
  assign _zz_232_ = (_zz_234_ + _zz_255_);
  assign _zz_233_ = _zz_235_;
  assign _zz_234_ = {64'd0, _zz_233_};
  assign _zz_235_ = (_zz_237_ + _zz_246_);
  assign _zz_236_ = _zz_238_;
  assign _zz_237_ = {32'd0, _zz_236_};
  assign _zz_238_ = (_zz_240_ + _zz_243_);
  assign _zz_239_ = _zz_241_;
  assign _zz_240_ = _zz_239_;
  assign _zz_241_ = (_zz_41_[15 : 0] * _zz_42_[15 : 0]);
  assign _zz_242_ = _zz_244_;
  assign _zz_243_ = _zz_242_;
  assign _zz_244_ = (_zz_41_[31 : 16] * _zz_42_[31 : 16]);
  assign _zz_245_ = _zz_247_;
  assign _zz_246_ = {32'd0, _zz_245_};
  assign _zz_247_ = (_zz_249_ + _zz_252_);
  assign _zz_248_ = _zz_250_;
  assign _zz_249_ = _zz_248_;
  assign _zz_250_ = (_zz_43_[15 : 0] * _zz_44_[15 : 0]);
  assign _zz_251_ = _zz_253_;
  assign _zz_252_ = _zz_251_;
  assign _zz_253_ = (_zz_43_[31 : 16] * _zz_44_[31 : 16]);
  assign _zz_254_ = _zz_256_;
  assign _zz_255_ = {64'd0, _zz_254_};
  assign _zz_256_ = (_zz_258_ + _zz_267_);
  assign _zz_257_ = _zz_259_;
  assign _zz_258_ = {32'd0, _zz_257_};
  assign _zz_259_ = (_zz_261_ + _zz_264_);
  assign _zz_260_ = _zz_262_;
  assign _zz_261_ = _zz_260_;
  assign _zz_262_ = (_zz_47_[15 : 0] * _zz_48_[15 : 0]);
  assign _zz_263_ = _zz_265_;
  assign _zz_264_ = _zz_263_;
  assign _zz_265_ = (_zz_47_[31 : 16] * _zz_48_[31 : 16]);
  assign _zz_266_ = _zz_268_;
  assign _zz_267_ = {32'd0, _zz_266_};
  assign _zz_268_ = (_zz_270_ + _zz_273_);
  assign _zz_269_ = _zz_271_;
  assign _zz_270_ = _zz_269_;
  assign _zz_271_ = (_zz_49_[15 : 0] * _zz_50_[15 : 0]);
  assign _zz_272_ = _zz_274_;
  assign _zz_273_ = _zz_272_;
  assign _zz_274_ = (_zz_49_[31 : 16] * _zz_50_[31 : 16]);
  assign _zz_275_ = _zz_277_;
  assign _zz_276_ = {128'd0, _zz_275_};
  assign _zz_277_ = (_zz_279_ + _zz_300_);
  assign _zz_278_ = _zz_280_;
  assign _zz_279_ = {64'd0, _zz_278_};
  assign _zz_280_ = (_zz_282_ + _zz_291_);
  assign _zz_281_ = _zz_283_;
  assign _zz_282_ = {32'd0, _zz_281_};
  assign _zz_283_ = (_zz_285_ + _zz_288_);
  assign _zz_284_ = _zz_286_;
  assign _zz_285_ = _zz_284_;
  assign _zz_286_ = (_zz_55_[15 : 0] * _zz_56_[15 : 0]);
  assign _zz_287_ = _zz_289_;
  assign _zz_288_ = _zz_287_;
  assign _zz_289_ = (_zz_55_[31 : 16] * _zz_56_[31 : 16]);
  assign _zz_290_ = _zz_292_;
  assign _zz_291_ = {32'd0, _zz_290_};
  assign _zz_292_ = (_zz_294_ + _zz_297_);
  assign _zz_293_ = _zz_295_;
  assign _zz_294_ = _zz_293_;
  assign _zz_295_ = (_zz_57_[15 : 0] * _zz_58_[15 : 0]);
  assign _zz_296_ = _zz_298_;
  assign _zz_297_ = _zz_296_;
  assign _zz_298_ = (_zz_57_[31 : 16] * _zz_58_[31 : 16]);
  assign _zz_299_ = _zz_301_;
  assign _zz_300_ = {64'd0, _zz_299_};
  assign _zz_301_ = (_zz_303_ + _zz_312_);
  assign _zz_302_ = _zz_304_;
  assign _zz_303_ = {32'd0, _zz_302_};
  assign _zz_304_ = (_zz_306_ + _zz_309_);
  assign _zz_305_ = _zz_307_;
  assign _zz_306_ = _zz_305_;
  assign _zz_307_ = (_zz_61_[15 : 0] * _zz_62_[15 : 0]);
  assign _zz_308_ = _zz_310_;
  assign _zz_309_ = _zz_308_;
  assign _zz_310_ = (_zz_61_[31 : 16] * _zz_62_[31 : 16]);
  assign _zz_311_ = _zz_313_;
  assign _zz_312_ = {32'd0, _zz_311_};
  assign _zz_313_ = (_zz_315_ + _zz_318_);
  assign _zz_314_ = _zz_316_;
  assign _zz_315_ = _zz_314_;
  assign _zz_316_ = (_zz_63_[15 : 0] * _zz_64_[15 : 0]);
  assign _zz_317_ = _zz_319_;
  assign _zz_318_ = _zz_317_;
  assign _zz_319_ = (_zz_63_[31 : 16] * _zz_64_[31 : 16]);
  assign _zz_320_ = _zz_322_;
  assign _zz_321_ = {512'd0, _zz_320_};
  assign _zz_322_ = (_zz_324_ + _zz_417_);
  assign _zz_323_ = _zz_325_;
  assign _zz_324_ = {256'd0, _zz_323_};
  assign _zz_325_ = (_zz_327_ + _zz_372_);
  assign _zz_326_ = _zz_328_;
  assign _zz_327_ = {128'd0, _zz_326_};
  assign _zz_328_ = (_zz_330_ + _zz_351_);
  assign _zz_329_ = _zz_331_;
  assign _zz_330_ = {64'd0, _zz_329_};
  assign _zz_331_ = (_zz_333_ + _zz_342_);
  assign _zz_332_ = _zz_334_;
  assign _zz_333_ = {32'd0, _zz_332_};
  assign _zz_334_ = (_zz_336_ + _zz_339_);
  assign _zz_335_ = _zz_337_;
  assign _zz_336_ = _zz_335_;
  assign _zz_337_ = (_zz_73_[15 : 0] * _zz_74_[15 : 0]);
  assign _zz_338_ = _zz_340_;
  assign _zz_339_ = _zz_338_;
  assign _zz_340_ = (_zz_73_[31 : 16] * _zz_74_[31 : 16]);
  assign _zz_341_ = _zz_343_;
  assign _zz_342_ = {32'd0, _zz_341_};
  assign _zz_343_ = (_zz_345_ + _zz_348_);
  assign _zz_344_ = _zz_346_;
  assign _zz_345_ = _zz_344_;
  assign _zz_346_ = (_zz_75_[15 : 0] * _zz_76_[15 : 0]);
  assign _zz_347_ = _zz_349_;
  assign _zz_348_ = _zz_347_;
  assign _zz_349_ = (_zz_75_[31 : 16] * _zz_76_[31 : 16]);
  assign _zz_350_ = _zz_352_;
  assign _zz_351_ = {64'd0, _zz_350_};
  assign _zz_352_ = (_zz_354_ + _zz_363_);
  assign _zz_353_ = _zz_355_;
  assign _zz_354_ = {32'd0, _zz_353_};
  assign _zz_355_ = (_zz_357_ + _zz_360_);
  assign _zz_356_ = _zz_358_;
  assign _zz_357_ = _zz_356_;
  assign _zz_358_ = (_zz_79_[15 : 0] * _zz_80_[15 : 0]);
  assign _zz_359_ = _zz_361_;
  assign _zz_360_ = _zz_359_;
  assign _zz_361_ = (_zz_79_[31 : 16] * _zz_80_[31 : 16]);
  assign _zz_362_ = _zz_364_;
  assign _zz_363_ = {32'd0, _zz_362_};
  assign _zz_364_ = (_zz_366_ + _zz_369_);
  assign _zz_365_ = _zz_367_;
  assign _zz_366_ = _zz_365_;
  assign _zz_367_ = (_zz_81_[15 : 0] * _zz_82_[15 : 0]);
  assign _zz_368_ = _zz_370_;
  assign _zz_369_ = _zz_368_;
  assign _zz_370_ = (_zz_81_[31 : 16] * _zz_82_[31 : 16]);
  assign _zz_371_ = _zz_373_;
  assign _zz_372_ = {128'd0, _zz_371_};
  assign _zz_373_ = (_zz_375_ + _zz_396_);
  assign _zz_374_ = _zz_376_;
  assign _zz_375_ = {64'd0, _zz_374_};
  assign _zz_376_ = (_zz_378_ + _zz_387_);
  assign _zz_377_ = _zz_379_;
  assign _zz_378_ = {32'd0, _zz_377_};
  assign _zz_379_ = (_zz_381_ + _zz_384_);
  assign _zz_380_ = _zz_382_;
  assign _zz_381_ = _zz_380_;
  assign _zz_382_ = (_zz_87_[15 : 0] * _zz_88_[15 : 0]);
  assign _zz_383_ = _zz_385_;
  assign _zz_384_ = _zz_383_;
  assign _zz_385_ = (_zz_87_[31 : 16] * _zz_88_[31 : 16]);
  assign _zz_386_ = _zz_388_;
  assign _zz_387_ = {32'd0, _zz_386_};
  assign _zz_388_ = (_zz_390_ + _zz_393_);
  assign _zz_389_ = _zz_391_;
  assign _zz_390_ = _zz_389_;
  assign _zz_391_ = (_zz_89_[15 : 0] * _zz_90_[15 : 0]);
  assign _zz_392_ = _zz_394_;
  assign _zz_393_ = _zz_392_;
  assign _zz_394_ = (_zz_89_[31 : 16] * _zz_90_[31 : 16]);
  assign _zz_395_ = _zz_397_;
  assign _zz_396_ = {64'd0, _zz_395_};
  assign _zz_397_ = (_zz_399_ + _zz_408_);
  assign _zz_398_ = _zz_400_;
  assign _zz_399_ = {32'd0, _zz_398_};
  assign _zz_400_ = (_zz_402_ + _zz_405_);
  assign _zz_401_ = _zz_403_;
  assign _zz_402_ = _zz_401_;
  assign _zz_403_ = (_zz_93_[15 : 0] * _zz_94_[15 : 0]);
  assign _zz_404_ = _zz_406_;
  assign _zz_405_ = _zz_404_;
  assign _zz_406_ = (_zz_93_[31 : 16] * _zz_94_[31 : 16]);
  assign _zz_407_ = _zz_409_;
  assign _zz_408_ = {32'd0, _zz_407_};
  assign _zz_409_ = (_zz_411_ + _zz_414_);
  assign _zz_410_ = _zz_412_;
  assign _zz_411_ = _zz_410_;
  assign _zz_412_ = (_zz_95_[15 : 0] * _zz_96_[15 : 0]);
  assign _zz_413_ = _zz_415_;
  assign _zz_414_ = _zz_413_;
  assign _zz_415_ = (_zz_95_[31 : 16] * _zz_96_[31 : 16]);
  assign _zz_416_ = _zz_418_;
  assign _zz_417_ = {256'd0, _zz_416_};
  assign _zz_418_ = (_zz_420_ + _zz_465_);
  assign _zz_419_ = _zz_421_;
  assign _zz_420_ = {128'd0, _zz_419_};
  assign _zz_421_ = (_zz_423_ + _zz_444_);
  assign _zz_422_ = _zz_424_;
  assign _zz_423_ = {64'd0, _zz_422_};
  assign _zz_424_ = (_zz_426_ + _zz_435_);
  assign _zz_425_ = _zz_427_;
  assign _zz_426_ = {32'd0, _zz_425_};
  assign _zz_427_ = (_zz_429_ + _zz_432_);
  assign _zz_428_ = _zz_430_;
  assign _zz_429_ = _zz_428_;
  assign _zz_430_ = (_zz_103_[15 : 0] * _zz_104_[15 : 0]);
  assign _zz_431_ = _zz_433_;
  assign _zz_432_ = _zz_431_;
  assign _zz_433_ = (_zz_103_[31 : 16] * _zz_104_[31 : 16]);
  assign _zz_434_ = _zz_436_;
  assign _zz_435_ = {32'd0, _zz_434_};
  assign _zz_436_ = (_zz_438_ + _zz_441_);
  assign _zz_437_ = _zz_439_;
  assign _zz_438_ = _zz_437_;
  assign _zz_439_ = (_zz_105_[15 : 0] * _zz_106_[15 : 0]);
  assign _zz_440_ = _zz_442_;
  assign _zz_441_ = _zz_440_;
  assign _zz_442_ = (_zz_105_[31 : 16] * _zz_106_[31 : 16]);
  assign _zz_443_ = _zz_445_;
  assign _zz_444_ = {64'd0, _zz_443_};
  assign _zz_445_ = (_zz_447_ + _zz_456_);
  assign _zz_446_ = _zz_448_;
  assign _zz_447_ = {32'd0, _zz_446_};
  assign _zz_448_ = (_zz_450_ + _zz_453_);
  assign _zz_449_ = _zz_451_;
  assign _zz_450_ = _zz_449_;
  assign _zz_451_ = (_zz_109_[15 : 0] * _zz_110_[15 : 0]);
  assign _zz_452_ = _zz_454_;
  assign _zz_453_ = _zz_452_;
  assign _zz_454_ = (_zz_109_[31 : 16] * _zz_110_[31 : 16]);
  assign _zz_455_ = _zz_457_;
  assign _zz_456_ = {32'd0, _zz_455_};
  assign _zz_457_ = (_zz_459_ + _zz_462_);
  assign _zz_458_ = _zz_460_;
  assign _zz_459_ = _zz_458_;
  assign _zz_460_ = (_zz_111_[15 : 0] * _zz_112_[15 : 0]);
  assign _zz_461_ = _zz_463_;
  assign _zz_462_ = _zz_461_;
  assign _zz_463_ = (_zz_111_[31 : 16] * _zz_112_[31 : 16]);
  assign _zz_464_ = _zz_466_;
  assign _zz_465_ = {128'd0, _zz_464_};
  assign _zz_466_ = (_zz_468_ + _zz_489_);
  assign _zz_467_ = _zz_469_;
  assign _zz_468_ = {64'd0, _zz_467_};
  assign _zz_469_ = (_zz_471_ + _zz_480_);
  assign _zz_470_ = _zz_472_;
  assign _zz_471_ = {32'd0, _zz_470_};
  assign _zz_472_ = (_zz_474_ + _zz_477_);
  assign _zz_473_ = _zz_475_;
  assign _zz_474_ = _zz_473_;
  assign _zz_475_ = (_zz_117_[15 : 0] * _zz_118_[15 : 0]);
  assign _zz_476_ = _zz_478_;
  assign _zz_477_ = _zz_476_;
  assign _zz_478_ = (_zz_117_[31 : 16] * _zz_118_[31 : 16]);
  assign _zz_479_ = _zz_481_;
  assign _zz_480_ = {32'd0, _zz_479_};
  assign _zz_481_ = (_zz_483_ + _zz_486_);
  assign _zz_482_ = _zz_484_;
  assign _zz_483_ = _zz_482_;
  assign _zz_484_ = (_zz_119_[15 : 0] * _zz_120_[15 : 0]);
  assign _zz_485_ = _zz_487_;
  assign _zz_486_ = _zz_485_;
  assign _zz_487_ = (_zz_119_[31 : 16] * _zz_120_[31 : 16]);
  assign _zz_488_ = _zz_490_;
  assign _zz_489_ = {64'd0, _zz_488_};
  assign _zz_490_ = (_zz_492_ + _zz_501_);
  assign _zz_491_ = _zz_493_;
  assign _zz_492_ = {32'd0, _zz_491_};
  assign _zz_493_ = (_zz_495_ + _zz_498_);
  assign _zz_494_ = _zz_496_;
  assign _zz_495_ = _zz_494_;
  assign _zz_496_ = (_zz_123_[15 : 0] * _zz_124_[15 : 0]);
  assign _zz_497_ = _zz_499_;
  assign _zz_498_ = _zz_497_;
  assign _zz_499_ = (_zz_123_[31 : 16] * _zz_124_[31 : 16]);
  assign _zz_500_ = _zz_502_;
  assign _zz_501_ = {32'd0, _zz_500_};
  assign _zz_502_ = (_zz_504_ + _zz_507_);
  assign _zz_503_ = _zz_505_;
  assign _zz_504_ = _zz_503_;
  assign _zz_505_ = (_zz_125_[15 : 0] * _zz_126_[15 : 0]);
  assign _zz_506_ = _zz_508_;
  assign _zz_507_ = _zz_506_;
  assign _zz_508_ = (_zz_125_[31 : 16] * _zz_126_[31 : 16]);
  `ifndef SYNTHESIS
  always @(*) begin
    case(fsm_stateReg)
      `fsm_enumDefinition_defaultEncoding_boot : fsm_stateReg_string = "boot      ";
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : fsm_stateReg_string = "fsm_stateA";
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : fsm_stateReg_string = "fsm_stateB";
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : fsm_stateReg_string = "fsm_stateC";
      default : fsm_stateReg_string = "??????????";
    endcase
  end
  always @(*) begin
    case(fsm_stateNext)
      `fsm_enumDefinition_defaultEncoding_boot : fsm_stateNext_string = "boot      ";
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : fsm_stateNext_string = "fsm_stateA";
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : fsm_stateNext_string = "fsm_stateB";
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : fsm_stateNext_string = "fsm_stateC";
      default : fsm_stateNext_string = "??????????";
    endcase
  end
  `endif

  assign fsm_wantExit = 1'b0;
  always @ (*) begin
    io_toUart_payload = (2048'b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
    case(fsm_stateReg)
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : begin
        io_toUart_payload = fsm_result;
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    io_toUart_valid = 1'b0;
    case(fsm_stateReg)
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : begin
        io_toUart_valid = _zz_127_;
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    fsm_stateNext = fsm_stateReg;
    case(fsm_stateReg)
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : begin
        if(io_fromUart_valid)begin
          fsm_stateNext = `fsm_enumDefinition_defaultEncoding_fsm_stateB;
        end
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : begin
        fsm_stateNext = `fsm_enumDefinition_defaultEncoding_fsm_stateC;
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : begin
        fsm_stateNext = `fsm_enumDefinition_defaultEncoding_fsm_stateA;
      end
      default : begin
        fsm_stateNext = `fsm_enumDefinition_defaultEncoding_fsm_stateA;
      end
    endcase
  end

  assign _zz_1_ = fsm_buffer[1023 : 0];
  assign _zz_2_ = fsm_buffer[2047 : 1024];
  assign _zz_3_ = _zz_1_[511 : 0];
  assign _zz_4_ = _zz_2_[511 : 0];
  assign _zz_5_ = _zz_3_[255 : 0];
  assign _zz_6_ = _zz_4_[255 : 0];
  assign _zz_7_ = _zz_5_[127 : 0];
  assign _zz_8_ = _zz_6_[127 : 0];
  assign _zz_9_ = _zz_7_[63 : 0];
  assign _zz_10_ = _zz_8_[63 : 0];
  assign _zz_11_ = _zz_9_[31 : 0];
  assign _zz_12_ = _zz_10_[31 : 0];
  assign _zz_13_ = _zz_9_[63 : 32];
  assign _zz_14_ = _zz_10_[63 : 32];
  assign _zz_15_ = _zz_7_[127 : 64];
  assign _zz_16_ = _zz_8_[127 : 64];
  assign _zz_17_ = _zz_15_[31 : 0];
  assign _zz_18_ = _zz_16_[31 : 0];
  assign _zz_19_ = _zz_15_[63 : 32];
  assign _zz_20_ = _zz_16_[63 : 32];
  assign _zz_21_ = _zz_5_[255 : 128];
  assign _zz_22_ = _zz_6_[255 : 128];
  assign _zz_23_ = _zz_21_[63 : 0];
  assign _zz_24_ = _zz_22_[63 : 0];
  assign _zz_25_ = _zz_23_[31 : 0];
  assign _zz_26_ = _zz_24_[31 : 0];
  assign _zz_27_ = _zz_23_[63 : 32];
  assign _zz_28_ = _zz_24_[63 : 32];
  assign _zz_29_ = _zz_21_[127 : 64];
  assign _zz_30_ = _zz_22_[127 : 64];
  assign _zz_31_ = _zz_29_[31 : 0];
  assign _zz_32_ = _zz_30_[31 : 0];
  assign _zz_33_ = _zz_29_[63 : 32];
  assign _zz_34_ = _zz_30_[63 : 32];
  assign _zz_35_ = _zz_3_[511 : 256];
  assign _zz_36_ = _zz_4_[511 : 256];
  assign _zz_37_ = _zz_35_[127 : 0];
  assign _zz_38_ = _zz_36_[127 : 0];
  assign _zz_39_ = _zz_37_[63 : 0];
  assign _zz_40_ = _zz_38_[63 : 0];
  assign _zz_41_ = _zz_39_[31 : 0];
  assign _zz_42_ = _zz_40_[31 : 0];
  assign _zz_43_ = _zz_39_[63 : 32];
  assign _zz_44_ = _zz_40_[63 : 32];
  assign _zz_45_ = _zz_37_[127 : 64];
  assign _zz_46_ = _zz_38_[127 : 64];
  assign _zz_47_ = _zz_45_[31 : 0];
  assign _zz_48_ = _zz_46_[31 : 0];
  assign _zz_49_ = _zz_45_[63 : 32];
  assign _zz_50_ = _zz_46_[63 : 32];
  assign _zz_51_ = _zz_35_[255 : 128];
  assign _zz_52_ = _zz_36_[255 : 128];
  assign _zz_53_ = _zz_51_[63 : 0];
  assign _zz_54_ = _zz_52_[63 : 0];
  assign _zz_55_ = _zz_53_[31 : 0];
  assign _zz_56_ = _zz_54_[31 : 0];
  assign _zz_57_ = _zz_53_[63 : 32];
  assign _zz_58_ = _zz_54_[63 : 32];
  assign _zz_59_ = _zz_51_[127 : 64];
  assign _zz_60_ = _zz_52_[127 : 64];
  assign _zz_61_ = _zz_59_[31 : 0];
  assign _zz_62_ = _zz_60_[31 : 0];
  assign _zz_63_ = _zz_59_[63 : 32];
  assign _zz_64_ = _zz_60_[63 : 32];
  assign _zz_65_ = _zz_1_[1023 : 512];
  assign _zz_66_ = _zz_2_[1023 : 512];
  assign _zz_67_ = _zz_65_[255 : 0];
  assign _zz_68_ = _zz_66_[255 : 0];
  assign _zz_69_ = _zz_67_[127 : 0];
  assign _zz_70_ = _zz_68_[127 : 0];
  assign _zz_71_ = _zz_69_[63 : 0];
  assign _zz_72_ = _zz_70_[63 : 0];
  assign _zz_73_ = _zz_71_[31 : 0];
  assign _zz_74_ = _zz_72_[31 : 0];
  assign _zz_75_ = _zz_71_[63 : 32];
  assign _zz_76_ = _zz_72_[63 : 32];
  assign _zz_77_ = _zz_69_[127 : 64];
  assign _zz_78_ = _zz_70_[127 : 64];
  assign _zz_79_ = _zz_77_[31 : 0];
  assign _zz_80_ = _zz_78_[31 : 0];
  assign _zz_81_ = _zz_77_[63 : 32];
  assign _zz_82_ = _zz_78_[63 : 32];
  assign _zz_83_ = _zz_67_[255 : 128];
  assign _zz_84_ = _zz_68_[255 : 128];
  assign _zz_85_ = _zz_83_[63 : 0];
  assign _zz_86_ = _zz_84_[63 : 0];
  assign _zz_87_ = _zz_85_[31 : 0];
  assign _zz_88_ = _zz_86_[31 : 0];
  assign _zz_89_ = _zz_85_[63 : 32];
  assign _zz_90_ = _zz_86_[63 : 32];
  assign _zz_91_ = _zz_83_[127 : 64];
  assign _zz_92_ = _zz_84_[127 : 64];
  assign _zz_93_ = _zz_91_[31 : 0];
  assign _zz_94_ = _zz_92_[31 : 0];
  assign _zz_95_ = _zz_91_[63 : 32];
  assign _zz_96_ = _zz_92_[63 : 32];
  assign _zz_97_ = _zz_65_[511 : 256];
  assign _zz_98_ = _zz_66_[511 : 256];
  assign _zz_99_ = _zz_97_[127 : 0];
  assign _zz_100_ = _zz_98_[127 : 0];
  assign _zz_101_ = _zz_99_[63 : 0];
  assign _zz_102_ = _zz_100_[63 : 0];
  assign _zz_103_ = _zz_101_[31 : 0];
  assign _zz_104_ = _zz_102_[31 : 0];
  assign _zz_105_ = _zz_101_[63 : 32];
  assign _zz_106_ = _zz_102_[63 : 32];
  assign _zz_107_ = _zz_99_[127 : 64];
  assign _zz_108_ = _zz_100_[127 : 64];
  assign _zz_109_ = _zz_107_[31 : 0];
  assign _zz_110_ = _zz_108_[31 : 0];
  assign _zz_111_ = _zz_107_[63 : 32];
  assign _zz_112_ = _zz_108_[63 : 32];
  assign _zz_113_ = _zz_97_[255 : 128];
  assign _zz_114_ = _zz_98_[255 : 128];
  assign _zz_115_ = _zz_113_[63 : 0];
  assign _zz_116_ = _zz_114_[63 : 0];
  assign _zz_117_ = _zz_115_[31 : 0];
  assign _zz_118_ = _zz_116_[31 : 0];
  assign _zz_119_ = _zz_115_[63 : 32];
  assign _zz_120_ = _zz_116_[63 : 32];
  assign _zz_121_ = _zz_113_[127 : 64];
  assign _zz_122_ = _zz_114_[127 : 64];
  assign _zz_123_ = _zz_121_[31 : 0];
  assign _zz_124_ = _zz_122_[31 : 0];
  assign _zz_125_ = _zz_121_[63 : 32];
  assign _zz_126_ = _zz_122_[63 : 32];
  always @ (posedge clk or posedge reset) begin
    if (reset) begin
      fsm_buffer <= (2048'b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
      fsm_result <= (2048'b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
      fsm_stateReg <= `fsm_enumDefinition_defaultEncoding_boot;
    end else begin
      fsm_stateReg <= fsm_stateNext;
      case(fsm_stateReg)
        `fsm_enumDefinition_defaultEncoding_fsm_stateA : begin
          if(io_fromUart_valid)begin
            fsm_buffer <= io_fromUart_payload;
          end
        end
        `fsm_enumDefinition_defaultEncoding_fsm_stateB : begin
          fsm_result <= _zz_129_;
        end
        `fsm_enumDefinition_defaultEncoding_fsm_stateC : begin
        end
        default : begin
        end
      endcase
    end
  end

  always @ (posedge clk) begin
    _zz_127_ <= 1'b1;
  end

endmodule

module UartRecursive (
      output  io_uart_txd,
      input   io_uart_rxd,
      input   clk,
      input   reset);
  wire  uartfsm_io_uart_txd;
  wire  uartfsm_io_toFnct_valid;
  wire [2047:0] uartfsm_io_toFnct_payload;
  wire  square_1__io_toUart_valid;
  wire [2047:0] square_1__io_toUart_payload;
  UartFsmInOut uartfsm ( 
    .io_uart_txd(uartfsm_io_uart_txd),
    .io_uart_rxd(io_uart_rxd),
    .io_toFnct_valid(uartfsm_io_toFnct_valid),
    .io_toFnct_payload(uartfsm_io_toFnct_payload),
    .io_fromFnct_valid(square_1__io_toUart_valid),
    .io_fromFnct_payload(square_1__io_toUart_payload),
    .clk(clk),
    .reset(reset) 
  );
  Square square_1_ ( 
    .io_fromUart_valid(uartfsm_io_toFnct_valid),
    .io_fromUart_payload(uartfsm_io_toFnct_payload),
    .io_toUart_valid(square_1__io_toUart_valid),
    .io_toUart_payload(square_1__io_toUart_payload),
    .clk(clk),
    .reset(reset) 
  );
  assign io_uart_txd = uartfsm_io_uart_txd;
endmodule

