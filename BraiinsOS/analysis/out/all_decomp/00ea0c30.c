// FUN_00ea0c30 @ 00ea0c30 size=32 calls_out=0 calls_in=0
// strings: 

int FUN_00ea0c30(int param_1,uint param_2)

{
  return param_1 + ((param_2 ^ (~param_2 >> 0x1b | ~param_2 << 5) ^ 0x2078) * 0x4aec & 0xffff);
}

