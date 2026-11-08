// FUN_018525c4 @ 018525c4 size=108 calls_out=3 calls_in=6
// strings: 

void FUN_018525c4(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 8);
  FUN_01712ed4(piVar3);
  if (*piVar3 != 5 || *(int *)(param_1 + 0xc) != 0) {
    FUN_01852698(piVar3);
  }
  if (param_1 == -1) {
    return;
  }
  piVar3 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

