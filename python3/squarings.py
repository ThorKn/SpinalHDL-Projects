import math
import os
import time
from Crypto.Util import number

class VDF:

    def __init__(self, t):
        self.g = int.from_bytes(os.urandom(32), 'big')
        self.p = number.getPrime(128)
        self.q = number.getPrime(128)
        self.t = t
        self.n = self.p * self.q
        self.phi = (self.p - 1) * (self.q - 1)
        self.e = pow(2, self.t, self.phi)
        self.b = pow(2,16)
        self.k = int(math.log(self.n, self.b)) + 1
        self.mue = self.pre_calc_mue()

        print("SETUP: ------------------------------------------------------------")
        print("G         : " + str(self.g.to_bytes(32, 'big').hex().upper()))
        print("N (modul) : " + str(self.n.to_bytes(32, 'big').hex().upper()))
        print("N Bits    : " + str(len(self.n.to_bytes(32, 'big'))*8))
        print("B Base    : " + str(self.b))
        print("K         : " + str(self.k))
        print("MUE       : " + str(self.mue.to_bytes(33, 'big').hex().upper()))
        print("ME Bits   : " + str(len(self.mue.to_bytes(33, 'big'))*8))
        print("SETUP END: --------------------------------------------------------")

    def repeated_squarings(self):
        result = self.g
        for _ in range(self.t):
            result = pow(result, 2, self.n)
        return result

    def repeated_squarings_barret(self):
        result = self.g
        for _ in range(self.t):
            result = self.calc_barret_modulus(pow(result, 2))
        return result

    def repeated_squarings_barret_2(self):
        result = self.g
        mask = pow(self.b, self.k + 1) - 1
        for _ in range(self.t):
            result = self.calc_barret_modulus_2(pow(result, 2), mask)
        return result

    def trapdoor_calc(self):
        result = pow(self.g, self.e, self.n)
        return result

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
        # calculation
        print("Z      : " + str(z.to_bytes(64, 'big').hex().upper()))

        temp_1 = (z >> (16*self.k - 1))
        print("TEMP_1 : " + str(temp_1.to_bytes(33, 'big').hex().upper()))

        temp_2 = (temp_1 * self.mue)
        print("TEMP_2 : " + str(temp_2.to_bytes(66, 'big').hex().upper()))

        temp_3 = temp_2 >> (16*self.k + 1)
        print("TEMP_3 : " + str(temp_3.to_bytes(33, 'big').hex().upper()))

        result = (z & mask) - ((temp_3 * self.n) & mask)
        print("RESULT : " + str(result.to_bytes(33, 'big').hex().upper()))

        # correction for over- or underflow
        if result < 0:
            result = result + pow(self.b, self.k + 1)
        while (result >= self.n):
            result = result - self.n
        return result

vdf = VDF(1)
print("--------------------------------------------")
print("repeated squarings:")
print("--------------------------------------------")
start = time.time()
print(vdf.repeated_squarings())
end = time.time()
print(end-start)

#print("repeated squarings barret:")
#start = time.time()
#print(vdf.repeated_squarings_barret())
#end = time.time()
#print(end-start)

print("--------------------------------------------")
print("repeated squarings barret 2:")
print("--------------------------------------------")
start = time.time()
print(vdf.repeated_squarings_barret_2())
end = time.time()
print(end-start)

print("--------------------------------------------")
print("exp with group order modulus:")
print("--------------------------------------------")
start = time.time()
print(vdf.trapdoor_calc())
end = time.time()
print(end-start)
