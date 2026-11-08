// FUN_0148eea4 @ 0148eea4 size=252 calls_out=1 calls_in=35
// strings: 

void FUN_0148eea4(int *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int unaff_r4;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  uint *puVar17;
  int *local_28;
  
  iVar3 = param_1[1];
  if (iVar3 != 0) {
    iVar16 = param_1[3];
    local_28 = param_1;
    if (iVar16 != 0) {
      puVar13 = (uint *)*param_1;
      puVar17 = puVar13 + 1;
      uVar11 = ~*puVar13 & 0x80808080;
      do {
        puVar7 = puVar17;
        if (uVar11 == 0) {
          do {
            puVar17 = puVar7 + 1;
            uVar11 = *puVar7;
            puVar13 = puVar13 + -0x18;
            puVar7 = puVar17;
          } while ((uVar11 & 0x80808080) == 0x80808080);
          uVar11 = uVar11 & 0x80808080 ^ 0x80808080;
        }
        uVar8 = (uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                              (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
        uVar14 = puVar13[uVar8 * -6 + -2];
        puVar15 = (undefined4 *)puVar13[uVar8 * -6 + -1];
        pcVar4 = (code *)*puVar15;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar14);
        }
        if (puVar15[1] != 0) {
          thunk_FUN_016d3fb4(uVar14);
        }
        iVar16 = iVar16 + -1;
        uVar11 = uVar11 - 1 & uVar11;
      } while (iVar16 != 0);
    }
    if (iVar3 * 0x19 != -0x1d) {
      iVar3 = *local_28 + iVar3 * -0x18;
      if (iVar3 + -0x18 == 0) {
        return;
      }
      iVar16 = FUN_016d3bc8();
      uVar11 = *(byte *)(iVar3 + -0x1b) & 0x1f;
      if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
         (uVar8 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar5 = uVar8 - 0x10, uVar8 == 0)) {
        iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar8 = (uint)(*(byte *)(iVar3 + -0x1b) >> 5);
      iVar12 = *(int *)(iVar16 + 8) + 0x10;
      iVar9 = iVar5 * uVar11 + iVar5 + -4;
      iVar5 = iVar12 + iVar9;
      if (4 < uVar8) {
        if (uVar8 != 5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar4)();
        }
        uVar8 = *(uint *)(iVar5 + -4);
        if (uVar8 < 5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar4)();
        }
        if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar4)();
        }
      }
      if ((uint)(iVar5 - (iVar3 + -0x18)) < uVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar4)();
      }
      if (*(char *)(iVar5 - uVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar4)();
      }
      if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar4)();
      }
      bVar1 = *(byte *)(iVar16 + 0x14);
      uVar8 = 1 << uVar11;
      *(undefined1 *)(iVar3 + -0x1b) = 0xff;
      *(undefined2 *)(iVar3 + -0x1a) = 0;
      do {
        uVar10 = *(uint *)(iVar16 + 0x10);
        uVar14 = *(uint *)(iVar16 + 0xc) | uVar10;
        if ((uVar8 & uVar14) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar4)();
        }
        if ((uVar10 == 0) || (uVar14 + uVar8 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar16,uVar11);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar15 = (undefined4 *)FUN_016d2bc8();
          uVar6 = *puVar15;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar15 = uVar6;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar16 + 0x10) = uVar8 + uVar10;
          return;
        }
        puVar17 = (uint *)(iVar16 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar14 = *puVar17;
          if (uVar10 != uVar14) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar2);
        *puVar17 = uVar8 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar14) {
          return;
        }
      } while( true );
    }
  }
  return;
}

