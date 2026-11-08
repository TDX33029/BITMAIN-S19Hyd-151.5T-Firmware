// FUN_00ee1460 @ 00ee1460 size=276 calls_out=2 calls_in=4
// strings: 

void FUN_00ee1460(int *param_1)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int unaff_r4;
  uint *puVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  int *local_28;
  
  iVar6 = param_1[1];
  if (iVar6 != 0) {
    iVar18 = param_1[3];
    local_28 = param_1;
    if (iVar18 != 0) {
      puVar15 = (uint *)*param_1;
      puVar19 = puVar15 + 1;
      uVar17 = ~*puVar15 & 0x80808080;
      do {
        puVar10 = puVar19;
        if (uVar17 == 0) {
          do {
            puVar19 = puVar10 + 1;
            uVar17 = *puVar10;
            puVar15 = puVar15 + -0x30;
            puVar10 = puVar19;
          } while ((uVar17 & 0x80808080) == 0x80808080);
          uVar17 = uVar17 & 0x80808080 ^ 0x80808080;
        }
        uVar12 = uVar17 >> 8;
        uVar9 = uVar17 >> 0x10;
        uVar14 = uVar17 >> 0x18;
        uVar1 = uVar17 << 0x18;
        uVar17 = uVar17 - 1 & uVar17;
        iVar18 = iVar18 + -1;
        uVar12 = (uint)LZCOUNT(uVar1 | (uVar12 & 0xff) << 0x10 | (uVar9 & 0xff) << 8 | uVar14) >> 3;
        piVar7 = (int *)puVar15[uVar12 * -0xc + -2];
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01626f40(puVar15[uVar12 * -0xc + -2]);
        }
        FUN_005c3320(puVar15 + uVar12 * -0xc + -10);
      } while (iVar18 != 0);
    }
    if (iVar6 * 0x31 != -0x35) {
      iVar6 = *local_28 + iVar6 * -0x30;
      if (iVar6 + -0x30 == 0) {
        return;
      }
      iVar18 = FUN_016d3bc8();
      uVar17 = *(byte *)(iVar6 + -0x33) & 0x1f;
      if (((*(byte *)(iVar18 + 0x14) & 0x1f) != 0) ||
         (uVar12 = *(uint *)(iVar18 + 0x14) & 0xfffff000, iVar8 = uVar12 - 0x10, uVar12 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar18 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar12 = (uint)(*(byte *)(iVar6 + -0x33) >> 5);
      iVar16 = *(int *)(iVar18 + 8) + 0x10;
      iVar13 = iVar8 * uVar17 + iVar8 + -4;
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
      if ((uint)(iVar8 - (iVar6 + -0x30)) < uVar12) {
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
      bVar4 = *(byte *)(iVar18 + 0x14);
      uVar12 = 1 << uVar17;
      *(undefined1 *)(iVar6 + -0x33) = 0xff;
      *(undefined2 *)(iVar6 + -0x32) = 0;
      do {
        uVar14 = *(uint *)(iVar18 + 0x10);
        uVar9 = *(uint *)(iVar18 + 0xc) | uVar14;
        if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar14 == 0) || (uVar9 + uVar12 == (2 << (bVar4 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar18,uVar17);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar11 = *puVar5;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar5 = uVar11;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar18 + 0x10) = uVar12 + uVar14;
          return;
        }
        puVar19 = (uint *)(iVar18 + 0x10);
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

