// FUN_014d113c @ 014d113c size=716 calls_out=10 calls_in=1
// strings: 

void FUN_014d113c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  
  FUN_01015c1c();
  FUN_01486cac(param_1 + 0x204);
  iVar8 = *(int *)(param_1 + 0x224);
  iVar6 = *(int *)(param_1 + 0x228) + 1;
  iVar5 = iVar8;
  while (iVar6 = iVar6 + -1, iVar6 != 0) {
    FUN_01498fc4(iVar5);
    iVar5 = iVar5 + 0x100;
  }
  if (*(int *)(param_1 + 0x220) != 0) {
    thunk_FUN_016d3fb4(iVar8);
  }
  if (*(int *)(param_1 + 0x1f8) == 0) {
    puVar7 = *(undefined4 **)(param_1 + 0x200);
    uVar9 = *(undefined4 *)(param_1 + 0x1fc);
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar9);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(uVar9);
    }
  }
  if (1 < *(uint *)(param_1 + 0x50)) {
    piVar2 = *(int **)(param_1 + 0x54);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
  }
  piVar2 = *(int **)(param_1 + 0x60);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    }
  }
  iVar5 = *(int *)(param_1 + 0x230);
  iVar6 = *(int *)(param_1 + 0x234);
  for (iVar8 = 0; iVar6 != iVar8; iVar8 = iVar8 + 1) {
    iVar3 = iVar5 + iVar8 * 0x10;
    if (*(int *)(iVar3 + 4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 8));
    }
  }
  if (*(int *)(param_1 + 0x22c) != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  iVar5 = *(int *)(param_1 + 0x240);
  iVar6 = *(int *)(param_1 + 0x23c);
  if (iVar5 != 0) {
    puVar7 = (undefined4 *)(iVar6 + 4);
    do {
      if ((puVar7[-1] & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*puVar7);
      }
      puVar7 = puVar7 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 0x238) != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
  if (*(uint *)(param_1 + 0x88) < 2) {
    FUN_014d1624();
  }
  iVar5 = *(int *)(param_1 + 0x24c);
  if (iVar5 != 0) {
    iVar8 = *(int *)(param_1 + 0x248);
    iVar6 = 0;
    do {
      puVar7 = (undefined4 *)(iVar8 + iVar6 * 8);
      piVar2 = (int *)*puVar7;
      iVar6 = iVar6 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(*puVar7,puVar7[1]);
      }
    } while (iVar6 != iVar5);
  }
  if (*(int *)(param_1 + 0x244) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x248));
  }
  if ((*(uint *)(param_1 + 0x250) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x254));
  }
  FUN_014d198c(*(undefined4 *)(param_1 + 0x260));
  FUN_0148efc0(param_1 + 0x1c8);
  piVar2 = *(int **)(param_1 + 0x1e8);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1ec));
    }
  }
  piVar2 = *(int **)(param_1 + 0x1f0);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143daec(*(undefined4 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 500));
      return;
    }
  }
  return;
}

