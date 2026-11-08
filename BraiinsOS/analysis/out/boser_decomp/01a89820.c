// FUN_01a89820 @ 01a89820 size=156 calls_out=3 calls_in=0
// strings: 

void FUN_01a89820(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x9e0) == '\0') {
    piVar2 = *(int **)(param_1 + 0x9b0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a75e6c(*(undefined4 *)(param_1 + 0x9b0));
    }
    FUN_01a8c248(param_1 + 0x9b4);
    return;
  }
  if (*(char *)(param_1 + 0x9e0) != '\x03') {
    return;
  }
  FUN_01a8c5ac(param_1);
  piVar2 = *(int **)(param_1 + 0x9b0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a75e6c(*(undefined4 *)(param_1 + 0x9b0));
    return;
  }
  return;
}

