// FUN_013f56dc @ 013f56dc size=184 calls_out=3 calls_in=1
// strings: 

void FUN_013f56dc(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = 2;
  }
  if (iVar2 == 0) {
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0140a97c(param_1[1]);
    }
    piVar3 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
  }
  else {
    if (iVar2 == 1) {
      FUN_01403c00(param_1[1]);
      return;
    }
    FUN_01403c00(param_1[2]);
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678();
    return;
  }
  return;
}

