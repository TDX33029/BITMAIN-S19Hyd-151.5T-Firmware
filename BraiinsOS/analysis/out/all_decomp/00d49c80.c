// FUN_00d49c80 @ 00d49c80 size=40 calls_out=0 calls_in=1
// strings: 

int FUN_00d49c80(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0x9efdaf28 - param_2;
  uVar1 = uVar1 ^ (uVar1 >> 0x1a | uVar1 * 0x40);
  return param_1 + ((uVar1 ^ (uVar1 >> 0x1c | uVar1 << 4)) & 0xffff ^ 0x19b1);
}

