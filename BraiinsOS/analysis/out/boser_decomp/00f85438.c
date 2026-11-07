// FUN_00f85438 @ 00f85438 size=256 calls_out=9 calls_in=2
// strings: 

void FUN_00f85438(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 != 3 || param_1[1] != 0) {
    if ((9 < *(byte *)(param_1 + 0x2c)) && (param_1[0x2e] != 0)) {
      thunk_FUN_01be4678(param_1[0x2d]);
    }
    FUN_019bb7e0(param_1[0x14],param_1[0x15]);
    FUN_0142e6dc(param_1);
    iVar2 = 0;
    if (param_1[0x24] != 0) {
      iVar2 = param_1[0x25];
    }
    if (param_1[0x24] != 0 && iVar2 != 0) {
      (**(code **)(iVar2 + 0x10))(param_1 + 0x28,param_1[0x26],param_1[0x27]);
    }
    FUN_017040e4(param_1 + 0x29);
    piVar3 = (int *)param_1[0x31];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01784968(param_1[0x31]);
    }
    FUN_00e7a4b4(param_1[0x22],param_1[0x23]);
    FUN_00cdcec8(param_1[0x33]);
    return;
  }
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
    return;
  }
  if (piVar3[0x13] != 0) {
    FUN_00f80320(piVar3[0x13],piVar3[0x14]);
  }
  if (*piVar3 != 2) {
    FUN_019bb7e0(piVar3[4],piVar3[5]);
  }
  thunk_FUN_01be4678(piVar3);
  return;
}

