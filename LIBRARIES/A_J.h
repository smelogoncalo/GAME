unsigned char A[16][24] = { 
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,},
{0x0,0x0,0xff,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0xff,0x0,0x0,},
{0x0,0xff,0x45,0x45,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0x45,0x45,0xff,0x0,},
{0x0,0xff,0x45,0xc1,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0xc1,0x45,0xff,0x0,},
{0x0,0xff,0x45,0xc1,0x45,0x45,0xff,0xff,0xff,0xff,0x45,0x45,0xc1,0x45,0xff,0x0,},
{0x0,0xff,0x45,0xc1,0x45,0xff,0x0,0x0,0x0,0x0,0xff,0x45,0xc1,0x45,0xff,0x0,},
{0x0,0xff,0x45,0xc1,0x45,0xff,0x0,0x0,0x0,0x0,0xff,0x45,0xc1,0x45,0xff,0x0,},
{0x0,0xff,0x45,0xc1,0x45,0x45,0xff,0xff,0xff,0xff,0x45,0x45,0xc1,0x45,0xff,0x0,},
{0x0,0xff,0x45,0xc1,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0xc1,0x45,0xff,0x0,},
{0x0,0xff,0x45,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0x45,0xff,0x0,},
{0x0,0xff,0x45,0xc1,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0xc1,0x45,0xff,0x0,},
{0x0,0xff,0x45,0xc1,0x45,0x45,0xff,0xff,0xff,0xff,0x45,0x45,0xc1,0x45,0xff,0x0,},
{0x0,0xff,0x45,0xc1,0x45,0xff,0x0,0x0,0x0,0x0,0xff,0x45,0xc1,0x45,0xff,0x0,},
{0x0,0xff,0x45,0xc1,0x45,0xff,0x0,0x0,0x0,0x0,0xff,0x45,0xc1,0x45,0xff,0x0,},
{0x0,0xff,0x45,0xc1,0x45,0xff,0x0,0x0,0x0,0x0,0xff,0x45,0xc1,0x45,0xff,0x0,},
{0x0,0xff,0x45,0xc1,0x45,0xff,0x0,0x0,0x0,0x0,0xff,0x45,0xc1,0x45,0xff,0x0,},
{0x0,0xff,0x45,0xc1,0x45,0xff,0x0,0x0,0x0,0x0,0xff,0x45,0xc1,0x45,0xff,0x0,},
{0x0,0xff,0x45,0xc1,0x45,0xff,0x0,0x0,0x0,0x0,0xff,0x45,0xc1,0x45,0xff,0x0,},
{0x0,0xff,0x45,0xc1,0x45,0xff,0x0,0x0,0x0,0x0,0xff,0x45,0xc1,0x45,0xff,0x0,},
{0x0,0xff,0x45,0xc1,0x45,0xff,0x0,0x0,0x0,0x0,0xff,0x45,0xc1,0x45,0xff,0x0,},
{0x0,0xff,0x45,0x45,0x45,0xff,0x0,0x0,0x0,0x0,0xff,0x45,0x45,0x45,0xff,0x0,},
{0x0,0x0,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
};
unsigned char B[16][24] = { 
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0xff,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0x25,0x25,0xff,0xff,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0xff,0xff,0xff,0x25,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0xff,0xff,0xff,0x25,0x25,0x25,0xff,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0xff,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0xff,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0xff,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0xff,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0xff,0xff,0xff,0x25,0x25,0x25,0xff,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0xff,0xff,0xff,0x25,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0x25,0x25,0xff,0xff,0x0,0x0,},
{0x0,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0xff,0x0,0x0,0x0,},
{0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
};
unsigned char C[16][24] = { 
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0xff,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0xff,0x0,0x0,0x0,},
{0x0,0x0,0xff,0xff,0x25,0x25,0xc1,0xc1,0xc1,0xc1,0x25,0x25,0xff,0xff,0x0,0x0,},
{0x0,0xff,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0xff,0x0,},
{0x0,0xff,0x25,0x25,0x25,0x25,0xff,0xff,0xff,0xff,0x25,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0x25,0x25,0x25,0xff,0xff,0xff,0xff,0x25,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0xff,0x0,},
{0x0,0x0,0xff,0xff,0x25,0x25,0xc1,0xc1,0xc1,0xc1,0x25,0x25,0xff,0xff,0x0,0x0,},
{0x0,0x0,0x0,0xff,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0xff,0x0,0x0,0x0,},
{0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
};
unsigned char D[16][24] = { 
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0xff,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0x25,0x25,0xff,0xff,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0x25,0x25,0xc1,0x25,0x25,0xff,0xff,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0xff,0x25,0x25,0xc1,0x25,0x25,0xff,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0x0,0xff,0x25,0x25,0xc1,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0xff,0x25,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0xff,0x25,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0x0,0xff,0x25,0x25,0xc1,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0xff,0x25,0x25,0xc1,0x25,0x25,0xff,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0x25,0x25,0xc1,0x25,0x25,0xff,0xff,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0x25,0x25,0xff,0xff,0x0,0x0,0x0,},
{0x0,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0xff,0x0,0x0,0x0,0x0,},
{0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
};
unsigned char E[16][24] = { 
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,},
{0x0,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,},
{0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
};
unsigned char F[16][24] = { 
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,},
{0x0,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0x25,0xff,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
};
unsigned char G[16][24] = { 
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,},
{0x0,0x0,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0x25,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0xc1,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0xff,0x25,0x25,0x25,0x25,0x25,0xff,0x0,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0xff,0x25,0x25,0x25,0xc1,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0xff,0xff,0x25,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0xff,0xff,0xff,0x25,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0xc1,0x25,0x25,0x25,0x25,0x25,0x25,0xc1,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0x25,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0x25,0x25,0xff,0x0,},
{0x0,0x0,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,0x0,},
{0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
};
unsigned char H[16][24] = { 
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0x0,0x0,},
{0x0,0xff,0x25,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0xff,0xff,0xff,0x25,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0xff,0xff,0xff,0x25,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0x25,0x25,0xff,0x0,},
{0x0,0x0,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
};
unsigned char I[16][24] = { 
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,},
{0x0,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,},
{0x0,0x0,0xff,0xff,0xff,0xff,0x25,0x25,0x25,0x25,0xff,0xff,0xff,0xff,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0xff,0xff,0xff,0xff,0x25,0x25,0x25,0x25,0xff,0xff,0xff,0xff,0x0,0x0,},
{0x0,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,},
{0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
};
unsigned char J[16][24] = { 
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
{0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,},
{0x0,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x25,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0x0,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0x25,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0xff,0x0,0x0,0x0,0x0,0xff,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0xff,0xff,0xff,0xff,0x25,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0xc1,0x25,0xff,0x0,},
{0x0,0xff,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0xff,0x0,},
{0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,},
{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,},
};
