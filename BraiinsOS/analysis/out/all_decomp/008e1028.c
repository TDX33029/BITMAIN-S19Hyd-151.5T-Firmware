// FUN_008e1028 @ 008e1028 size=196 calls_out=2 calls_in=1
// strings: 

void FUN_008e1028(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_r6;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar4 = *(int *)(param_1 + 0x14);
  iVar5 = *(int *)(param_1 + 0x10);
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
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  piVar2 = *(int **)(param_1 + 0x20);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f3984(*(undefined4 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}

