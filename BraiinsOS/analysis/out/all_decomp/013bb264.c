// FUN_013bb264 @ 013bb264 size=244 calls_out=1 calls_in=0
// strings: 

void FUN_013bb264(int *param_1)

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
  uint *puVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  undefined4 uStack_28;
  
  iVar17 = param_1[1];
  if (iVar17 != 0) {
    iVar18 = param_1[3];
    if (iVar18 != 0) {
      puVar16 = (uint *)*param_1;
      puVar19 = puVar16 + 1;
      uVar14 = ~*puVar16 & 0x80808080;
      do {
        puVar9 = puVar19;
        if (uVar14 == 0) {
          do {
            puVar19 = puVar9 + 1;
            uVar14 = *puVar9;
            puVar16 = puVar16 + -0xc;
            puVar9 = puVar19;
          } while ((uVar14 & 0x80808080) == 0x80808080);
          uVar14 = uVar14 & 0x80808080 ^ 0x80808080;
        }
        uVar11 = uVar14 >> 8;
        uVar8 = uVar14 >> 0x10;
        uVar13 = uVar14 >> 0x18;
        uVar1 = uVar14 << 0x18;
        uVar14 = uVar14 - 1 & uVar14;
        iVar18 = iVar18 + -1;
        uVar11 = (uint)LZCOUNT(uVar1 | (uVar11 & 0xff) << 0x10 | (uVar8 & 0xff) << 8 | uVar13) >> 3;
        piVar6 = (int *)puVar16[uVar11 * -3 + -3];
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0143daec(puVar16[uVar11 * -3 + -3],puVar16[uVar11 * -3 + -2]);
        }
      } while (iVar18 != 0);
    }
    if (iVar17 * 0xd != -0x11) {
      iVar17 = *param_1 + iVar17 * -0xc;
      if (iVar17 + -0xc == 0) {
        return;
      }
      iVar18 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar17 + -0xf) & 0x1f;
      if (((*(byte *)(iVar18 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar18 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar18 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar11 = (uint)(*(byte *)(iVar17 + -0xf) >> 5);
      iVar15 = *(int *)(iVar18 + 8) + 0x10;
      iVar12 = iVar7 * uVar14 + iVar7 + -4;
      iVar7 = iVar15 + iVar12;
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
      if ((uint)(iVar7 - (iVar17 + -0xc)) < uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar4 = *(byte *)(iVar18 + 0x14);
      uVar11 = 1 << uVar14;
      *(undefined1 *)(iVar17 + -0xf) = 0xff;
      *(undefined2 *)(iVar17 + -0xe) = 0;
      do {
        uVar13 = *(uint *)(iVar18 + 0x10);
        uVar8 = *(uint *)(iVar18 + 0xc) | uVar13;
        if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar4 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar18,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar5;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar5 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar18 + 0x10) = uVar11 + uVar13;
          return;
        }
        puVar19 = (uint *)(iVar18 + 0x10);
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

