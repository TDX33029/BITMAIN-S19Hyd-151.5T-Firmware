// FUN_00f39064 @ 00f39064 size=328 calls_out=3 calls_in=1
// strings: 

void FUN_00f39064(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int unaff_r4;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  int *local_28;
  
  iVar7 = param_1[1];
  if (iVar7 != 0) {
    iVar15 = param_1[3];
    local_28 = param_1;
    if (iVar15 != 0) {
      puVar13 = (uint *)*param_1;
      puVar17 = puVar13 + 1;
      uVar16 = ~*puVar13 & 0x80808080;
      do {
        puVar8 = puVar17;
        if (uVar16 == 0) {
          do {
            puVar17 = puVar8 + 1;
            uVar16 = *puVar8;
            puVar13 = puVar13 + -0x28;
            puVar8 = puVar17;
          } while ((uVar16 & 0x80808080) == 0x80808080);
          uVar16 = uVar16 & 0x80808080 ^ 0x80808080;
        }
        uVar10 = (uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                               (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3;
        if (puVar13[uVar10 * -10 + -10] != 0) {
          thunk_FUN_016d3fb4(puVar13[uVar10 * -10 + -9]);
        }
        iVar4 = 4;
        if (1 < puVar13[uVar10 * -10 + -6]) {
          iVar4 = puVar13[uVar10 * -10 + -6] - 2;
        }
        if (3 < iVar4 - 1U) {
          if (iVar4 == 0) {
            uVar5 = puVar13[uVar10 * -10 + -5];
          }
          else {
            if (iVar4 != 5) {
              FUN_00f47964(puVar13 + uVar10 * -10 + -5);
              goto LAB_00f390b8;
            }
            FUN_00f3c818(puVar13 + uVar10 * -10 + -5);
            uVar5 = puVar13[uVar10 * -10 + -5];
          }
          if (uVar5 != 0) {
            thunk_FUN_016d3fb4(puVar13[uVar10 * -10 + -4]);
          }
        }
LAB_00f390b8:
        iVar15 = iVar15 + -1;
        uVar16 = uVar16 - 1 & uVar16;
      } while (iVar15 != 0);
    }
    if (iVar7 * 0x29 != -0x2d) {
      iVar7 = *local_28 + iVar7 * -0x28;
      if (iVar7 + -0x28 == 0) {
        return;
      }
      iVar15 = FUN_016d3bc8();
      uVar16 = *(byte *)(iVar7 + -0x2b) & 0x1f;
      if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar4 = uVar10 - 0x10, uVar10 == 0)) {
        iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar10 = (uint)(*(byte *)(iVar7 + -0x2b) >> 5);
      iVar14 = *(int *)(iVar15 + 8) + 0x10;
      iVar11 = iVar4 * uVar16 + iVar4 + -4;
      iVar4 = iVar14 + iVar11;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar10 = *(uint *)(iVar4 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar4 - (iVar7 + -0x28)) < uVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar4 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar15 + 0x14);
      uVar10 = 1 << uVar16;
      *(undefined1 *)(iVar7 + -0x2b) = 0xff;
      *(undefined2 *)(iVar7 + -0x2a) = 0;
      do {
        uVar12 = *(uint *)(iVar15 + 0x10);
        uVar5 = *(uint *)(iVar15 + 0xc) | uVar12;
        if ((uVar10 & uVar5) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar12 == 0) || (uVar5 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar15,uVar16);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar6;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar6 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar15 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar17 = (uint *)(iVar15 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar5 = *puVar17;
          if (uVar12 != uVar5) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar3);
        *puVar17 = uVar10 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar5) {
          return;
        }
      } while( true );
    }
  }
  return;
}

