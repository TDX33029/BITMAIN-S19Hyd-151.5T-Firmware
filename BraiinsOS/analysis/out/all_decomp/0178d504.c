// FUN_0178d504 @ 0178d504 size=132 calls_out=1 calls_in=2
// strings: 

int FUN_0178d504(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0178d470(param_1,param_2);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xf7 | (param_2 >> 0x1c != 0) << 3;
  }
  return iVar1;
}

