// FUN_01348450 @ 01348450 size=260 calls_out=1 calls_in=1
// strings: 

void FUN_01348450(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar4 = param_2[1];
  iVar3 = *param_2;
  do {
    iVar2 = iVar3;
    if (iVar4 == 0) {
      *param_1 = 0x80000001;
      return;
    }
    iVar1 = 0;
    do {
      if (*(char *)(iVar2 + iVar1) == '&') {
        iVar3 = iVar2 + iVar1 + 1;
        iVar4 = iVar4 - (iVar1 + 1);
        goto LAB_013484a4;
      }
      iVar1 = iVar1 + 1;
    } while (iVar4 != iVar1);
    iVar3 = 0;
    iVar1 = iVar4;
LAB_013484a4:
    if (iVar3 == 0) {
      iVar3 = 1;
      iVar4 = 0;
    }
    *param_2 = iVar3;
    param_2[1] = iVar4;
  } while (iVar1 == 0);
  iVar4 = 0;
  do {
    if (*(char *)(iVar2 + iVar4) == '=') {
      unaff_r6 = iVar1 - (iVar4 + 1);
      iVar3 = iVar2 + iVar4 + 1;
      goto LAB_013484fc;
    }
    iVar4 = iVar4 + 1;
  } while (iVar1 != iVar4);
  iVar3 = 0;
  iVar4 = iVar1;
LAB_013484fc:
  FUN_01348570(&local_38,iVar2,iVar4);
  if (iVar3 == 0) {
    iVar3 = 1;
    unaff_r6 = 0;
  }
  FUN_01348570(&local_28,iVar3,unaff_r6);
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = local_28;
  param_1[4] = uStack_24;
  param_1[5] = uStack_20;
  return;
}

