// FUN_0074ecc8 @ 0074ecc8 size=180 calls_out=1 calls_in=0
// strings: 

void FUN_0074ecc8(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar9 = param_1[7];
  if (iVar9 != 0) {
    iVar12 = param_1[3];
    puVar14 = (uint *)param_1[5];
    uVar4 = param_1[4];
    do {
      puVar15 = puVar14;
      if (uVar4 == 0) {
        do {
          puVar14 = puVar15 + 1;
          uVar4 = *puVar15;
          iVar12 = iVar12 + -0x20;
          puVar15 = puVar14;
        } while ((uVar4 & 0x80808080) == 0x80808080);
        uVar4 = uVar4 & 0x80808080 ^ 0x80808080;
        param_1[3] = iVar12;
        param_1[5] = (int)puVar14;
      }
      iVar9 = iVar9 + -1;
      uVar16 = uVar4 - 1 & uVar4;
      param_1[7] = iVar9;
      param_1[4] = uVar16;
      FUN_006495dc((iVar12 - (LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) & 0x38U)) + -4);
      uVar4 = uVar16;
    } while (iVar9 != 0);
  }
  iVar9 = 0;
  if (*param_1 != 0) {
    iVar9 = param_1[1];
  }
  if (*param_1 == 0 || iVar9 == 0) {
    return;
  }
  iVar9 = param_1[2];
  if (iVar9 == 0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar4 = *(byte *)(iVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar16 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar6 = uVar16 - 0x10, uVar16 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar16 = (uint)(*(byte *)(iVar9 + -3) >> 5);
  iVar13 = *(int *)(iVar12 + 8) + 0x10;
  iVar10 = iVar6 * uVar4 + iVar6 + -4;
  iVar6 = iVar13 + iVar10;
  if (4 < uVar16) {
    if (uVar16 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar16 = *(uint *)(iVar6 + -4);
    if (uVar16 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar6 - iVar9) < uVar16) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar16) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar12 + 0x14);
  uVar16 = 1 << uVar4;
  *(undefined1 *)(iVar9 + -3) = 0xff;
  *(undefined2 *)(iVar9 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar12 + 0x10);
    uVar7 = *(uint *)(iVar12 + 0xc) | uVar11;
    if ((uVar16 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar16 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar16 + uVar11;
      return;
    }
    puVar14 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar7 = *puVar14;
      if (uVar11 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar16 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

