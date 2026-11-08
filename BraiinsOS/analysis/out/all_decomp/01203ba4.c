// FUN_01203ba4 @ 01203ba4 size=232 calls_out=5 calls_in=1
// strings: 

void FUN_01203ba4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 == 2) {
    piVar2 = (int *)param_1[0xe];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    iVar4 = 0x14;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01001528(param_1[0xe]);
    }
  }
  else {
    piVar2 = (int *)param_1[0x10];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013c3e44(param_1[0x10]);
    }
    FUN_0119f3e0(param_1[0x11]);
    iVar4 = 0x34;
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
  }
  if (*(int *)((int)param_1 + iVar4) != 0) {
    thunk_FUN_016d3fb4(((int *)((int)param_1 + iVar4))[1]);
  }
  piVar2 = (int *)param_1[0x13];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01001434(param_1[0x13]);
    return;
  }
  return;
}

