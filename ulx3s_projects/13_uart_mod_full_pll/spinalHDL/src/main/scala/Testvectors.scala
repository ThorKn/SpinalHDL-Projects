class Vectors {

    /***
    ---------------------------------------------------------------------------
    WIDTH 64 TESTVECTORS
    ---------------------------------------------------------------------------
    ***/

    var test_vector_1 = Array(0x04,
                          0x01, 0xD4, 0x32, 0x01, 0x4F, 0x29, 0xEA, 0x7F, 0x6C,
                          0x8B, 0xF9, 0xCB, 0xC2, 0x28, 0x15, 0x80, 0x99,
                          0xC9, 0xC4, 0x67, 0xFE, 0x90, 0x9F, 0x94, 0xDA,
                          0xD4, 0xEC, 0x7C, 0xF8, 0x9B, 0x5D, 0x3D, 0x58)

    var test_vector_2 = Array(0x04,
                          0x01, 0xA4, 0x01, 0x95, 0xF9, 0xDA, 0x73, 0x50, 0x0F,
                          0x9C, 0x09, 0x29, 0xC8, 0xA9, 0xF4, 0xEA, 0x55,
                          0xF0, 0x9F, 0xAF, 0xB3, 0xF7, 0x1A, 0x65, 0x6B,
                          0xA5, 0x40, 0x0E, 0x14, 0xAA, 0x94, 0xF6, 0x36)

    /***
    -------------------------------------------------
    Software barret:
    Z      : 9B53216713AD69F55C0428612CE23692
    TEMP_1 : 9B53216713AD69F5
    TEMP_2 : 00FED5591F3886D2964CAB569E9354C55B
    TEMP_3 : 00FED5591F3886D296
    TEMP_4 : 009B53216713AD69F4BEB48DBEBE3907CE
    TEMP_5 : 00000000000069F55C0428612CE23692
    TEMP_6 : 00000000000069F4BEB48DBEBE3907CE
    TEMP_7 : 009D4F9AA26EA92EC4
    MASK   : 000000000000FFFFFFFFFFFFFFFFFFFF
    CORRECTION OF OVERFLOW
    RESULT : 014670D9C4B4446F
    -------------------------------------------------
    ***/

    var test_vector_3 = Array(0x04,
                          0x02, 0x2B, 0x2F, 0x5D, 0x5C, 0xBC, 0xE2, 0xC0, 0x9C,
                          0x76, 0x0B, 0x24, 0xDB, 0x4B, 0x4C, 0xCF, 0x93,
                          0x09, 0x60, 0x1C, 0x11, 0x92, 0x87, 0x18, 0x7F,
                          0x20, 0x1A, 0xBB, 0x29, 0xA0, 0x34, 0x94, 0x65)

    /***
    Calc Nr. 0
    Input
    a   : 201ABB29A0349465
    b   : 09601C119287187F
    n   : 760B24DB4B4CCF93
    mue : 022B2F5D5CBCE2C09C
    k   : 04
    -------------------------------------------------
    Software barret:
    Z      : 012CFE1FC6DD182175B91FBC4342161B
    TEMP_1 : 012CFE1FC6DD1821
    TEMP_2 : 00028CC29F5151C9CAE662464689F5741C
    TEMP_3 : 00028CC29F5151C9CA
    TEMP_4 : 00012CFE1FC6DD18209557B670EA1934FE
    TEMP_5 : 000000000000182175B91FBC4342161B
    TEMP_6 : 00000000000018209557B670EA1934FE
    TEMP_7 : 00E061694B5928E11D
    MASK   : 000000000000FFFFFFFFFFFFFFFFFFFF
    CORRECTION OF OVERFLOW
    RESULT : 6A5644700DDC118A
    -------------------------------------------------
    ***/

    var test_vector_4 = Array(0x04,
                          0x02, 0x44, 0xD1, 0xC0, 0x60, 0x27, 0xAC, 0x5C, 0x30,
                          0x70, 0xD5, 0x6D, 0xE3, 0x3C, 0xB5, 0x8C, 0x09,
                          0x22, 0x80, 0x7B, 0xC7, 0x73, 0xAD, 0x62, 0x20,
                          0x22, 0x80, 0x7B, 0xC7, 0x73, 0xAD, 0x62, 0x20)

    /***
    Calc Nr. 0
    Input
    a   : 22807BC773AD6220
    n   : 70D56DE33CB58C09
    mue : 0244D1C06027AC5C30
    k   : 04
    -------------------------------------------------
    Software barret:
    Z      : 04A6615CFE070000481E895684DC8400
    TEMP_1 : 04A6615CFE070000
    TEMP_2 : 000A8CC3EAB495FB66C1FD6A6E25500000
    TEMP_3 : 000A8CC3EAB495FB66
    TEMP_4 : 0004A6615CFE06FFFFAA426C6B05DF9E96
    TEMP_5 : 0000000000000000481E895684DC8400
    TEMP_6 : 000000000000FFFFAA426C6B05DF9E96
    TEMP_7 : FF00009DDC1CEB7EFCE56A
    MASK   : 000000000000FFFFFFFFFFFFFFFFFFFF
    CORRECTION OF UNDERFLOW
    CORRECTION OF OVERFLOW
    RESULT : 2D06AF0842475961
    Nr. 0 result: 2D06AF0842475961
    -------------------------------------------------
    ***/


    /***
    ---------------------------------------------------------------------------
    WIDTH 128 TESTVECTORS
    ---------------------------------------------------------------------------
    ***/

    var test_vector_5 = Array(0x08,
                              0x01, 0x82, 0xA7, 0x1C, 0xF6, 0xFB, 0x5E, 0xC1, 0x6B, 0xC2, 0x19, 0x30, 0xAD, 0x5D, 0xA0, 0x6C, 0x95,
                              0xA9, 0x7E, 0xE8, 0xCF, 0x66, 0xB4, 0x04, 0xB6, 0xD6, 0x6A, 0xAF, 0xFE, 0xE8, 0x51, 0xC8, 0x61,
                              0x52, 0x09, 0x0A, 0x5B, 0xE2, 0x43, 0x62, 0xF3, 0xE0, 0xB2, 0x75, 0x38, 0xBE, 0x56, 0xA4, 0xE6,
                              0x34, 0x0B, 0x7A, 0x96, 0xA1, 0x81, 0x5D, 0x4E, 0x18, 0xA6, 0x68, 0x0D, 0xBB, 0x35, 0x8C, 0xAF)

    /***
    Calc Nr. 11
    Input
    a   : 340B7A96A1815D4E18A6680DBB358CAF
    b   : 52090A5BE24362F3E0B27538BE56A4E6
    n   : A97EE8CF66B404B6D66AAFFEE851C861
    mue : 0182A71CF6FB5EC16BC21930AD5DA06C95
    k   : 08
    -------------------------------------------------
    Software barret:
    Z      : 10AD83C6AFE568A1CBC7360454AA5CD5D976E4B99B543D184469ABF3A506813A
    TEMP_1 : 10AD83C6AFE568A1CBC7360454AA5CD5
    TEMP_2 : 00193083C59D5B4F195BA1109F2A90293B4FF02C11B38DF5159E88BE618C71E3F9
    TEMP_3 : 00193083C59D5B4F195BA1109F2A90293B
    TEMP_4 : 0010AD83C6AFE568A1CBC7360454AA5CD4CAD5BA16EDBA6757399900144480B75B
    TEMP_5 : 00000000000000000000000000005CD5D976E4B99B543D184469ABF3A506813A
    TEMP_6 : 00000000000000000000000000005CD4CAD5BA16EDBA6757399900144480B75B
    TEMP_7 : 010EA12AA2AD99D5C10AD0ABDF6085C9DF
    MASK   : 0000000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
    CORRECTION OF OVERFLOW
    RESULT : 652241D346E5D10A3465FBE07834017E
    ***/


}
