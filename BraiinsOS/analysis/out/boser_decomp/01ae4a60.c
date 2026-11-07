// FUN_01ae4a60 @ 01ae4a60 size=180 calls_out=3 calls_in=2
// strings: 

void FUN_01ae4a60(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (iVar2 == -0x7ffffffd) {
    iVar3 = ((uint)(param_1[4] - param_1[2]) >> 3) * -0x33333333 + 1;
    iVar2 = param_1[2];
    while (iVar3 = iVar3 + -1, iVar3 != 0) {
      FUN_01ae62f4(iVar2);
      iVar2 = iVar2 + 0x28;
    }
    FUN_0134aee0(param_1[3],param_1[1],8,0x28);
    return;
  }
  if (iVar2 == -0x7fffffff) {
    return;
  }
  if (iVar2 != -0x7ffffffe) {
    if (*param_1 != -0x80000000) {
      FUN_0134bd64(*param_1,param_1[1]);
      FUN_0134bd64(param_1[3],param_1[4]);
      return;
    }
    if (param_1[1] != -0x80000000) {
      FUN_0134bd64(param_1[1],param_1[2]);
    }
    FUN_0069d8a4((char)param_1[4],param_1[5]);
    return;
  }
  piVar4 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019ad05c(param_1[1]);
    return;
  }
  return;
}

