// FUN_01105670 @ 01105670 size=200 calls_out=3 calls_in=0
// strings: 

void FUN_01105670(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x1e) == '\0') {
    piVar2 = *(int **)(param_1 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_1 + 0x14));
    }
    piVar2 = *(int **)(param_1 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(*(undefined4 *)(param_1 + 0x18));
      return;
    }
  }
  else if (*(char *)(param_1 + 0x1e) == '\x03') {
    FUN_01139b38(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    piVar2 = *(int **)(param_1 + 0x10);
    *(undefined2 *)(param_1 + 0x1c) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_1 + 0x10));
      return;
    }
    return;
  }
  return;
}

