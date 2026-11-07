// FUN_00d47cc0 @ 00d47cc0 size=28 calls_out=0 calls_in=1
// strings: 

int FUN_00d47cc0(int param_1,uint param_2)

{
  param_2 = param_2 ^ (param_2 >> 0x1f | param_2 << 1);
  param_2 = param_2 ^ (param_2 >> 0x1c | param_2 << 4);
  return param_1 + (0x550a - (param_2 ^ (param_2 >> 0x1b | param_2 << 5)) & 0xffff);
}

