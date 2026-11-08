// FUN_007910a4 @ 007910a4 size=588 calls_out=2 calls_in=9
// strings: 

void FUN_007910a4(int param_1)

{
  code *pcVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int unaff_r4;
  undefined4 uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  int local_28;
  
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 != 0) {
    iVar13 = *(int *)(param_1 + 0x14);
    local_28 = param_1;
    if (iVar13 != 0) {
      puVar15 = *(uint **)(param_1 + 8);
      puVar17 = puVar15 + 1;
      uVar16 = ~*puVar15 & 0x80808080;
      do {
        puVar11 = puVar17;
        if (uVar16 == 0) {
          do {
            puVar17 = puVar11 + 1;
            uVar16 = *puVar11;
            puVar15 = puVar15 + -0x118;
            puVar11 = puVar17;
          } while ((uVar16 & 0x80808080) == 0x80808080);
          uVar16 = uVar16 & 0x80808080 ^ 0x80808080;
        }
        sVar3 = (short)((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                      (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3);
        bVar18 = (short)puVar15[-sVar3 * 0x46 + -0x46] != 0;
        uVar5 = 0;
        if (bVar18) {
          uVar5 = puVar15[-sVar3 * 0x46 + -0x45];
        }
        if (bVar18 && uVar5 != 0) {
          thunk_FUN_016d3fb4(puVar15[-sVar3 * 0x46 + -0x44]);
        }
        bVar18 = (short)puVar15[-sVar3 * 0x46 + -0x3d] != 0;
        uVar5 = 0;
        if (bVar18) {
          uVar5 = puVar15[-sVar3 * 0x46 + -0x3c];
        }
        if (bVar18 && uVar5 != 0) {
          thunk_FUN_016d3fb4(puVar15[-sVar3 * 0x46 + -0x3b]);
          if ((undefined1 *)puVar15[-sVar3 * 0x46 + -0x32] != &DAT_3b9aca00) goto LAB_00791198;
        }
        else if ((undefined1 *)puVar15[-sVar3 * 0x46 + -0x32] != &DAT_3b9aca00) {
LAB_00791198:
          bVar18 = (short)puVar15[-sVar3 * 0x46 + -0x2e] != 0;
          uVar5 = 0;
          if (bVar18) {
            uVar5 = puVar15[-sVar3 * 0x46 + -0x2d];
          }
          if (bVar18 && uVar5 != 0) {
            thunk_FUN_016d3fb4(puVar15[-sVar3 * 0x46 + -0x2c]);
          }
          bVar18 = (short)puVar15[-sVar3 * 0x46 + -0x25] != 0;
          uVar5 = 0;
          if (bVar18) {
            uVar5 = puVar15[-sVar3 * 0x46 + -0x24];
          }
          if (bVar18 && uVar5 != 0) {
            thunk_FUN_016d3fb4(puVar15[-sVar3 * 0x46 + -0x23]);
          }
          piVar6 = (int *)puVar15[-sVar3 * 0x46 + -0x30];
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar6;
            bVar18 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar18);
          *piVar6 = iVar8 + -1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01059b88(puVar15[-sVar3 * 0x46 + -0x30],puVar15[-sVar3 * 0x46 + -0x2f]);
          }
        }
        if ((undefined1 *)puVar15[-sVar3 * 0x46 + -0x18] != &DAT_3b9aca00) {
          bVar18 = (short)puVar15[-sVar3 * 0x46 + -0x14] != 0;
          uVar5 = 0;
          if (bVar18) {
            uVar5 = puVar15[-sVar3 * 0x46 + -0x13];
          }
          if (bVar18 && uVar5 != 0) {
            thunk_FUN_016d3fb4(puVar15[-sVar3 * 0x46 + -0x12]);
          }
          bVar18 = (short)puVar15[-sVar3 * 0x46 + -0xb] != 0;
          uVar5 = 0;
          if (bVar18) {
            uVar5 = puVar15[-sVar3 * 0x46 + -10];
          }
          if (bVar18 && uVar5 != 0) {
            thunk_FUN_016d3fb4(puVar15[-sVar3 * 0x46 + -9]);
          }
          piVar6 = (int *)puVar15[-sVar3 * 0x46 + -0x16];
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar6;
            bVar18 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar18);
          *piVar6 = iVar8 + -1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01059b88(puVar15[-sVar3 * 0x46 + -0x16],puVar15[-sVar3 * 0x46 + -0x15]);
          }
        }
        iVar13 = iVar13 + -1;
        uVar16 = uVar16 - 1 & uVar16;
      } while (iVar13 != 0);
    }
    param_1 = local_28;
    if (iVar4 * 0x119 != -0x11d) {
      thunk_FUN_016d3fb4(*(int *)(local_28 + 8) + iVar4 * -0x118 + -0x118);
    }
  }
  if (param_1 != -1) {
    piVar6 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar18 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar18);
    *piVar6 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar16 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar5 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar13 = uVar5 - 0x10, uVar5 == 0)) {
        iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar5 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar14 = *(int *)(iVar4 + 8) + 0x10;
      iVar8 = iVar13 * uVar16 + iVar13 + -4;
      iVar13 = iVar14 + iVar8;
      if (4 < uVar5) {
        if (uVar5 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar5 = *(uint *)(iVar13 + -4);
        if (uVar5 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar13 - param_1) < uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 - uVar5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar14 + iVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar4 + 0x14);
      uVar5 = 1 << uVar16;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar12 = *(uint *)(iVar4 + 0x10);
        uVar9 = *(uint *)(iVar4 + 0xc) | uVar12;
        if ((uVar5 & uVar9) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar12 == 0) || (uVar9 + uVar5 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar4,uVar16);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar7 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar7;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar7 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar5 + uVar12;
          return;
        }
        puVar17 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar9 = *puVar17;
          if (uVar12 != uVar9) goto LAB_016d409c;
          bVar18 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar18);
        *puVar17 = uVar5 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar9) {
          return;
        }
      } while( true );
    }
  }
  return;
}

