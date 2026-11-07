// FUN_011a4a08 @ 011a4a08 size=220 calls_out=2 calls_in=0
// strings: 

void FUN_011a4a08(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int unaff_r4;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  undefined4 uStack_28;
  
  iVar15 = param_1[7];
  if (iVar15 != 0) {
    iVar11 = param_1[3];
    puVar13 = (uint *)param_1[5];
    uVar4 = param_1[4];
    do {
      puVar14 = puVar13;
      if (uVar4 == 0) {
        do {
          puVar13 = puVar14 + 1;
          uVar4 = *puVar14;
          iVar11 = iVar11 + -0xc0;
          puVar14 = puVar13;
        } while ((uVar4 & 0x80808080) == 0x80808080);
        uVar4 = uVar4 & 0x80808080 ^ 0x80808080;
        param_1[3] = iVar11;
        param_1[5] = (int)puVar13;
      }
      iVar15 = iVar15 + -1;
      uVar16 = uVar4 - 1 & uVar4;
      param_1[7] = iVar15;
      param_1[4] = uVar16;
      iVar8 = iVar11 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) * -0x30;
      if (*(int *)(iVar8 + -0x30) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar8 + -0x2c));
      }
      FUN_01164f34(iVar8 + -0x20);
      uVar4 = uVar16;
    } while (iVar15 != 0);
  }
  iVar15 = 0;
  if (*param_1 != 0) {
    iVar15 = param_1[1];
  }
  if (*param_1 == 0 || iVar15 == 0) {
    return;
  }
  iVar15 = param_1[2];
  if (iVar15 == 0) {
    return;
  }
  iVar11 = FUN_016d3bc8();
  uVar4 = *(byte *)(iVar15 + -3) & 0x1f;
  if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
     (uVar16 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar8 = uVar16 - 0x10, uVar16 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar16 = (uint)(*(byte *)(iVar15 + -3) >> 5);
  iVar12 = *(int *)(iVar11 + 8) + 0x10;
  iVar9 = iVar8 * uVar4 + iVar8 + -4;
  iVar8 = iVar12 + iVar9;
  if (4 < uVar16) {
    if (uVar16 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar16 = *(uint *)(iVar8 + -4);
    if (uVar16 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar8 - iVar15) < uVar16) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar16) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar11 + 0x14);
  uVar16 = 1 << uVar4;
  *(undefined1 *)(iVar15 + -3) = 0xff;
  *(undefined2 *)(iVar15 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar11 + 0x10);
    uVar6 = *(uint *)(iVar11 + 0xc) | uVar10;
    if ((uVar16 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar6 + uVar16 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar11,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar5;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar5 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar11 + 0x10) = uVar16 + uVar10;
      return;
    }
    puVar13 = (uint *)(iVar11 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar13);
      uVar6 = *puVar13;
      if (uVar10 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar13);
    } while (!bVar3);
    *puVar13 = uVar16 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar6) {
      return;
    }
  } while( true );
}

