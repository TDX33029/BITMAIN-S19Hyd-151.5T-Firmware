// FUN_019fa6c0 @ 019fa6c0 size=132 calls_out=4 calls_in=1
// strings: 

void FUN_019fa6c0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    if (param_1[2] == -0x80000000) {
      return;
    }
    FUN_005f37c4();
    piVar2 = (int *)param_1[6];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019ad05c(param_1[6]);
      return;
    }
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (param_1[2] == 0) {
    FUN_019fa5c0(param_1 + 3);
    return;
  }
  FUN_00b91e68(param_1[6],param_1[7]);
  return;
}

