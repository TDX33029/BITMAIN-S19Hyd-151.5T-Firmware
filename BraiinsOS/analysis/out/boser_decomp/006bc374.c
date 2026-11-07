// FUN_006bc374 @ 006bc374 size=128 calls_out=2 calls_in=1
// strings: 

void FUN_006bc374(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1 + -1;
  if (*param_1 == 0) {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    FUN_019bb7e0(param_1[3],param_1[4]);
    return;
  }
  if (iVar2 == 4) {
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
  }
  else {
    if (iVar2 != 5) {
      return;
    }
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
    FUN_0070451c(param_1[1],param_1[2]);
    return;
  }
  return;
}

