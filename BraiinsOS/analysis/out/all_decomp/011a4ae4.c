// FUN_011a4ae4 @ 011a4ae4 size=480 calls_out=2 calls_in=4
// strings: 

void FUN_011a4ae4(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int unaff_r4;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint *local_28;
  
  iVar8 = param_1[1];
  if (iVar8 == 0) {
    return;
  }
  iVar14 = param_1[3];
  if (iVar14 != 0) {
    puVar13 = (uint *)*param_1;
    puVar21 = puVar13 + 1;
    uVar16 = ~*puVar13 & 0x80808080;
    do {
      puVar17 = puVar21;
      if (uVar16 == 0) {
        do {
          puVar21 = puVar17 + 1;
          uVar16 = *puVar17;
          puVar13 = puVar13 + -0x28;
          puVar17 = puVar21;
        } while ((uVar16 & 0x80808080) == 0x80808080);
        uVar16 = uVar16 & 0x80808080 ^ 0x80808080;
      }
      puVar17 = puVar13 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                         (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) * -10;
      if (puVar17[-10] != 0) {
        thunk_FUN_016d3fb4(puVar17[-9]);
      }
      uVar4 = puVar17[-5];
      if (uVar4 != 0) {
        uVar18 = puVar17[-3];
        local_28 = puVar17;
        if (uVar18 != 0) {
          puVar17 = (uint *)puVar17[-6];
          puVar20 = puVar17 + 1;
          uVar15 = ~*puVar17 & 0x80808080;
          do {
            puVar19 = puVar20;
            if (uVar15 == 0) {
              do {
                puVar20 = puVar19 + 1;
                uVar15 = *puVar19;
                puVar17 = puVar17 + -0x10;
                puVar19 = puVar20;
              } while ((uVar15 & 0x80808080) == 0x80808080);
              uVar15 = uVar15 & 0x80808080 ^ 0x80808080;
            }
            uVar5 = LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                            (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) & 0x38;
            if (*(int *)((int)puVar17 + uVar5 * -2 + -0x10) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)((int)puVar17 + uVar5 * -2 + -0xc));
            }
            uVar18 = uVar18 - 1;
            uVar15 = uVar15 - 1 & uVar15;
            piVar6 = *(int **)((int)puVar17 + uVar5 * -2 + -4);
            DataMemoryBarrier(0xb);
            do {
              iVar9 = *piVar6;
              bVar1 = (bool)hasExclusiveAccess(piVar6);
            } while (!bVar1);
            *piVar6 = iVar9 + -1;
            if (iVar9 == 1) {
              DataMemoryBarrier(0xb);
              FUN_013532e4(*(undefined4 *)((int)puVar17 + uVar5 * -2 + -4));
            }
          } while (uVar18 != 0);
        }
        if (uVar4 * 0x11 != -0x15) {
          thunk_FUN_016d3fb4(local_28[-6] + uVar4 * -0x10 + -0x10);
        }
      }
      iVar14 = iVar14 + -1;
      uVar16 = uVar16 - 1 & uVar16;
    } while (iVar14 != 0);
  }
  iVar14 = iVar8 * 0x28 + 0x28;
  if (iVar8 + iVar14 == -5) {
    return;
  }
  iVar14 = *param_1 - iVar14;
  if (iVar14 == 0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar4 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar9 = uVar4 - 0x10, uVar4 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar4 = (uint)(*(byte *)(iVar14 + -3) >> 5);
  iVar12 = *(int *)(iVar8 + 8) + 0x10;
  iVar11 = iVar9 * uVar16 + iVar9 + -4;
  iVar9 = iVar12 + iVar11;
  if (4 < uVar4) {
    if (uVar4 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar4 = *(uint *)(iVar9 + -4);
    if (uVar4 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar9 - iVar14) < uVar4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar9 - uVar4) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar12 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar8 + 0x14);
  uVar4 = 1 << uVar16;
  *(undefined1 *)(iVar14 + -3) = 0xff;
  *(undefined2 *)(iVar14 + -2) = 0;
  do {
    uVar15 = *(uint *)(iVar8 + 0x10);
    uVar18 = *(uint *)(iVar8 + 0xc) | uVar15;
    if ((uVar4 & uVar18) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar15 == 0) || (uVar18 + uVar4 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar8,uVar16);
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
      *(uint *)(iVar8 + 0x10) = uVar4 + uVar15;
      return;
    }
    puVar21 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar21);
      uVar18 = *puVar21;
      if (uVar15 != uVar18) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar21);
    } while (!bVar1);
    *puVar21 = uVar4 + uVar15;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar15 == uVar18) {
      return;
    }
  } while( true );
}

