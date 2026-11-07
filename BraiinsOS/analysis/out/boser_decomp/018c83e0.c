// FUN_018c83e0 @ 018c83e0 size=120 calls_out=3 calls_in=2
// strings: 

void FUN_018c83e0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 == -0x7ffffffe) {
    return;
  }
  if (*param_1 == -0x7fffffff) {
    param_1 = param_1 + 1;
    iVar2 = *param_1;
  }
  else {
    piVar3 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018bcd50(param_1[3]);
    }
    FUN_01443048(param_1[4],param_1[5]);
    iVar2 = *param_1;
  }
  if (iVar2 == -0x80000000) {
    return;
  }
  FUN_0134bd64(iVar2,param_1[1]);
  return;
}

