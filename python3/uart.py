import serial

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


uart = Uart(16)
a = bytes.fromhex('0000000000000001')
b = bytes.fromhex('0000000000000001')
#a = bytes.fromhex('FFFFFFFFFFFFFFFF')
#b = bytes.fromhex('FFFFFFFFFFFFFFFF')
#a = bytes.fromhex('1000000000000001100000000000000110000000000000011000000000000001')
#b = bytes.fromhex('1000000000000001100000000000000110000000000000011000000000000001')
uart.to_fpga(a,b)
result = uart.from_fpga()
print(result.hex().upper())
