// Generator : SpinalHDL v1.3.8    git head : 57d97088b91271a094cebad32ed86479199955df
// Date      : 20/03/2020, 16:38:34
// Component : UartMod


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

`define fsm_enumDefinition_defaultEncoding_type [2:0]
`define fsm_enumDefinition_defaultEncoding_boot 3'b000
`define fsm_enumDefinition_defaultEncoding_fsm_stateA 3'b001
`define fsm_enumDefinition_defaultEncoding_fsm_stateB 3'b010
`define fsm_enumDefinition_defaultEncoding_fsm_stateC 3'b011
`define fsm_enumDefinition_defaultEncoding_fsm_stateD 3'b100
`define fsm_enumDefinition_defaultEncoding_fsm_stateE 3'b101

module KaraMult (
      input  [15:0] io_a,
      input  [15:0] io_b,
      output [31:0] io_result);
  wire [31:0] _zz_1_;
  wire [31:0] _zz_2_;
  assign _zz_1_ = _zz_2_;
  assign _zz_2_ = (io_a * io_b);
  assign io_result = _zz_1_;
endmodule


//KaraMult_1_ remplaced by KaraMult


//KaraMult_2_ remplaced by KaraMult


//KaraMult_3_ remplaced by KaraMult


//KaraMult_4_ remplaced by KaraMult


//KaraMult_5_ remplaced by KaraMult


//KaraMult_6_ remplaced by KaraMult


//KaraMult_7_ remplaced by KaraMult


//KaraMult_8_ remplaced by KaraMult


//KaraMult_9_ remplaced by KaraMult


//KaraMult_10_ remplaced by KaraMult


//KaraMult_11_ remplaced by KaraMult


//KaraMult_12_ remplaced by KaraMult


//KaraMult_13_ remplaced by KaraMult


//KaraMult_14_ remplaced by KaraMult


//KaraMult_15_ remplaced by KaraMult


//KaraMult_16_ remplaced by KaraMult


//KaraMult_17_ remplaced by KaraMult


//KaraMult_18_ remplaced by KaraMult


//KaraMult_19_ remplaced by KaraMult


//KaraMult_20_ remplaced by KaraMult


//KaraMult_21_ remplaced by KaraMult


//KaraMult_22_ remplaced by KaraMult


//KaraMult_23_ remplaced by KaraMult


//KaraMult_24_ remplaced by KaraMult


//KaraMult_25_ remplaced by KaraMult


//KaraMult_26_ remplaced by KaraMult

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

module KaraMult_27_ (
      input  [31:0] io_a,
      input  [31:0] io_b,
      output [63:0] io_result);
  wire [15:0] _zz_8_;
  wire [15:0] _zz_9_;
  wire [31:0] karaMult_40__io_result;
  wire [31:0] karaMult_41__io_result;
  wire [31:0] karaMult_42__io_result;
  wire [16:0] _zz_10_;
  wire [16:0] _zz_11_;
  wire [16:0] _zz_12_;
  wire [16:0] _zz_13_;
  wire [16:0] _zz_14_;
  wire [16:0] _zz_15_;
  wire [16:0] _zz_16_;
  wire [16:0] _zz_17_;
  wire [16:0] _zz_18_;
  wire [16:0] _zz_19_;
  wire [16:0] _zz_20_;
  wire [16:0] _zz_21_;
  wire [0:0] _zz_22_;
  wire [16:0] _zz_23_;
  wire [16:0] _zz_24_;
  wire [16:0] _zz_25_;
  wire [16:0] _zz_26_;
  wire [16:0] _zz_27_;
  wire [0:0] _zz_28_;
  wire [16:0] _zz_29_;
  wire [16:0] _zz_30_;
  wire [16:0] _zz_31_;
  wire [48:0] _zz_32_;
  wire [32:0] _zz_33_;
  wire [32:0] _zz_34_;
  wire [31:0] _zz_35_;
  wire [32:0] _zz_36_;
  wire [33:0] _zz_37_;
  wire [32:0] _zz_38_;
  wire [32:0] _zz_39_;
  wire [33:0] _zz_40_;
  wire [65:0] _zz_41_;
  wire [65:0] _zz_42_;
  wire [64:0] _zz_43_;
  wire [63:0] _zz_44_;
  wire [50:0] _zz_45_;
  wire [64:0] _zz_46_;
  wire [32:0] _zz_47_;
  wire [65:0] _zz_48_;
  wire [15:0] _zz_1_;
  wire [15:0] _zz_2_;
  wire [15:0] _zz_3_;
  wire [15:0] _zz_4_;
  wire [16:0] _zz_5_;
  wire [16:0] _zz_6_;
  reg [49:0] _zz_7_;
  assign _zz_10_ = _zz_11_;
  assign _zz_11_ = {1'd0, _zz_1_};
  assign _zz_12_ = _zz_13_;
  assign _zz_13_ = {1'd0, _zz_2_};
  assign _zz_14_ = _zz_15_;
  assign _zz_15_ = {1'd0, _zz_4_};
  assign _zz_16_ = _zz_17_;
  assign _zz_17_ = {1'd0, _zz_3_};
  assign _zz_18_ = _zz_19_;
  assign _zz_19_ = (_zz_20_ + _zz_23_);
  assign _zz_20_ = (_zz_5_[16] ? _zz_21_ : _zz_5_);
  assign _zz_21_ = (~ _zz_5_);
  assign _zz_22_ = _zz_5_[16];
  assign _zz_23_ = {16'd0, _zz_22_};
  assign _zz_24_ = _zz_25_;
  assign _zz_25_ = (_zz_26_ + _zz_29_);
  assign _zz_26_ = (_zz_6_[16] ? _zz_27_ : _zz_6_);
  assign _zz_27_ = (~ _zz_6_);
  assign _zz_28_ = _zz_6_[16];
  assign _zz_29_ = {16'd0, _zz_28_};
  assign _zz_30_ = (17'b00000000000000000);
  assign _zz_31_ = (17'b00000000000000000);
  assign _zz_32_ = ({16'd0,_zz_33_} <<< 16);
  assign _zz_33_ = (_zz_34_ - _zz_36_);
  assign _zz_34_ = ({1'b0,karaMult_40__io_result} + {1'b0,karaMult_41__io_result});
  assign _zz_35_ = karaMult_42__io_result;
  assign _zz_36_ = {1'd0, _zz_35_};
  assign _zz_37_ = ({1'b0,_zz_38_} + _zz_40_);
  assign _zz_38_ = ({1'b0,karaMult_40__io_result} + {1'b0,karaMult_41__io_result});
  assign _zz_39_ = {1'b0,karaMult_42__io_result};
  assign _zz_40_ = {1'd0, _zz_39_};
  assign _zz_41_ = _zz_42_;
  assign _zz_42_ = ({1'b0,_zz_43_} + _zz_48_);
  assign _zz_43_ = ({1'b0,_zz_44_} + _zz_46_);
  assign _zz_44_ = ({32'd0,karaMult_40__io_result} <<< 32);
  assign _zz_45_ = {1'b0,_zz_7_};
  assign _zz_46_ = {14'd0, _zz_45_};
  assign _zz_47_ = {1'b0,karaMult_41__io_result};
  assign _zz_48_ = {33'd0, _zz_47_};
  KaraMult karaMult_40_ ( 
    .io_a(_zz_2_),
    .io_b(_zz_4_),
    .io_result(karaMult_40__io_result) 
  );
  KaraMult karaMult_41_ ( 
    .io_a(_zz_1_),
    .io_b(_zz_3_),
    .io_result(karaMult_41__io_result) 
  );
  KaraMult karaMult_42_ ( 
    .io_a(_zz_8_),
    .io_b(_zz_9_),
    .io_result(karaMult_42__io_result) 
  );
  assign _zz_1_ = io_a[15 : 0];
  assign _zz_2_ = io_a[31 : 16];
  assign _zz_3_ = io_b[15 : 0];
  assign _zz_4_ = io_b[31 : 16];
  assign _zz_5_ = ($signed(_zz_10_) - $signed(_zz_12_));
  assign _zz_6_ = ($signed(_zz_14_) - $signed(_zz_16_));
  assign _zz_8_ = _zz_18_[15:0];
  assign _zz_9_ = _zz_24_[15:0];
  always @ (*) begin
    if((($signed(_zz_5_) < $signed(_zz_30_)) ^ ($signed(_zz_6_) < $signed(_zz_31_))))begin
      _zz_7_ = {1'd0, _zz_32_};
    end else begin
      _zz_7_ = ({16'd0,_zz_37_} <<< 16);
    end
  end

  assign io_result = _zz_41_[63:0];
endmodule


//KaraMult_28_ remplaced by KaraMult_27_


//KaraMult_29_ remplaced by KaraMult_27_


//KaraMult_30_ remplaced by KaraMult_27_


//KaraMult_31_ remplaced by KaraMult_27_


//KaraMult_32_ remplaced by KaraMult_27_


//KaraMult_33_ remplaced by KaraMult_27_


//KaraMult_34_ remplaced by KaraMult_27_


//KaraMult_35_ remplaced by KaraMult_27_

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
  wire  clockDivider_tick;
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
  assign clockDivider_tick = (clockDivider_counter_willOverflowIfInc && clockDivider_counter_willIncrement);
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
        if(clockDivider_tick)begin
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
          if((io_write_valid && clockDivider_tick))begin
            stateMachine_state <= `UartCtrlTxState_defaultEncoding_START;
          end
        end
        `UartCtrlTxState_defaultEncoding_START : begin
          if(clockDivider_tick)begin
            stateMachine_state <= `UartCtrlTxState_defaultEncoding_DATA;
          end
        end
        `UartCtrlTxState_defaultEncoding_DATA : begin
          if(clockDivider_tick)begin
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
          if(clockDivider_tick)begin
            stateMachine_state <= `UartCtrlTxState_defaultEncoding_STOP;
          end
        end
        default : begin
          if(clockDivider_tick)begin
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
    if(clockDivider_tick)begin
      tickCounter_value <= (tickCounter_value + (3'b001));
    end
    if(clockDivider_tick)begin
      stateMachine_parity <= (stateMachine_parity ^ stateMachine_txd);
    end
    case(stateMachine_state)
      `UartCtrlTxState_defaultEncoding_IDLE : begin
      end
      `UartCtrlTxState_defaultEncoding_START : begin
        if(clockDivider_tick)begin
          stateMachine_parity <= (io_configFrame_parity == `UartParityType_defaultEncoding_ODD);
          tickCounter_value <= (3'b000);
        end
      end
      `UartCtrlTxState_defaultEncoding_DATA : begin
        if(clockDivider_tick)begin
          if(_zz_1_)begin
            tickCounter_value <= (3'b000);
          end
        end
      end
      `UartCtrlTxState_defaultEncoding_PARITY : begin
        if(clockDivider_tick)begin
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
  wire  io_rxd_buffercc_io_dataOut;
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
  BufferCC io_rxd_buffercc ( 
    .io_initial(_zz_1_),
    .io_dataIn(io_rxd),
    .io_dataOut(io_rxd_buffercc_io_dataOut),
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
  assign sampler_synchroniser = io_rxd_buffercc_io_dataOut;
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

module KaraMult_36_ (
      input  [63:0] io_a,
      input  [63:0] io_b,
      output [127:0] io_result);
  wire [31:0] _zz_8_;
  wire [31:0] _zz_9_;
  wire [63:0] karaMult_40__io_result;
  wire [63:0] karaMult_41__io_result;
  wire [63:0] karaMult_42__io_result;
  wire [32:0] _zz_10_;
  wire [32:0] _zz_11_;
  wire [32:0] _zz_12_;
  wire [32:0] _zz_13_;
  wire [32:0] _zz_14_;
  wire [32:0] _zz_15_;
  wire [32:0] _zz_16_;
  wire [32:0] _zz_17_;
  wire [32:0] _zz_18_;
  wire [32:0] _zz_19_;
  wire [32:0] _zz_20_;
  wire [32:0] _zz_21_;
  wire [0:0] _zz_22_;
  wire [32:0] _zz_23_;
  wire [32:0] _zz_24_;
  wire [32:0] _zz_25_;
  wire [32:0] _zz_26_;
  wire [32:0] _zz_27_;
  wire [0:0] _zz_28_;
  wire [32:0] _zz_29_;
  wire [32:0] _zz_30_;
  wire [32:0] _zz_31_;
  wire [96:0] _zz_32_;
  wire [64:0] _zz_33_;
  wire [64:0] _zz_34_;
  wire [63:0] _zz_35_;
  wire [64:0] _zz_36_;
  wire [65:0] _zz_37_;
  wire [64:0] _zz_38_;
  wire [64:0] _zz_39_;
  wire [65:0] _zz_40_;
  wire [129:0] _zz_41_;
  wire [129:0] _zz_42_;
  wire [128:0] _zz_43_;
  wire [127:0] _zz_44_;
  wire [98:0] _zz_45_;
  wire [128:0] _zz_46_;
  wire [64:0] _zz_47_;
  wire [129:0] _zz_48_;
  wire [31:0] _zz_1_;
  wire [31:0] _zz_2_;
  wire [31:0] _zz_3_;
  wire [31:0] _zz_4_;
  wire [32:0] _zz_5_;
  wire [32:0] _zz_6_;
  reg [97:0] _zz_7_;
  assign _zz_10_ = _zz_11_;
  assign _zz_11_ = {1'd0, _zz_1_};
  assign _zz_12_ = _zz_13_;
  assign _zz_13_ = {1'd0, _zz_2_};
  assign _zz_14_ = _zz_15_;
  assign _zz_15_ = {1'd0, _zz_4_};
  assign _zz_16_ = _zz_17_;
  assign _zz_17_ = {1'd0, _zz_3_};
  assign _zz_18_ = _zz_19_;
  assign _zz_19_ = (_zz_20_ + _zz_23_);
  assign _zz_20_ = (_zz_5_[32] ? _zz_21_ : _zz_5_);
  assign _zz_21_ = (~ _zz_5_);
  assign _zz_22_ = _zz_5_[32];
  assign _zz_23_ = {32'd0, _zz_22_};
  assign _zz_24_ = _zz_25_;
  assign _zz_25_ = (_zz_26_ + _zz_29_);
  assign _zz_26_ = (_zz_6_[32] ? _zz_27_ : _zz_6_);
  assign _zz_27_ = (~ _zz_6_);
  assign _zz_28_ = _zz_6_[32];
  assign _zz_29_ = {32'd0, _zz_28_};
  assign _zz_30_ = (33'b000000000000000000000000000000000);
  assign _zz_31_ = (33'b000000000000000000000000000000000);
  assign _zz_32_ = ({32'd0,_zz_33_} <<< 32);
  assign _zz_33_ = (_zz_34_ - _zz_36_);
  assign _zz_34_ = ({1'b0,karaMult_40__io_result} + {1'b0,karaMult_41__io_result});
  assign _zz_35_ = karaMult_42__io_result;
  assign _zz_36_ = {1'd0, _zz_35_};
  assign _zz_37_ = ({1'b0,_zz_38_} + _zz_40_);
  assign _zz_38_ = ({1'b0,karaMult_40__io_result} + {1'b0,karaMult_41__io_result});
  assign _zz_39_ = {1'b0,karaMult_42__io_result};
  assign _zz_40_ = {1'd0, _zz_39_};
  assign _zz_41_ = _zz_42_;
  assign _zz_42_ = ({1'b0,_zz_43_} + _zz_48_);
  assign _zz_43_ = ({1'b0,_zz_44_} + _zz_46_);
  assign _zz_44_ = ({64'd0,karaMult_40__io_result} <<< 64);
  assign _zz_45_ = {1'b0,_zz_7_};
  assign _zz_46_ = {30'd0, _zz_45_};
  assign _zz_47_ = {1'b0,karaMult_41__io_result};
  assign _zz_48_ = {65'd0, _zz_47_};
  KaraMult_27_ karaMult_40_ ( 
    .io_a(_zz_2_),
    .io_b(_zz_4_),
    .io_result(karaMult_40__io_result) 
  );
  KaraMult_27_ karaMult_41_ ( 
    .io_a(_zz_1_),
    .io_b(_zz_3_),
    .io_result(karaMult_41__io_result) 
  );
  KaraMult_27_ karaMult_42_ ( 
    .io_a(_zz_8_),
    .io_b(_zz_9_),
    .io_result(karaMult_42__io_result) 
  );
  assign _zz_1_ = io_a[31 : 0];
  assign _zz_2_ = io_a[63 : 32];
  assign _zz_3_ = io_b[31 : 0];
  assign _zz_4_ = io_b[63 : 32];
  assign _zz_5_ = ($signed(_zz_10_) - $signed(_zz_12_));
  assign _zz_6_ = ($signed(_zz_14_) - $signed(_zz_16_));
  assign _zz_8_ = _zz_18_[31:0];
  assign _zz_9_ = _zz_24_[31:0];
  always @ (*) begin
    if((($signed(_zz_5_) < $signed(_zz_30_)) ^ ($signed(_zz_6_) < $signed(_zz_31_))))begin
      _zz_7_ = {1'd0, _zz_32_};
    end else begin
      _zz_7_ = ({32'd0,_zz_37_} <<< 32);
    end
  end

  assign io_result = _zz_41_[127:0];
endmodule


//KaraMult_37_ remplaced by KaraMult_36_


//KaraMult_38_ remplaced by KaraMult_36_

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

module KaraMult_39_ (
      input  [127:0] io_a,
      input  [127:0] io_b,
      output [255:0] io_result);
  wire [63:0] _zz_8_;
  wire [63:0] _zz_9_;
  wire [127:0] karaMult_40__io_result;
  wire [127:0] karaMult_41__io_result;
  wire [127:0] karaMult_42__io_result;
  wire [64:0] _zz_10_;
  wire [64:0] _zz_11_;
  wire [64:0] _zz_12_;
  wire [64:0] _zz_13_;
  wire [64:0] _zz_14_;
  wire [64:0] _zz_15_;
  wire [64:0] _zz_16_;
  wire [64:0] _zz_17_;
  wire [64:0] _zz_18_;
  wire [64:0] _zz_19_;
  wire [64:0] _zz_20_;
  wire [64:0] _zz_21_;
  wire [0:0] _zz_22_;
  wire [64:0] _zz_23_;
  wire [64:0] _zz_24_;
  wire [64:0] _zz_25_;
  wire [64:0] _zz_26_;
  wire [64:0] _zz_27_;
  wire [0:0] _zz_28_;
  wire [64:0] _zz_29_;
  wire [64:0] _zz_30_;
  wire [64:0] _zz_31_;
  wire [192:0] _zz_32_;
  wire [128:0] _zz_33_;
  wire [128:0] _zz_34_;
  wire [127:0] _zz_35_;
  wire [128:0] _zz_36_;
  wire [129:0] _zz_37_;
  wire [128:0] _zz_38_;
  wire [128:0] _zz_39_;
  wire [129:0] _zz_40_;
  wire [257:0] _zz_41_;
  wire [257:0] _zz_42_;
  wire [256:0] _zz_43_;
  wire [255:0] _zz_44_;
  wire [194:0] _zz_45_;
  wire [256:0] _zz_46_;
  wire [128:0] _zz_47_;
  wire [257:0] _zz_48_;
  wire [63:0] _zz_1_;
  wire [63:0] _zz_2_;
  wire [63:0] _zz_3_;
  wire [63:0] _zz_4_;
  wire [64:0] _zz_5_;
  wire [64:0] _zz_6_;
  reg [193:0] _zz_7_;
  assign _zz_10_ = _zz_11_;
  assign _zz_11_ = {1'd0, _zz_1_};
  assign _zz_12_ = _zz_13_;
  assign _zz_13_ = {1'd0, _zz_2_};
  assign _zz_14_ = _zz_15_;
  assign _zz_15_ = {1'd0, _zz_4_};
  assign _zz_16_ = _zz_17_;
  assign _zz_17_ = {1'd0, _zz_3_};
  assign _zz_18_ = _zz_19_;
  assign _zz_19_ = (_zz_20_ + _zz_23_);
  assign _zz_20_ = (_zz_5_[64] ? _zz_21_ : _zz_5_);
  assign _zz_21_ = (~ _zz_5_);
  assign _zz_22_ = _zz_5_[64];
  assign _zz_23_ = {64'd0, _zz_22_};
  assign _zz_24_ = _zz_25_;
  assign _zz_25_ = (_zz_26_ + _zz_29_);
  assign _zz_26_ = (_zz_6_[64] ? _zz_27_ : _zz_6_);
  assign _zz_27_ = (~ _zz_6_);
  assign _zz_28_ = _zz_6_[64];
  assign _zz_29_ = {64'd0, _zz_28_};
  assign _zz_30_ = (65'b00000000000000000000000000000000000000000000000000000000000000000);
  assign _zz_31_ = (65'b00000000000000000000000000000000000000000000000000000000000000000);
  assign _zz_32_ = ({64'd0,_zz_33_} <<< 64);
  assign _zz_33_ = (_zz_34_ - _zz_36_);
  assign _zz_34_ = ({1'b0,karaMult_40__io_result} + {1'b0,karaMult_41__io_result});
  assign _zz_35_ = karaMult_42__io_result;
  assign _zz_36_ = {1'd0, _zz_35_};
  assign _zz_37_ = ({1'b0,_zz_38_} + _zz_40_);
  assign _zz_38_ = ({1'b0,karaMult_40__io_result} + {1'b0,karaMult_41__io_result});
  assign _zz_39_ = {1'b0,karaMult_42__io_result};
  assign _zz_40_ = {1'd0, _zz_39_};
  assign _zz_41_ = _zz_42_;
  assign _zz_42_ = ({1'b0,_zz_43_} + _zz_48_);
  assign _zz_43_ = ({1'b0,_zz_44_} + _zz_46_);
  assign _zz_44_ = ({128'd0,karaMult_40__io_result} <<< 128);
  assign _zz_45_ = {1'b0,_zz_7_};
  assign _zz_46_ = {62'd0, _zz_45_};
  assign _zz_47_ = {1'b0,karaMult_41__io_result};
  assign _zz_48_ = {129'd0, _zz_47_};
  KaraMult_36_ karaMult_40_ ( 
    .io_a(_zz_2_),
    .io_b(_zz_4_),
    .io_result(karaMult_40__io_result) 
  );
  KaraMult_36_ karaMult_41_ ( 
    .io_a(_zz_1_),
    .io_b(_zz_3_),
    .io_result(karaMult_41__io_result) 
  );
  KaraMult_36_ karaMult_42_ ( 
    .io_a(_zz_8_),
    .io_b(_zz_9_),
    .io_result(karaMult_42__io_result) 
  );
  assign _zz_1_ = io_a[63 : 0];
  assign _zz_2_ = io_a[127 : 64];
  assign _zz_3_ = io_b[63 : 0];
  assign _zz_4_ = io_b[127 : 64];
  assign _zz_5_ = ($signed(_zz_10_) - $signed(_zz_12_));
  assign _zz_6_ = ($signed(_zz_14_) - $signed(_zz_16_));
  assign _zz_8_ = _zz_18_[63:0];
  assign _zz_9_ = _zz_24_[63:0];
  always @ (*) begin
    if((($signed(_zz_5_) < $signed(_zz_30_)) ^ ($signed(_zz_6_) < $signed(_zz_31_))))begin
      _zz_7_ = {1'd0, _zz_32_};
    end else begin
      _zz_7_ = ({64'd0,_zz_37_} <<< 64);
    end
  end

  assign io_result = _zz_41_[255:0];
endmodule

module UartFsmInOut (
      output  io_uart_txd,
      input   io_uart_rxd,
      output reg  io_toFnct_valid,
      output reg [399:0] io_toFnct_payload,
      input   io_fromFnct_valid,
      input  [255:0] io_fromFnct_payload,
      input   clk,
      input   reset);
  wire [2:0] _zz_1_;
  wire `UartStopType_defaultEncoding_type _zz_2_;
  wire `UartParityType_defaultEncoding_type _zz_3_;
  wire [19:0] _zz_4_;
  wire  uartCtrl_1__io_write_ready;
  wire  uartCtrl_1__io_read_valid;
  wire [7:0] uartCtrl_1__io_read_payload;
  wire  uartCtrl_1__io_uart_txd;
  wire [9:0] _zz_5_;
  wire [8:0] _zz_6_;
  reg  write_valid;
  wire  write_ready;
  reg [7:0] write_payload;
  wire  write_m2sPipe_valid;
  wire  write_m2sPipe_ready;
  wire [7:0] write_m2sPipe_payload;
  reg  write_m2sPipe_rValid;
  reg [7:0] write_m2sPipe_rData;
  wire  fsmIn_wantExit;
  reg [5:0] fsmIn_inCounter;
  reg [399:0] fsmIn_buffer;
  wire  fsmOut_wantExit;
  reg [4:0] fsmOut_outCounter;
  reg [255:0] fsmOut_outBuffer;
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

  assign _zz_5_ = (fsmIn_inCounter * (4'b1000));
  assign _zz_6_ = (fsmOut_outCounter * (4'b1000));
  UartCtrl uartCtrl_1_ ( 
    .io_config_frame_dataLength(_zz_1_),
    .io_config_frame_stop(_zz_2_),
    .io_config_frame_parity(_zz_3_),
    .io_config_clockDivider(_zz_4_),
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

  assign _zz_4_ = (20'b00000000000000011010);
  assign _zz_1_ = (3'b111);
  assign _zz_3_ = `UartParityType_defaultEncoding_NONE;
  assign _zz_2_ = `UartStopType_defaultEncoding_ONE;
  assign io_uart_txd = uartCtrl_1__io_uart_txd;
  assign write_ready = ((1'b1 && (! write_m2sPipe_valid)) || write_m2sPipe_ready);
  assign write_m2sPipe_valid = write_m2sPipe_rValid;
  assign write_m2sPipe_payload = write_m2sPipe_rData;
  assign write_m2sPipe_ready = uartCtrl_1__io_write_ready;
  assign fsmIn_wantExit = 1'b0;
  always @ (*) begin
    io_toFnct_payload = (400'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
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
        write_payload = fsmOut_outBuffer[_zz_6_ +: 8];
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
        if((fsmIn_inCounter == (6'b110001)))begin
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
        if((fsmOut_outCounter == (5'b11111)))begin
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
      write_m2sPipe_rValid <= 1'b0;
      fsmIn_inCounter <= (6'b000000);
      fsmIn_buffer <= (400'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
      fsmOut_outCounter <= (5'b00000);
      fsmOut_outBuffer <= (256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
      fsmIn_stateReg <= `fsmIn_enumDefinition_defaultEncoding_boot;
      fsmOut_stateReg <= `fsmOut_enumDefinition_defaultEncoding_boot;
    end else begin
      if(write_ready)begin
        write_m2sPipe_rValid <= write_valid;
      end
      fsmIn_stateReg <= fsmIn_stateNext;
      case(fsmIn_stateReg)
        `fsmIn_enumDefinition_defaultEncoding_fsmIn_inEntry : begin
        end
        `fsmIn_enumDefinition_defaultEncoding_fsmIn_inReadByte : begin
          if(uartCtrl_1__io_read_valid)begin
            fsmIn_buffer[_zz_5_ +: 8] <= uartCtrl_1__io_read_payload;
          end
        end
        `fsmIn_enumDefinition_defaultEncoding_fsmIn_inIncCounter : begin
          fsmIn_inCounter <= (fsmIn_inCounter + (6'b000001));
        end
        `fsmIn_enumDefinition_defaultEncoding_fsmIn_inBufToPayload : begin
        end
        default : begin
        end
      endcase
      if(((fsmIn_stateReg == `fsmIn_enumDefinition_defaultEncoding_fsmIn_inEntry) && (! (fsmIn_stateNext == `fsmIn_enumDefinition_defaultEncoding_fsmIn_inEntry))))begin
        fsmIn_inCounter <= (6'b000000);
        fsmIn_buffer <= (400'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
      end
      fsmOut_stateReg <= fsmOut_stateNext;
      case(fsmOut_stateReg)
        `fsmOut_enumDefinition_defaultEncoding_fsmOut_outEntry : begin
          if(io_fromFnct_valid)begin
            fsmOut_outCounter <= (5'b00000);
            fsmOut_outBuffer <= io_fromFnct_payload;
          end
        end
        `fsmOut_enumDefinition_defaultEncoding_fsmOut_outWriteByte : begin
        end
        `fsmOut_enumDefinition_defaultEncoding_fsmOut_outIncCounter : begin
          fsmOut_outCounter <= (fsmOut_outCounter + (5'b00001));
        end
        default : begin
        end
      endcase
    end
  end

  always @ (posedge clk) begin
    if(write_ready)begin
      write_m2sPipe_rData <= write_payload;
    end
  end

endmodule

module MultMod (
      input   io_fromUart_valid,
      input  [399:0] io_fromUart_payload,
      output reg  io_toUart_valid,
      output reg [255:0] io_toUart_payload,
      output reg [255:0] io_temp_1_out,
      output reg [255:0] io_temp_2_out,
      output reg [255:0] io_temp_3_out,
      output reg [255:0] io_temp_4_out,
      output reg [255:0] io_temp_5_out,
      output reg [255:0] io_temp_6_out,
      output reg [255:0] io_temp_7_out,
      output reg [2:0] io_temp_corr_flag,
      input   clk,
      input   reset);
  reg [127:0] _zz_6_;
  reg [127:0] _zz_7_;
  wire [255:0] fsm_mult_io_result;
  wire  _zz_8_;
  wire  _zz_9_;
  wire  _zz_10_;
  wire  _zz_11_;
  wire  _zz_12_;
  wire [12:0] _zz_13_;
  wire [12:0] _zz_14_;
  wire [7:0] _zz_15_;
  wire [12:0] _zz_16_;
  wire [12:0] _zz_17_;
  wire [255:0] _zz_18_;
  wire [255:0] _zz_19_;
  wire [255:0] _zz_20_;
  wire [66:0] _zz_21_;
  wire [255:0] _zz_22_;
  wire [255:0] _zz_23_;
  wire [66:0] _zz_24_;
  wire [255:0] _zz_25_;
  wire [65:0] _zz_26_;
  wire [255:0] _zz_27_;
  wire [255:0] _zz_28_;
  wire [65:0] _zz_29_;
  wire [255:0] _zz_30_;
  wire [65:0] _zz_31_;
  wire [255:0] _zz_32_;
  wire [255:0] _zz_33_;
  wire [65:0] _zz_34_;
  wire [255:0] _zz_35_;
  wire [63:0] _zz_36_;
  wire [255:0] _zz_37_;
  wire [255:0] _zz_38_;
  wire [63:0] _zz_39_;
  wire [255:0] _zz_40_;
  wire  fsm_wantExit;
  reg [255:0] fsm_buffer;
  reg [63:0] fsm_mod_n;
  reg [71:0] fsm_mue;
  reg [7:0] fsm_k;
  reg [255:0] fsm_result_mult;
  reg [255:0] fsm_result_barret;
  reg [255:0] fsm_temp_3;
  wire [255:0] fsm_mask;
  reg [1:0] _zz_1_;
  reg `fsm_enumDefinition_defaultEncoding_type fsm_stateReg;
  reg `fsm_enumDefinition_defaultEncoding_type fsm_stateNext;
  wire [255:0] _zz_2_;
  wire [255:0] _zz_3_;
  wire [255:0] _zz_4_;
  wire [255:0] _zz_5_;
  `ifndef SYNTHESIS
  reg [79:0] fsm_stateReg_string;
  reg [79:0] fsm_stateNext_string;
  `endif

  assign _zz_8_ = ($signed(_zz_5_) < $signed(_zz_18_));
  assign _zz_9_ = (_zz_22_ < _zz_5_);
  assign _zz_10_ = (_zz_27_ < _zz_5_);
  assign _zz_11_ = (_zz_32_ < _zz_5_);
  assign _zz_12_ = (_zz_37_ < _zz_5_);
  assign _zz_13_ = ((13'b0000100000000) - _zz_14_);
  assign _zz_14_ = ((5'b10000) * _zz_15_);
  assign _zz_15_ = (fsm_k + (8'b00000001));
  assign _zz_16_ = ((5'b10000) * fsm_k);
  assign _zz_17_ = ((5'b10000) * fsm_k);
  assign _zz_18_ = (256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
  assign _zz_19_ = ($signed(_zz_5_) + $signed(_zz_20_));
  assign _zz_20_ = fsm_mask;
  assign _zz_21_ = ((3'b100) * fsm_mod_n);
  assign _zz_22_ = {189'd0, _zz_21_};
  assign _zz_23_ = (_zz_5_ - _zz_25_);
  assign _zz_24_ = ((3'b100) * fsm_mod_n);
  assign _zz_25_ = {189'd0, _zz_24_};
  assign _zz_26_ = ((2'b11) * fsm_mod_n);
  assign _zz_27_ = {190'd0, _zz_26_};
  assign _zz_28_ = (_zz_5_ - _zz_30_);
  assign _zz_29_ = ((2'b11) * fsm_mod_n);
  assign _zz_30_ = {190'd0, _zz_29_};
  assign _zz_31_ = ((2'b10) * fsm_mod_n);
  assign _zz_32_ = {190'd0, _zz_31_};
  assign _zz_33_ = (_zz_5_ - _zz_35_);
  assign _zz_34_ = ((2'b10) * fsm_mod_n);
  assign _zz_35_ = {190'd0, _zz_34_};
  assign _zz_36_ = fsm_mod_n;
  assign _zz_37_ = {192'd0, _zz_36_};
  assign _zz_38_ = (_zz_5_ - _zz_40_);
  assign _zz_39_ = fsm_mod_n;
  assign _zz_40_ = {192'd0, _zz_39_};
  KaraMult_39_ fsm_mult ( 
    .io_a(_zz_6_),
    .io_b(_zz_7_),
    .io_result(fsm_mult_io_result) 
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(fsm_stateReg)
      `fsm_enumDefinition_defaultEncoding_boot : fsm_stateReg_string = "boot      ";
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : fsm_stateReg_string = "fsm_stateA";
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : fsm_stateReg_string = "fsm_stateB";
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : fsm_stateReg_string = "fsm_stateC";
      `fsm_enumDefinition_defaultEncoding_fsm_stateD : fsm_stateReg_string = "fsm_stateD";
      `fsm_enumDefinition_defaultEncoding_fsm_stateE : fsm_stateReg_string = "fsm_stateE";
      default : fsm_stateReg_string = "??????????";
    endcase
  end
  always @(*) begin
    case(fsm_stateNext)
      `fsm_enumDefinition_defaultEncoding_boot : fsm_stateNext_string = "boot      ";
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : fsm_stateNext_string = "fsm_stateA";
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : fsm_stateNext_string = "fsm_stateB";
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : fsm_stateNext_string = "fsm_stateC";
      `fsm_enumDefinition_defaultEncoding_fsm_stateD : fsm_stateNext_string = "fsm_stateD";
      `fsm_enumDefinition_defaultEncoding_fsm_stateE : fsm_stateNext_string = "fsm_stateE";
      default : fsm_stateNext_string = "??????????";
    endcase
  end
  `endif

  assign fsm_wantExit = 1'b0;
  assign fsm_mask = ((256'b1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111) >>> _zz_13_);
  always @ (*) begin
    io_toUart_payload = (256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
    case(fsm_stateReg)
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateD : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateE : begin
        io_toUart_payload = fsm_result_barret;
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
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateD : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateE : begin
        io_toUart_valid = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    _zz_6_ = (128'b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
    case(fsm_stateReg)
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : begin
        _zz_6_ = fsm_buffer[127 : 0];
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : begin
        _zz_6_ = {56'd0, fsm_mue};
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateD : begin
        _zz_6_ = fsm_temp_3[127:0];
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateE : begin
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    _zz_7_ = (128'b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
    case(fsm_stateReg)
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : begin
        _zz_7_ = fsm_buffer[255 : 128];
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : begin
        _zz_7_ = _zz_2_[127:0];
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateD : begin
        _zz_7_ = {64'd0, fsm_mod_n};
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateE : begin
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    io_temp_1_out = (256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
    case(fsm_stateReg)
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : begin
        io_temp_1_out = _zz_2_;
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateD : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateE : begin
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    io_temp_2_out = (256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
    case(fsm_stateReg)
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : begin
        io_temp_2_out = fsm_mult_io_result;
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateD : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateE : begin
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    io_temp_3_out = (256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
    case(fsm_stateReg)
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : begin
        io_temp_3_out = fsm_temp_3;
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateD : begin
        io_temp_3_out = fsm_temp_3;
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateE : begin
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    io_temp_4_out = (256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
    case(fsm_stateReg)
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateD : begin
        io_temp_4_out = fsm_mult_io_result;
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateE : begin
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    io_temp_5_out = (256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
    case(fsm_stateReg)
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateD : begin
        io_temp_5_out = _zz_3_;
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateE : begin
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    io_temp_6_out = (256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
    case(fsm_stateReg)
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateD : begin
        io_temp_6_out = _zz_4_;
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateE : begin
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    io_temp_7_out = (256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
    case(fsm_stateReg)
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateD : begin
        io_temp_7_out = _zz_5_;
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateE : begin
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    io_temp_corr_flag = (3'b000);
    case(fsm_stateReg)
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateD : begin
        if(_zz_8_)begin
          io_temp_corr_flag = (3'b001);
        end else begin
          if(_zz_9_)begin
            io_temp_corr_flag = (3'b010);
          end else begin
            if(_zz_10_)begin
              io_temp_corr_flag = (3'b011);
            end else begin
              if(_zz_11_)begin
                io_temp_corr_flag = (3'b100);
              end else begin
                if(_zz_12_)begin
                  io_temp_corr_flag = (3'b101);
                end else begin
                  io_temp_corr_flag = (3'b110);
                end
              end
            end
          end
        end
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateE : begin
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
        if((_zz_1_ <= (2'b01)))begin
          fsm_stateNext = `fsm_enumDefinition_defaultEncoding_fsm_stateD;
        end
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateD : begin
        if((_zz_1_ <= (2'b01)))begin
          fsm_stateNext = `fsm_enumDefinition_defaultEncoding_fsm_stateE;
        end
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateE : begin
        fsm_stateNext = `fsm_enumDefinition_defaultEncoding_fsm_stateA;
      end
      default : begin
        fsm_stateNext = `fsm_enumDefinition_defaultEncoding_fsm_stateA;
      end
    endcase
  end

  assign _zz_2_ = (fsm_result_mult >>> _zz_16_);
  assign _zz_3_ = (fsm_result_mult & fsm_mask);
  assign _zz_4_ = (fsm_mult_io_result & fsm_mask);
  assign _zz_5_ = ($signed(_zz_3_) - $signed(_zz_4_));
  always @ (posedge clk or posedge reset) begin
    if (reset) begin
      fsm_buffer <= (256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
      fsm_mod_n <= (64'b0000000000000000000000000000000000000000000000000000000000000000);
      fsm_mue <= (72'b000000000000000000000000000000000000000000000000000000000000000000000000);
      fsm_k <= (8'b00000000);
      fsm_result_mult <= (256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
      fsm_result_barret <= (256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
      fsm_stateReg <= `fsm_enumDefinition_defaultEncoding_boot;
    end else begin
      fsm_stateReg <= fsm_stateNext;
      case(fsm_stateReg)
        `fsm_enumDefinition_defaultEncoding_fsm_stateA : begin
          if(io_fromUart_valid)begin
            fsm_buffer <= io_fromUart_payload[255 : 0];
            fsm_mod_n <= io_fromUart_payload[319 : 256];
            fsm_mue <= io_fromUart_payload[391 : 320];
            fsm_k <= io_fromUart_payload[399 : 392];
          end
        end
        `fsm_enumDefinition_defaultEncoding_fsm_stateB : begin
          fsm_result_mult <= fsm_mult_io_result;
        end
        `fsm_enumDefinition_defaultEncoding_fsm_stateC : begin
        end
        `fsm_enumDefinition_defaultEncoding_fsm_stateD : begin
          if(_zz_8_)begin
            fsm_result_barret <= _zz_19_;
          end else begin
            if(_zz_9_)begin
              fsm_result_barret <= _zz_23_;
            end else begin
              if(_zz_10_)begin
                fsm_result_barret <= _zz_28_;
              end else begin
                if(_zz_11_)begin
                  fsm_result_barret <= _zz_33_;
                end else begin
                  if(_zz_12_)begin
                    fsm_result_barret <= _zz_38_;
                  end else begin
                    fsm_result_barret <= _zz_5_;
                  end
                end
              end
            end
          end
        end
        `fsm_enumDefinition_defaultEncoding_fsm_stateE : begin
        end
        default : begin
        end
      endcase
    end
  end

  always @ (posedge clk) begin
    case(fsm_stateReg)
      `fsm_enumDefinition_defaultEncoding_fsm_stateA : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateB : begin
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateC : begin
        _zz_1_ <= (_zz_1_ - (2'b01));
        fsm_temp_3 <= (fsm_mult_io_result >>> _zz_17_);
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateD : begin
        _zz_1_ <= (_zz_1_ - (2'b01));
      end
      `fsm_enumDefinition_defaultEncoding_fsm_stateE : begin
      end
      default : begin
      end
    endcase
    if(((! (fsm_stateReg == `fsm_enumDefinition_defaultEncoding_fsm_stateC)) && (fsm_stateNext == `fsm_enumDefinition_defaultEncoding_fsm_stateC)))begin
      _zz_1_ <= (2'b10);
    end
    if(((! (fsm_stateReg == `fsm_enumDefinition_defaultEncoding_fsm_stateD)) && (fsm_stateNext == `fsm_enumDefinition_defaultEncoding_fsm_stateD)))begin
      _zz_1_ <= (2'b10);
    end
  end

endmodule

module UartMod (
      output  io_uart_txd,
      input   io_uart_rxd,
      input   clk,
      input   reset);
  wire  uartfsm_io_uart_txd;
  wire  uartfsm_io_toFnct_valid;
  wire [399:0] uartfsm_io_toFnct_payload;
  wire  multmod_1__io_toUart_valid;
  wire [255:0] multmod_1__io_toUart_payload;
  wire [255:0] multmod_1__io_temp_1_out;
  wire [255:0] multmod_1__io_temp_2_out;
  wire [255:0] multmod_1__io_temp_3_out;
  wire [255:0] multmod_1__io_temp_4_out;
  wire [255:0] multmod_1__io_temp_5_out;
  wire [255:0] multmod_1__io_temp_6_out;
  wire [255:0] multmod_1__io_temp_7_out;
  wire [2:0] multmod_1__io_temp_corr_flag;
  UartFsmInOut uartfsm ( 
    .io_uart_txd(uartfsm_io_uart_txd),
    .io_uart_rxd(io_uart_rxd),
    .io_toFnct_valid(uartfsm_io_toFnct_valid),
    .io_toFnct_payload(uartfsm_io_toFnct_payload),
    .io_fromFnct_valid(multmod_1__io_toUart_valid),
    .io_fromFnct_payload(multmod_1__io_toUart_payload),
    .clk(clk),
    .reset(reset) 
  );
  MultMod multmod_1_ ( 
    .io_fromUart_valid(uartfsm_io_toFnct_valid),
    .io_fromUart_payload(uartfsm_io_toFnct_payload),
    .io_toUart_valid(multmod_1__io_toUart_valid),
    .io_toUart_payload(multmod_1__io_toUart_payload),
    .io_temp_1_out(multmod_1__io_temp_1_out),
    .io_temp_2_out(multmod_1__io_temp_2_out),
    .io_temp_3_out(multmod_1__io_temp_3_out),
    .io_temp_4_out(multmod_1__io_temp_4_out),
    .io_temp_5_out(multmod_1__io_temp_5_out),
    .io_temp_6_out(multmod_1__io_temp_6_out),
    .io_temp_7_out(multmod_1__io_temp_7_out),
    .io_temp_corr_flag(multmod_1__io_temp_corr_flag),
    .clk(clk),
    .reset(reset) 
  );
  assign io_uart_txd = uartfsm_io_uart_txd;
endmodule

