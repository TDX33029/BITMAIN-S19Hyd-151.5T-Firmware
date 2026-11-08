// FUN_0078e294 @ 0078e294 size=324 calls_out=5 calls_in=1
// strings: 

void FUN_0078e294(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int unaff_r6;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar5 = *(int *)(param_1 + 0x14);
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar5 != 0) {
    iVar3 = 0;
    do {
      iVar5 = iVar5 + -1;
      bVar7 = *(int *)(iVar6 - iVar3) != 0;
      iVar1 = 0;
      if (bVar7) {
        unaff_r6 = iVar6 - iVar3;
        iVar1 = *(int *)(unaff_r6 + 4);
      }
      if (bVar7 && iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(unaff_r6 + 8));
      }
      iVar3 = iVar3 + -0xc;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
  iVar5 = *(int *)(param_1 + 0x20);
  if (iVar5 == 0) {
    return;
  }
  piVar2 = (int *)(iVar5 + 0x44);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar2;
    bVar7 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar7);
  *piVar2 = iVar6 + -1;
  DataMemoryBarrier(0xb);
  if (iVar6 != 1) goto LAB_0078e390;
  pcVar4 = (char *)(iVar5 + 0x10);
  if (*pcVar4 == '\0') {
    bVar7 = (bool)hasExclusiveAccess(pcVar4);
    if (!bVar7) goto LAB_0078e36c;
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0078e36c:
    FUN_01280da8(pcVar4);
  }
  FUN_0128236c(pcVar4);
  *(undefined1 *)(iVar5 + 0x2c) = 1;
  FUN_0072a978(iVar5 + 8,pcVar4);
LAB_0078e390:
  piVar2 = *(int **)(param_1 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar7 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar7);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}

