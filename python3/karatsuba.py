import os

def mult(a, b):
    l = len(a)
    print("length " + str(l))
    print("a      " + a.hex())
    print("b      " + b.hex())
    # recursion end at 16 bit (2 bytes)
    if (l == 2):
        result = (int.from_bytes(a, byteorder = 'big')*int.from_bytes(b, byteorder = 'big')).to_bytes(4, byteorder = 'big')
        print("result " + result.hex() + " length " + str(len(result)))
        print("end of recursion")
        return result

    ah = a[0:int(l/2)]
    al = a[int(l/2): l]
    bh = b[0:int(l/2)]
    bl = b[int(l/2): l]
    print("ah     " + ah.hex())
    print("al     " + al.hex())
    print("bh     " + bh.hex())
    print("bl     " + bl.hex())

    ahl_int = (int.from_bytes(al, byteorder = 'big') - int.from_bytes(ah, byteorder = 'big'))
    ahl = abs(ahl_int).to_bytes(int(l/2), byteorder = 'big')
    bhl_int = (int.from_bytes(bh, byteorder = 'big') - int.from_bytes(bl, byteorder = 'big'))
    bhl = abs(bhl_int).to_bytes(int(l/2), byteorder = 'big')
    print("ahl_int " + str(ahl_int))
    print("bhl_int " + str(bhl_int))
    print("ahl    " + ahl.hex())
    print("bhl    " + bhl.hex())
    p1 = mult(ah, bh)
    p2 = mult(al, bl)
    p3 = mult(ahl, bhl)
    if ((ahl_int < 0) ^ (bhl_int < 0)):
        p3_int = -(int.from_bytes(p3, byteorder = 'big'))
    else:
        p3_int = int.from_bytes(p3, byteorder = 'big')

    print("p1     " + p1.hex() + " length " + str(len(p1)))
    print("p2     " + p2.hex() + " length " + str(len(p2)))
    print("p3     " + p3.hex() + " length " + str(len(p3)))
    print("p3_int " + str(p3_int))

    print("length " + str(l))

    result_m = (p3_int + int.from_bytes(p1, byteorder = 'big')
                +int.from_bytes(p2, byteorder = 'big')).to_bytes(l+1, byteorder = 'big')
    print("result_m " + result_m.hex() +  " length " + str(len(result_m)))

    result_h_int = int.from_bytes(p1, 'big') << (l*8)
    result_m_int = int.from_bytes(result_m, 'big') << (int(l/2)*8)
    result_l_int = int.from_bytes(p2, 'big')

    print("result_h_int " + result_h_int.to_bytes(l*2, byteorder = 'big').hex())
    print("result_m_int " + result_m_int.to_bytes(l*2, byteorder = 'big').hex())
    print("result_l_int " + result_l_int.to_bytes(l*2, byteorder = 'big').hex())

    result = (result_h_int + result_m_int + result_l_int).to_bytes((l*2), 'big')
    print("result " + result.hex() + " length " + str(len(result)))

    return result

counter = 0
for i in range(1):
    a = bytearray([0x78, 0x2D, 0x93, 0x92])
    b = bytearray([0x15, 0x63, 0xBA, 0x3F])

    """
    a = bytearray([0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF])
    b = bytearray([0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF])

    a = os.urandom(128)
    b = os.urandom(128)

    a = bytearray([0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                   0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                   0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                   0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                   0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                   0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                   0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                   0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF])
    b = bytearray([0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                   0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                   0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                   0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                   0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                   0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                   0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
                   0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF])
    """
    result = int.from_bytes(mult(a,b), byteorder = 'big')
    print(result)

    check_result = int.from_bytes(a, 'big')*int.from_bytes(b, 'big')
    print(check_result)

    if (result == check_result):
        counter += 1
    else:
        print("Calculation FAILED")
        break;

print("Correct calcs: " + str(counter))
