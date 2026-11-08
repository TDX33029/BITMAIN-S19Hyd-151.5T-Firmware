// FUN_013f53a0 @ 013f53a0 size=128 calls_out=3 calls_in=0
// strings: 

void FUN_013f53a0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    piVar2 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0140a97c(param_1[1]);
      return;
    }
    return;
  }
  if (*param_1 == 1) {
    FUN_01403c00(param_1[1]);
    return;
  }
  FUN_01403c00(param_1[1]);
  if (param_1[2] == 0) {
    FUN_01406bcc(param_1[3]);
    return;
  }
  return;
}

