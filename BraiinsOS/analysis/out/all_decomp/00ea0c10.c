// FUN_00ea0c10 @ 00ea0c10 size=32 calls_out=0 calls_in=0
// strings: 

int FUN_00ea0c10(int param_1,uint param_2)

{
  param_2 = param_2 ^ (param_2 >> 0x1c | param_2 << 4);
  param_2 = param_2 ^ (param_2 >> 0x1f | param_2 << 1);
  param_2 = param_2 ^ param_2 >> 0xf;
  return param_1 + ((param_2 ^ param_2 >> 1) + 0xad8e & 0xffff);
}

