// FUN_011a3c98 @ 011a3c98 size=228 calls_out=1 calls_in=0
// strings: 

void FUN_011a3c98(int *param_1)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  undefined4 uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 uStack_28;
  
  iVar16 = param_1[1];
  if (iVar16 != 0) {
    iVar17 = param_1[3];
    if (iVar17 != 0) {
      puVar15 = (uint *)*param_1;
      puVar19 = puVar15 + 1;
      uVar18 = ~*puVar15 & 0x80808080;
      do {
        puVar10 = puVar19;
        if (uVar18 == 0) {
          do {
            puVar19 = puVar10 + 1;
            uVar18 = *puVar10;
            puVar15 = puVar15 + -8;
            puVar10 = puVar19;
          } while ((uVar18 & 0x80808080) == 0x80808080);
          uVar18 = uVar18 & 0x80808080 ^ 0x80808080;
        }
        uVar11 = uVar18 >> 8;
        uVar8 = uVar18 >> 0x10;
        uVar13 = uVar18 >> 0x18;
        uVar1 = uVar18 << 0x18;
        uVar18 = uVar18 - 1 & uVar18;
        iVar17 = iVar17 + -1;
        piVar6 = *(int **)((int)puVar15 +
                          (-4 - (LZCOUNT(uVar1 | (uVar11 & 0xff) << 0x10 | (uVar8 & 0xff) << 8 |
                                         uVar13) & 0x38U)));
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_011e0ca8();
        }
      } while (iVar17 != 0);
    }
    if (iVar16 * 9 != -0xd) {
      iVar16 = *param_1 + iVar16 * -8;
      if (iVar16 + -8 == 0) {
        return;
      }
      iVar17 = FUN_016d3bc8();
      uVar18 = *(byte *)(iVar16 + -0xb) & 0x1f;
      if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar11 = (uint)(*(byte *)(iVar16 + -0xb) >> 5);
      iVar14 = *(int *)(iVar17 + 8) + 0x10;
      iVar12 = iVar7 * uVar18 + iVar7 + -4;
      iVar7 = iVar14 + iVar12;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar11 = *(uint *)(iVar7 + -4);
        if (uVar11 < 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar3)();
        }
        if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar3)();
        }
      }
      if ((uint)(iVar7 - (iVar16 + -8)) < uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar4 = *(byte *)(iVar17 + 0x14);
      uVar11 = 1 << uVar18;
      *(undefined1 *)(iVar16 + -0xb) = 0xff;
      *(undefined2 *)(iVar16 + -10) = 0;
      do {
        uVar13 = *(uint *)(iVar17 + 0x10);
        uVar8 = *(uint *)(iVar17 + 0xc) | uVar13;
        if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar4 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar17,uVar18);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar5;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar5 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar17 + 0x10) = uVar11 + uVar13;
          return;
        }
        puVar19 = (uint *)(iVar17 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar19);
          uVar8 = *puVar19;
          if (uVar13 != uVar8) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar19);
        } while (!bVar2);
        *puVar19 = uVar11 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

