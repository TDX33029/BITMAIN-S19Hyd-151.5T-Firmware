// FUN_00d49ba8 @ 00d49ba8 size=40 calls_out=0 calls_in=1
// strings: 

int FUN_00d49ba8(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = ~(param_2 * 0x3151033f);
  uVar1 = uVar1 ^ (uVar1 >> 0x1f | uVar1 << 1);
  return param_1 + ((uVar1 ^ (uVar1 >> 0x1f | uVar1 << 1)) + 0x3f75 & 0xffff);
}

