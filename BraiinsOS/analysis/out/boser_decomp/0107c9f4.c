// FUN_0107c9f4 @ 0107c9f4 size=152 calls_out=3 calls_in=0
// strings: 

void FUN_0107c9f4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x74) == '\0') {
    piVar2 = *(int **)(param_1 + 0x70);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01180ed4(*(undefined4 *)(param_1 + 0x70));
    }
    FUN_005f225c(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x74) != '\x03') {
    return;
  }
  FUN_01139b38(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
  piVar2 = *(int **)(param_1 + 0x70);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01180ed4(*(undefined4 *)(param_1 + 0x70));
    return;
  }
  return;
}

