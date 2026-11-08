// FUN_011a4730 @ 011a4730 size=260 calls_out=2 calls_in=1
// strings: 

void FUN_011a4730(int *param_1)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int unaff_r4;
  undefined4 uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  uint *puVar19;
  int local_28;
  
  local_28 = param_1[1];
  if (local_28 != 0) {
    iVar18 = param_1[3];
    if (iVar18 != 0) {
      puVar17 = (uint *)*param_1;
      puVar19 = puVar17 + 1;
      uVar15 = ~*puVar17 & 0x80808080;
      do {
        puVar11 = puVar19;
        if (uVar15 == 0) {
          do {
            puVar19 = puVar11 + 1;
            uVar15 = *puVar11;
            puVar17 = puVar17 + -0x18;
            puVar11 = puVar19;
          } while ((uVar15 & 0x80808080) == 0x80808080);
          uVar15 = uVar15 & 0x80808080 ^ 0x80808080;
        }
        uVar12 = uVar15 >> 8;
        uVar9 = uVar15 >> 0x10;
        uVar14 = uVar15 >> 0x18;
        uVar1 = uVar15 << 0x18;
        uVar15 = uVar15 - 1 & uVar15;
        iVar18 = iVar18 + -1;
        uVar12 = (uint)LZCOUNT(uVar1 | (uVar12 & 0xff) << 0x10 | (uVar9 & 0xff) << 8 | uVar14) >> 3;
        piVar5 = (int *)puVar17[uVar12 * -6 + -6];
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0143daec(puVar17[uVar12 * -6 + -6],puVar17[uVar12 * -6 + -5]);
        }
        FUN_011a4834(puVar17 + uVar12 * -6 + -4);
      } while (iVar18 != 0);
    }
    if (local_28 * 0x19 != -0x1d) {
      iVar18 = *param_1 + local_28 * -0x18;
      if (iVar18 + -0x18 == 0) {
        return;
      }
      iVar7 = FUN_016d3bc8();
      uVar15 = *(byte *)(iVar18 + -0x1b) & 0x1f;
      if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
         (uVar12 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar8 = uVar12 - 0x10, uVar12 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar12 = (uint)(*(byte *)(iVar18 + -0x1b) >> 5);
      iVar16 = *(int *)(iVar7 + 8) + 0x10;
      iVar13 = iVar8 * uVar15 + iVar8 + -4;
      iVar8 = iVar16 + iVar13;
      if (4 < uVar12) {
        if (uVar12 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar12 = *(uint *)(iVar8 + -4);
        if (uVar12 < 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar3)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar3)();
        }
      }
      if ((uint)(iVar8 - (iVar18 + -0x18)) < uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar8 - uVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar16 + iVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar4 = *(byte *)(iVar7 + 0x14);
      uVar12 = 1 << uVar15;
      *(undefined1 *)(iVar18 + -0x1b) = 0xff;
      *(undefined2 *)(iVar18 + -0x1a) = 0;
      do {
        uVar14 = *(uint *)(iVar7 + 0x10);
        uVar9 = *(uint *)(iVar7 + 0xc) | uVar14;
        if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar14 == 0) || (uVar9 + uVar12 == (2 << (bVar4 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar7,uVar15);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar6;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar6 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar7 + 0x10) = uVar12 + uVar14;
          return;
        }
        puVar19 = (uint *)(iVar7 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar19);
          uVar9 = *puVar19;
          if (uVar14 != uVar9) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar19);
        } while (!bVar2);
        *puVar19 = uVar12 + uVar14;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar14 == uVar9) {
          return;
        }
      } while( true );
    }
  }
  return;
}

