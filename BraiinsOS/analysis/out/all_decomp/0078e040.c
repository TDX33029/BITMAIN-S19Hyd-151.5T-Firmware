// FUN_0078e040 @ 0078e040 size=416 calls_out=6 calls_in=1
// strings: 

void FUN_0078e040(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r6;
  int iVar5;
  bool bVar6;
  
  piVar1 = *(int **)(param_1 + 100);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar1;
    bVar6 = (bool)hasExclusiveAccess(piVar1);
  } while (!bVar6);
  *piVar1 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078e200(*(undefined4 *)(param_1 + 100));
  }
  piVar1 = *(int **)(param_1 + 0x68);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar1;
    bVar6 = (bool)hasExclusiveAccess(piVar1);
  } while (!bVar6);
  *piVar1 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078dc40(*(undefined4 *)(param_1 + 0x68));
  }
  FUN_0078e294(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0x14);
  iVar5 = *(int *)(param_1 + 0x10);
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
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    piVar1 = *(int **)(param_1 + 0x24);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar1;
      bVar6 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar6);
    *piVar1 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007843c4(*(undefined4 *)(param_1 + 0x24));
    }
  }
  else {
    piVar1 = *(int **)(param_1 + 0x24);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar1;
      bVar6 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar6);
    *piVar1 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078e66c(*(undefined4 *)(param_1 + 0x24));
    }
  }
  piVar1 = *(int **)(param_1 + 0x38);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar1;
    bVar6 = (bool)hasExclusiveAccess(piVar1);
  } while (!bVar6);
  *piVar1 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078dc40(*(undefined4 *)(param_1 + 0x38));
    return;
  }
  return;
}

