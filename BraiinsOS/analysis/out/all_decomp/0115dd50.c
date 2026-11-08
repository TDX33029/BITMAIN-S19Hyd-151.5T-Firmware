// FUN_0115dd50 @ 0115dd50 size=712 calls_out=6 calls_in=7
// strings: 

void FUN_0115dd50(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int unaff_r4;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  uint *puVar18;
  undefined4 uStack_28;
  
  iVar14 = param_1[1];
  if (iVar14 != 0) {
    iVar17 = param_1[3];
    if (iVar17 != 0) {
      puVar12 = (uint *)*param_1;
      puVar18 = puVar12 + 1;
      uVar11 = ~*puVar12 & 0x80808080;
      do {
        puVar7 = puVar18;
        if (uVar11 == 0) {
          do {
            puVar18 = puVar7 + 1;
            uVar11 = *puVar7;
            puVar12 = puVar12 + -0xc;
            puVar7 = puVar18;
          } while ((uVar11 & 0x80808080) == 0x80808080);
          uVar11 = uVar11 & 0x80808080 ^ 0x80808080;
        }
        uVar9 = (uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                              (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
        if (puVar12[uVar9 * -3 + -3] != 0) {
          thunk_FUN_016d3fb4(puVar12[uVar9 * -3 + -2]);
        }
        iVar17 = iVar17 + -1;
        uVar11 = uVar11 - 1 & uVar11;
      } while (iVar17 != 0);
    }
    if (iVar14 * 0xd != -0x11) {
      thunk_FUN_016d3fb4(*param_1 + iVar14 * -0xc + -0xc);
    }
  }
  if (param_1[0xc] != 0) {
    FUN_0115ccf0();
  }
  FUN_0115cac4(param_1 + 0x1a);
  if (param_1[0x11] != 0) {
    FUN_0115ccf0();
  }
  iVar15 = param_1[0x1e];
  iVar13 = param_1[0x1f];
  iVar14 = iVar15;
  for (iVar17 = 0; iVar13 != iVar17; iVar17 = iVar17 + 1) {
    FUN_0115ccf0(iVar14);
    FUN_0115dd50(iVar14 + 0x18);
    iVar14 = iVar14 + 0xc0;
  }
  if (param_1[0x1d] != 0) {
    thunk_FUN_016d3fb4(iVar15);
  }
  iVar15 = param_1[0x21];
  iVar13 = param_1[0x22];
  iVar14 = iVar15;
  for (iVar17 = 0; iVar13 != iVar17; iVar17 = iVar17 + 1) {
    FUN_0115ccf0(iVar14);
    FUN_0115dd50(iVar14 + 0x18);
    iVar14 = iVar14 + 0xc0;
  }
  if (param_1[0x20] != 0) {
    thunk_FUN_016d3fb4(iVar15);
  }
  iVar15 = param_1[0x24];
  iVar13 = param_1[0x25];
  iVar14 = iVar15;
  for (iVar17 = 0; iVar13 != iVar17; iVar17 = iVar17 + 1) {
    FUN_0115ccf0(iVar14);
    FUN_0115dd50(iVar14 + 0x18);
    iVar14 = iVar14 + 0xc0;
  }
  if (param_1[0x23] != 0) {
    thunk_FUN_016d3fb4(iVar15);
  }
  if (param_1[0x16] != 0) {
    FUN_0115e29c();
  }
  iVar14 = param_1[0x17];
  if (iVar14 != 0) {
    FUN_0115dd50(iVar14);
    thunk_FUN_016d3fb4(iVar14);
  }
  iVar14 = param_1[0x18];
  if (iVar14 != 0) {
    FUN_0115dd50(iVar14);
    thunk_FUN_016d3fb4(iVar14);
  }
  piVar5 = (int *)param_1[0x19];
  if (piVar5 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011dacac();
    }
  }
  piVar16 = (int *)param_1[0x27];
  piVar5 = piVar16;
  for (iVar14 = param_1[0x28] + 1; iVar14 != 1; iVar14 = iVar14 + -1) {
    if (*piVar5 != 0) {
      thunk_FUN_016d3fb4(piVar5[1]);
    }
    FUN_0115dd50(piVar5 + 4);
    piVar5 = piVar5 + 0x2e;
  }
  if (param_1[0x26] == 0) {
    return;
  }
  if (piVar16 == (int *)0x0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar11 = *(byte *)((int)piVar16 + -3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar17 = uVar9 - 0x10, uVar9 == 0)) {
    iVar17 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar9 = (uint)(*(byte *)((int)piVar16 + -3) >> 5);
  iVar15 = *(int *)(iVar14 + 8) + 0x10;
  iVar13 = iVar17 * uVar11 + iVar17 + -4;
  iVar17 = iVar15 + iVar13;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar9 = *(uint *)(iVar17 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar17 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar17 - (int)piVar16) < uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar17 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar14 + 0x14);
  uVar9 = 1 << uVar11;
  *(undefined1 *)((int)piVar16 + -3) = 0xff;
  *(undefined2 *)((int)piVar16 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar14 + 0x10);
    uVar6 = *(uint *)(iVar14 + 0xc) | uVar10;
    if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar10 == 0) || (uVar6 + uVar9 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar14,uVar11);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar4;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar4 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar9 + uVar10;
      return;
    }
    puVar18 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar6 = *puVar18;
      if (uVar10 != uVar6) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar1);
    *puVar18 = uVar9 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar6) {
      return;
    }
  } while( true );
}

