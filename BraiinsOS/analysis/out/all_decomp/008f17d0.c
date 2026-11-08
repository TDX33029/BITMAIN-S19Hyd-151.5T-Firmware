// FUN_008f17d0 @ 008f17d0 size=640 calls_out=3 calls_in=15
// strings: 

void FUN_008f17d0(int param_1)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  uint *puVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 0xa0) != 2) {
    if (*(int *)(param_1 + 0x16c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x170));
    }
    if ((*(int *)(param_1 + 0x10c) == 4) && (*(int *)(param_1 + 0x110) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x114));
    }
    piVar5 = *(int **)(param_1 + 0x178);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_009ba06c(*(undefined4 *)(param_1 + 0x178));
    }
    piVar5 = *(int **)(param_1 + 0x17c);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_009ba06c(*(undefined4 *)(param_1 + 0x17c));
    }
    iVar8 = *(int *)(param_1 + 0x124);
    if (iVar8 != 0) {
      iVar17 = *(int *)(param_1 + 300);
      if (iVar17 != 0) {
        puVar16 = *(uint **)(param_1 + 0x120);
        puVar18 = puVar16 + 1;
        uVar14 = ~*puVar16 & 0x80808080;
        do {
          puVar12 = puVar18;
          if (uVar14 == 0) {
            do {
              puVar18 = puVar12 + 1;
              uVar14 = *puVar12;
              puVar16 = puVar16 + -8;
              puVar12 = puVar18;
            } while ((uVar14 & 0x80808080) == 0x80808080);
            uVar14 = uVar14 & 0x80808080 ^ 0x80808080;
          }
          uVar6 = uVar14 >> 8;
          uVar10 = uVar14 >> 0x10;
          uVar13 = uVar14 >> 0x18;
          uVar1 = uVar14 << 0x18;
          uVar14 = uVar14 - 1 & uVar14;
          uVar6 = LZCOUNT(uVar1 | (uVar6 & 0xff) << 0x10 | (uVar10 & 0xff) << 8 | uVar13) & 0x38;
          iVar17 = iVar17 + -1;
          piVar5 = *(int **)((int)puVar16 + (-4 - uVar6));
          DataMemoryBarrier(0xb);
          do {
            iVar9 = *piVar5;
            bVar2 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar2);
          *piVar5 = iVar9 + -1;
          if (iVar9 == 1) {
            DataMemoryBarrier(0xb);
            FUN_009ba06c(*(undefined4 *)((int)puVar16 + (-4 - uVar6)));
          }
        } while (iVar17 != 0);
      }
      if (iVar8 * 9 != -0xd) {
        thunk_FUN_016d3fb4(*(int *)(param_1 + 0x120) + iVar8 * -8 + -8);
      }
    }
    iVar8 = *(int *)(param_1 + 0x144);
    if (iVar8 != 0) {
      iVar17 = *(int *)(param_1 + 0x14c);
      if (iVar17 != 0) {
        puVar16 = *(uint **)(param_1 + 0x140);
        puVar18 = puVar16 + 1;
        uVar14 = ~*puVar16 & 0x80808080;
        do {
          puVar12 = puVar18;
          if (uVar14 == 0) {
            do {
              puVar18 = puVar12 + 1;
              uVar14 = *puVar12;
              puVar16 = puVar16 + -8;
              puVar12 = puVar18;
            } while ((uVar14 & 0x80808080) == 0x80808080);
            uVar14 = uVar14 & 0x80808080 ^ 0x80808080;
          }
          uVar6 = uVar14 >> 8;
          uVar10 = uVar14 >> 0x10;
          uVar13 = uVar14 >> 0x18;
          uVar1 = uVar14 << 0x18;
          uVar14 = uVar14 - 1 & uVar14;
          uVar6 = LZCOUNT(uVar1 | (uVar6 & 0xff) << 0x10 | (uVar10 & 0xff) << 8 | uVar13) & 0x38;
          iVar17 = iVar17 + -1;
          piVar5 = *(int **)((int)puVar16 + (-4 - uVar6));
          DataMemoryBarrier(0xb);
          do {
            iVar9 = *piVar5;
            bVar2 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar2);
          *piVar5 = iVar9 + -1;
          if (iVar9 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00784894(*(undefined4 *)((int)puVar16 + (-4 - uVar6)));
          }
        } while (iVar17 != 0);
      }
      if (iVar8 * 9 != -0xd) {
        thunk_FUN_016d3fb4(*(int *)(param_1 + 0x140) + iVar8 * -8 + -8);
      }
    }
  }
  if (param_1 != -1) {
    piVar5 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar8 = FUN_016d3bc8();
      uVar14 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
         (uVar6 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar17 = uVar6 - 0x10, uVar6 == 0)) {
        iVar17 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar6 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar15 = *(int *)(iVar8 + 8) + 0x10;
      iVar9 = iVar17 * uVar14 + iVar17 + -4;
      iVar17 = iVar15 + iVar9;
      if (4 < uVar6) {
        if (uVar6 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar6 = *(uint *)(iVar17 + -4);
        if (uVar6 < 5) {
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
      if ((uint)(iVar17 - param_1) < uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar17 - uVar6) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar15 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar4 = *(byte *)(iVar8 + 0x14);
      uVar6 = 1 << uVar14;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar8 + 0x10);
        uVar10 = *(uint *)(iVar8 + 0xc) | uVar13;
        if ((uVar6 & uVar10) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar13 == 0) || (uVar10 + uVar6 == (2 << (bVar4 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar8,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar7 = (undefined4 *)FUN_016d2bc8();
          uVar11 = *puVar7;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar7 = uVar11;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar8 + 0x10) = uVar6 + uVar13;
          return;
        }
        puVar18 = (uint *)(iVar8 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar18);
          uVar10 = *puVar18;
          if (uVar13 != uVar10) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar18);
        } while (!bVar2);
        *puVar18 = uVar6 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar10) {
          return;
        }
      } while( true );
    }
  }
  return;
}

