// FUN_00d3cad8 @ 00d3cad8 size=152 calls_out=4 calls_in=2
// strings: 

void FUN_00d3cad8(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  if (*param_1 == 1) {
    iVar2 = param_1[2];
    bVar3 = iVar2 == 0 && param_1[3] == 0;
    if (iVar2 != 0 || param_1[3] != 0) {
      iVar2 = param_1[4];
      bVar3 = iVar2 == 0;
    }
    if (bVar3) {
      return;
    }
    FUN_01443048(iVar2,param_1[5]);
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  FUN_01a886e0(param_1 + 0x34);
  if (param_1[2] == 6 && param_1[3] == 0) {
    FUN_01a886e0(param_1 + 4);
    FUN_005f6438(param_1[8],param_1[9]);
    return;
  }
  FUN_00d36a10(param_1 + 2);
  if (param_1[0x2e] == 0) {
    return;
  }
  FUN_01429548(param_1[0x31]);
  piVar1 = (int *)param_1[0x32];
  if (piVar1 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar1;
      bVar3 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar3);
    *piVar1 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01421174(param_1[0x32]);
    }
  }
  FUN_01a69874(param_1 + 0x2e);
  return;
}

