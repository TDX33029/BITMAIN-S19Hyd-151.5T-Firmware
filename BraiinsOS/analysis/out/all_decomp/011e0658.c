// FUN_011e0658 @ 011e0658 size=520 calls_out=4 calls_in=1
// strings: 

void FUN_011e0658(int param_1)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int unaff_r4;
  uint *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  undefined4 uStack_28;
  
  FUN_011a359c(param_1 + 8);
  iVar16 = *(int *)(param_1 + 0x3c);
  if (iVar16 != 0) {
    iVar17 = *(int *)(param_1 + 0x44);
    if (iVar17 != 0) {
      puVar15 = *(uint **)(param_1 + 0x38);
      puVar18 = puVar15 + 1;
      uVar13 = ~*puVar15 & 0x80808080;
      do {
        puVar10 = puVar18;
        if (uVar13 == 0) {
          do {
            puVar18 = puVar10 + 1;
            uVar13 = *puVar10;
            puVar15 = puVar15 + -0xc;
            puVar10 = puVar18;
          } while ((uVar13 & 0x80808080) == 0x80808080);
          uVar13 = uVar13 & 0x80808080 ^ 0x80808080;
        }
        uVar5 = uVar13 >> 8;
        uVar9 = uVar13 >> 0x10;
        uVar12 = uVar13 >> 0x18;
        uVar1 = uVar13 << 0x18;
        uVar13 = uVar13 - 1 & uVar13;
        iVar17 = iVar17 + -1;
        uVar5 = (uint)LZCOUNT(uVar1 | (uVar5 & 0xff) << 0x10 | (uVar9 & 0xff) << 8 | uVar12) >> 3;
        piVar7 = (int *)puVar15[uVar5 * -3 + -3];
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013532e4(puVar15[uVar5 * -3 + -3]);
        }
      } while (iVar17 != 0);
    }
    if (iVar16 * 0xd != -0x11) {
      thunk_FUN_016d3fb4(*(int *)(param_1 + 0x38) + iVar16 * -0xc + -0xc);
    }
  }
  iVar16 = *(int *)(param_1 + 0x6c);
  if (iVar16 != 0) {
    iVar17 = *(int *)(param_1 + 0x74);
    if (iVar17 != 0) {
      puVar15 = *(uint **)(param_1 + 0x68);
      puVar18 = puVar15 + 1;
      uVar13 = ~*puVar15 & 0x80808080;
      do {
        puVar10 = puVar18;
        if (uVar13 == 0) {
          do {
            puVar18 = puVar10 + 1;
            uVar13 = *puVar10;
            puVar15 = puVar15 + -0x20;
            puVar10 = puVar18;
          } while ((uVar13 & 0x80808080) == 0x80808080);
          uVar13 = uVar13 & 0x80808080 ^ 0x80808080;
        }
        uVar5 = uVar13 >> 8;
        uVar9 = uVar13 >> 0x10;
        uVar12 = uVar13 >> 0x18;
        uVar1 = uVar13 << 0x18;
        uVar13 = uVar13 - 1 & uVar13;
        uVar5 = LZCOUNT(uVar1 | (uVar5 & 0xff) << 0x10 | (uVar9 & 0xff) << 8 | uVar12) & 0x38;
        iVar17 = iVar17 + -1;
        piVar7 = (int *)puVar15[-8 - uVar5];
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013532e4(puVar15[-8 - uVar5]);
        }
      } while (iVar17 != 0);
    }
    if (iVar16 * 0x21 != -0x25) {
      thunk_FUN_016d3fb4(*(int *)(param_1 + 0x68) + iVar16 * -0x20 + -0x20);
    }
  }
  FUN_011a4ae4(param_1 + 0xa0);
  if (param_1 != -1) {
    piVar7 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar16 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar16 + -1;
    if (iVar16 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar16 = FUN_016d3bc8();
      uVar13 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
         (uVar5 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar17 = uVar5 - 0x10, uVar5 == 0)) {
        iVar17 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar5 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar14 = *(int *)(iVar16 + 8) + 0x10;
      iVar8 = iVar17 * uVar13 + iVar17 + -4;
      iVar17 = iVar14 + iVar8;
      if (4 < uVar5) {
        if (uVar5 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar5 = *(uint *)(iVar17 + -4);
        if (uVar5 < 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar3)();
        }
        if (*(char *)(iVar17 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar3)();
        }
      }
      if ((uint)(iVar17 - param_1) < uVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar17 - uVar5) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar14 + iVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar4 = *(byte *)(iVar16 + 0x14);
      uVar5 = 1 << uVar13;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar12 = *(uint *)(iVar16 + 0x10);
        uVar9 = *(uint *)(iVar16 + 0xc) | uVar12;
        if ((uVar5 & uVar9) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar12 == 0) || (uVar9 + uVar5 == (2 << (bVar4 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar16,uVar13);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar11 = *puVar6;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar6 = uVar11;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar16 + 0x10) = uVar5 + uVar12;
          return;
        }
        puVar18 = (uint *)(iVar16 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar18);
          uVar9 = *puVar18;
          if (uVar12 != uVar9) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar18);
        } while (!bVar2);
        *puVar18 = uVar5 + uVar12;
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

