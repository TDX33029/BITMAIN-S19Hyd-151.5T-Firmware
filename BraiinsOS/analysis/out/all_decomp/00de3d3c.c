// FUN_00de3d3c @ 00de3d3c size=452 calls_out=9 calls_in=1
// strings: 

void FUN_00de3d3c(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x5de) == '\0') {
    FUN_005c3004(param_1 + 0x458);
    FUN_005c8810(param_1 + 0x4bc);
    if (*(int *)(param_1 + 0x44c) == -0x80000000 || *(int *)(param_1 + 0x44c) == 0) {
      iVar4 = *(int *)(param_1 + 0x440);
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x450));
      iVar4 = *(int *)(param_1 + 0x440);
    }
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x444));
    }
    iVar4 = *(int *)(param_1 + 0x4b4);
    piVar2 = (int *)(iVar4 + 0x44);
    do {
      iVar5 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      FUN_00e46e30(iVar4 + 8);
    }
    piVar2 = *(int **)(param_1 + 0x4b4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aab134(*(undefined4 *)(param_1 + 0x4b4));
    }
    iVar4 = *(int *)(param_1 + 0x4b0);
    if (iVar4 != 0) {
      puVar3 = (uint *)(iVar4 + 0x18);
      do {
        uVar6 = *puVar3;
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = uVar6 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar6 & 10) == 8) {
        (**(code **)(*(int *)(iVar4 + 8) + 8))(*(undefined4 *)(iVar4 + 0xc));
      }
      if ((uVar6 & 2) != 0) {
        *(undefined1 *)(iVar4 + 0x1c) = 2;
      }
      piVar2 = *(int **)(param_1 + 0x4b0);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f3128(*(undefined4 *)(param_1 + 0x4b0));
        }
      }
    }
    FUN_01663cc4(*(undefined4 *)(param_1 + 0x4b8));
    piVar2 = *(int **)(param_1 + 0x4b8);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
  }
  else {
    if (*(char *)(param_1 + 0x5de) != '\x03') {
      return;
    }
    FUN_00de4068(param_1);
    FUN_01663cc4(*(undefined4 *)(param_1 + 0x4b8));
    piVar2 = *(int **)(param_1 + 0x4b8);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(param_1 + 0x4b8);
    return;
  }
  return;
}

