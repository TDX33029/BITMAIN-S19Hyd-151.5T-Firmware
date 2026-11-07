// FUN_006f6e10 @ 006f6e10 size=136 calls_out=2 calls_in=9
// strings: 

void FUN_006f6e10(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (iVar2 == 9) {
    return;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  if (iVar3 == 5) {
    piVar4 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
  }
  else {
    if (iVar3 != 4) {
      if (iVar3 == 0) {
        FUN_0134bd64(param_1[3],param_1[4]);
        return;
      }
      return;
    }
    piVar4 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_1[1],param_1[2]);
    return;
  }
  return;
}

