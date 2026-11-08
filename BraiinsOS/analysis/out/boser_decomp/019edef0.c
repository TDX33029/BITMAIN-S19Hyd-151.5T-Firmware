// FUN_019edef0 @ 019edef0 size=104 calls_out=3 calls_in=1
// strings: 

void FUN_019edef0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 2) {
    return;
  }
  if (*param_1 != 0) {
    FUN_00b91e68(param_1[4],param_1[5]);
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

