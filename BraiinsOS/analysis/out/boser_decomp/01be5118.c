// FUN_01be5118 @ 01be5118 size=738 calls_out=7 calls_in=2
// strings: 

int FUN_01be5118(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  byte bVar16;
  
  if (0x7fffeffe < param_1) {
    puVar5 = (undefined4 *)FUN_01be3244();
    *puVar5 = 0xc;
    return 0;
  }
  if (0x1ffeb < param_1) {
    piVar6 = (int *)FUN_01be6c88(0,param_1 + 0x14,3,0x22,0xffffffff);
    if (piVar6 == (int *)&DAT_ffffffff) {
      return 0;
    }
    if (DAT_01d53573 != '\0') {
      FUN_01bedf2c(&DAT_01d537b0);
    }
    if (DAT_01d537a8 == -1) {
      puVar14 = (undefined1 *)0x1d53767;
      do {
        puVar14 = puVar14 + 1;
        *puVar14 = 0;
      } while (puVar14 != &DAT_01d53787);
      DAT_01d537a8 = '\x01';
    }
    else {
      DAT_01d537a8 = DAT_01d537a8 + '\x01';
    }
    iVar15 = FUN_01be4804();
    if (iVar15 == 0) {
      FUN_01bee02c(&DAT_01d537b0);
      FUN_01be6d98(piVar6,param_1 + 0x14);
      return 0;
    }
    *(int **)(iVar15 + 8) = piVar6;
    *piVar6 = iVar15;
    uVar11 = 0;
    *(undefined4 *)(iVar15 + 0x10) = 0;
    *(undefined4 *)(iVar15 + 0xc) = 0;
    *(uint *)(iVar15 + 0x14) = param_1 + 0x1013 & 0xfffff000 | 0xfe0;
    DAT_01d535c4 = DAT_01d535c4 + 1;
    uVar12 = 0;
    goto LAB_01be52ac;
  }
  uVar11 = param_1 + 3 >> 4;
  if (0x9f < param_1 + 3) {
    uVar12 = uVar11 + 1;
    uVar11 = (0x1e - LZCOUNT(uVar12)) * 4;
    if (*(ushort *)(&DAT_0056569c + (uVar11 + 1) * 2) < uVar12) {
      uVar11 = uVar11 + 2;
    }
    if (*(ushort *)(&DAT_0056569c + uVar11 * 2) < uVar12) {
      uVar11 = uVar11 + 1;
    }
  }
  if (DAT_01d53573 != '\0') {
    FUN_01bedf2c(&DAT_01d537b0);
  }
  iVar15 = (&DAT_01d535b8)[uVar11 + 0xc];
  uVar12 = uVar11;
  if ((int)uVar11 < 4 || iVar15 != 0) {
LAB_01be51e8:
    uVar11 = uVar12;
    if (iVar15 != 0) {
      uVar12 = *(uint *)(iVar15 + 0xc);
      uVar7 = -uVar12 & uVar12;
      if (uVar7 != 0) {
        *(uint *)(iVar15 + 0xc) = uVar12 - uVar7;
        bVar2 = (byte)uVar7;
        bVar3 = (byte)(uVar7 >> 8);
        bVar4 = (byte)(uVar7 >> 0x10);
        bVar16 = (byte)(uVar7 >> 0x18);
        uVar11 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1
                                          ) << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                       bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                 bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                               bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                             bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
                                          ) << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                         8 | (uint)(byte)((((((((bVar16 & 1) << 1 | bVar16 >> 1 & 1) << 1 |
                                              bVar16 >> 2 & 1) << 1 | bVar16 >> 3 & 1) << 1 |
                                            bVar16 >> 4 & 1) << 1 | bVar16 >> 5 & 1) << 1 |
                                          bVar16 >> 6 & 1) << 1 | bVar16 >> 7));
        uVar12 = uVar11;
        goto LAB_01be52ac;
      }
    }
  }
  else if (((uVar11 != 6 && (int)uVar11 < 0x20) && (-1 < (int)(uVar11 << 0x1f))) &&
          ((&DAT_01d535b8)[uVar11 + 0x3c] == 0)) {
    uVar12 = uVar11 | 1;
    iVar15 = (&DAT_01d535b8)[uVar12 + 0xc];
    uVar7 = (&DAT_01d535b8)[uVar12 + 0x3c];
    if ((iVar15 == 0) || ((*(int *)(iVar15 + 0xc) == 0 && (*(int *)(iVar15 + 0x10) == 0)))) {
      uVar7 = uVar7 + 3;
    }
    if (uVar7 < 0xd) goto LAB_01be51e8;
  }
  uVar12 = FUN_01be4a38(uVar11,param_1);
  if ((int)uVar12 < 0) {
    FUN_01bee02c(&DAT_01d537b0);
    return 0;
  }
  iVar15 = (&DAT_01d535b8)[uVar11 + 0xc];
  uVar11 = uVar12 & 0xff;
LAB_01be52ac:
  iVar10 = DAT_01d535c4;
  bVar16 = (byte)uVar11;
  FUN_01bee02c(&DAT_01d537b0);
  if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar9 = uVar11 - 0x10, uVar11 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0056569c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (iVar9 - param_1) - 4;
  uVar7 = uVar11 >> 4;
  iVar13 = uVar12 * iVar9 + *(int *)(iVar15 + 8) + 0x10;
  iVar9 = iVar13 + iVar9 + -4;
  if (*(char *)(iVar13 + -3) == '\0') {
    bVar2 = (byte)iVar10;
  }
  else {
    bVar2 = (char)*(undefined2 *)(iVar13 + -2) + 1;
  }
  uVar12 = (uint)bVar2;
  if (*(char *)(iVar13 + -4) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be5304);
    (*pcVar1)();
  }
  if (((uVar7 < uVar12) &&
      (uVar11 = uVar7 | uVar11 >> 5, uVar11 = uVar11 | uVar11 >> 2,
      uVar12 = uVar12 & (uVar11 | uVar11 >> 4), uVar7 < uVar12)) &&
     (uVar12 = (uVar12 - uVar7) - 1, uVar7 < uVar12)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x1be5326);
    (*pcVar1)();
  }
  if (uVar12 != 0) {
    *(short *)(iVar13 + -2) = (short)uVar12;
    *(undefined1 *)(iVar13 + -3) = 0xe0;
    iVar13 = iVar13 + uVar12 * 0x10;
    *(undefined1 *)(iVar13 + -4) = 0;
  }
  iVar15 = *(int *)(iVar15 + 8);
  *(byte *)(iVar13 + -3) = bVar16;
  *(short *)(iVar13 + -2) = (short)((uint)(iVar13 - (iVar15 + 0x10)) >> 4);
  iVar15 = (iVar9 - iVar13) - param_1;
  cVar8 = '\0';
  if (iVar15 != 0) {
    iVar10 = iVar15;
    if (iVar15 < 5) {
      iVar10 = iVar15 * 0x20;
    }
    *(undefined1 *)(iVar9 - iVar15) = 0;
    if (iVar15 < 5) {
      cVar8 = (char)iVar10;
      bVar16 = *(byte *)(iVar13 + -3);
    }
    else {
      *(int *)(iVar9 + -4) = iVar10;
      cVar8 = -0x60;
      *(undefined1 *)(iVar9 + -5) = 0;
      bVar16 = *(byte *)(iVar13 + -3);
    }
  }
  *(byte *)(iVar13 + -3) = cVar8 + (bVar16 & 0x1f);
  return iVar13;
}

