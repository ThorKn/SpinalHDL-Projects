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
                          0x01, 0xB6, 0xD3, 0x63, 0x9B, 0xB5, 0x95, 0xD2, 0x92,
                          0x95, 0x58, 0x11, 0xB6, 0x11, 0x6F, 0x88, 0x75,
                          0xC7, 0x94, 0x3F, 0xA4, 0x3C, 0xF7, 0x31, 0x94,
                          0xFA, 0xA0, 0xBF, 0xE9, 0xD5, 0x53, 0x34, 0xB6)

    /***
    Input
    a   : FAA0BFE9D55334B6
    b   : C7943FA43CF73194
    n   : 955811B6116F8875
    mue : 01B6D3639BB595D292
    k   : 04
    -------------------------------------------------
    Software barret:
    Z      : C364186C11E82DFDB8C5973EC4CB4F38
    TEMP_1 : C364186C11E82DFD
    TEMP_2 : 014EEE994F955AB4A69191D8285164C44A
    TEMP_3 : 014EEE994F955AB4A6
    TEMP_4 : 00C364186C11E82DFC8276950ECC66BFDE
    TEMP_5 : 0000000000002DFDB8C5973EC4CB4F38
    TEMP_6 : 0000000000002DFC8276950ECC66BFDE
    TEMP_7 : 01364F022FF8648F5A
    MASK   : 000000000000FFFFFFFFFFFFFFFFFFFF
    CORRECTION OF OVERFLOW
    CORRECTION OF OVERFLOW
    RESULT : 0B9EDEC3D5857E70
    -------------------------------------------------
    ***/

    /***
    ---------------------------------------------------------------------------
    WIDTH 128 TESTVECTORS
    ---------------------------------------------------------------------------
    ***/

    var test_vector_4 = Array(0x08,
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
