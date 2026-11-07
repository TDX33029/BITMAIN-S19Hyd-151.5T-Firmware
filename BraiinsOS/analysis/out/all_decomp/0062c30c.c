// FUN_0062c30c @ 0062c30c size=280 calls_out=2 calls_in=2
// strings: 

void FUN_0062c30c(int *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = param_1[2];
  if (iVar2 == 0) {
    bVar4 = false;
    if (param_3 != 0) goto LAB_0062c354;
LAB_0062c364:
    if (!bVar4) {
      uVar1 = *param_1 - iVar2;
      iVar3 = iVar2;
      goto joined_r0x0062c3c8;
    }
    if (*param_1 == iVar2) {
      FUN_015bf41c(param_1,iVar2,1,1,1);
      iVar2 = param_1[2];
    }
    iVar3 = iVar2 + 1;
    *(undefined1 *)(param_1[1] + iVar2) = 0x2f;
  }
  else {
    bVar4 = *(char *)(param_1[1] + iVar2 + -1) != '/';
    if (param_3 == 0) goto LAB_0062c364;
LAB_0062c354:
    iVar3 = 0;
    if (*param_2 != '/') goto LAB_0062c364;
  }
  param_1[2] = iVar3;
  uVar1 = *param_1 - iVar3;
joined_r0x0062c3c8:
  if (uVar1 < param_3) {
    FUN_015bf41c(param_1,iVar3,param_3,1,1);
    iVar3 = param_1[2];
  }
  FUN_016dd1aa(param_1[1] + iVar3,param_2,param_3);
  param_1[2] = iVar3 + param_3;
  return;
}

