// Generator : SpinalHDL v1.3.8    git head : 57d97088b91271a094cebad32ed86479199955df
// Date      : 26/04/2020, 22:20:05
// Component : ClkDiv


module ClkDiv (
      output reg  io_clk_out,
      input   clk,
      input   reset);
  wire [0:0] _zz_1_;
  wire [2:0] _zz_2_;
  reg  counter_willIncrement;
  wire  counter_willClear;
  reg [2:0] counter_valueNext;
  reg [2:0] counter_value;
  wire  counter_willOverflowIfInc;
  wire  counter_willOverflow;
  function  zz_counter_willIncrement(input dummy);
    begin
      zz_counter_willIncrement = 1'b0;
      zz_counter_willIncrement = 1'b1;
    end
  endfunction
  wire  _zz_3_;
  assign _zz_1_ = counter_willIncrement;
  assign _zz_2_ = {2'd0, _zz_1_};
  always @ (*) begin
    io_clk_out = 1'b0;
    if(counter_willOverflow)begin
      io_clk_out = 1'b1;
    end
  end

  assign _zz_3_ = zz_counter_willIncrement(1'b0);
  always @ (*) counter_willIncrement = _zz_3_;
  assign counter_willClear = 1'b0;
  assign counter_willOverflowIfInc = (counter_value == (3'b101));
  assign counter_willOverflow = (counter_willOverflowIfInc && counter_willIncrement);
  always @ (*) begin
    if(counter_willOverflow)begin
      counter_valueNext = (3'b001);
    end else begin
      counter_valueNext = (counter_value + _zz_2_);
    end
    if(counter_willClear)begin
      counter_valueNext = (3'b001);
    end
  end

  always @ (posedge clk or posedge reset) begin
    if (reset) begin
      counter_value <= (3'b001);
    end else begin
      counter_value <= counter_valueNext;
    end
  end

endmodule

