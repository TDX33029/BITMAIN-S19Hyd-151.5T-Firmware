// FUN_018f0980 @ 018f0980 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_018f0980(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 != -0x7fffffd7) {
    FUN_0193b140();
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
  return;
}

