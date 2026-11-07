// FUN_014a3f4c @ 014a3f4c size=860 calls_out=9 calls_in=1
// strings: 

void FUN_014a3f4c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  FUN_01015c1c();
  if (*(int *)(param_1 + 0x204) != 3) {
    if ((*(uint *)(param_1 + 0x208) & 0x7fffffff) == 0) {
      iVar6 = *(int *)(param_1 + 0x21c);
      iVar9 = *(int *)(param_1 + 0x218);
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20c));
      iVar6 = *(int *)(param_1 + 0x21c);
      iVar9 = *(int *)(param_1 + 0x218);
    }
    if (iVar6 != 0) {
      puVar5 = (undefined4 *)(iVar9 + 4);
      do {
        if ((puVar5[-1] & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(*puVar5);
        }
        puVar5 = puVar5 + 3;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (*(int *)(param_1 + 0x214) != 0) {
      thunk_FUN_016d3fb4(iVar9);
    }
  }
  iVar7 = *(int *)(param_1 + 0x224);
  iVar9 = *(int *)(param_1 + 0x228) + 1;
  iVar6 = iVar7;
  while (iVar9 = iVar9 + -1, iVar9 != 0) {
    FUN_01498fc4(iVar6);
    iVar6 = iVar6 + 0x100;
  }
  if (*(int *)(param_1 + 0x220) != 0) {
    thunk_FUN_016d3fb4(iVar7);
  }
  if (*(int *)(param_1 + 0x1f8) == 0) {
    puVar5 = *(undefined4 **)(param_1 + 0x200);
    uVar8 = *(undefined4 *)(param_1 + 0x1fc);
    pcVar4 = (code *)*puVar5;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar8);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(uVar8);
    }
  }
  if (1 < *(uint *)(param_1 + 0x50)) {
    piVar2 = *(int **)(param_1 + 0x54);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
  }
  piVar2 = *(int **)(param_1 + 0x60);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    }
  }
  iVar6 = *(int *)(param_1 + 0x230);
  iVar9 = *(int *)(param_1 + 0x234);
  for (iVar7 = 0; iVar9 != iVar7; iVar7 = iVar7 + 1) {
    iVar3 = iVar6 + iVar7 * 0x10;
    if (*(int *)(iVar3 + 4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 8));
    }
  }
  if (*(int *)(param_1 + 0x22c) != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
  iVar6 = *(int *)(param_1 + 0x240);
  iVar9 = *(int *)(param_1 + 0x23c);
  if (iVar6 != 0) {
    puVar5 = (undefined4 *)(iVar9 + 4);
    do {
      if ((puVar5[-1] & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*puVar5);
      }
      puVar5 = puVar5 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (*(int *)(param_1 + 0x238) != 0) {
    thunk_FUN_016d3fb4(iVar9);
  }
  FUN_01486d48(param_1 + 0x88);
  iVar6 = *(int *)(param_1 + 0x24c);
  if (iVar6 != 0) {
    iVar7 = *(int *)(param_1 + 0x248);
    iVar9 = 0;
    do {
      puVar5 = (undefined4 *)(iVar7 + iVar9 * 8);
      piVar2 = (int *)*puVar5;
      iVar9 = iVar9 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(*puVar5,puVar5[1]);
      }
    } while (iVar9 != iVar6);
  }
  if (*(int *)(param_1 + 0x244) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x248));
  }
  if ((*(uint *)(param_1 + 0x250) & 0x7fffffff) == 0) {
    iVar6 = *(int *)(param_1 + 0x260);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x254));
    iVar6 = *(int *)(param_1 + 0x260);
  }
  if (iVar6 != 0) {
    FUN_0145d684();
  }
  FUN_0148efc0(param_1 + 0x1c8);
  piVar2 = *(int **)(param_1 + 0x1e8);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1ec));
    }
  }
  piVar2 = *(int **)(param_1 + 0x1f0);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143daec(*(undefined4 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 500));
      return;
    }
  }
  return;
}

