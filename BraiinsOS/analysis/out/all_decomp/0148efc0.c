// FUN_0148efc0 @ 0148efc0 size=240 calls_out=1 calls_in=6
// strings: 

void FUN_0148efc0(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int unaff_r4;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  int *local_28;
  
  iVar15 = param_1[1];
  if (iVar15 != 0) {
    iVar16 = param_1[3];
    local_28 = param_1;
    if (iVar16 != 0) {
      puVar14 = (uint *)*param_1;
      puVar17 = puVar14 + 1;
      uVar12 = ~*puVar14 & 0x80808080;
      do {
        puVar7 = puVar17;
        if (uVar12 == 0) {
          do {
            puVar17 = puVar7 + 1;
            uVar12 = *puVar7;
            puVar14 = puVar14 + -0x18;
            puVar7 = puVar17;
          } while ((uVar12 & 0x80808080) == 0x80808080);
          uVar12 = uVar12 & 0x80808080 ^ 0x80808080;
        }
        uVar9 = (uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                              (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
        if (puVar14[uVar9 * -6 + -6] != 0) {
          thunk_FUN_016d3fb4(puVar14[uVar9 * -6 + -5]);
        }
        if (puVar14[uVar9 * -6 + -3] != 0) {
          thunk_FUN_016d3fb4(puVar14[uVar9 * -6 + -2]);
        }
        iVar16 = iVar16 + -1;
        uVar12 = uVar12 - 1 & uVar12;
      } while (iVar16 != 0);
    }
    if (iVar15 * 0x19 != -0x1d) {
      iVar15 = *local_28 + iVar15 * -0x18;
      if (iVar15 + -0x18 == 0) {
        return;
      }
      iVar16 = FUN_016d3bc8();
      uVar12 = *(byte *)(iVar15 + -0x1b) & 0x1f;
      if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar5 = uVar9 - 0x10, uVar9 == 0)) {
        iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar9 = (uint)(*(byte *)(iVar15 + -0x1b) >> 5);
      iVar13 = *(int *)(iVar16 + 8) + 0x10;
      iVar10 = iVar5 * uVar12 + iVar5 + -4;
      iVar5 = iVar13 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar9 = *(uint *)(iVar5 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar5 - (iVar15 + -0x18)) < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar5 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar16 + 0x14);
      uVar9 = 1 << uVar12;
      *(undefined1 *)(iVar15 + -0x1b) = 0xff;
      *(undefined2 *)(iVar15 + -0x1a) = 0;
      do {
        uVar11 = *(uint *)(iVar16 + 0x10);
        uVar6 = *(uint *)(iVar16 + 0xc) | uVar11;
        if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar16,uVar12);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar4;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar4 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar16 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar17 = (uint *)(iVar16 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar6 = *puVar17;
          if (uVar11 != uVar6) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar3);
        *puVar17 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar6) {
          return;
        }
      } while( true );
    }
  }
  return;
}

