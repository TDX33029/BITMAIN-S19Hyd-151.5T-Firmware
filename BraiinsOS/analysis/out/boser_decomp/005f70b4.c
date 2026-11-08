// FUN_005f70b4 @ 005f70b4 size=148 calls_out=2 calls_in=8
// strings: 

void FUN_005f70b4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == -0x80000000) {
    return;
  }
  if (*param_1 == -0x7fffffff) {
    piVar2 = (int *)param_1[1];
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
      if (bVar1) {
        *piVar2 = 0x84;
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
                    /* WARNING: Could not recover jumptable at 0x005f7144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(piVar2[2] + 0x10))();
    return;
  }
  FUN_005f37c4(param_1);
  piVar2 = (int *)param_1[4];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019ad05c(param_1[4]);
    return;
  }
  return;
}

