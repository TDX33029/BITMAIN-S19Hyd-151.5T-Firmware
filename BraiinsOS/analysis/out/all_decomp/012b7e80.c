// FUN_012b7e80 @ 012b7e80 size=748 calls_out=2 calls_in=7
// strings: 

void FUN_012b7e80(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  int unaff_r4;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint *puVar18;
  uint *puVar19;
  int local_28;
  
  iVar14 = *(int *)(param_1 + 0x38);
  iVar15 = *(int *)(param_1 + 0x34);
  if (iVar14 != 0) {
    iVar10 = 0;
    do {
      piVar6 = (int *)(iVar15 + iVar10 * 0x1c);
      if (*piVar6 != 0) {
        thunk_FUN_016d3fb4(piVar6[1]);
      }
      piVar6 = (int *)piVar6[4];
      if (piVar6 != (int *)0x0) {
        iVar5 = piVar6[1];
        if (iVar5 != 0) {
          if (piVar6[3] != 0) {
            puVar18 = (uint *)*piVar6;
            puVar19 = puVar18 + 1;
            uVar16 = ~*puVar18 & 0x80808080;
            iVar7 = piVar6[3];
            do {
              puVar12 = puVar19;
              if (uVar16 == 0) {
                do {
                  puVar19 = puVar12 + 1;
                  uVar16 = *puVar12;
                  puVar18 = puVar18 + -0x34;
                  puVar12 = puVar19;
                } while ((uVar16 & 0x80808080) == 0x80808080);
                uVar16 = uVar16 & 0x80808080 ^ 0x80808080;
              }
              sVar4 = (short)((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                            (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3);
              if (puVar18[-sVar4 * 0xd + -0xc] != 0) {
                thunk_FUN_016d3fb4(puVar18[-sVar4 * 0xd + -0xb]);
              }
              if (puVar18[-sVar4 * 0xd + -9] != 0) {
                thunk_FUN_016d3fb4(puVar18[-sVar4 * 0xd + -8]);
              }
              if (puVar18[-sVar4 * 0xd + -6] != 0) {
                thunk_FUN_016d3fb4(puVar18[-sVar4 * 0xd + -5]);
              }
              local_28 = iVar7 + -1;
              uVar8 = puVar18[-sVar4 * 0xd + -2];
              uVar16 = uVar16 - 1 & uVar16;
              puVar17 = (undefined4 *)(uVar8 + 4);
              for (uVar11 = puVar18[-sVar4 * 0xd + -1]; uVar11 != 0; uVar11 = uVar11 - 1) {
                if (puVar17[-1] != 0) {
                  thunk_FUN_016d3fb4(*puVar17);
                }
                puVar17 = puVar17 + 3;
              }
              if (puVar18[-sVar4 * 0xd + -3] != 0) {
                thunk_FUN_016d3fb4(uVar8);
              }
              iVar7 = local_28;
            } while (local_28 != 0);
          }
          if (iVar5 * 0x35 != -0x39) {
            thunk_FUN_016d3fb4(*piVar6 + iVar5 * -0x34 + -0x34);
          }
        }
        thunk_FUN_016d3fb4(piVar6);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar14);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_016d3fb4(iVar15);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x44));
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 100));
  }
  piVar6 = *(int **)(param_1 + 0x70);
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar14 = piVar6[1];
  if (iVar14 != 0) {
    iVar15 = piVar6[3];
    local_28 = iVar14;
    if (iVar15 != 0) {
      puVar18 = (uint *)*piVar6;
      puVar19 = puVar18 + 1;
      uVar16 = ~*puVar18 & 0x80808080;
      do {
        puVar12 = puVar19;
        if (uVar16 == 0) {
          do {
            puVar19 = puVar12 + 1;
            uVar16 = *puVar12;
            puVar18 = puVar18 + -0x34;
            puVar12 = puVar19;
          } while ((uVar16 & 0x80808080) == 0x80808080);
          uVar16 = uVar16 & 0x80808080 ^ 0x80808080;
        }
        FUN_00a64f9c(puVar18 + (short)-(short)((uint)LZCOUNT(uVar16 << 0x18 |
                                                             (uVar16 >> 8 & 0xff) << 0x10 |
                                                             (uVar16 >> 0x10 & 0xff) << 8 |
                                                             uVar16 >> 0x18) >> 3) * 0xd + -0xd);
        iVar15 = iVar15 + -1;
        uVar16 = uVar16 - 1 & uVar16;
      } while (iVar15 != 0);
    }
    if (local_28 * 0x35 != -0x39) {
      thunk_FUN_016d3fb4(*piVar6 + local_28 * -0x34 + -0x34);
    }
  }
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar16 = *(byte *)((int)piVar6 + -3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar15 = uVar8 - 0x10, uVar8 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar8 = (uint)(*(byte *)((int)piVar6 + -3) >> 5);
  iVar5 = *(int *)(iVar14 + 8) + 0x10;
  iVar10 = iVar15 * uVar16 + iVar15 + -4;
  iVar15 = iVar5 + iVar10;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar15 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar15 - (int)piVar6) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar5 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar14 + 0x14);
  uVar8 = 1 << uVar16;
  *(undefined1 *)((int)piVar6 + -3) = 0xff;
  *(undefined2 *)((int)piVar6 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar14 + 0x10);
    uVar11 = *(uint *)(iVar14 + 0xc) | uVar13;
    if ((uVar8 & uVar11) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar11 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar14,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar17 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar17;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar17 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar8 + uVar13;
      return;
    }
    puVar19 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar19);
      uVar11 = *puVar19;
      if (uVar13 != uVar11) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar19);
    } while (!bVar3);
    *puVar19 = uVar8 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar11) {
      return;
    }
  } while( true );
}

