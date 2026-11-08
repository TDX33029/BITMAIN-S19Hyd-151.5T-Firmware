// FUN_014b09f8 @ 014b09f8 size=244 calls_out=3 calls_in=0
// strings: 

void FUN_014b09f8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 2) {
    return;
  }
  FUN_0147f1b4(param_1 + 0x27);
  piVar2 = (int *)param_1[0x2e];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0149f9e0(param_1[0x2e]);
    }
  }
  piVar2 = (int *)param_1[0x18];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(param_1[0x18],param_1[0x19]);
  }
  piVar2 = (int *)param_1[0x1a];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(param_1[0x1a],param_1[0x1b]);
    }
  }
  piVar2 = (int *)param_1[0x1c];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(param_1[0x1c],param_1[0x1d]);
    return;
  }
  return;
}

