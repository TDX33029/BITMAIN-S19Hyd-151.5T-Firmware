// FUN_00e66aa8 @ 00e66aa8 size=280 calls_out=3 calls_in=2
// strings: 

void FUN_00e66aa8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_2 == -0x80000000) {
    iVar1 = param_1[2];
    if (*param_1 == iVar1) {
      FUN_00edff4c(param_1,iVar1,1,1,1);
      iVar1 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar1) = 0;
    param_1[2] = iVar1 + 1;
    return;
  }
  iVar1 = param_1[2];
  iVar2 = param_2[1];
  uVar3 = param_2[2];
  if (*param_1 == iVar1) {
    FUN_00edff4c(param_1,iVar1,1,1,1);
    iVar1 = param_1[2];
  }
  *(undefined1 *)(param_1[1] + iVar1) = 1;
  param_1[2] = iVar1 + 1;
  FUN_00f09308(param_1,iVar1,uVar3,0);
  iVar1 = param_1[2];
  if ((uint)(*param_1 - iVar1) < uVar3) {
    FUN_00edff4c(param_1,iVar1,uVar3,1,1);
    iVar1 = param_1[2];
  }
  FUN_016dd1aa(param_1[1] + iVar1,iVar2,uVar3);
  param_1[2] = iVar1 + uVar3;
  return;
}

