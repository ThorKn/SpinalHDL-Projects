module Ulx3s (reset,
              clk25Mhz,
              led_out);

    // Input ports
    input reset;
    input clk25Mhz;

    // Output ports
    output led_out;

    // Clock generation
    wire boardClk;
    wire boardClkLocked;

    // Instantiate a PLL to make a 10Mhz clock
    pll pll (.clkin     (clk25Mhz),
                 .clkout0   (boardClk),
                 .locked    (boardClkLocked));

    // Instantiate the blinky module generated by Spinal
    Blinky blinky (.io_led             (led_out),
                   .clkIsLocked        (boardClkLocked),
                   .clk                (boardClk),
                   .reset              (reset));


endmodule
