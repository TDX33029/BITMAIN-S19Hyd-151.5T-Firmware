// FUN_00f372a0 @ 00f372a0 size=44 calls_out=0 calls_in=0
// strings: 

int FUN_00f372a0(int param_1,uint param_2)

{
  uint uVar1;
  
  param_2 = param_2 ^ param_2 >> 0x1d;
  uVar1 = param_2 * -0x2cffa4c1;
  uVar1 = uVar1 ^ (uVar1 >> 0x1e | param_2 * 0x4c016cfc);
  return param_1 + ((uVar1 ^ (uVar1 >> 0x1b | uVar1 << 5)) & 0xffff ^ 0xe30d);
}

