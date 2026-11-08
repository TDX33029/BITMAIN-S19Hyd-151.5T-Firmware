// FUN_00baf4f8 @ 00baf4f8 size=312 calls_out=7 calls_in=0
// strings: 

void FUN_00baf4f8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
  }
  piVar2 = *(int **)(param_1 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaeec(*(undefined4 *)(param_1 + 0x48));
  }
  piVar2 = *(int **)(param_1 + 0x4c);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaeec(*(undefined4 *)(param_1 + 0x4c));
  }
  iVar4 = *(int *)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  piVar2 = (int *)(iVar4 + 0x44);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  DataMemoryBarrier(0xb);
  if (iVar3 != 1) goto LAB_00baf5ec;
  pcVar5 = (char *)(iVar4 + 0x10);
  if (*pcVar5 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar5);
    if (!bVar1) goto LAB_00baf5c8;
    *pcVar5 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00baf5c8:
    FUN_01280da8(pcVar5);
  }
  FUN_0128236c(pcVar5);
  *(undefined1 *)(iVar4 + 0x2c) = 1;
  FUN_0072a978(iVar4 + 8,pcVar5);
LAB_00baf5ec:
  piVar2 = *(int **)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*(undefined4 *)(param_1 + 0x50));
  }
  FUN_0078eea8(param_1 + 0x1c);
  return;
}

