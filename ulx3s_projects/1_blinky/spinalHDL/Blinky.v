// Generator : SpinalHDL v1.3.5    git head : f0505d24810c8661a24530409359554b7cfa271a
// Date      : 17/04/2020, 16:20:41
// Component : Blinky


`define fsm_enumDefinition_binary_sequential_type [1:0]
`define fsm_enumDefinition_binary_sequential_boot 2'b00
`define fsm_enumDefinition_binary_sequential_fsm_stateA 2'b01
`define fsm_enumDefinition_binary_sequential_fsm_stateB 2'b10
`define fsm_enumDefinition_binary_sequential_fsm_stateC 2'b11

module Blinky (
      output reg  io_led,
      input   clkIsLocked,
      input   clk,
      input   reset);
  wire [0:0] _zz_1_;
  wire [23:0] _zz_2_;
  wire [0:0] _zz_3_;
  wire [23:0] _zz_4_;
  wire  fsm_wantExit;
  reg  fsm_counter1_willIncrement;
  reg  fsm_counter1_willClear;
  reg [23:0] fsm_counter1_valueNext;
  reg [23:0] fsm_counter1_value;
  wire  fsm_counter1_willOverflowIfInc;
  wire  fsm_counter1_willOverflow;
  reg  fsm_counter2_willIncrement;
  reg  fsm_counter2_willClear;
  reg [23:0] fsm_counter2_valueNext;
  reg [23:0] fsm_counter2_value;
  wire  fsm_counter2_willOverflowIfInc;
  wire  fsm_counter2_willOverflow;
  reg `fsm_enumDefinition_binary_sequential_type fsm_stateReg;
  reg `fsm_enumDefinition_binary_sequential_type fsm_stateNext;
  `ifndef SYNTHESIS
  reg [79:0] fsm_stateReg_string;
  reg [79:0] fsm_stateNext_string;
  `endif

  assign _zz_1_ = fsm_counter1_willIncrement;
  assign _zz_2_ = {23'd0, _zz_1_};
  assign _zz_3_ = fsm_counter2_willIncrement;
  assign _zz_4_ = {23'd0, _zz_3_};
  `ifndef SYNTHESIS
  always @(*) begin
    case(fsm_stateReg)
      `fsm_enumDefinition_binary_sequential_boot : fsm_stateReg_string = "boot      ";
      `fsm_enumDefinition_binary_sequential_fsm_stateA : fsm_stateReg_string = "fsm_stateA";
      `fsm_enumDefinition_binary_sequential_fsm_stateB : fsm_stateReg_string = "fsm_stateB";
      `fsm_enumDefinition_binary_sequential_fsm_stateC : fsm_stateReg_string = "fsm_stateC";
      default : fsm_stateReg_string = "??????????";
    endcase
  end
  always @(*) begin
    case(fsm_stateNext)
      `fsm_enumDefinition_binary_sequential_boot : fsm_stateNext_string = "boot      ";
      `fsm_enumDefinition_binary_sequential_fsm_stateA : fsm_stateNext_string = "fsm_stateA";
      `fsm_enumDefinition_binary_sequential_fsm_stateB : fsm_stateNext_string = "fsm_stateB";
      `fsm_enumDefinition_binary_sequential_fsm_stateC : fsm_stateNext_string = "fsm_stateC";
      default : fsm_stateNext_string = "??????????";
    endcase
  end
  `endif

  assign fsm_wantExit = 1'b0;
  always @ (*) begin
    fsm_counter1_willIncrement = 1'b0;
    case(fsm_stateReg)
      `fsm_enumDefinition_binary_sequential_fsm_stateA : begin
      end
      `fsm_enumDefinition_binary_sequential_fsm_stateB : begin
        fsm_counter1_willIncrement = 1'b1;
      end
      `fsm_enumDefinition_binary_sequential_fsm_stateC : begin
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    fsm_counter1_willClear = 1'b0;
    if(((! (fsm_stateReg == `fsm_enumDefinition_binary_sequential_fsm_stateB)) && (fsm_stateNext == `fsm_enumDefinition_binary_sequential_fsm_stateB)))begin
      fsm_counter1_willClear = 1'b1;
    end
  end

  assign fsm_counter1_willOverflowIfInc = (fsm_counter1_value == (24'b101111101011110000100000));
  assign fsm_counter1_willOverflow = (fsm_counter1_willOverflowIfInc && fsm_counter1_willIncrement);
  always @ (*) begin
    if(fsm_counter1_willOverflow)begin
      fsm_counter1_valueNext = (24'b000000000000000000000000);
    end else begin
      fsm_counter1_valueNext = (fsm_counter1_value + _zz_2_);
    end
    if(fsm_counter1_willClear)begin
      fsm_counter1_valueNext = (24'b000000000000000000000000);
    end
  end

  always @ (*) begin
    fsm_counter2_willIncrement = 1'b0;
    case(fsm_stateReg)
      `fsm_enumDefinition_binary_sequential_fsm_stateA : begin
      end
      `fsm_enumDefinition_binary_sequential_fsm_stateB : begin
      end
      `fsm_enumDefinition_binary_sequential_fsm_stateC : begin
        fsm_counter2_willIncrement = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    fsm_counter2_willClear = 1'b0;
    if(((! (fsm_stateReg == `fsm_enumDefinition_binary_sequential_fsm_stateC)) && (fsm_stateNext == `fsm_enumDefinition_binary_sequential_fsm_stateC)))begin
      fsm_counter2_willClear = 1'b1;
    end
  end

  assign fsm_counter2_willOverflowIfInc = (fsm_counter2_value == (24'b101111101011110000100000));
  assign fsm_counter2_willOverflow = (fsm_counter2_willOverflowIfInc && fsm_counter2_willIncrement);
  always @ (*) begin
    if(fsm_counter2_willOverflow)begin
      fsm_counter2_valueNext = (24'b000000000000000000000000);
    end else begin
      fsm_counter2_valueNext = (fsm_counter2_value + _zz_4_);
    end
    if(fsm_counter2_willClear)begin
      fsm_counter2_valueNext = (24'b000000000000000000000000);
    end
  end

  always @ (*) begin
    io_led = 1'b0;
    case(fsm_stateReg)
      `fsm_enumDefinition_binary_sequential_fsm_stateA : begin
      end
      `fsm_enumDefinition_binary_sequential_fsm_stateB : begin
        io_led = 1'b1;
      end
      `fsm_enumDefinition_binary_sequential_fsm_stateC : begin
        io_led = 1'b0;
      end
      default : begin
      end
    endcase
  end

  always @ (*) begin
    fsm_stateNext = fsm_stateReg;
    case(fsm_stateReg)
      `fsm_enumDefinition_binary_sequential_fsm_stateA : begin
        fsm_stateNext = `fsm_enumDefinition_binary_sequential_fsm_stateB;
      end
      `fsm_enumDefinition_binary_sequential_fsm_stateB : begin
        if(fsm_counter1_willOverflow)begin
          fsm_stateNext = `fsm_enumDefinition_binary_sequential_fsm_stateC;
        end
      end
      `fsm_enumDefinition_binary_sequential_fsm_stateC : begin
        if(fsm_counter2_willOverflow)begin
          fsm_stateNext = `fsm_enumDefinition_binary_sequential_fsm_stateA;
        end
      end
      default : begin
        fsm_stateNext = `fsm_enumDefinition_binary_sequential_fsm_stateA;
      end
    endcase
  end

  always @ (posedge clk or posedge reset) begin
    if (reset) begin
      fsm_counter1_value <= (24'b000000000000000000000000);
      fsm_counter2_value <= (24'b000000000000000000000000);
      fsm_stateReg <= `fsm_enumDefinition_binary_sequential_boot;
    end else begin
      fsm_counter1_value <= fsm_counter1_valueNext;
      fsm_counter2_value <= fsm_counter2_valueNext;
      fsm_stateReg <= fsm_stateNext;
    end
  end

endmodule

