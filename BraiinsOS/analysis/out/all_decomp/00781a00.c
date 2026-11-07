// FUN_00781a00 @ 00781a00 size=204 calls_out=4 calls_in=3
// strings: 

void FUN_00781a00(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_r6;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar4 = param_1[6];
  iVar5 = param_1[5];
  if (iVar4 != 0) {
    iVar3 = 0;
    do {
      iVar4 = iVar4 + -1;
      bVar6 = *(int *)(iVar5 - iVar3) != 0;
      iVar1 = 0;
      if (bVar6) {
        unaff_r6 = iVar5 - iVar3;
        iVar1 = *(int *)(unaff_r6 + 4);
      }
      if (bVar6 && iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(unaff_r6 + 8));
      }
      iVar3 = iVar3 + -0xc;
    } while (iVar4 != 0);
  }
  if (param_1[4] != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  FUN_007820b8(param_1 + 9);
  FUN_00782298(param_1 + 0xd);
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00781b88(*param_1);
    return;
  }
  return;
}

