// FUN_00a33670 @ 00a33670 size=40 calls_out=0 calls_in=1
// strings: 

int FUN_00a33670(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0x7f0c6618 - (param_2 ^ param_2 >> 0x10);
  return param_1 + (0x57d1 - (uVar1 ^ uVar1 >> 0x1c ^ 0xaa00) & 0xffff);
}

