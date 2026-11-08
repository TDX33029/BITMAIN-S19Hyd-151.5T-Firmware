// FUN_00d49c04 @ 00d49c04 size=28 calls_out=0 calls_in=1
// strings: 

int FUN_00d49c04(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0x4155ddd9 - (param_2 ^ param_2 >> 0xb);
  return param_1 + ((uVar1 ^ (uVar1 >> 0x1d | uVar1 * 8)) & 0xffff);
}

