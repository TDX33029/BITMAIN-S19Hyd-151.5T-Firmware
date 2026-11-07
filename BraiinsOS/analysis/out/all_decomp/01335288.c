// FUN_01335288 @ 01335288 size=208 calls_out=1 calls_in=0
// strings: 

void FUN_01335288(int *param_1)

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
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  int local_28;
  
  local_28 = param_1[1];
  if (local_28 != 0) {
    iVar13 = param_1[3];
    if (iVar13 != 0) {
      puVar15 = (uint *)*param_1;
      puVar17 = puVar15 + 1;
      uVar16 = ~*puVar15 & 0x80808080;
      do {
        puVar9 = puVar17;
        if (uVar16 == 0) {
          do {
            puVar17 = puVar9 + 1;
            uVar16 = *puVar9;
            puVar15 = puVar15 + -0x34;
            puVar9 = puVar17;
          } while ((uVar16 & 0x80808080) == 0x80808080);
          uVar16 = uVar16 & 0x80808080 ^ 0x80808080;
        }
        FUN_01334a60(puVar15 + (short)-(short)((uint)LZCOUNT(uVar16 << 0x18 |
                                                             (uVar16 >> 8 & 0xff) << 0x10 |
                                                             (uVar16 >> 0x10 & 0xff) << 8 |
                                                             uVar16 >> 0x18) >> 3) * 0xd + -0xc);
        iVar13 = iVar13 + -1;
        uVar16 = uVar16 - 1 & uVar16;
      } while (iVar13 != 0);
    }
    if (local_28 * 0x35 != -0x39) {
      iVar13 = *param_1 + local_28 * -0x34;
      if (iVar13 + -0x34 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar16 = *(byte *)(iVar13 + -0x37) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar10 = (uint)(*(byte *)(iVar13 + -0x37) >> 5);
      iVar14 = *(int *)(iVar4 + 8) + 0x10;
      iVar11 = iVar6 * uVar16 + iVar6 + -4;
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
      if ((uint)(iVar6 - (iVar13 + -0x34)) < uVar10) {
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
      uVar10 = 1 << uVar16;
      *(undefined1 *)(iVar13 + -0x37) = 0xff;
      *(undefined2 *)(iVar13 + -0x36) = 0;
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
          FUN_016d3ca8(&local_28,iVar4,uVar16);
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

