// FUN_0121cfb0 @ 0121cfb0 size=476 calls_out=4 calls_in=1
// strings: 

void FUN_0121cfb0(uint *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *extraout_r1;
  int *extraout_r1_00;
  int *piVar7;
  int *extraout_r1_01;
  int *extraout_r1_02;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint *puVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar6 = param_1[3];
  uVar11 = *param_1;
  iVar16 = 0;
  if (uVar6 == 0) {
    uVar14 = 0;
    uVar6 = 0;
  }
  else {
    uVar8 = param_1[2];
    uVar14 = uVar8 - uVar11;
    if (uVar8 < uVar11) {
      uVar14 = uVar8;
    }
    if (uVar11 - uVar14 < uVar6) {
      iVar16 = uVar6 - (uVar11 - uVar14);
      uVar6 = uVar11;
    }
    else {
      uVar6 = uVar14 + uVar6;
    }
  }
  uVar8 = param_1[1];
  FUN_0135273c(uVar8 + uVar14 * 0x10,uVar6 - uVar14);
  FUN_0135273c(uVar8,iVar16);
  if (uVar11 != 0) {
    thunk_FUN_016d3fb4(uVar8);
  }
  uVar6 = param_1[5];
  if (uVar6 != 0) {
    uVar11 = param_1[7];
    if (uVar11 != 0) {
      puVar17 = (uint *)param_1[4];
      puVar18 = puVar17 + 1;
      uVar14 = ~*puVar17 & 0x80808080;
      do {
        puVar12 = puVar18;
        if (uVar14 == 0) {
          do {
            puVar18 = puVar12 + 1;
            uVar14 = *puVar12;
            puVar17 = puVar17 + -0x10;
            puVar12 = puVar18;
          } while ((uVar14 & 0x80808080) == 0x80808080);
          uVar14 = uVar14 & 0x80808080 ^ 0x80808080;
        }
        uVar8 = LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8
                        | uVar14 >> 0x18) & 0x38;
        if (*(int *)((int)puVar17 + uVar8 * -2 + -0x10) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)((int)puVar17 + uVar8 * -2 + -0xc));
        }
        uVar11 = uVar11 - 1;
        uVar14 = uVar14 - 1 & uVar14;
      } while (uVar11 != 0);
    }
    if (uVar6 * 0x11 != -0x15) {
      thunk_FUN_016d3fb4(param_1[4] + uVar6 * -0x10 + -0x10);
    }
  }
  FUN_0133f4cc(param_1 + 0x10);
  piVar7 = extraout_r1;
  if (param_1[0x28] != 0) {
    thunk_FUN_016d3fb4(param_1[0x29]);
    piVar7 = extraout_r1_00;
  }
  uVar6 = param_1[0x2d];
  if (uVar6 != 0) {
    uVar14 = param_1[0x2c];
    uVar11 = 0;
    do {
      piVar7 = *(int **)(uVar14 + uVar11 * 4);
      uVar8 = uVar11 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar16 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar16 + -1;
      if (iVar16 == 1) {
        DataMemoryBarrier(0xb);
        FUN_013532e4(*(undefined4 *)(uVar14 + uVar11 * 4));
        piVar7 = extraout_r1_01;
      }
      uVar11 = uVar8;
    } while (uVar8 != uVar6);
  }
  if (param_1[0x2b] != 0) {
    thunk_FUN_016d3fb4(param_1[0x2c]);
    piVar7 = extraout_r1_02;
  }
  uVar6 = param_1[0x1d];
  if (uVar6 != 0) {
    piVar7 = (int *)(uVar6 * 5);
  }
  if (uVar6 == 0 || piVar7 == (int *)0xfffffff7) {
    return;
  }
  iVar16 = param_1[0x1c] + uVar6 * -4;
  if (iVar16 + -4 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar6 = *(byte *)(iVar16 + -7) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar9 = uVar11 - 0x10, uVar11 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar16 + -7) >> 5);
  iVar15 = *(int *)(iVar4 + 8) + 0x10;
  iVar13 = iVar9 * uVar6 + iVar9 + -4;
  iVar9 = iVar15 + iVar13;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar9 + -4);
    if (uVar11 < 5) {
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
  if ((uint)(iVar9 - (iVar16 + -4)) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar9 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar4 + 0x14);
  uVar11 = 1 << uVar6;
  *(undefined1 *)(iVar16 + -7) = 0xff;
  *(undefined2 *)(iVar16 + -6) = 0;
  do {
    uVar8 = *(uint *)(iVar4 + 0x10);
    uVar14 = *(uint *)(iVar4 + 0xc) | uVar8;
    if ((uVar11 & uVar14) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar8 == 0) || (uVar14 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar6);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar11 + uVar8;
      return;
    }
    puVar18 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar14 = *puVar18;
      if (uVar8 != uVar14) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar1);
    *puVar18 = uVar11 + uVar8;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar8 == uVar14) {
      return;
    }
  } while( true );
}

