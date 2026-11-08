// FUN_0177d9a8 @ 0177d9a8 size=348 calls_out=18 calls_in=1
// strings: 

void FUN_0177d9a8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != 4 || param_1[1] != 0) {
    FUN_01139b38(param_1[0x39],param_1[0x3a]);
    FUN_012840cc(param_1 + 0x3c);
    FUN_019bb7e0(param_1[0x2c],param_1[0x2d]);
    FUN_01773240(param_1 + 0x30);
    FUN_0177dbe8(param_1);
    FUN_01772bf4(param_1 + 0x42);
    FUN_01772c34(param_1 + 0x48);
    piVar2 = (int *)param_1[0x4d];
    if (*piVar2 != 0) {
      FUN_0177a2a4(piVar2 + 1);
    }
    thunk_FUN_01be4678(piVar2);
    return;
  }
  piVar2 = (int *)param_1[0x1d];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
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
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0x1e],param_1[0x1f]);
    }
  }
  FUN_0177dccc(param_1 + 0x16);
  FUN_01772d3c(param_1[0x1b],param_1[0x1c]);
  if (param_1[2] == 2) {
    return;
  }
  FUN_017721f4(param_1 + 5);
  FUN_017766f0(param_1 + 9);
  FUN_0177a2a4(param_1 + 0xd);
  FUN_01772dfc(param_1 + 2);
  return;
}

