// FUN_011ea0f0 @ 011ea0f0 size=164 calls_out=5 calls_in=2
// strings: 

void FUN_011ea0f0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  if (param_1[10] != -0x80000000) {
    piVar6 = param_1 + 4;
    FUN_0120954c(piVar6);
    piVar2 = (int *)*piVar6;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a903d0(*piVar6);
    }
    FUN_0132b958(param_1[7],param_1[8],8,8);
    return;
  }
  iVar5 = *param_1;
  iVar4 = param_1[1];
  iVar7 = iVar4 + 1;
  iVar3 = iVar5;
  while (iVar7 = iVar7 + -1, iVar7 != 0) {
    FUN_011e7e04(iVar3);
    iVar3 = iVar3 + 0xc;
  }
  if (iVar4 == 0) {
    return;
  }
  thunk_FUN_01be4678(iVar5);
  return;
}

