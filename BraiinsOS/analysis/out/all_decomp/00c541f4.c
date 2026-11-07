// FUN_00c541f4 @ 00c541f4 size=424 calls_out=1 calls_in=8
// strings: 

void FUN_00c541f4(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int unaff_r4;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint *local_28;
  
  iVar7 = param_1[1];
  if (iVar7 == 0) {
    return;
  }
  iVar11 = param_1[3];
  if (iVar11 != 0) {
    puVar13 = (uint *)*param_1;
    puVar20 = puVar13 + 1;
    uVar14 = ~*puVar13 & 0x80808080;
    do {
      puVar17 = puVar20;
      if (uVar14 == 0) {
        do {
          puVar20 = puVar17 + 1;
          uVar14 = *puVar17;
          puVar13 = puVar13 + -0x30;
          puVar17 = puVar20;
        } while ((uVar14 & 0x80808080) == 0x80808080);
        uVar14 = uVar14 & 0x80808080 ^ 0x80808080;
      }
      puVar17 = puVar13 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                         (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) * -0xc
      ;
      if (puVar17[-0xc] != 0) {
        thunk_FUN_016d3fb4(puVar17[-0xb]);
      }
      uVar5 = puVar17[-7];
      if (uVar5 != 0) {
        uVar16 = puVar17[-5];
        local_28 = puVar17;
        if (uVar16 != 0) {
          puVar17 = (uint *)puVar17[-8];
          puVar19 = puVar17 + 1;
          uVar15 = ~*puVar17 & 0x80808080;
          do {
            puVar18 = puVar19;
            if (uVar15 == 0) {
              do {
                puVar19 = puVar18 + 1;
                uVar15 = *puVar18;
                puVar17 = puVar17 + -0x50;
                puVar18 = puVar19;
              } while ((uVar15 & 0x80808080) == 0x80808080);
              uVar15 = uVar15 & 0x80808080 ^ 0x80808080;
            }
            uVar1 = (uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                  (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3;
            if (puVar17[uVar1 * -0x14 + -6] != 0) {
              thunk_FUN_016d3fb4(puVar17[uVar1 * -0x14 + -5]);
            }
            uVar16 = uVar16 - 1;
            uVar15 = uVar15 - 1 & uVar15;
          } while (uVar16 != 0);
        }
        if (uVar5 * 0x51 != -0x55) {
          thunk_FUN_016d3fb4(local_28[-8] + uVar5 * -0x50 + -0x50);
        }
      }
      iVar11 = iVar11 + -1;
      uVar14 = uVar14 - 1 & uVar14;
    } while (iVar11 != 0);
  }
  if (iVar7 * 0x31 == -0x35) {
    return;
  }
  iVar7 = *param_1 + iVar7 * -0x30;
  if (iVar7 + -0x30 == 0) {
    return;
  }
  iVar11 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar7 + -0x33) & 0x1f;
  if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
     (uVar5 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar8 = uVar5 - 0x10, uVar5 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar5 = (uint)(*(byte *)(iVar7 + -0x33) >> 5);
  iVar12 = *(int *)(iVar11 + 8) + 0x10;
  iVar10 = iVar8 * uVar14 + iVar8 + -4;
  iVar8 = iVar12 + iVar10;
  if (4 < uVar5) {
    if (uVar5 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar5 = *(uint *)(iVar8 + -4);
    if (uVar5 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar8 - (iVar7 + -0x30)) < uVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar8 - uVar5) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar11 + 0x14);
  uVar5 = 1 << uVar14;
  *(undefined1 *)(iVar7 + -0x33) = 0xff;
  *(undefined2 *)(iVar7 + -0x32) = 0;
  do {
    uVar15 = *(uint *)(iVar11 + 0x10);
    uVar16 = *(uint *)(iVar11 + 0xc) | uVar15;
    if ((uVar5 & uVar16) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar15 == 0) || (uVar16 + uVar5 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar11,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar6;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar6 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar11 + 0x10) = uVar5 + uVar15;
      return;
    }
    puVar20 = (uint *)(iVar11 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar20);
      uVar16 = *puVar20;
      if (uVar15 != uVar16) goto LAB_016d409c;
      bVar4 = (bool)hasExclusiveAccess(puVar20);
    } while (!bVar4);
    *puVar20 = uVar5 + uVar15;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar15 == uVar16) {
      return;
    }
  } while( true );
}

