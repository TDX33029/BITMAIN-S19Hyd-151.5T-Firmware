// FUN_00d39234 @ 00d39234 size=272 calls_out=5 calls_in=4
// strings: 

void FUN_00d39234(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    piVar2 = (int *)FUN_01177254(*param_1,param_1[1]);
  }
  iVar4 = param_1[3];
  iVar3 = 0;
  if (iVar4 != 0) {
    piVar2 = (int *)(iVar4 * 3);
    iVar3 = iVar4 * 0x19;
  }
  if (iVar4 != 0 && iVar3 != -0x1d) {
    thunk_FUN_01be4678(param_1[2] + (int)piVar2 * -8 + -0x18);
  }
  piVar2 = (int *)param_1[10];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011772ac(param_1[10]);
  }
  piVar2 = (int *)param_1[0xb];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121d018(param_1[0xb]);
  }
  piVar2 = (int *)param_1[0xd];
  if (piVar2 != (int *)0x0) {
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
      if (bVar1) {
        *piVar2 = 0x84;
        goto LAB_00d39338;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
  }
LAB_00d39338:
  FUN_005faf6c(param_1 + 0xc);
  return;
}

