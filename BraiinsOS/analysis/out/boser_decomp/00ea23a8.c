// FUN_00ea23a8 @ 00ea23a8 size=152 calls_out=3 calls_in=0
// strings: 

void FUN_00ea23a8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    piVar2 = *(int **)(param_1 + 0x50);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182228(*(undefined4 *)(param_1 + 0x50));
    }
    FUN_00f9604c(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x54) != '\x03') {
    return;
  }
  FUN_01139b38(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  piVar2 = *(int **)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182228(*(undefined4 *)(param_1 + 0x50));
    return;
  }
  return;
}

