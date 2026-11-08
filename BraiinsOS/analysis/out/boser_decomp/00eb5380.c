// FUN_00eb5380 @ 00eb5380 size=200 calls_out=3 calls_in=0
// strings: 

void FUN_00eb5380(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x7c) == '\0') {
    piVar2 = *(int **)(param_1 + 0x70);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_1 + 0x70));
    }
    piVar2 = *(int **)(param_1 + 0x74);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(*(undefined4 *)(param_1 + 0x74));
      return;
    }
  }
  else if (*(char *)(param_1 + 0x7c) == '\x03') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    piVar2 = *(int **)(param_1 + 0x78);
    *(undefined2 *)(param_1 + 0x7d) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_1 + 0x78));
      return;
    }
    return;
  }
  return;
}

