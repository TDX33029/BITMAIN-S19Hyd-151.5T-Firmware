// FUN_017bedf8 @ 017bedf8 size=288 calls_out=13 calls_in=1
// strings: 

void FUN_017bedf8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *param_1;
  iVar3 = param_1[1];
  if (iVar1 == 7 && iVar3 == 0) {
    return;
  }
  bVar4 = iVar1 == 6 && iVar3 == 0;
  if (iVar1 != 6 || iVar3 != 0) {
    bVar4 = iVar1 == 5 && iVar3 == 0;
  }
  if (bVar4) {
    return;
  }
  if (iVar1 != 4 || iVar3 != 0) {
    FUN_01139b38(param_1[0x39],param_1[0x3a]);
    FUN_012840cc(param_1 + 0x3c);
    FUN_019bb7e0(param_1[0x2c],param_1[0x2d]);
    FUN_01773240(param_1 + 0x30);
    FUN_017bf014(param_1);
    FUN_01772bf4(param_1 + 0x42);
    FUN_01772c34(param_1 + 0x48);
    piVar2 = (int *)param_1[0x4d];
    if (*piVar2 != 0) {
      FUN_01771fbc(piVar2 + 1);
    }
    thunk_FUN_01be4678(piVar2);
    return;
  }
  piVar2 = (int *)param_1[0x1d];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar1 + -1;
    if (iVar1 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01436864(param_1[0x1d]);
    }
  }
  FUN_017720fc(param_1 + 0x12);
  FUN_01432304(param_1 + 0x15);
  piVar2 = (int *)param_1[0x1e];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar1 + -1;
    if (iVar1 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0x1e],param_1[0x1f]);
    }
  }
  FUN_01772cf0(param_1 + 0x16);
  FUN_01772d3c(param_1[0x1b],param_1[0x1c]);
  if (param_1[2] == 2) {
    return;
  }
  FUN_017721f4(param_1 + 5);
  FUN_01771f3c(param_1 + 9);
  FUN_01771fbc(param_1 + 0xd);
  FUN_01772dfc(param_1 + 2);
  return;
}

