// FUN_00a33748 @ 00a33748 size=32 calls_out=0 calls_in=3
// strings: 

int FUN_00a33748(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0x74cc9843 - (param_2 ^ param_2 >> 0x19);
  return param_1 + (uVar1 & 0xffff ^ uVar1 >> 0x10);
}

