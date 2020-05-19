// Generator : SpinalHDL v1.3.5    git head : f0505d24810c8661a24530409359554b7cfa271a
// Date      : 24/04/2020, 10:44:22
// Component : Blinky


`define area1Mhz_fsm_enumDefinition_binary_sequential_type [1:0]
`define area1Mhz_fsm_enumDefinition_binary_sequential_boot 2'b00
`define area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateA 2'b01
`define area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateB 2'b10
`define area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateC 2'b11

module Blinky (
      output reg  io_led,
      input   clk,
      input   reset);
  wire [0:0] _zz_3_;
  wire [23:0] _zz_4_;
  wire [0:0] _zz_5_;
  wire [23:0] _zz_6_;
  reg [4:0] _zz_1_;
  wire  _zz_2_;
  reg  _zz_2__regNext;
  wire  area1Mhz_fsm_wantExit;
  reg  area1Mhz_fsm_counter1_willIncrement;
  reg  area1Mhz_fsm_counter1_willClear;
  reg [23:0] area1Mhz_fsm_counter1_valueNext;
  reg [23:0] area1Mhz_fsm_counter1_value;
  wire  area1Mhz_fsm_counter1_willOverflowIfInc;
  wire  area1Mhz_fsm_counter1_willOverflow;
  reg  area1Mhz_fsm_counter2_willIncrement;
  reg  area1Mhz_fsm_counter2_willClear;
  reg [23:0] area1Mhz_fsm_counter2_valueNext;
  reg [23:0] area1Mhz_fsm_counter2_value;
  wire  area1Mhz_fsm_counter2_willOverflowIfInc;
  wire  area1Mhz_fsm_counter2_willOverflow;
  reg `area1Mhz_fsm_enumDefinition_binary_sequential_type area1Mhz_fsm_stateReg;
  reg `area1Mhz_fsm_enumDefinition_binary_sequential_type area1Mhz_fsm_stateNext;
  `ifndef SYNTHESIS
  reg [151:0] area1Mhz_fsm_stateReg_string;
  reg [151:0] area1Mhz_fsm_stateNext_string;
  `endif

  assign _zz_3_ = area1Mhz_fsm_counter1_willIncrement;
  assign _zz_4_ = {23'd0, _zz_3_};
  assign _zz_5_ = area1Mhz_fsm_counter2_willIncrement;
  assign _zz_6_ = {23'd0, _zz_5_};
  `ifndef SYNTHESIS
  always @(*) begin
    case(area1Mhz_fsm_stateReg)
      `area1Mhz_fsm_enumDefinition_binary_sequential_boot : area1Mhz_fsm_stateReg_string = "boot               ";
      `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateA : area1Mhz_fsm_stateReg_string = "area1Mhz_fsm_stateA";
      `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateB : area1Mhz_fsm_stateReg_string = "area1Mhz_fsm_stateB";
      `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateC : area1Mhz_fsm_stateReg_string = "area1Mhz_fsm_stateC";
      default : area1Mhz_fsm_stateReg_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(area1Mhz_fsm_stateNext)
      `area1Mhz_fsm_enumDefinition_binary_sequential_boot : area1Mhz_fsm_stateNext_string = "boot               ";
      `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateA : area1Mhz_fsm_stateNext_string = "area1Mhz_fsm_stateA";
      `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateB : area1Mhz_fsm_stateNext_string = "area1Mhz_fsm_stateB";
      `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateC : area1Mhz_fsm_stateNext_string = "area1Mhz_fsm_stateC";
      default : area1Mhz_fsm_stateNext_string = "???????????????????";
    endcase
  end
  `endif

  assign _zz_2_ = (_zz_1_ == (5'b11000));
  assign area1Mhz_fsm_wantExit = 1'b0;
  always @ (*) begin
    area1Mhz_fsm_counter1_willIncrement = 1'b0;
    case(area1Mhz_fsm_stateReg)
      `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateA : begin
      end
      `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateB : begin
        area1Mhz_fsm_counter1_willIncrement = 1'b1;
      end
      `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateC : begin
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    area1Mhz_fsm_counter1_willClear = 1'b0;
    if(((! (area1Mhz_fsm_stateReg == `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateB)) && (area1Mhz_fsm_stateNext == `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateB)))begin
      area1Mhz_fsm_counter1_willClear = 1'b1;
    end
  end

  assign area1Mhz_fsm_counter1_willOverflowIfInc = (area1Mhz_fsm_counter1_value == (24'b101111101011110000100000));
  assign area1Mhz_fsm_counter1_willOverflow = (area1Mhz_fsm_counter1_willOverflowIfInc && area1Mhz_fsm_counter1_willIncrement);
  always @ (*) begin
    if(area1Mhz_fsm_counter1_willOverflow)begin
      area1Mhz_fsm_counter1_valueNext = (24'b000000000000000000000000);
    end else begin
      area1Mhz_fsm_counter1_valueNext = (area1Mhz_fsm_counter1_value + _zz_4_);
    end
    if(area1Mhz_fsm_counter1_willClear)begin
      area1Mhz_fsm_counter1_valueNext = (24'b000000000000000000000000);
    end
  end

  always @ (*) begin
    area1Mhz_fsm_counter2_willIncrement = 1'b0;
    case(area1Mhz_fsm_stateReg)
      `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateA : begin
      end
      `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateB : begin
      end
      `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateC : begin
        area1Mhz_fsm_counter2_willIncrement = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    area1Mhz_fsm_counter2_willClear = 1'b0;
    if(((! (area1Mhz_fsm_stateReg == `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateC)) && (area1Mhz_fsm_stateNext == `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateC)))begin
      area1Mhz_fsm_counter2_willClear = 1'b1;
    end
  end

  assign area1Mhz_fsm_counter2_willOverflowIfInc = (area1Mhz_fsm_counter2_value == (24'b101111101011110000100000));
  assign area1Mhz_fsm_counter2_willOverflow = (area1Mhz_fsm_counter2_willOverflowIfInc && area1Mhz_fsm_counter2_willIncrement);
  always @ (*) begin
    if(area1Mhz_fsm_counter2_willOverflow)begin
      area1Mhz_fsm_counter2_valueNext = (24'b000000000000000000000000);
    end else begin
      area1Mhz_fsm_counter2_valueNext = (area1Mhz_fsm_counter2_value + _zz_6_);
    end
    if(area1Mhz_fsm_counter2_willClear)begin
      area1Mhz_fsm_counter2_valueNext = (24'b000000000000000000000000);
    end
  end

  always @ (*) begin
    io_led = 1'b0;
    case(area1Mhz_fsm_stateReg)
      `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateA : begin
      end
      `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateB : begin
        io_led = 1'b1;
      end
      `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateC : begin
        io_led = 1'b0;
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    area1Mhz_fsm_stateNext = area1Mhz_fsm_stateReg;
    case(area1Mhz_fsm_stateReg)
      `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateA : begin
        area1Mhz_fsm_stateNext = `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateB;
      end
      `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateB : begin
        if(area1Mhz_fsm_counter1_willOverflow)begin
          area1Mhz_fsm_stateNext = `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateC;
        end
      end
      `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateC : begin
        if(area1Mhz_fsm_counter2_willOverflow)begin
          area1Mhz_fsm_stateNext = `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateA;
        end
      end
      default : begin
        area1Mhz_fsm_stateNext = `area1Mhz_fsm_enumDefinition_binary_sequential_area1Mhz_fsm_stateA;
      end
    endcase
  end

  always @ (posedge clk or posedge reset) begin
    if (reset) begin
      _zz_1_ <= (5'b00000);
      _zz_2__regNext <= 1'b0;
    end else begin
      _zz_1_ <= (_zz_1_ + (5'b00001));
      if(_zz_2_)begin
        _zz_1_ <= (5'b00000);
      end
      _zz_2__regNext <= _zz_2_;
    end
  end

  always @ (posedge clk or posedge reset) begin
    if (reset) begin
      area1Mhz_fsm_counter1_value <= (24'b000000000000000000000000);
      area1Mhz_fsm_counter2_value <= (24'b000000000000000000000000);
      area1Mhz_fsm_stateReg <= `area1Mhz_fsm_enumDefinition_binary_sequential_boot;
    end else begin
      if(_zz_2__regNext) begin
        area1Mhz_fsm_counter1_value <= area1Mhz_fsm_counter1_valueNext;
        area1Mhz_fsm_counter2_value <= area1Mhz_fsm_counter2_valueNext;
        area1Mhz_fsm_stateReg <= area1Mhz_fsm_stateNext;
      end
    end
  end

endmodule

