// FUN_0096e004 @ 0096e004 size=424 calls_out=5 calls_in=3
// strings: 

void FUN_0096e004(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    iVar5 = param_1[4];
    DataMemoryBarrier(0xb);
    piVar3 = (int *)(iVar5 + 0x44);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    DataMemoryBarrier(0xb);
    if (iVar2 != 1) goto LAB_0096e0f8;
    pcVar4 = (char *)(iVar5 + 0x10);
    if (*pcVar4 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar4);
      if (!bVar1) goto LAB_0096e0d4;
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0096e0d4:
      FUN_01280da8(pcVar4);
    }
    FUN_0128236c(pcVar4);
    *(undefined1 *)(iVar5 + 0x2c) = 1;
    FUN_0072a978(iVar5 + 8,pcVar4);
LAB_0096e0f8:
    piVar3 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078205c(param_1[4]);
      return;
    }
    return;
  }
  if (*(char *)((int)param_1 + 0x15) != '\x03') {
    return;
  }
  if (*param_1 != 0) {
    FUN_00999924(*param_1,param_1[1],1);
  }
  iVar5 = param_1[2];
  DataMemoryBarrier(0xb);
  piVar3 = (int *)(iVar5 + 0x44);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 != 1) goto LAB_0096e160;
  pcVar4 = (char *)(iVar5 + 0x10);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (!bVar1) goto LAB_0096e13c;
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0096e13c:
    FUN_01280da8(pcVar4);
  }
  FUN_0128236c(pcVar4);
  *(undefined1 *)(iVar5 + 0x2c) = 1;
  FUN_0072a978(iVar5 + 8,pcVar4);
LAB_0096e160:
  piVar3 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(param_1[2]);
  }
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}

