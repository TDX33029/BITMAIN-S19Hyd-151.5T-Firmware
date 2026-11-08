// FUN_01263018 @ 01263018 size=232 calls_out=5 calls_in=0
// strings: 

void FUN_01263018(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) == 2) {
    piVar2 = *(int **)(param_1 + 0x40);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    iVar4 = 0x1c;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01001528(*(undefined4 *)(param_1 + 0x40));
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013c3e44(*(undefined4 *)(param_1 + 0x48));
    }
    FUN_0126318c(*(undefined4 *)(param_1 + 0x4c));
    iVar4 = 0x3c;
    if (*(int *)(param_1 + 0x18) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1c));
    }
  }
  if (*(int *)(param_1 + iVar4) != 0) {
    thunk_FUN_016d3fb4(((int *)(param_1 + iVar4))[1]);
  }
  piVar2 = *(int **)(param_1 + 0x54);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01001434(*(undefined4 *)(param_1 + 0x54));
    return;
  }
  return;
}

