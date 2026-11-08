// FUN_01bce9b8 @ 01bce9b8 size=40 calls_out=0 calls_in=1
// strings: 

uint FUN_01bce9b8(uint param_1)

{
  return param_1 >> 4 & 0xf0f0f0f | (param_1 & 0xf0f0f0f) << 4;
}

