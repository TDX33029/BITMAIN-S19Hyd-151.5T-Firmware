// FUN_01b7d784 @ 01b7d784 size=64 calls_out=0 calls_in=1
// strings: 

uint FUN_01b7d784(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0x20U - param_2 & 0x1f;
  return param_1 >> uVar1 | param_1 << 0x20 - uVar1;
}

