// FUN_011e793c @ 011e793c size=272 calls_out=5 calls_in=1
// strings: 

void FUN_011e793c(int *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  if (*param_1 == 1) {
    bVar3 = param_1[2] != 0 || param_1[3] != 0;
    iVar1 = 0;
    if (bVar3) {
      iVar1 = param_1[4];
    }
    if (bVar3 && iVar1 != 0) {
      FUN_01443048(iVar1,param_1[5]);
      return;
    }
  }
  else if ((*param_1 == 0) && (*(char *)((int)param_1 + 0x19) != '\x02')) {
    piVar2 = (int *)param_1[2];
    FUN_019ed980(piVar2,param_1[3]);
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *piVar2;
      bVar3 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar3);
    *piVar2 = iVar1 + -1;
    if (iVar1 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db698(param_1[2]);
    }
    piVar2 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *piVar2;
      bVar3 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar3);
    *piVar2 = iVar1 + -1;
    if (iVar1 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db698(param_1[3]);
    }
    piVar2 = (int *)param_1[4];
    if (piVar2 == (int *)0x0) {
      return;
    }
    FUN_017cbfe4(piVar2 + 2);
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *piVar2;
      bVar3 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar3);
    *piVar2 = iVar1 + -1;
    if (iVar1 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121ce30(piVar2);
      return;
    }
    return;
  }
  return;
}

