// FUN_009ba7ec @ 009ba7ec size=584 calls_out=3 calls_in=0
// strings: 

void FUN_009ba7ec(int *param_1)

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
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  uint *puVar19;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 != 2) {
    if (param_1[0x33] != 0) {
      thunk_FUN_016d3fb4(param_1[0x34]);
    }
    if ((param_1[0x1b] == 4) && (param_1[0x1c] != 0)) {
      thunk_FUN_016d3fb4(param_1[0x1d]);
    }
    piVar5 = (int *)param_1[0x36];
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_009ba06c(param_1[0x36]);
    }
    piVar5 = (int *)param_1[0x37];
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_009ba06c(param_1[0x37]);
    }
    iVar8 = param_1[0x21];
    if (iVar8 != 0) {
      iVar18 = param_1[0x23];
      if (iVar18 != 0) {
        puVar17 = (uint *)param_1[0x20];
        puVar19 = puVar17 + 1;
        uVar15 = ~*puVar17 & 0x80808080;
        do {
          puVar12 = puVar19;
          if (uVar15 == 0) {
            do {
              puVar19 = puVar12 + 1;
              uVar15 = *puVar12;
              puVar17 = puVar17 + -8;
              puVar12 = puVar19;
            } while ((uVar15 & 0x80808080) == 0x80808080);
            uVar15 = uVar15 & 0x80808080 ^ 0x80808080;
          }
          uVar6 = uVar15 >> 8;
          uVar10 = uVar15 >> 0x10;
          uVar14 = uVar15 >> 0x18;
          uVar1 = uVar15 << 0x18;
          uVar15 = uVar15 - 1 & uVar15;
          uVar6 = LZCOUNT(uVar1 | (uVar6 & 0xff) << 0x10 | (uVar10 & 0xff) << 8 | uVar14) & 0x38;
          iVar18 = iVar18 + -1;
          piVar5 = *(int **)((int)puVar17 + (-4 - uVar6));
          DataMemoryBarrier(0xb);
          do {
            iVar9 = *piVar5;
            bVar2 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar2);
          *piVar5 = iVar9 + -1;
          if (iVar9 == 1) {
            DataMemoryBarrier(0xb);
            FUN_009ba06c(*(undefined4 *)((int)puVar17 + (-4 - uVar6)));
          }
        } while (iVar18 != 0);
      }
      if (iVar8 * 9 != -0xd) {
        thunk_FUN_016d3fb4(param_1[0x20] + iVar8 * -8 + -8);
      }
    }
    iVar8 = param_1[0x29];
    if (iVar8 != 0) {
      iVar18 = param_1[0x2b];
      if (iVar18 != 0) {
        puVar17 = (uint *)param_1[0x28];
        puVar19 = puVar17 + 1;
        uVar15 = ~*puVar17 & 0x80808080;
        do {
          puVar12 = puVar19;
          if (uVar15 == 0) {
            do {
              puVar19 = puVar12 + 1;
              uVar15 = *puVar12;
              puVar17 = puVar17 + -8;
              puVar12 = puVar19;
            } while ((uVar15 & 0x80808080) == 0x80808080);
            uVar15 = uVar15 & 0x80808080 ^ 0x80808080;
          }
          uVar6 = uVar15 >> 8;
          uVar10 = uVar15 >> 0x10;
          uVar14 = uVar15 >> 0x18;
          uVar1 = uVar15 << 0x18;
          uVar15 = uVar15 - 1 & uVar15;
          uVar6 = LZCOUNT(uVar1 | (uVar6 & 0xff) << 0x10 | (uVar10 & 0xff) << 8 | uVar14) & 0x38;
          iVar18 = iVar18 + -1;
          piVar5 = *(int **)((int)puVar17 + (-4 - uVar6));
          DataMemoryBarrier(0xb);
          do {
            iVar9 = *piVar5;
            bVar2 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar2);
          *piVar5 = iVar9 + -1;
          if (iVar9 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00784894(*(undefined4 *)((int)puVar17 + (-4 - uVar6)));
          }
        } while (iVar18 != 0);
      }
      if (iVar8 * 9 != -0xd) {
        iVar8 = param_1[0x28] + iVar8 * -8;
        if (iVar8 + -8 == 0) {
          return;
        }
        iVar18 = FUN_016d3bc8();
        uVar15 = *(byte *)(iVar8 + -0xb) & 0x1f;
        if (((*(byte *)(iVar18 + 0x14) & 0x1f) != 0) ||
           (uVar6 = *(uint *)(iVar18 + 0x14) & 0xfffff000, iVar9 = uVar6 - 0x10, uVar6 == 0)) {
          iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar18 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar6 = (uint)(*(byte *)(iVar8 + -0xb) >> 5);
        iVar16 = *(int *)(iVar18 + 8) + 0x10;
        iVar13 = iVar9 * uVar15 + iVar9 + -4;
        iVar9 = iVar16 + iVar13;
        if (4 < uVar6) {
          if (uVar6 != 5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar3)();
          }
          uVar6 = *(uint *)(iVar9 + -4);
          if (uVar6 < 5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar3)();
          }
          if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar3)();
          }
        }
        if ((uint)(iVar9 - (iVar8 + -8)) < uVar6) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar3)();
        }
        if (*(char *)(iVar9 - uVar6) != '\0') {
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
        uVar6 = 1 << uVar15;
        *(undefined1 *)(iVar8 + -0xb) = 0xff;
        *(undefined2 *)(iVar8 + -10) = 0;
        do {
          uVar14 = *(uint *)(iVar18 + 0x10);
          uVar10 = *(uint *)(iVar18 + 0xc) | uVar14;
          if ((uVar6 & uVar10) != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar3)();
          }
          if ((uVar14 == 0) || (uVar10 + uVar6 == (2 << (bVar4 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar18,uVar15);
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
            *(uint *)(iVar18 + 0x10) = uVar6 + uVar14;
            return;
          }
          puVar19 = (uint *)(iVar18 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar19);
            uVar10 = *puVar19;
            if (uVar14 != uVar10) goto LAB_016d409c;
            bVar2 = (bool)hasExclusiveAccess(puVar19);
          } while (!bVar2);
          *puVar19 = uVar6 + uVar14;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar14 == uVar10) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}

