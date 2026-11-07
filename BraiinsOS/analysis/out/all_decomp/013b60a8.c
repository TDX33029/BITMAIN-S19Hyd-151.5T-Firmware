// FUN_013b60a8 @ 013b60a8 size=192 calls_out=2 calls_in=1
// strings: 

void FUN_013b60a8(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *(int *)(param_1 + 0x140);
  iVar3 = *(int *)(param_1 + 0x13c);
  if (iVar4 != 0) {
    piVar5 = (int *)(iVar3 + 8);
    do {
      iVar2 = piVar5[-2];
      if (((iVar2 == 4 || iVar2 == 2) || (iVar2 == 1)) && (*piVar5 != 0)) {
        thunk_FUN_016d3fb4(piVar5[-1]);
      }
      piVar5 = piVar5 + 5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  if (*(int *)(param_1 + 0x144) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x148));
  }
  piVar5 = *(int **)(param_1 + 0x134);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013c0df4(*(undefined4 *)(param_1 + 0x134));
    return;
  }
  return;
}

