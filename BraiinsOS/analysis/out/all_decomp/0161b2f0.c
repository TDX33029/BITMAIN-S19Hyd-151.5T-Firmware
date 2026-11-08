// FUN_0161b2f0 @ 0161b2f0 size=248 calls_out=2 calls_in=4
// strings: 

void FUN_0161b2f0(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  int local_28;
  
  local_28 = param_1[1];
  if (local_28 != 0) {
    iVar16 = param_1[3];
    if (iVar16 != 0) {
      puVar15 = (uint *)*param_1;
      puVar17 = puVar15 + 1;
      uVar13 = ~*puVar15 & 0x80808080;
      do {
        puVar9 = puVar17;
        if (uVar13 == 0) {
          do {
            puVar17 = puVar9 + 1;
            uVar13 = *puVar9;
            puVar15 = puVar15 + -0x40;
            puVar9 = puVar17;
          } while ((uVar13 & 0x80808080) == 0x80808080);
          uVar13 = uVar13 & 0x80808080 ^ 0x80808080;
        }
        uVar10 = LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                         (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) & 0x1ffffff8;
        if (puVar15[uVar10 * -2 + -0x10] != 0) {
          thunk_FUN_016d3fb4(puVar15[uVar10 * -2 + -0xf]);
        }
        if (puVar15[uVar10 * -2 + -4] != 0) {
          thunk_FUN_016d3fb4(puVar15[uVar10 * -2 + -3]);
        }
        if (puVar15[uVar10 * -2 + -0xc] != 0) {
          FUN_0161b2f0();
        }
        iVar16 = iVar16 + -1;
        uVar13 = uVar13 - 1 & uVar13;
      } while (iVar16 != 0);
    }
    if (local_28 * 0x41 != -0x45) {
      iVar16 = *param_1 + local_28 * -0x40;
      if (iVar16 + -0x40 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar13 = *(byte *)(iVar16 + -0x43) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar10 = (uint)(*(byte *)(iVar16 + -0x43) >> 5);
      iVar14 = *(int *)(iVar4 + 8) + 0x10;
      iVar11 = iVar6 * uVar13 + iVar6 + -4;
      iVar6 = iVar14 + iVar11;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar10 = *(uint *)(iVar6 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar6 - (iVar16 + -0x40)) < uVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar4 + 0x14);
      uVar10 = 1 << uVar13;
      *(undefined1 *)(iVar16 + -0x43) = 0xff;
      *(undefined2 *)(iVar16 + -0x42) = 0;
      do {
        uVar12 = *(uint *)(iVar4 + 0x10);
        uVar7 = *(uint *)(iVar4 + 0xc) | uVar12;
        if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar4,uVar13);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar5;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar5 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar17 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar7 = *puVar17;
          if (uVar12 != uVar7) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar3);
        *puVar17 = uVar10 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

