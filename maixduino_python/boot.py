import lcd
import os
import utime
from board import board_info
from fpioa_manager import fm
from machine import UART

WIDTH = 8

# A class for handling the display and UART on the Maixduino
class Maixduino():
    def __init__(self):
        # Init LCD with start message
        lcd.init(color=(0,0,0))
        lcd.draw_string(0,0, "Square and modulo with HW-Accelerator", lcd.YELLOW, lcd.BLACK)

        # Register UART1 pins 10 + 11
        fm.register (board_info.PIN10, fm.fpioa.UART2_TX)
        fm.register (board_info.PIN11, fm.fpioa.UART2_RX)

        # Open UART1
        self.uart = UART (UART.UART2, 115200, 8, None, 1, timeout = 1000, read_buf_len = 4096)

    def text_to_display(self, x, y, text):
        lcd.draw_string(x, y, text, lcd.YELLOW, lcd.BLACK)

    # Write bytes to uart
    def write_to_uart(self, msg):
        for e in reversed(msg):
            self.uart.write(e.to_bytes(1, 'big'))

    # Read bytes from uart
    def read_from_uart(self):
        msg = self.uart.read(WIDTH)
        while (msg == None):
            msg = self.uart.read(WIDTH)
        return msg

# Setup of the parameters for the calculation
a = os.urandom(WIDTH)
a_int = int.from_bytes(a, 'big')
n = os.urandom(WIDTH)
n_int = int.from_bytes(n, 'big')
a_int = a_int % n_int
a = a_int.to_bytes(WIDTH, 'big')
b_int = pow(2,16)
k_int = 4
k = k_int.to_bytes(1, 'big')
t_int = 1000000
t = t_int.to_bytes(4, 'big')
mue_int = pow(b_int, 2*k_int) // n_int
mue = mue_int.to_bytes(WIDTH+1, 'big')

md = Maixduino()
utime.sleep(2)

# Write setup parameters to display
md.text_to_display(0, 20, "a: " + hex(a_int))
md.text_to_display(0, 40, "n: " + hex(n_int))
md.text_to_display(0, 60, "mue: " + hex(mue_int))
md.text_to_display(0, 80, "k: " + hex(k_int))
md.text_to_display(0, 100, "t: " + hex(t_int))

# Write setup parameters to UART
fpgastart = utime.ticks_us()
md.write_to_uart(a)
md.write_to_uart(n)
md.write_to_uart(mue)
md.write_to_uart(k)
md.write_to_uart(t)
md.text_to_display(250, 100, "Sent!")

# Read result from UART
result = md.read_from_uart()
fpgastop = utime.ticks_us()
result_int = int.from_bytes(result, 'little')

# Calc FPGA time
fpgatime = utime.ticks_diff(fpgastop, fpgastart)

# Display FPGA result
md.text_to_display(0, 140, "FPGA:  " + str(hex(result_int)))
md.text_to_display(0, 160, "FPGA Time:  " + str(fpgatime))

# Do the RISC-V MCU calc
b_int = a_int
riscstart = utime.ticks_us()
for _ in range(t_int+1):
    z_int = (b_int * b_int) % n_int
    b_int = z_int
riscstop = utime.ticks_us()

# Calc RISC-V time
risctime = utime.ticks_diff(riscstop, riscstart)

# Display RISC-V result
md.text_to_display(0,180, "RISCV: " + str(hex(z_int)))
md.text_to_display(0,200, "RISCV Time: " + str(risctime))

# Correct?
if (result_int == z_int):
    md.text_to_display(250,220, "Correct!")
else:
    md.text_to_display(250,220, "Failure!")
