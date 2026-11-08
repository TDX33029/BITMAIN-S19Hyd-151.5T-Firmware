// FUN_01407120 @ 01407120 size=196 calls_out=4 calls_in=2
// strings: 

void FUN_01407120(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  
  pcVar4 = (char *)(param_2 + 4);
  if (*pcVar4 == '\0') {
    bVar6 = (bool)hasExclusiveAccess(pcVar4);
    if (bVar6) {
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01407150;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar4);
LAB_01407150:
  FUN_0165098c(pcVar4);
  iVar5 = *(int *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = 0;
  FUN_01650a90(pcVar4);
  if (*pcVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar6 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar6) {
        *pcVar4 = '\0';
        goto LAB_014071a0;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar4);
LAB_014071a0:
  if (iVar5 == 0) {
    return;
  }
  if ((*(int *)(iVar5 + 8) == 0) && (param_1[3] != iVar5)) {
    return;
  }
  iVar1 = *param_1;
  bVar6 = iVar1 == 1;
  if (bVar6) {
    iVar1 = param_1[1];
  }
  if (bVar6 && iVar1 == iVar5) {
    unaff_r5 = *(int *)(iVar1 + 4);
    unaff_r4 = 1;
  }
  iVar2 = *(int *)(iVar5 + 4);
  iVar3 = *(int *)(iVar5 + 8);
  if (bVar6 && iVar1 == iVar5) {
    *param_1 = unaff_r4;
    param_1[1] = unaff_r5;
  }
  if (iVar3 == 0) {
    iVar1 = 0;
    param_1[3] = iVar2;
  }
  else {
    *(int *)(iVar3 + 4) = iVar2;
    iVar1 = *(int *)(iVar5 + 8);
  }
  if (iVar2 == 0) {
    param_1[4] = iVar1;
  }
  else {
    *(int *)(iVar2 + 8) = iVar1;
  }
  iVar1 = param_1[2];
  *(undefined4 *)(iVar5 + 4) = 0;
  *(undefined4 *)(iVar5 + 8) = 0;
  param_1[2] = iVar1 + -1;
  FUN_013f6db0(iVar5);
  return;
}

