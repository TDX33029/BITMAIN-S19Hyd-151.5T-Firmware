// FUN_00a52c9c @ 00a52c9c size=136 calls_out=2 calls_in=0
// strings: 

void FUN_00a52c9c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x5ec) == '\0') {
    piVar2 = *(int **)(param_1 + 0x5e8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (*(char *)(param_1 + 0x5ec) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x5e0) == '\x03') {
      FUN_00a55340(param_1 + 0x20);
    }
    piVar2 = *(int **)(param_1 + 0x5e8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x5e8));
    return;
  }
  return;
}

