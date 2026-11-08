// FUN_0084f688 @ 0084f688 size=140 calls_out=2 calls_in=7
// strings: 

void FUN_0084f688(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 3) {
    FUN_019bb7e0(param_1[1],param_1[2]);
    if (param_1[4] != -0x80000000) {
      FUN_019bb7e0(param_1[4],param_1[5]);
    }
    if (param_1[7] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[7],param_1[8]);
    return;
  }
  FUN_019bb7e0(param_1[4],param_1[5]);
  FUN_019bb7e0(param_1[7],param_1[8]);
  piVar2 = (int *)param_1[10];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00b5f000(param_1[10]);
    return;
  }
  return;
}

