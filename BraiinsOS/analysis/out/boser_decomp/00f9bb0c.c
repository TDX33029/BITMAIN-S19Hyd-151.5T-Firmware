// FUN_00f9bb0c @ 00f9bb0c size=152 calls_out=3 calls_in=0
// strings: 

void FUN_00f9bb0c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x8c) == '\0') {
    piVar2 = *(int **)(param_1 + 0x88);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011820d0(*(undefined4 *)(param_1 + 0x88));
    }
    FUN_00f98e70(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x8c) != '\x03') {
    return;
  }
  FUN_01139b38(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  piVar2 = *(int **)(param_1 + 0x88);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011820d0(*(undefined4 *)(param_1 + 0x88));
    return;
  }
  return;
}

