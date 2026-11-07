// FUN_007b1778 @ 007b1778 size=308 calls_out=5 calls_in=1
// strings: 

void FUN_007b1778(int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  FUN_005e6cdc();
  if (*(int *)(param_1 + 0xc) != -1) {
    FUN_016dffb2();
  }
  FUN_00a414e8(param_1);
  piVar2 = *(int **)(param_1 + 200);
  if (((uint)piVar2 & 1) == 0) {
    piVar3 = piVar2 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      if (*piVar2 != 0) {
        thunk_FUN_016d3fb4(piVar2[1]);
      }
      goto LAB_007b1814;
    }
  }
  else if (*(int *)(param_1 + 0xc4) + ((uint)piVar2 >> 5) != 0) {
    piVar2 = (int *)(*(int *)(param_1 + 0xbc) - ((uint)piVar2 >> 5));
LAB_007b1814:
    thunk_FUN_016d3fb4(piVar2);
  }
  piVar2 = *(int **)(param_1 + 0xb4);
  if (((uint)piVar2 & 1) == 0) {
    piVar3 = piVar2 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 != 1) goto LAB_007b1894;
    DataMemoryBarrier(0xb);
    if (*piVar2 != 0) {
      thunk_FUN_016d3fb4(piVar2[1]);
    }
  }
  else {
    if (*(int *)(param_1 + 0xb0) + ((uint)piVar2 >> 5) == 0) goto LAB_007b1894;
    piVar2 = (int *)(*(int *)(param_1 + 0xa8) - ((uint)piVar2 >> 5));
  }
  thunk_FUN_016d3fb4(piVar2);
LAB_007b1894:
  if (*(char *)(param_1 + 0x7e) == '\x02') {
    return;
  }
  FUN_0110db34(param_1 + 0x10);
  return;
}

