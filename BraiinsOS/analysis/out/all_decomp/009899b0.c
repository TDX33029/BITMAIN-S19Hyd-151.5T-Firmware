// FUN_009899b0 @ 009899b0 size=48 calls_out=0 calls_in=1
// strings: 

int FUN_009899b0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 ^ 0x28c41927) + 1;
  uVar1 = 0x162ced46 - (uVar1 ^ (uVar1 >> 0x1d | uVar1 * 8));
  return param_1 + (uVar1 & 0xffff ^ uVar1 >> 0x1e);
}

