// FUN_00b1c9a8 @ 00b1c9a8 size=84 calls_out=3 calls_in=59
// strings: 

void FUN_00b1c9a8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[2];
  if (iVar1 == *param_1) {
    FUN_0124a134(param_1);
  }
  iVar2 = param_1[1];
  FUN_01bed4e2(iVar2 + iVar1 * 0x48,param_2,0x48);
  param_1[2] = iVar1 + 1;
  FUN_00b1c8e0(iVar2,iVar1 + 1,iVar1);
  return;
}

