// FUN_0078dda4 @ 0078dda4 size=324 calls_out=7 calls_in=1
// strings: 

void FUN_0078dda4(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  FUN_007bb830(uVar5,*(undefined4 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_016d3fb4(uVar5);
  }
  iVar6 = *(int *)(param_1 + 0x14);
  DataMemoryBarrier(0xb);
  piVar3 = (int *)(iVar6 + 0x44);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 != 1) goto LAB_0078de48;
  pcVar4 = (char *)(iVar6 + 0x10);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (!bVar1) goto LAB_0078de24;
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0078de24:
    FUN_01280da8(pcVar4);
  }
  FUN_0128236c(pcVar4);
  *(undefined1 *)(iVar6 + 0x2c) = 1;
  FUN_0072a978(iVar6 + 8,pcVar4);
LAB_0078de48:
  piVar3 = *(int **)(param_1 + 0x14);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*(undefined4 *)(param_1 + 0x14));
  }
  piVar3 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaeec(*(undefined4 *)(param_1 + 0x18));
  }
  piVar3 = *(int **)(param_1 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaeec(*(undefined4 *)(param_1 + 0x1c));
    return;
  }
  return;
}

