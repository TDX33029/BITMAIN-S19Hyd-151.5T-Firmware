// FUN_007e2eb4 @ 007e2eb4 size=168 calls_out=6 calls_in=2
// strings: 

void FUN_007e2eb4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  if (param_1[10] != -0x80000000) {
    piVar7 = param_1 + 4;
    FUN_009cf73c(piVar7);
    piVar2 = (int *)*piVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a95404(*piVar7);
    }
    FUN_007cde2c(param_1 + 7);
    FUN_006f66dc(param_1 + 10);
    return;
  }
  iVar4 = param_1[1];
  iVar5 = *param_1;
  iVar6 = iVar4 + 1;
  iVar3 = iVar5;
  while (iVar6 = iVar6 + -1, iVar6 != 0) {
    FUN_00c78860(iVar3);
    iVar3 = iVar3 + 0x1a0;
  }
  if (iVar4 == 0) {
    return;
  }
  thunk_FUN_01be4678(iVar5);
  return;
}

