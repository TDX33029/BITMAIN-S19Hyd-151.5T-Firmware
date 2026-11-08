// FUN_0109411c @ 0109411c size=152 calls_out=3 calls_in=0
// strings: 

void FUN_0109411c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xc4) == '\0') {
    piVar2 = *(int **)(param_1 + 0xc0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_1 + 0xc0));
    }
    FUN_00e28f9c(param_1);
    return;
  }
  if (*(char *)(param_1 + 0xc4) != '\x03') {
    return;
  }
  FUN_01139b38(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
  piVar2 = *(int **)(param_1 + 0xc0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011808f4(*(undefined4 *)(param_1 + 0xc0));
    return;
  }
  return;
}

