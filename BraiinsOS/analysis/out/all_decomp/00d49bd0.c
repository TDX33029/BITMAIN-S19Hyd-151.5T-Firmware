// FUN_00d49bd0 @ 00d49bd0 size=32 calls_out=0 calls_in=1
// strings: 

int FUN_00d49bd0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = ~(param_2 ^ (param_2 >> 0x1d | param_2 << 3));
  uVar1 = uVar1 ^ (uVar1 >> 0x1f | uVar1 << 1);
  return param_1 + ((uVar1 ^ uVar1 >> 6) + 0x1dad & 0xffff);
}

