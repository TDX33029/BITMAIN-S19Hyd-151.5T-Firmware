// FUN_0173a660 @ 0173a660 size=72 calls_out=1 calls_in=2
// strings: 

void FUN_0173a660(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 != 0xc) {
    if (*param_1 != 5) {
      return;
    }
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[1],param_1[2]);
      return;
    }
  }
  return;
}

