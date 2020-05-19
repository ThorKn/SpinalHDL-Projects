import serial
import os
import math
from Crypto.Util import number

class Uart:

    def __init__(self, width):
        self.ser = serial.Serial('/dev/ttyUSB0', 115200)
        self.width = width

    def to_fpga(self, a):
        a_ba = bytearray(a)
        a_ba.reverse()
        a = bytes(a_ba)
        self.ser.write(a)

    def from_fpga(self):
        result = self.ser.read(size=self.width)
        result_ba = bytearray(result)
        result_ba.reverse()
        result = bytes(result_ba)
        return result

    def close_ser(self):
        ser.close()

class Barret:

    def __init__(self, width):

        self.g = int.from_bytes(os.urandom(int(width/2)), 'big')
        self.p = number.getPrime(int(width/4)*8)
        while (self.p > ((pow(2,int(width/4)*8))-1)):
            self.p = number.getPrime(int(width/4)*8)
        self.q = number.getPrime(int(width/4)*8)
        while (self.q > ((pow(2,int(width/4)*8))-1)):
            self.q = number.getPrime(int(width/4)*8)

        self.n = self.p * self.q
        self.phi = (self.p - 1) * (self.q - 1)
        # self.e = pow(2, self.t, self.phi)
        self.b = pow(2,16)
        self.k = int(math.log(self.n, self.b)) + 1
        self.mue = self.pre_calc_mue()
        self.width = width

        print("SETUP: ------------------------------------------------------------")
        print("G         : " + str(self.g.to_bytes(int(width/2), 'big').hex().upper()))
        print("P Int     : " + str(self.p))
        print("P         : " + str(self.p.to_bytes(int(width/4), 'big').hex().upper()))
        print("Q Int     : " + str(self.q))
        print("Q         : " + str(self.q.to_bytes(int(width/4), 'big').hex().upper()))
        print("N (modul) : " + str(self.n.to_bytes(int(width/2), 'big').hex().upper()))
        print("N Bits    : " + str(len(self.n.to_bytes(int(width/2), 'big'))*8))
        print("B Base    : " + str(self.b))
        print("K         : " + str(self.k))
        print("MUE       : " + str(self.mue.to_bytes(int(width/2)+1, 'big').hex().upper()))
        print("ME Bits   : " + str(len(self.mue.to_bytes(int(width/2)+1, 'big'))*8))
        print("SETUP END: --------------------------------------------------------")

    def repeated_squarings(self):
        result = self.g
        result = pow(result, 2, self.n)
        return result

    def repeated_squarings_barret(self):
        result = self.g
        result = self.calc_barret_modulus(pow(result, 2))
        return result

    def repeated_squarings_barret_2(self):
        result = self.g
        mask = pow(self.b, self.k + 1) - 1
        result = self.calc_barret_modulus_2(pow(result, 2), mask)
        return result

    def only_barret_2(self, z):
        mask = pow(self.b, self.k + 1) - 1
        result = self.calc_barret_modulus_2(z, mask)
        return result

    '''
    def trapdoor_calc(self, g):
        result = pow(g, self.e, self.n)
        return result
    '''

    def pre_calc_mue(self):
        result = pow(self.b, 2*self.k) // self.n
        return result

    def calc_barret_modulus(self, z):
        temp_1 = ((z // pow(self.b, self.k - 1)) * self.mue) // pow(self.b, self.k + 1)
        result = (z % pow(self.b, self.k + 1)) - ((temp_1 * self.n) % pow(self.b, self.k + 1))
        if result < 0:
            result = result + pow(self.b, self.k + 1)
        while (result >= self.n):
            result = result - self.n
        return result

    def calc_barret_modulus_2(self, z, mask):
        print("Software barret:")

        print("Z      : " + str(z.to_bytes(self.width, 'big').hex().upper()))

        temp_1 = (z >> (16*self.k))
        print("TEMP_1 : " + str(temp_1.to_bytes(int(self.width/2), 'big').hex().upper()))

        temp_2 = (temp_1 * self.mue)
        print("TEMP_2 : " + str(temp_2.to_bytes(self.width+1, 'big').hex().upper()))

        temp_3 = temp_2 >> (16*(self.k))
        print("TEMP_3 : " + str(temp_3.to_bytes(int(self.width/2)+1, 'big').hex().upper()))

        temp_4 = temp_3 * self.n
        print("TEMP_4 : " + str(temp_4.to_bytes(int(self.width), 'big').hex().upper()))

        temp_5 = (z & mask)
        print("TEMP_5 : " + str(temp_5.to_bytes(int(self.width), 'big').hex().upper()))

        temp_6 = (temp_4 & mask)
        print("TEMP_6 : " + str(temp_6.to_bytes(int(self.width), 'big').hex().upper()))

        temp_7 = temp_5 - temp_6
        print("TEMP_7 : " + str(temp_7.to_bytes(int(self.width/2)+1, 'big', signed=True).hex().upper()))

        print("MASK   : " + str(mask.to_bytes(int(self.width), 'big').hex().upper()))

        result = temp_7
        # correction for over- or underflow
        if result < 0:
            result = result + pow(self.b, self.k + 1)
            print("CORRECTION OF UNDERFLOW")
        while (result >= self.n):
            result = result - self.n
            print("CORRECTION OF OVERFLOW")

        print("RESULT : " + str(result.to_bytes(int(self.width/2), 'big').hex().upper()))
        return result


WIDTH = 16
uart = Uart(WIDTH)

correct_count = 0

for i in range(20000):
    barret = Barret(int(WIDTH/2))

    n = barret.n.to_bytes(int(WIDTH/4), 'big')
    mue = barret.mue.to_bytes(int(WIDTH/4)+1, 'big')
    k = barret.k.to_bytes(1, 'big')

    a = bytearray.fromhex('00000000') + os.urandom(int(WIDTH/4))
    b = bytearray.fromhex('00000000') + os.urandom(int(WIDTH/4))

    # a = os.urandom(int(WIDTH/2))
    # b = os.urandom(int(WIDTH/2))

    print("-------------------------------------------------")
    print("-------------------------------------------------")
    print("Calc Nr. " + str(i))
    print("Input")
    print("a   : " + str(a.hex().upper()))
    print("b   : " + str(b.hex().upper()))
    print("n   : " + str(n.hex().upper()))
    print("mue : " + str(mue.hex().upper()))
    print("k   : " + str(k.hex().upper()))
    print("-------------------------------------------------")

    uart.to_fpga(b)
    uart.to_fpga(a)
    uart.to_fpga(n)
    uart.to_fpga(mue)
    uart.to_fpga(k)

    result = uart.from_fpga()

    z = (int.from_bytes(a, 'big')*int.from_bytes(b, 'big'))
    barret_result = barret.only_barret_2(z).to_bytes(int(WIDTH), 'big')

    mod_result = (z % barret.n).to_bytes(int(WIDTH), 'big')

    print("-------------------------------------------------")
    print("FPGA RESULT   : " + result.hex().upper())
    print("Python barret : " + str(barret_result.hex().upper()))
    print("Python modulo : " + str(mod_result.hex().upper()))

    if (result == barret_result == mod_result):
        correct_count += 1
    else:
        print("Calculation failed")
        break;

print("Correct calculations: " + str(correct_count))
