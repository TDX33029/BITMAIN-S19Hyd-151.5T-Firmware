// FUN_00a0a1bc @ 00a0a1bc size=424 calls_out=5 calls_in=2
// strings: 

void FUN_00a0a1bc(int *param_1)

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
    if (iVar2 != 1) goto LAB_00a0a2b0;
    pcVar4 = (char *)(iVar5 + 0x10);
    if (*pcVar4 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar4);
      if (!bVar1) goto LAB_00a0a28c;
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00a0a28c:
      FUN_01280da8(pcVar4);
    }
    FUN_0128236c(pcVar4);
    *(undefined1 *)(iVar5 + 0x2c) = 1;
    FUN_0072a978(iVar5 + 8,pcVar4);
LAB_00a0a2b0:
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
    FUN_00aa0a58(*param_1,param_1[1],1);
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
  if (iVar2 != 1) goto LAB_00a0a318;
  pcVar4 = (char *)(iVar5 + 0x10);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (!bVar1) goto LAB_00a0a2f4;
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00a0a2f4:
    FUN_01280da8(pcVar4);
  }
  FUN_0128236c(pcVar4);
  *(undefined1 *)(iVar5 + 0x2c) = 1;
  FUN_0072a978(iVar5 + 8,pcVar4);
LAB_00a0a318:
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

