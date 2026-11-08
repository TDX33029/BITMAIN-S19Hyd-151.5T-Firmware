// FUN_0079a168 @ 0079a168 size=268 calls_out=6 calls_in=1
// strings: 

void FUN_0079a168(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    if (param_1[2] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[2],param_1[3]);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (param_1[2] != 0) {
    FUN_00b91e68(param_1[6],param_1[7]);
    return;
  }
  iVar3 = param_1[3];
  if (iVar3 == -0x80000000) {
    return;
  }
  if (iVar3 == -0x7fffffff) {
    piVar2 = (int *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x0079a090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(piVar2[2] + 0x10))();
    return;
  }
  if (iVar3 == -0x7ffffffe) {
    FUN_0069d8a4((char)param_1[4],param_1[5]);
    return;
  }
  FUN_019f0210(param_1 + 3);
  FUN_0134c054(iVar3,param_1[4],4,0xc);
  piVar2 = (int *)param_1[7];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019ad05c(param_1[7]);
    return;
  }
  return;
}

