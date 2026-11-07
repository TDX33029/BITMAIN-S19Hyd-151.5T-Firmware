// FUN_00a33514 @ 00a33514 size=32 calls_out=0 calls_in=3
// strings: 

int FUN_00a33514(int param_1,uint param_2)

{
  param_2 = param_2 ^ 0xad95af61;
  return param_1 + ((param_2 ^ (param_2 >> 0x1f | param_2 << 1)) + 0xa59d & 0xffff);
}

