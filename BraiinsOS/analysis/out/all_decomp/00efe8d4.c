// FUN_00efe8d4 @ 00efe8d4 size=264 calls_out=3 calls_in=4
// strings: 

void FUN_00efe8d4(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_28 [24];
  
  if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
    if (param_1 != 0 || (param_2 & 0x7fffffff) != 0x7ff00000) goto LAB_00efe950;
  }
  else if ((~param_2 & 0x7ff00000) != 0) {
LAB_00efe950:
    iVar1 = FUN_016d1b20(auStack_28);
    uVar2 = iVar1 - (int)auStack_28;
    iVar1 = param_3[2];
    if ((uint)(*param_3 - iVar1) < uVar2) {
      FUN_00edff4c(param_3,iVar1,uVar2,1,1);
      iVar1 = param_3[2];
    }
    FUN_016dd1aa(param_3[1] + iVar1,auStack_28,uVar2);
    param_3[2] = iVar1 + uVar2;
    return;
  }
  iVar1 = param_3[2];
  if ((uint)(*param_3 - iVar1) < 4) {
    FUN_00edff4c(param_3,iVar1,4,1,1);
    iVar1 = param_3[2];
  }
  *(undefined4 *)(param_3[1] + iVar1) = 0x6c6c756e;
  param_3[2] = iVar1 + 4;
  return;
}

