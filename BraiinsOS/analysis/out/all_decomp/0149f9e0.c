// FUN_0149f9e0 @ 0149f9e0 size=760 calls_out=6 calls_in=15
// strings: 

void FUN_0149f9e0(int param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
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
  
  FUN_0148f36c(param_1 + 0x20);
  iVar17 = *(int *)(param_1 + 0x44);
  if (iVar17 != 0) {
    iVar18 = *(int *)(param_1 + 0x4c);
    if (iVar18 != 0) {
      puVar16 = *(uint **)(param_1 + 0x40);
      puVar19 = puVar16 + 1;
      uVar14 = ~*puVar16 & 0x80808080;
      do {
        puVar9 = puVar19;
        if (uVar14 == 0) {
          do {
            puVar19 = puVar9 + 1;
            uVar14 = *puVar9;
            puVar16 = puVar16 + -0x24;
            puVar9 = puVar19;
          } while ((uVar14 & 0x80808080) == 0x80808080);
          uVar14 = uVar14 & 0x80808080 ^ 0x80808080;
        }
        FUN_0148f178(puVar16 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                              (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) *
                               -9 + -9);
        iVar18 = iVar18 + -1;
        uVar14 = uVar14 - 1 & uVar14;
      } while (iVar18 != 0);
    }
    if (iVar17 * 0x25 != -0x29) {
      thunk_FUN_016d3fb4(*(int *)(param_1 + 0x40) + iVar17 * -0x24 + -0x24);
    }
  }
  iVar17 = *(int *)(param_1 + 100);
  if (iVar17 != 0) {
    iVar18 = *(int *)(param_1 + 0x6c);
    if (iVar18 != 0) {
      puVar16 = *(uint **)(param_1 + 0x60);
      puVar19 = puVar16 + 1;
      uVar14 = ~*puVar16 & 0x80808080;
      do {
        puVar9 = puVar19;
        if (uVar14 == 0) {
          do {
            puVar19 = puVar9 + 1;
            uVar14 = *puVar9;
            puVar16 = puVar16 + -0x28;
            puVar9 = puVar19;
          } while ((uVar14 & 0x80808080) == 0x80808080);
          uVar14 = uVar14 & 0x80808080 ^ 0x80808080;
        }
        FUN_0148ebf4(puVar16 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                              (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) *
                               -10 + -10);
        iVar18 = iVar18 + -1;
        uVar14 = uVar14 - 1 & uVar14;
      } while (iVar18 != 0);
    }
    if (iVar17 * 0x29 != -0x2d) {
      thunk_FUN_016d3fb4(*(int *)(param_1 + 0x60) + iVar17 * -0x28 + -0x28);
    }
  }
  iVar17 = *(int *)(param_1 + 0x94);
  if (iVar17 != 0) {
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar17 + 0x20) = 1;
    pcVar7 = (char *)(iVar17 + 0x10);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar7;
      bVar2 = (bool)hasExclusiveAccess(pcVar7);
    } while (!bVar2);
    *pcVar7 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar18 = *(int *)(iVar17 + 8);
      *(undefined4 *)(iVar17 + 8) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar17 + 0x10) = 0;
      DataMemoryBarrier(0xb);
      if (iVar18 != 0) {
        (**(code **)(iVar18 + 4))(*(undefined4 *)(iVar17 + 0xc));
      }
    }
    pcVar7 = (char *)(iVar17 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar7;
      bVar2 = (bool)hasExclusiveAccess(pcVar7);
    } while (!bVar2);
    *pcVar7 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar18 = *(int *)(iVar17 + 0x14);
      *(undefined4 *)(iVar17 + 0x14) = 0;
      if (iVar18 != 0) {
        (**(code **)(iVar18 + 0xc))(*(undefined4 *)(iVar17 + 0x18));
      }
      DataMemoryBarrier(0xb);
      *pcVar7 = '\0';
      DataMemoryBarrier(0xb);
    }
    piVar5 = *(int **)(param_1 + 0x94);
    DataMemoryBarrier(0xb);
    do {
      iVar17 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar17 + -1;
    if (iVar17 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089dea4(*(undefined4 *)(param_1 + 0x94));
    }
  }
  piVar5 = *(int **)(param_1 + 0x80);
  DataMemoryBarrier(0xb);
  do {
    iVar17 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar17 + -1;
  if (iVar17 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  }
  piVar5 = *(int **)(param_1 + 0x88);
  if (piVar5 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar17 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar17 + -1;
    if (iVar17 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
    }
  }
  if (param_1 != -1) {
    piVar5 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar17 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar17 + -1;
    if (iVar17 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar17 = FUN_016d3bc8();
      uVar14 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar18 = uVar11 - 0x10, uVar11 == 0)) {
        iVar18 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar11 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar15 = *(int *)(iVar17 + 8) + 0x10;
      iVar12 = iVar18 * uVar14 + iVar18 + -4;
      iVar18 = iVar15 + iVar12;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar11 = *(uint *)(iVar18 + -4);
        if (uVar11 < 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar3)();
        }
        if (*(char *)(iVar18 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar3)();
        }
      }
      if ((uint)(iVar18 - param_1) < uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar18 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar4 = *(byte *)(iVar17 + 0x14);
      uVar11 = 1 << uVar14;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
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
          FUN_016d3ca8(&uStack_28,iVar17,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar6;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar6 = uVar10;
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

