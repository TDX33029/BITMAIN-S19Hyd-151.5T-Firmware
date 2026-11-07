// FUN_00a334b4 @ 00a334b4 size=28 calls_out=0 calls_in=3
// strings: 

int FUN_00a334b4(int param_1,uint param_2)

{
  param_2 = param_2 ^ (param_2 >> 0x1e | param_2 << 2);
  return param_1 + ((param_2 ^ (param_2 >> 0x1c | param_2 << 4)) * 0x2f20 + 0x14e0 & 0xffff);
}

