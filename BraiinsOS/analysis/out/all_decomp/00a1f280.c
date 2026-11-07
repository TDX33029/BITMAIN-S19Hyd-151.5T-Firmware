// FUN_00a1f280 @ 00a1f280 size=200 calls_out=5 calls_in=3
// strings: 

void FUN_00a1f280(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  FUN_00a8f19c();
  if (*param_1 == 0) {
    piVar4 = (int *)param_1[1];
    piVar2 = piVar4 + 0x11;
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      FUN_00a8cda4(piVar4 + 2);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa79bc(param_1[1]);
    }
  }
  if (param_1[2] == 4) {
    return;
  }
  if (param_1[2] != 3) {
    FUN_00b510e8();
    return;
  }
  piVar2 = (int *)param_1[3];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa8be8(param_1[3]);
    return;
  }
  return;
}

