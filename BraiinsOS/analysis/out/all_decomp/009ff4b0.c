// FUN_009ff4b0 @ 009ff4b0 size=480 calls_out=2 calls_in=1
// strings: 

void FUN_009ff4b0(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int unaff_r4;
  uint *puVar12;
  uint *puVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  uint local_28;
  
  iVar7 = param_1[1];
  if (iVar7 != 0) {
    iVar8 = param_1[3];
    if (iVar8 != 0) {
      puVar9 = (uint *)*param_1;
      puVar12 = puVar9 + 1;
      uVar10 = ~*puVar9 & 0x80808080;
      do {
        puVar13 = puVar12;
        if (uVar10 == 0) {
          do {
            puVar12 = puVar13 + 1;
            uVar10 = *puVar13;
            puVar9 = puVar9 + -0x18;
            puVar13 = puVar12;
          } while ((uVar10 & 0x80808080) == 0x80808080);
          uVar10 = uVar10 & 0x80808080 ^ 0x80808080;
        }
        uVar15 = (uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                               (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
        uVar4 = puVar9[uVar15 * -6 + -2];
        local_28 = puVar9[uVar15 * -6 + -1];
        uVar11 = 0;
        while (uVar11 != local_28) {
          uVar20 = uVar11 + 1;
          piVar5 = (int *)(uVar4 + uVar11 * 0x28);
          iVar18 = piVar5[1];
          uVar11 = uVar20;
          if (iVar18 != 0) {
            iVar19 = piVar5[3];
            if (iVar19 != 0) {
              puVar21 = (uint *)*piVar5;
              puVar13 = puVar21 + 1;
              uVar20 = ~*puVar21 & 0x80808080;
              do {
                puVar17 = puVar13;
                if (uVar20 == 0) {
                  do {
                    puVar13 = puVar17 + 1;
                    uVar20 = *puVar17;
                    puVar21 = puVar21 + -0x28;
                    puVar17 = puVar13;
                  } while ((uVar20 & 0x80808080) == 0x80808080);
                  uVar20 = uVar20 & 0x80808080 ^ 0x80808080;
                }
                FUN_0169d780(puVar21 + ((uint)LZCOUNT(uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10
                                                      | (uVar20 >> 0x10 & 0xff) << 8 |
                                                      uVar20 >> 0x18) >> 3) * -10 + -4);
                iVar19 = iVar19 + -1;
                uVar20 = uVar20 - 1 & uVar20;
              } while (iVar19 != 0);
            }
            if (iVar18 * 0x29 != -0x2d) {
              thunk_FUN_016d3fb4(*piVar5 + iVar18 * -0x28 + -0x28);
            }
          }
        }
        if (puVar9[uVar15 * -6 + -3] != 0) {
          thunk_FUN_016d3fb4(puVar9[uVar15 * -6 + -2]);
        }
        uVar10 = uVar10 - 1 & uVar10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (iVar7 * 0x19 != -0x1d) {
      iVar7 = *param_1 + iVar7 * -0x18;
      if (iVar7 + -0x18 == 0) {
        return;
      }
      iVar8 = FUN_016d3bc8();
      uVar10 = *(byte *)(iVar7 + -0x1b) & 0x1f;
      if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
         (uVar15 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar18 = uVar15 - 0x10, uVar15 == 0)) {
        iVar18 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar15 = (uint)(*(byte *)(iVar7 + -0x1b) >> 5);
      iVar16 = *(int *)(iVar8 + 8) + 0x10;
      iVar19 = iVar18 * uVar10 + iVar18 + -4;
      iVar18 = iVar16 + iVar19;
      if (4 < uVar15) {
        if (uVar15 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar15 = *(uint *)(iVar18 + -4);
        if (uVar15 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar18 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar18 - (iVar7 + -0x18)) < uVar15) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar18 - uVar15) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar16 + iVar19) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar8 + 0x14);
      uVar15 = 1 << uVar10;
      *(undefined1 *)(iVar7 + -0x1b) = 0xff;
      *(undefined2 *)(iVar7 + -0x1a) = 0;
      do {
        uVar4 = *(uint *)(iVar8 + 0x10);
        uVar11 = *(uint *)(iVar8 + 0xc) | uVar4;
        if ((uVar15 & uVar11) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar4 == 0) || (uVar11 + uVar15 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar8,uVar10);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar14 = *puVar6;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar6 = uVar14;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar8 + 0x10) = uVar15 + uVar4;
          return;
        }
        puVar9 = (uint *)(iVar8 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar9);
          uVar11 = *puVar9;
          if (uVar4 != uVar11) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar9);
        } while (!bVar3);
        *puVar9 = uVar15 + uVar4;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar4 == uVar11) {
          return;
        }
      } while( true );
    }
  }
  return;
}

