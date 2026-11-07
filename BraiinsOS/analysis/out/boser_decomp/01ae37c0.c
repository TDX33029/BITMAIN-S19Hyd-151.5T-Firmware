// FUN_01ae37c0 @ 01ae37c0 size=164 calls_out=3 calls_in=2
// strings: 

void FUN_01ae37c0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = *param_1;
  if (iVar2 == -0x7ffffffd) {
    iVar4 = ((uint)(param_1[4] - param_1[2]) >> 3) * -0x33333333 + 1;
    iVar2 = param_1[2];
    while (iVar4 = iVar4 + -1, iVar4 != 0) {
      FUN_01ae62f4(iVar2);
      iVar2 = iVar2 + 0x28;
    }
    FUN_0134aee0(param_1[3],param_1[1],8,0x28);
    return;
  }
  if (iVar2 == -0x80000000) {
    if (param_1[1] != -0x80000000) {
      FUN_0134bd64(param_1[1],param_1[2]);
    }
    FUN_0069263c((char)param_1[4],param_1[5]);
    return;
  }
  if (iVar2 == -0x7fffffff) {
    return;
  }
  if (iVar2 != -0x7ffffffe) {
    FUN_0134bd64(iVar2,param_1[1]);
    FUN_0134bd64(param_1[3],param_1[4]);
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
    FUN_019ad05c(param_1[1]);
    return;
  }
  return;
}

