// FUN_01421350 @ 01421350 size=136 calls_out=3 calls_in=10
// strings: 

void FUN_01421350(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0142980c(*(undefined4 *)(param_1 + 0x10));
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01420f44(*(undefined4 *)(param_1 + 0x10));
    }
  }
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

