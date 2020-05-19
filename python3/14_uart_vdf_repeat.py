import serial
import os
import math
from Crypto.Util import number

debug = False

class Uart:

    def __init__(self, width):
        self.ser = serial.Serial('/dev/ttyUSB0', 115200, timeout=600)
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

    def __init__(self, width, n = None):

        # The width is in Bytes (spinalHDL code takes Bits instead!)
        self.width = width

        if (n == None):
            self.g = int.from_bytes(os.urandom(int(self.width)), 'big')
            self.p = number.getPrime(int(self.width/2)*8)
            while (self.p > ((pow(2,int(self.width/2)*8))-1)):
                self.p = number.getPrime(int(self.width/2)*8)
            self.q = number.getPrime(int(self.width/2)*8)
            while (self.q > ((pow(2,int(self.width/2)*8))-1)):
                self.q = number.getPrime(int(self.width/2)*8)
            self.n = self.p * self.q
            self.phi = (self.p - 1) * (self.q - 1)
        else:
            self.n = int.from_bytes(n, 'big')

        # self.e = pow(2, self.t, self.phi)
        self.b = pow(2,16)
        self.k = int(math.log(self.n, self.b)) + 1
        self.mue = self.pre_calc_mue()

        print("SETUP: ------------------------------------------------------------")
        #print("G         : " + str(self.g.to_bytes(int(width), 'big').hex().upper()))
        #print("P Int     : " + str(self.p))
        #print("P         : " + str(self.p.to_bytes(int(width/2), 'big').hex().upper()))
        #print("Q Int     : " + str(self.q))
        #print("Q         : " + str(self.q.to_bytes(int(width/2), 'big').hex().upper()))
        print("N (modul) : " + str(self.n.to_bytes(int(width), 'big').hex().upper()))
        print("N Bits    : " + str(len(self.n.to_bytes(int(width), 'big'))*8))
        print("B Base    : " + str(self.b))
        print("K         : " + str(self.k))
        print("MUE       : " + str(self.mue.to_bytes(int(width+1), 'big').hex().upper()))
        print("ME Bits   : " + str(len(self.mue.to_bytes(int(width+1), 'big'))*8))
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
        if (debug == True):
            print("Software barret:")
            print("Z      : " + str(z.to_bytes(self.width*2, 'big').hex().upper()))

        temp_1 = (z >> (16*self.k))
        if (debug == True):
            print("TEMP_1 : " + str(temp_1.to_bytes(int(self.width), 'big').hex().upper()))

        temp_2 = (temp_1 * self.mue)
        if (debug == True):
            print("TEMP_2 : " + str(temp_2.to_bytes(int(self.width*2+1), 'big').hex().upper()))

        temp_3 = temp_2 >> (16*(self.k))
        if (debug == True):
            print("TEMP_3 : " + str(temp_3.to_bytes(int(self.width+1), 'big').hex().upper()))

        temp_4 = temp_3 * self.n
        if (debug == True):
            print("TEMP_4 : " + str(temp_4.to_bytes(int(self.width*2+1), 'big').hex().upper()))

        temp_5 = (z & mask)
        if (debug == True):
            print("TEMP_5 : " + str(temp_5.to_bytes(int(self.width*2), 'big').hex().upper()))

        temp_6 = (temp_4 & mask)
        if (debug == True):
            print("TEMP_6 : " + str(temp_6.to_bytes(int(self.width*2), 'big').hex().upper()))

        temp_7 = temp_5 - temp_6
        if (debug == True):
            print("TEMP_7 : " + str(temp_7.to_bytes(int(self.width+3), 'big', signed=True).hex().upper()))
            print("MASK   : " + str(mask.to_bytes(int(self.width*2), 'big').hex().upper()))

        result = temp_7
        # correction for over- or underflow
        if result < 0:
            result = result + pow(self.b, self.k + 1)
            if (debug == True):
                print("CORRECTION OF UNDERFLOW")
        while (result >= self.n):
            result = result - self.n
            if (debug == True):
                print("CORRECTION OF OVERFLOW")

        if (debug == True):
            print("RESULT : " + str(result.to_bytes(int(self.width), 'big').hex().upper()))
        return result


WIDTH = 8
uart = Uart(WIDTH)

correct_count = 0

for i in range(100):

    barret = Barret(int(WIDTH))
    n = barret.n.to_bytes(int(WIDTH), 'big')

    # a = bytearray.fromhex('00000000') + os.urandom(int(WIDTH/4))
    # b = bytearray.fromhex('00000000') + os.urandom(int(WIDTH/4))

    a = os.urandom(int(WIDTH))
    a_int = (int.from_bytes(a, 'big')) % barret.n
    a = a_int.to_bytes(int(WIDTH), 'big')

    mue = barret.mue.to_bytes(int(WIDTH+1), 'big')
    k = barret.k.to_bytes(1, 'big')

    t_int = 1000

    t = t_int.to_bytes(4, 'big')

    print("-------------------------------------------------")
    print("-------------------------------------------------")
    print("Input")
    print("a   : " + str(a.hex().upper()))
    print("n   : " + str(n.hex().upper()))
    print("mue : " + str(mue.hex().upper()))
    print("k   : " + str(k.hex().upper()))
    print("t   : " + str(t.hex().upper()))
    print("-------------------------------------------------")

    uart.to_fpga(a)
    uart.to_fpga(n)
    uart.to_fpga(mue)
    uart.to_fpga(k)
    uart.to_fpga(t)

    result = uart.from_fpga()

    print("-------------------------------------------------")
    print("Calc Nr. " + str(i))
    print("FPGA RESULT   : " + result.hex().upper())

    barret_input = a
    modulo_input = a

    for _ in range(t_int+1):
        z = (int.from_bytes(barret_input, 'big')*int.from_bytes(barret_input, 'big'))
        barret_result = barret.only_barret_2(z).to_bytes(int(WIDTH), 'big')
        barret_input = barret_result

    print("Python barret : " + str(barret_result.hex().upper()))

    modulo_input = int.from_bytes(a, 'big')
    modulo_n = int.from_bytes(n, 'big')

    for i in range(t_int+1):
        z = (modulo_input * modulo_input) % modulo_n
        '''
        if (debug == True):
            print("Nr. " + str(i) + " result: " + str(mod_result.hex().upper()))
        '''
        modulo_input = z

    mod_result = z.to_bytes(int(WIDTH), 'big')

    print("Python modulo : " + str(mod_result.hex().upper()))

    if (result == mod_result):
        correct_count += 1
    else:
        print("Calculation failed")
        break;

print("Correct calculations: " + str(correct_count))
