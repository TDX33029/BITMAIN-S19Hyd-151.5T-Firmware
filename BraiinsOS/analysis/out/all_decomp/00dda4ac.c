// FUN_00dda4ac @ 00dda4ac size=408 calls_out=9 calls_in=1
// strings: 

void FUN_00dda4ac(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  FUN_005c3004(param_1 + 0x70);
  FUN_005c384c(param_1 + 0x54);
  FUN_005c73cc(param_1 + 4);
  if (param_1[0x66] != 0) {
    thunk_FUN_016d3fb4(param_1[0x67]);
  }
  if (param_1[0x69] == -0x80000000 || param_1[0x69] == 0) {
    if (param_1[0x6c] != -0x80000000 && param_1[0x6c] != 0) {
LAB_00dda638:
      thunk_FUN_016d3fb4(param_1[0x6d]);
    }
  }
  else {
    thunk_FUN_016d3fb4(param_1[0x6a]);
    if (param_1[0x6c] != -0x80000000 && param_1[0x6c] != 0) goto LAB_00dda638;
  }
  piVar2 = (int *)param_1[0x86];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(param_1[0x86]);
  }
  piVar2 = (int *)param_1[0x87];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aacbe0(param_1[0x87]);
  }
  piVar2 = (int *)param_1[0x88];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaafc(param_1[0x88]);
  }
  piVar2 = (int *)param_1[0x8a];
  if (piVar2 != (int *)0x0) {
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
      if (bVar1) {
        *piVar2 = 0x84;
        goto LAB_00dda5e4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
  }
LAB_00dda5e4:
  param_1 = param_1 + 0x89;
  FUN_01663cc4(*param_1);
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(param_1);
    return;
  }
  return;
}

