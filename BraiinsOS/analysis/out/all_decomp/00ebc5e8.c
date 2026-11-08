// FUN_00ebc5e8 @ 00ebc5e8 size=672 calls_out=14 calls_in=1
// strings: 

void FUN_00ebc5e8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  piVar2 = (int *)param_1[0x79];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaa68(param_1[0x79]);
  }
  FUN_00aa313c(param_1[0x7a]);
  piVar2 = (int *)param_1[0x7a];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad1e0(param_1[0x7a]);
  }
  piVar2 = (int *)param_1[0x7b];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa6194(param_1[0x7b]);
  }
  if (param_1[0x76] != -0x80000000 && param_1[0x76] != 0) {
    thunk_FUN_016d3fb4(param_1[0x77]);
  }
  iVar3 = param_1[0x7c];
  piVar2 = (int *)(iVar3 + 0x44);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    FUN_00e473d0(iVar3 + 8);
  }
  piVar2 = (int *)param_1[0x7c];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aacf14(param_1[0x7c]);
  }
  FUN_005c384c(param_1 + 0x54);
  FUN_005c73cc(param_1 + 4);
  if (param_1[0x66] != 0) {
    thunk_FUN_016d3fb4(param_1[0x67]);
  }
  if (param_1[0x69] == -0x80000000 || param_1[0x69] == 0) {
    if (param_1[0x6c] != -0x80000000 && param_1[0x6c] != 0) {
LAB_00ebc87c:
      thunk_FUN_016d3fb4(param_1[0x6d]);
    }
  }
  else {
    thunk_FUN_016d3fb4(param_1[0x6a]);
    if (param_1[0x6c] != -0x80000000 && param_1[0x6c] != 0) goto LAB_00ebc87c;
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
        goto LAB_00ebc81c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
  }
LAB_00ebc81c:
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

