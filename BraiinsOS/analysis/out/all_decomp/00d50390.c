// FUN_00d50390 @ 00d50390 size=88 calls_out=3 calls_in=0
// strings: 

void FUN_00d50390(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00d4b950(param_1 + 0x38);
  if (*(int *)(param_1 + 0x130) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x134));
  }
  piVar2 = *(int **)(param_1 + 0x158);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008d559c(*(undefined4 *)(param_1 + 0x158));
    return;
  }
  return;
}

