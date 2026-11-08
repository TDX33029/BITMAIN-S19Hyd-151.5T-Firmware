// FUN_00a85dd0 @ 00a85dd0 size=92 calls_out=3 calls_in=6
// strings: 

void FUN_00a85dd0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01712ed4(param_1 + 8);
  FUN_00a85e84(param_1 + 8);
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

