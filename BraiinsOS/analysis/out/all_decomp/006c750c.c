// FUN_006c750c @ 006c750c size=404 calls_out=8 calls_in=2
// strings: 

void FUN_006c750c(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  short *psVar12;
  uint *puVar13;
  int iVar14;
  bool bVar15;
  
  FUN_005e6cdc(param_1 + 0x38);
  if (*(int *)(param_1 + 0x44) != -1) {
    FUN_016dffb2();
  }
  FUN_00a414e8(param_1 + 0x38);
  FUN_0064a9ec(param_1 + 0x48);
  iVar4 = *(int *)(param_1 + 0x90);
  if (iVar4 != -0x7ffffffe) {
    uVar8 = iVar4 + 0x80000001U & iVar4 >> 0x1f;
    if (uVar8 == 1) {
      iVar4 = *(int *)(param_1 + 0x94);
      iVar6 = 0x94;
    }
    else {
      iVar6 = 0x90;
      if (uVar8 != 0) goto LAB_006c7580;
    }
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + iVar6 + 4));
    }
  }
LAB_006c7580:
  if ((*(uint *)(param_1 + 0x80) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x84));
  }
  FUN_0064aaf8(param_1 + 0xc4);
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 != 0) {
    iVar6 = *(int *)(param_1 + 0x1c);
    if (iVar6 != 0) {
      puVar13 = *(uint **)(param_1 + 0x10);
      puVar11 = puVar13 + 1;
      uVar8 = ~*puVar13 & 0x80808080;
      do {
        puVar10 = puVar11;
        if (uVar8 == 0) {
          do {
            puVar11 = puVar10 + 1;
            uVar8 = *puVar10;
            puVar13 = puVar13 + -0x24;
            puVar10 = puVar11;
          } while ((uVar8 & 0x80808080) == 0x80808080);
          uVar8 = uVar8 & 0x80808080 ^ 0x80808080;
        }
        FUN_0074e820(puVar13 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                              (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) *
                               -9 + -8);
        iVar6 = iVar6 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (iVar6 != 0);
    }
    if (iVar4 * 0x25 != -0x29) {
      thunk_FUN_016d3fb4(*(int *)(param_1 + 0x10) + iVar4 * -0x24 + -0x24);
    }
  }
  piVar5 = *(int **)(param_1 + 0x30);
  if (piVar5 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar15 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar15);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    }
  }
  piVar9 = (int *)(param_1 + 0x1bc);
  FUN_006adf40(piVar9);
  piVar5 = (int *)*piVar9;
  if (piVar5 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar15 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar15);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0105aee4(*piVar9);
    }
  }
  iVar4 = *(int *)(param_1 + 0xf8);
  if (iVar4 != -0x80000000) {
    iVar6 = *(int *)(param_1 + 0x100);
    iVar14 = *(int *)(param_1 + 0xfc);
    if (iVar6 != 0) {
      psVar12 = (short *)(iVar14 + 0x24);
      do {
        iVar3 = 0;
        if (psVar12[-0x12] != 0) {
          iVar3 = *(int *)(psVar12 + -0x10);
        }
        if (psVar12[-0x12] != 0 && iVar3 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(psVar12 + -0xe));
        }
        iVar3 = 0;
        if (*psVar12 != 0) {
          iVar3 = *(int *)(psVar12 + 2);
        }
        if (*psVar12 != 0 && iVar3 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(psVar12 + 4));
        }
        psVar12 = psVar12 + 0x26;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(iVar14);
    }
    iVar14 = *(int *)(param_1 + 0x108);
    iVar6 = *(int *)(param_1 + 0x10c) + 1;
    iVar4 = iVar14;
    while (iVar6 = iVar6 + -1, iVar6 != 0) {
      FUN_007b5fa0(iVar4);
      iVar4 = iVar4 + 0xe8;
    }
    if (*(int *)(param_1 + 0x104) != 0) {
      thunk_FUN_016d3fb4(iVar14);
    }
    iVar14 = *(int *)(param_1 + 0x114);
    iVar6 = *(int *)(param_1 + 0x118) + 1;
    iVar4 = iVar14;
    while (iVar6 = iVar6 + -1, iVar6 != 0) {
      FUN_007b5fa0(iVar4);
      iVar4 = iVar4 + 0xe8;
    }
    if (*(int *)(param_1 + 0x110) != 0) {
      thunk_FUN_016d3fb4(iVar14);
    }
    iVar14 = *(int *)(param_1 + 0x120);
    iVar6 = *(int *)(param_1 + 0x124) + 1;
    iVar4 = iVar14;
    while (iVar6 = iVar6 + -1, iVar6 != 0) {
      FUN_007b5fa0(iVar4);
      iVar4 = iVar4 + 0xe8;
    }
    if (*(int *)(param_1 + 0x11c) != 0) {
      thunk_FUN_016d3fb4(iVar14);
    }
    iVar14 = *(int *)(param_1 + 300);
    iVar6 = *(int *)(param_1 + 0x130) + 1;
    iVar4 = iVar14;
    while (iVar6 = iVar6 + -1, iVar6 != 0) {
      FUN_007b5fa0(iVar4);
      iVar4 = iVar4 + 0xe8;
    }
    if (*(int *)(param_1 + 0x128) != 0) {
      thunk_FUN_016d3fb4(iVar14);
    }
    iVar4 = *(int *)(param_1 + 0x134);
    if (iVar4 != -0x80000000) {
      iVar6 = *(int *)(param_1 + 0x13c);
      iVar14 = *(int *)(param_1 + 0x138);
      if (iVar6 != 0) {
        piVar5 = (int *)(iVar14 + 8);
        do {
          bVar15 = (char)piVar5[-1] != '\0';
          iVar3 = 0;
          if (bVar15) {
            iVar3 = *piVar5;
          }
          if (bVar15 && iVar3 != 0) {
            thunk_FUN_016d3fb4(piVar5[1]);
          }
          piVar5 = piVar5 + 6;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (iVar4 != 0) {
        thunk_FUN_016d3fb4(iVar14);
      }
    }
    sVar2 = *(short *)(param_1 + 0x160);
    if (sVar2 != 2) {
      iVar4 = 0;
      if (sVar2 != 0) {
        iVar4 = *(int *)(param_1 + 0x164);
      }
      if (sVar2 != 0 && iVar4 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x168));
      }
      bVar15 = *(short *)(param_1 + 0x184) != 0;
      iVar4 = 0;
      if (bVar15) {
        iVar4 = *(int *)(param_1 + 0x188);
      }
      if (bVar15 && iVar4 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x18c));
      }
    }
    iVar4 = *(int *)(param_1 + 0x1b8);
    DataMemoryBarrier(0xb);
    pcVar7 = (char *)(iVar4 + 0x24);
    *(undefined1 *)(iVar4 + 0x34) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar7;
      bVar15 = (bool)hasExclusiveAccess(pcVar7);
    } while (!bVar15);
    *pcVar7 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar6 = *(int *)(iVar4 + 0x1c);
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar4 + 0x24) = 0;
      DataMemoryBarrier(0xb);
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar4 + 0x20));
      }
    }
    pcVar7 = (char *)(iVar4 + 0x30);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar7;
      bVar15 = (bool)hasExclusiveAccess(pcVar7);
    } while (!bVar15);
    *pcVar7 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar6 = *(int *)(iVar4 + 0x28);
      *(undefined4 *)(iVar4 + 0x28) = 0;
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 0xc))(*(undefined4 *)(iVar4 + 0x2c));
      }
      DataMemoryBarrier(0xb);
      *pcVar7 = '\0';
      DataMemoryBarrier(0xb);
    }
    piVar5 = *(int **)(param_1 + 0x1b8);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar15 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar15);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0105a70c(*(undefined4 *)(param_1 + 0x1b8));
      return;
    }
  }
  return;
}

