// FUN_019d7680 @ 019d7680 size=108 calls_out=3 calls_in=2
// strings: 

void FUN_019d7680(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    if (param_1[4] == 0) {
      return;
    }
    FUN_01443048(param_1[4],param_1[5]);
    return;
  }
  FUN_005f37c4(param_1 + 1);
  piVar2 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019ad05c(param_1[5]);
    return;
  }
  return;
}

