import serial
import os

class Uart:

    def __init__(self, size):
        self.ser = serial.Serial('/dev/ttyUSB0', 115200)
        self.size = size

    def to_fpga(self, a, b):
        a_ba = bytearray(a)
        b_ba = bytearray(b)
        a_ba.reverse()
        b_ba.reverse()
        a = bytes(a_ba)
        b = bytes(b_ba)

        self.ser.write(a)
        self.ser.write(b)

    def from_fpga(self):
        result = self.ser.read(size=self.size)
        result_ba = bytearray(result)
        result_ba.reverse()
        result = bytes(result_ba)
        return result

    def close_ser(self):
        ser.close()


WIDTH = 32
uart = Uart(WIDTH)
counter = 0
for i in range(100):

    a = os.urandom(int(WIDTH/2))
    b = os.urandom(int(WIDTH/2))
    print("Input")
    print("a : " + str(a.hex().upper()))
    print("b : " + str(b.hex().upper()))
    #a = bytes.fromhex('0000000000000001')
    #b = bytes.fromhex('0000000000000001')

    uart.to_fpga(a,b)
    result = uart.from_fpga()
    print(result.hex().upper())

    result_int = int.from_bytes(result, 'big')
    check_int = int.from_bytes(a, 'big') * int.from_bytes(b, 'big')
    print(check_int.to_bytes(WIDTH, 'big').hex().upper())
    if (result_int == check_int):
        counter += 1
    else:
        print("FAILED")
        break;

print("SUCCESFULL MULTS " + str(counter))
