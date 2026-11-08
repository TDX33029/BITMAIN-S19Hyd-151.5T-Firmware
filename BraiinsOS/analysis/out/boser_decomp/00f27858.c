// FUN_00f27858 @ 00f27858 size=168 calls_out=3 calls_in=2
// strings: 

void FUN_00f27858(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 == -0x80000000) {
    return;
  }
  if (iVar3 == -0x7fffffff) {
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
                    /* WARNING: Could not recover jumptable at 0x00f278fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(piVar2[2] + 0x10))();
    return;
  }
  FUN_019f0210(param_1);
  FUN_0134c054(iVar3,param_1[1],4,0xc);
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

