// FUN_01485e00 @ 01485e00 size=1100 calls_out=14 calls_in=1
// strings: 

void FUN_01485e00(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  
  if (*(char *)(param_1 + 0x2ac) == '\0') {
    FUN_01015c1c(param_1);
    FUN_01486cac(param_1 + 0x204);
    iVar9 = *(int *)(param_1 + 0x228) + 1;
    iVar3 = *(int *)(param_1 + 0x224);
    while (iVar9 = iVar9 + -1, iVar9 != 0) {
      FUN_01498fc4(iVar3);
      iVar3 = iVar3 + 0x100;
    }
    if (*(int *)(param_1 + 0x220) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x224));
    }
    if (*(int *)(param_1 + 0x1f8) == 0) {
      puVar10 = *(undefined4 **)(param_1 + 0x200);
      uVar11 = *(undefined4 *)(param_1 + 0x1fc);
      pcVar4 = (code *)*puVar10;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar11);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar11);
      }
    }
    if (1 < *(uint *)(param_1 + 0x50)) {
      piVar2 = *(int **)(param_1 + 0x54);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      }
    }
    piVar2 = *(int **)(param_1 + 0x60);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
      }
    }
    piVar2 = (int *)(*(int *)(param_1 + 0x230) + 4);
    for (iVar3 = *(int *)(param_1 + 0x234); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*piVar2 != 0) {
        thunk_FUN_016d3fb4(piVar2[1]);
      }
      piVar2 = piVar2 + 4;
    }
    if (*(int *)(param_1 + 0x22c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x230));
    }
    iVar3 = *(int *)(param_1 + 0x240);
    if (iVar3 != 0) {
      puVar10 = (undefined4 *)(*(int *)(param_1 + 0x23c) + 4);
      do {
        if ((puVar10[-1] & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(*puVar10);
        }
        puVar10 = puVar10 + 3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (*(int *)(param_1 + 0x238) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x23c));
    }
    FUN_01486d48(param_1 + 0x88);
    iVar3 = *(int *)(param_1 + 0x24c);
    if (iVar3 != 0) {
      iVar12 = *(int *)(param_1 + 0x248);
      iVar9 = 0;
      do {
        puVar10 = (undefined4 *)(iVar12 + iVar9 * 8);
        piVar2 = (int *)*puVar10;
        iVar9 = iVar9 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015614d8(*puVar10,puVar10[1]);
        }
      } while (iVar9 != iVar3);
    }
    if (*(int *)(param_1 + 0x244) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x248));
    }
    if ((*(uint *)(param_1 + 0x250) & 0x7fffffff) == 0) {
      iVar3 = *(int *)(param_1 + 0x260);
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x254));
      iVar3 = *(int *)(param_1 + 0x260);
    }
    if (iVar3 != 0) {
      FUN_0145d684();
    }
    FUN_0148efc0(param_1 + 0x1c8);
    piVar2 = *(int **)(param_1 + 0x1e8);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*(undefined4 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1ec));
      }
    }
    piVar2 = *(int **)(param_1 + 0x1f0);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(*(undefined4 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 500));
      }
    }
    iVar3 = *(int *)(param_1 + 0x294);
    if (iVar3 != 0) {
      puVar5 = (uint *)(iVar3 + 0x20);
      uVar8 = *(uint *)(iVar3 + 0x20);
      do {
        while( true ) {
          uVar7 = uVar8;
          if ((uVar7 & 4) != 0) goto LAB_014861b8;
          uVar8 = *puVar5;
          if (uVar8 == uVar7) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar5);
        if (bVar1) {
          *puVar5 = uVar7 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar1);
LAB_014861b8:
      if ((uVar7 & 5) == 1) {
        (**(code **)(*(int *)(iVar3 + 0x18) + 8))(*(undefined4 *)(iVar3 + 0x1c));
      }
      piVar2 = *(int **)(param_1 + 0x294);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_014a45ec(*(undefined4 *)(param_1 + 0x294));
        }
      }
    }
    FUN_0148f59c(*(undefined4 *)(param_1 + 0x290));
    piVar2 = *(int **)(param_1 + 0x290);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014a44c0(*(undefined4 *)(param_1 + 0x290));
      return;
    }
  }
  else if (*(char *)(param_1 + 0x2ac) == '\x03') {
    FUN_0148f59c(*(undefined4 *)(param_1 + 0x29c));
    piVar2 = *(int **)(param_1 + 0x29c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014a44c0(*(undefined4 *)(param_1 + 0x29c));
    }
    piVar2 = *(int **)(param_1 + 0x298);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014a4788(*(undefined4 *)(param_1 + 0x298));
      return;
    }
  }
  return;
}

