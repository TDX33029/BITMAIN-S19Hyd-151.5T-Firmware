// FUN_0133fb00 @ 0133fb00 size=256 calls_out=2 calls_in=2
// strings: 

void FUN_0133fb00(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  undefined4 uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 uStack_28;
  
  iVar15 = param_1[1];
  if (iVar15 != 0) {
    iVar16 = param_1[3];
    if (iVar16 != 0) {
      puVar14 = (uint *)*param_1;
      puVar18 = puVar14 + 1;
      uVar17 = ~*puVar14 & 0x80808080;
      do {
        puVar10 = puVar18;
        if (uVar17 == 0) {
          do {
            puVar18 = puVar10 + 1;
            uVar17 = *puVar10;
            puVar14 = puVar14 + -0x10;
            puVar10 = puVar18;
          } while ((uVar17 & 0x80808080) == 0x80808080);
          uVar17 = uVar17 & 0x80808080 ^ 0x80808080;
        }
        uVar4 = LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8
                        | uVar17 >> 0x18) & 0x38;
        if (*(int *)((int)puVar14 + uVar4 * -2 + -0x10) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)((int)puVar14 + uVar4 * -2 + -0xc));
        }
        iVar16 = iVar16 + -1;
        uVar17 = uVar17 - 1 & uVar17;
        piVar5 = *(int **)((int)puVar14 + uVar4 * -2 + -4);
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013532e4(*(undefined4 *)((int)puVar14 + uVar4 * -2 + -4));
        }
      } while (iVar16 != 0);
    }
    iVar16 = iVar15 * 0x10 + 0x10;
    if (iVar15 + iVar16 != -5) {
      iVar16 = *param_1 - iVar16;
      if (iVar16 == 0) {
        return;
      }
      iVar15 = FUN_016d3bc8();
      uVar17 = *(byte *)(iVar16 + -3) & 0x1f;
      if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
         (uVar4 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar7 = uVar4 - 0x10, uVar4 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar4 = (uint)(*(byte *)(iVar16 + -3) >> 5);
      iVar13 = *(int *)(iVar15 + 8) + 0x10;
      iVar11 = iVar7 * uVar17 + iVar7 + -4;
      iVar7 = iVar13 + iVar11;
      if (4 < uVar4) {
        if (uVar4 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar4 = *(uint *)(iVar7 + -4);
        if (uVar4 < 5) {
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
      if ((uint)(iVar7 - iVar16) < uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar7 - uVar4) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar15 + 0x14);
      uVar4 = 1 << uVar17;
      *(undefined1 *)(iVar16 + -3) = 0xff;
      *(undefined2 *)(iVar16 + -2) = 0;
      do {
        uVar12 = *(uint *)(iVar15 + 0x10);
        uVar8 = *(uint *)(iVar15 + 0xc) | uVar12;
        if ((uVar4 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar12 == 0) || (uVar8 + uVar4 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar15,uVar17);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar6;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar6 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar15 + 0x10) = uVar4 + uVar12;
          return;
        }
        puVar18 = (uint *)(iVar15 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar18);
          uVar8 = *puVar18;
          if (uVar12 != uVar8) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar18);
        } while (!bVar1);
        *puVar18 = uVar4 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

