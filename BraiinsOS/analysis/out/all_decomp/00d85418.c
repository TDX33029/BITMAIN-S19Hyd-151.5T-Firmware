// FUN_00d85418 @ 00d85418 size=2188 calls_out=20 calls_in=3
// strings: 

void FUN_00d85418(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0xa84);
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      FUN_00d926d4(param_1 + 0xaa0);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_00d94d0c(param_1 + 0xaa0);
      piVar3 = *(int **)(param_1 + 0xa98);
      *(undefined1 *)(param_1 + 0xa93) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar17 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar17);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d030dc(*(undefined4 *)(param_1 + 0xa98));
      }
      *(undefined1 *)(param_1 + 0xa94) = 0;
    }
    *(undefined1 *)(param_1 + 0xa95) = 0;
    if (*(char *)(param_1 + 0xa85) != '\0') {
      piVar3 = *(int **)(param_1 + 0xa9c);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar17 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar17);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d03ce0(*(undefined4 *)(param_1 + 0xa9c));
      }
    }
    *(undefined1 *)(param_1 + 0xa85) = 0;
    if (*(int *)(param_1 + 0x950) != -0x80000000 && *(int *)(param_1 + 0x950) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x954));
    }
    if (*(int *)(param_1 + 0x95c) != -0x80000000 && *(int *)(param_1 + 0x95c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x960));
    }
    if (*(int *)(param_1 + 0x968) != -0x80000000 && *(int *)(param_1 + 0x968) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x96c));
    }
    FUN_00d81034(param_1 + 0x7f8);
    if (*(char *)(param_1 + 0xa86) != '\0') {
      FUN_00d94b68(param_1 + 2000);
    }
    *(undefined2 *)(param_1 + 0xa86) = 0;
    FUN_00d925d0(param_1 + 0x5b0);
    puVar13 = (undefined4 *)(*(int *)(param_1 + 0x764) + 4);
    for (iVar4 = *(int *)(param_1 + 0x768); iVar4 != 0; iVar4 = iVar4 + -1) {
      if (puVar13[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar13);
      }
      puVar13 = puVar13 + 4;
    }
    if (*(int *)(param_1 + 0x760) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x764));
    }
    if (*(int *)(param_1 + 0xa64) != -0x80000000 && *(int *)(param_1 + 0xa64) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa68));
    }
    *(undefined1 *)(param_1 + 0xa88) = 0;
    if (*(char *)(param_1 + 0xa89) != '\0') {
      iVar4 = *(int *)(param_1 + 0x528);
      piVar3 = (int *)(iVar4 + 0xfc);
      do {
        iVar6 = *piVar3;
        bVar17 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar17);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        FUN_0163b708(iVar4 + 0xe8);
      }
      piVar3 = *(int **)(param_1 + 0x528);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar17 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar17);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aad1e0(*(undefined4 *)(param_1 + 0x528));
      }
    }
    *(undefined1 *)(param_1 + 0xa89) = 0;
    if (*(char *)(param_1 + 0xa8a) != '\0') {
      FUN_005c5160(param_1 + 0x518);
    }
    *(undefined1 *)(param_1 + 0xa8a) = 0;
    if (*(char *)(param_1 + 0xa8b) != '\0') {
      piVar3 = *(int **)(param_1 + 0x514);
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar17 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar17);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aa7b14(*(undefined4 *)(param_1 + 0x514));
        }
      }
      piVar3 = *(int **)(param_1 + 0x510);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar17 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar17);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa6194(*(undefined4 *)(param_1 + 0x510));
      }
    }
    *(undefined1 *)(param_1 + 0xa8b) = 0;
    if (*(char *)(param_1 + 0xa8c) != '\0') {
      piVar3 = *(int **)(param_1 + 0xa98);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar17 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar17);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aad0bc(*(undefined4 *)(param_1 + 0xa98));
      }
    }
    piVar3 = *(int **)(param_1 + 0xa5c);
    *(undefined1 *)(param_1 + 0xa8c) = 0;
    if (*(int *)(param_1 + 0xa60) != 0) {
      iVar4 = 1 - *(int *)(param_1 + 0xa60);
      do {
        if (*piVar3 == 2 && piVar3[1] == 0) {
          (*(code *)**(undefined4 **)piVar3[2])();
        }
        else {
          FUN_00f247dc(piVar3);
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 0x44;
      } while (iVar4 != 1);
    }
    if (*(int *)(param_1 + 0xa58) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa5c));
    }
    FUN_005c384c(param_1 + 0x4c8);
    *(undefined2 *)(param_1 + 0xa8d) = 0;
    if (*(char *)(param_1 + 0xa8f) != '\0') {
      if (*(int *)(param_1 + 0x430) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x434));
      }
      uVar9 = *(undefined4 *)(param_1 + 0x440);
      FUN_00f24ed8(uVar9,*(undefined4 *)(param_1 + 0x444));
      if (*(int *)(param_1 + 0x43c) != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
    }
    bVar17 = *(int *)(param_1 + 0x450) != 5 || *(int *)(param_1 + 0x454) != 0;
    iVar4 = 0;
    if (bVar17) {
      iVar4 = *(int *)(param_1 + 0x4b0);
    }
    if (bVar17 && iVar4 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4b4));
    }
    puVar13 = *(undefined4 **)(param_1 + 0x36c);
    uVar9 = *(undefined4 *)(param_1 + 0x368);
    pcVar5 = (code *)*puVar13;
    *(undefined1 *)(param_1 + 0xa8f) = 0;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar9);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(uVar9);
    }
    *(undefined1 *)(param_1 + 0xa90) = 0;
    if (*(char *)(param_1 + 0xa91) != '\0') {
      piVar3 = *(int **)(param_1 + 0xa54);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar17 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar17);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(*(undefined4 *)(param_1 + 0xa54));
      }
    }
    *(undefined1 *)(param_1 + 0xa91) = 0;
    if (*(char *)(param_1 + 0xa92) != '\0') {
      piVar3 = *(int **)(param_1 + 0xa50);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar17 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar17);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(*(undefined4 *)(param_1 + 0xa50));
      }
    }
    *(undefined1 *)(param_1 + 0xa92) = 0;
    return;
  }
  piVar3 = *(int **)(param_1 + 0xa44);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0xa44));
  }
  piVar3 = *(int **)(param_1 + 0xa48);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0xa48));
  }
  piVar3 = *(int **)(param_1 + 800);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(*(undefined4 *)(param_1 + 800),*(undefined4 *)(param_1 + 0x324));
  }
  puVar13 = *(undefined4 **)(param_1 + 0x32c);
  uVar9 = *(undefined4 *)(param_1 + 0x328);
  pcVar5 = (code *)*puVar13;
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(uVar9);
  }
  if (puVar13[1] != 0) {
    thunk_FUN_016d3fb4(uVar9);
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc4));
  }
  uVar9 = *(undefined4 *)(param_1 + 0xd0);
  FUN_00f24ed8(uVar9,*(undefined4 *)(param_1 + 0xd4));
  if (*(int *)(param_1 + 0xcc) != 0) {
    thunk_FUN_016d3fb4(uVar9);
  }
  bVar17 = *(int *)(param_1 + 0xe0) != 5 || *(int *)(param_1 + 0xe4) != 0;
  iVar4 = 0;
  if (bVar17) {
    iVar4 = *(int *)(param_1 + 0x140);
  }
  if (bVar17 && iVar4 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x144));
    if (*(int *)(param_1 + 0x2b0) != -0x80000000 && *(int *)(param_1 + 0x2b0) != 0)
    goto LAB_00d85c5c;
LAB_00d859b8:
    if (*(int *)(param_1 + 700) == -0x80000000 || *(int *)(param_1 + 700) == 0) goto LAB_00d859c8;
  }
  else {
    if (*(int *)(param_1 + 0x2b0) == -0x80000000 || *(int *)(param_1 + 0x2b0) == 0)
    goto LAB_00d859b8;
LAB_00d85c5c:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2b4));
    if (*(int *)(param_1 + 700) == -0x80000000 || *(int *)(param_1 + 700) == 0) goto LAB_00d859c8;
  }
  thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c0));
LAB_00d859c8:
  if (*(int *)(param_1 + 0x2c8) != -0x80000000 && *(int *)(param_1 + 0x2c8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2cc));
  }
  FUN_00d81034(param_1 + 0x158);
  if (-0x7fffffff < *(int *)(param_1 + 0xa38)) {
    puVar13 = (undefined4 *)(*(int *)(param_1 + 0xa3c) + 0x10);
    for (iVar4 = *(int *)(param_1 + 0xa40); iVar4 != 0; iVar4 = iVar4 + -1) {
      if (puVar13[-4] != 0) {
        thunk_FUN_016d3fb4(puVar13[-3]);
      }
      if (puVar13[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar13);
      }
      puVar13 = puVar13 + 6;
    }
    if (*(int *)(param_1 + 0xa38) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa3c));
    }
  }
  FUN_005c384c(param_1 + 0x2d8);
  if (*(int *)(param_1 + 0xa20) != 0) {
    piVar3 = *(int **)(param_1 + 0xa1c);
    iVar4 = 1 - *(int *)(param_1 + 0xa20);
    do {
      if (*piVar3 == 2 && piVar3[1] == 0) {
        (*(code *)**(undefined4 **)piVar3[2])();
      }
      else {
        FUN_00f247dc(piVar3);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x44;
    } while (iVar4 != 1);
  }
  if (*(int *)(param_1 + 0xa18) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa1c));
  }
  piVar3 = *(int **)(param_1 + 0xa4c);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad0bc(*(undefined4 *)(param_1 + 0xa4c));
  }
  piVar3 = *(int **)(param_1 + 0x334);
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa7b14(*(undefined4 *)(param_1 + 0x334));
    }
  }
  piVar3 = *(int **)(param_1 + 0x330);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa6194(*(undefined4 *)(param_1 + 0x330));
  }
  FUN_005c5160(param_1 + 0x338);
  iVar4 = *(int *)(param_1 + 0x348);
  piVar3 = (int *)(iVar4 + 0xfc);
  do {
    iVar6 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    FUN_0163b708(iVar4 + 0xe8);
  }
  piVar3 = *(int **)(param_1 + 0x348);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad1e0(*(undefined4 *)(param_1 + 0x348));
  }
  piVar3 = *(int **)(param_1 + 0x360);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1420(*(undefined4 *)(param_1 + 0x360));
  }
  if (*(int *)(param_1 + 0xa24) == -0x80000000 || *(int *)(param_1 + 0xa24) == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0xa28);
  if (iVar4 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar14 = *(int *)(iVar6 + 8) + 0x10;
  iVar11 = iVar7 * uVar15 + iVar7 + -4;
  iVar7 = iVar14 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar5)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar5)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar5)();
    }
  }
  if ((uint)(iVar7 - iVar4) < uVar10) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar5)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar5)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar5)();
  }
  bVar2 = *(byte *)(iVar6 + 0x14);
  uVar10 = 1 << uVar15;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar6 + 0x10);
    uVar8 = *(uint *)(iVar6 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar5)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar13 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar13;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar13 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar17 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar17);
    *puVar16 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

