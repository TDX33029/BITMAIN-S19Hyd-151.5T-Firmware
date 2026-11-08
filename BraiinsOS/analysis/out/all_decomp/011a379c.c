// FUN_011a379c @ 011a379c size=260 calls_out=2 calls_in=1
// strings: 

void FUN_011a379c(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  undefined4 uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  uint *puVar18;
  int local_28;
  
  local_28 = param_1[1];
  if (local_28 != 0) {
    iVar17 = param_1[3];
    if (iVar17 != 0) {
      puVar16 = (uint *)*param_1;
      puVar18 = puVar16 + 1;
      uVar14 = ~*puVar16 & 0x80808080;
      do {
        puVar10 = puVar18;
        if (uVar14 == 0) {
          do {
            puVar18 = puVar10 + 1;
            uVar14 = *puVar10;
            puVar16 = puVar16 + -0x14;
            puVar10 = puVar18;
          } while ((uVar14 & 0x80808080) == 0x80808080);
          uVar14 = uVar14 & 0x80808080 ^ 0x80808080;
        }
        uVar11 = (uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                               (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3;
        FUN_011a38e0(puVar16 + uVar11 * -5 + -5);
        iVar17 = iVar17 + -1;
        uVar14 = uVar14 - 1 & uVar14;
        piVar4 = (int *)puVar16[uVar11 * -5 + -1];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_011e12f4(puVar16[uVar11 * -5 + -1]);
        }
      } while (iVar17 != 0);
    }
    if (local_28 * 0x15 != -0x19) {
      iVar17 = *param_1 + local_28 * -0x14;
      if (iVar17 + -0x14 == 0) {
        return;
      }
      iVar6 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar17 + -0x17) & 0x1f;
      if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar11 = (uint)(*(byte *)(iVar17 + -0x17) >> 5);
      iVar15 = *(int *)(iVar6 + 8) + 0x10;
      iVar12 = iVar7 * uVar14 + iVar7 + -4;
      iVar7 = iVar15 + iVar12;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar11 = *(uint *)(iVar7 + -4);
        if (uVar11 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar7 - (iVar17 + -0x14)) < uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar6 + 0x14);
      uVar11 = 1 << uVar14;
      *(undefined1 *)(iVar17 + -0x17) = 0xff;
      *(undefined2 *)(iVar17 + -0x16) = 0;
      do {
        uVar13 = *(uint *)(iVar6 + 0x10);
        uVar8 = *(uint *)(iVar6 + 0xc) | uVar13;
        if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar6,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar5;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar5 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar6 + 0x10) = uVar11 + uVar13;
          return;
        }
        puVar18 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar18);
          uVar8 = *puVar18;
          if (uVar13 != uVar8) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar18);
        } while (!bVar1);
        *puVar18 = uVar11 + uVar13;
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

