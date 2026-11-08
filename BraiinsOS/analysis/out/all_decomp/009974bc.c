// FUN_009974bc @ 009974bc size=348 calls_out=5 calls_in=1
// strings: 

void FUN_009974bc(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r6;
  int iVar5;
  bool bVar6;
  
  piVar1 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar1;
    bVar6 = (bool)hasExclusiveAccess(piVar1);
  } while (!bVar6);
  *piVar1 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*param_1);
  }
  iVar3 = param_1[7];
  iVar5 = param_1[6];
  if (iVar3 != 0) {
    iVar4 = 0;
    do {
      iVar3 = iVar3 + -1;
      bVar6 = *(int *)(iVar5 - iVar4) != 0;
      iVar2 = 0;
      if (bVar6) {
        unaff_r6 = iVar5 - iVar4;
        iVar2 = *(int *)(unaff_r6 + 4);
      }
      if (bVar6 && iVar2 != 0) {
        (**(code **)(iVar2 + 0xc))(*(undefined4 *)(unaff_r6 + 8));
      }
      iVar4 = iVar4 + -0xc;
    } while (iVar3 != 0);
  }
  if (param_1[5] != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  piVar1 = (int *)param_1[10];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar1;
    bVar6 = (bool)hasExclusiveAccess(piVar1);
  } while (!bVar6);
  *piVar1 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(param_1[10]);
  }
  FUN_00ac4930(param_1 + 0xb);
  FUN_00997e6c(param_1 + 0xe);
  piVar1 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar1;
    bVar6 = (bool)hasExclusiveAccess(piVar1);
  } while (!bVar6);
  *piVar1 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00781b88(param_1[1]);
  }
  piVar1 = (int *)param_1[0x17];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar1;
    bVar6 = (bool)hasExclusiveAccess(piVar1);
  } while (!bVar6);
  *piVar1 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00781b88(param_1[0x17]);
    return;
  }
  return;
}

