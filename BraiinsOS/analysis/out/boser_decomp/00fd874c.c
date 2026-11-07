// FUN_00fd874c @ 00fd874c size=220 calls_out=5 calls_in=0
// strings: 

void FUN_00fd874c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x90) == '\0') {
    piVar2 = *(int **)(param_1 + 0x84);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_1 + 0x84));
    }
    piVar2 = *(int **)(param_1 + 0x88);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(*(undefined4 *)(param_1 + 0x88));
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
    FUN_014883e8(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x90) != '\x03') {
    return;
  }
  FUN_01139b38(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
  piVar2 = *(int **)(param_1 + 0x8c);
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011808f4(*(undefined4 *)(param_1 + 0x8c));
    return;
  }
  return;
}

