// FUN_012b9874 @ 012b9874 size=468 calls_out=1 calls_in=2
// strings: 

void FUN_012b9874(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  int unaff_r4;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint *puVar18;
  uint *puVar19;
  int local_28;
  
  iVar9 = param_1[2];
  iVar14 = param_1[1];
  if (iVar9 != 0) {
    iVar13 = 0;
    do {
      piVar6 = *(int **)(iVar14 + iVar13 * 0x18 + 0x10);
      if (piVar6 != (int *)0x0) {
        iVar5 = piVar6[1];
        if (iVar5 != 0) {
          if (piVar6[3] != 0) {
            puVar18 = (uint *)*piVar6;
            puVar19 = puVar18 + 1;
            uVar16 = ~*puVar18 & 0x80808080;
            iVar12 = piVar6[3];
            do {
              puVar15 = puVar19;
              if (uVar16 == 0) {
                do {
                  puVar19 = puVar15 + 1;
                  uVar16 = *puVar15;
                  puVar18 = puVar18 + -0x34;
                  puVar15 = puVar19;
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
              local_28 = iVar12 + -1;
              uVar7 = puVar18[-sVar4 * 0xd + -2];
              uVar16 = uVar16 - 1 & uVar16;
              puVar17 = (undefined4 *)(uVar7 + 4);
              for (uVar10 = puVar18[-sVar4 * 0xd + -1]; uVar10 != 0; uVar10 = uVar10 - 1) {
                if (puVar17[-1] != 0) {
                  thunk_FUN_016d3fb4(*puVar17);
                }
                puVar17 = puVar17 + 3;
              }
              if (puVar18[-sVar4 * 0xd + -3] != 0) {
                thunk_FUN_016d3fb4(uVar7);
              }
              iVar12 = local_28;
            } while (local_28 != 0);
          }
          if (iVar5 * 0x35 != -0x39) {
            thunk_FUN_016d3fb4(*piVar6 + iVar5 * -0x34 + -0x34);
          }
        }
        thunk_FUN_016d3fb4(piVar6);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != iVar9);
  }
  if (*param_1 == 0) {
    return;
  }
  if (iVar14 == 0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar13 = uVar7 - 0x10, uVar7 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)(iVar14 + -3) >> 5);
  iVar12 = *(int *)(iVar9 + 8) + 0x10;
  iVar5 = iVar13 * uVar16 + iVar13 + -4;
  iVar13 = iVar12 + iVar5;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar7 = *(uint *)(iVar13 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar13 - iVar14) < uVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar5) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar9 + 0x14);
  uVar7 = 1 << uVar16;
  *(undefined1 *)(iVar14 + -3) = 0xff;
  *(undefined2 *)(iVar14 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar9 + 0x10);
    uVar10 = *(uint *)(iVar9 + 0xc) | uVar11;
    if ((uVar7 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar10 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar9,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar17 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar17;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar17 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar7 + uVar11;
      return;
    }
    puVar19 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar19);
      uVar10 = *puVar19;
      if (uVar11 != uVar10) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar19);
    } while (!bVar3);
    *puVar19 = uVar7 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar10) {
      return;
    }
  } while( true );
}

