// FUN_01bce988 @ 01bce988 size=40 calls_out=0 calls_in=2
// strings: 

uint FUN_01bce988(uint param_1)

{
  return param_1 >> 2 & 0x3f3f3f3f | (param_1 & 0x3030303) << 6;
}

