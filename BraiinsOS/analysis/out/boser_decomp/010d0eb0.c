// FUN_010d0eb0 @ 010d0eb0 size=152 calls_out=3 calls_in=0
// strings: 

void FUN_010d0eb0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x9c) == '\0') {
    piVar2 = *(int **)(param_1 + 0x98);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_1 + 0x98));
    }
    FUN_00e4d7f8(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x9c) != '\x03') {
    return;
  }
  FUN_01139b38(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  piVar2 = *(int **)(param_1 + 0x98);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011808f4(*(undefined4 *)(param_1 + 0x98));
    return;
  }
  return;
}

