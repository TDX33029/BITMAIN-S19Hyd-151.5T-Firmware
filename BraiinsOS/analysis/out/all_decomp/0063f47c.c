// FUN_0063f47c @ 0063f47c size=88 calls_out=1 calls_in=15
// strings: 

int FUN_0063f47c(uint param_1,uint param_2)

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
  bool bVar17;
  bool bVar18;
  undefined1 auStack_24 [12];
  
  bVar18 = 7 < param_2;
  bVar17 = param_2 == 8;
  if (param_2 < 9) {
    bVar18 = param_1 <= param_2;
    bVar17 = param_2 == param_1;
  }
  if (bVar18 && !bVar17) {
    if (param_2 < 5) {
      param_2 = 4;
    }
    FUN_016d51b0(auStack_24 + 0x18,param_2);
    return 0;
  }
  if (0x7fffeffe < param_1) {
    puVar5 = (undefined4 *)FUN_016d2bc8();
    *puVar5 = 0xc;
    return 0;
  }
  if (0x1ffeb < param_1) {
    piVar6 = (int *)FUN_016d69b4(0,param_1 + 0x14,3,0x22,0xffffffff);
    if (piVar6 == (int *)0xffffffff) {
      return 0;
    }
    if (DAT_018ddb0b != '\0') {
      FUN_016ddcc0(&DAT_018ddd48);
    }
    if (DAT_018ddd40 == -1) {
      puVar14 = (undefined1 *)0x18ddcff;
      do {
        puVar14 = puVar14 + 1;
        *puVar14 = 0;
      } while (puVar14 != &DAT_018ddd1f);
      DAT_018ddd40 = '\x01';
    }
    else {
      DAT_018ddd40 = DAT_018ddd40 + '\x01';
    }
    iVar15 = FUN_016d4140();
    if (iVar15 == 0) {
      FUN_016dddc0(&DAT_018ddd48);
      FUN_016d6ac4(piVar6,param_1 + 0x14);
      return 0;
    }
    *(int **)(iVar15 + 8) = piVar6;
    *piVar6 = iVar15;
    uVar11 = 0;
    *(undefined4 *)(iVar15 + 0x10) = 0;
    *(undefined4 *)(iVar15 + 0xc) = 0;
    *(uint *)(iVar15 + 0x14) = param_1 + 0x1013 & 0xfffff000 | 0xfe0;
    DAT_018ddb5c = DAT_018ddb5c + 1;
    uVar12 = 0;
    goto LAB_016d4be4;
  }
  uVar11 = param_1 + 3 >> 4;
  if (0x9f < param_1 + 3) {
    uVar12 = uVar11 + 1;
    uVar11 = (0x1e - LZCOUNT(uVar12)) * 4;
    if (*(ushort *)(&DAT_0042567c + (uVar11 + 1) * 2) < uVar12) {
      uVar11 = uVar11 + 2;
    }
    if (*(ushort *)(&DAT_0042567c + uVar11 * 2) < uVar12) {
      uVar11 = uVar11 + 1;
    }
  }
  if (DAT_018ddb0b != '\0') {
    FUN_016ddcc0(&DAT_018ddd48);
  }
  iVar15 = (&DAT_018ddb50)[uVar11 + 0xc];
  uVar12 = uVar11;
  if ((int)uVar11 < 4 || iVar15 != 0) {
LAB_016d4b20:
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
        goto LAB_016d4be4;
      }
    }
  }
  else if (((uVar11 != 6 && (int)uVar11 < 0x20) && (-1 < (int)(uVar11 << 0x1f))) &&
          ((&DAT_018ddb50)[uVar11 + 0x3c] == 0)) {
    uVar12 = uVar11 | 1;
    iVar15 = (&DAT_018ddb50)[uVar12 + 0xc];
    uVar7 = (&DAT_018ddb50)[uVar12 + 0x3c];
    if ((iVar15 == 0) || ((*(int *)(iVar15 + 0xc) == 0 && (*(int *)(iVar15 + 0x10) == 0)))) {
      uVar7 = uVar7 + 3;
    }
    if (uVar7 < 0xd) goto LAB_016d4b20;
  }
  uVar12 = FUN_016d4370(uVar11,param_1);
  if ((int)uVar12 < 0) {
    FUN_016dddc0(&DAT_018ddd48);
    return 0;
  }
  iVar15 = (&DAT_018ddb50)[uVar11 + 0xc];
  uVar11 = uVar12 & 0xff;
LAB_016d4be4:
  iVar10 = DAT_018ddb5c;
  bVar16 = (byte)uVar11;
  FUN_016dddc0(&DAT_018ddd48);
  if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar9 = uVar11 - 0x10, uVar11 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2) << 4;
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
    pcVar1 = (code *)software_udf(0xff,0x16d4c3c);
    (*pcVar1)();
  }
  if (((uVar7 < uVar12) &&
      (uVar11 = uVar7 | uVar11 >> 5, uVar11 = uVar11 | uVar11 >> 2,
      uVar12 = uVar12 & (uVar11 | uVar11 >> 4), uVar7 < uVar12)) &&
     (uVar12 = (uVar12 - uVar7) - 1, uVar7 < uVar12)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4c5e);
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

