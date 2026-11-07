// FUN_00d964a4 @ 00d964a4 size=196 calls_out=3 calls_in=1
// strings: 

void FUN_00d964a4(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_r6;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar4 = *(int *)(param_1 + 0x14);
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar4 != 0) {
    iVar2 = 0;
    do {
      iVar4 = iVar4 + -1;
      bVar6 = *(int *)(iVar5 - iVar2) != 0;
      iVar1 = 0;
      if (bVar6) {
        unaff_r6 = iVar5 - iVar2;
        iVar1 = *(int *)(unaff_r6 + 4);
      }
      if (bVar6 && iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(unaff_r6 + 8));
      }
      iVar2 = iVar2 + -0xc;
    } while (iVar4 != 0);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  piVar3 = *(int **)(param_1 + 0x20);
  FUN_00ee0fc4(piVar3);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}

