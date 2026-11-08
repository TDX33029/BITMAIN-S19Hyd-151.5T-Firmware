// FUN_016ae4c0 @ 016ae4c0 size=192 calls_out=0 calls_in=0
// strings: 

void FUN_016ae4c0(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar17 = param_1[7];
  if (iVar17 != 0) {
    iVar13 = param_1[3];
    uVar9 = param_1[4];
    puVar15 = (uint *)param_1[5];
    do {
      puVar16 = puVar15;
      if (uVar9 == 0) {
        do {
          puVar15 = puVar16 + 1;
          uVar9 = *puVar16;
          iVar13 = iVar13 + -0x30;
          puVar16 = puVar15;
        } while ((uVar9 & 0x80808080) == 0x80808080);
        uVar9 = uVar9 & 0x80808080 ^ 0x80808080;
        param_1[3] = iVar13;
        param_1[5] = (int)puVar15;
      }
      uVar10 = uVar9 >> 8;
      uVar7 = uVar9 >> 0x10;
      uVar12 = uVar9 >> 0x18;
      uVar1 = uVar9 << 0x18;
      iVar17 = iVar17 + -1;
      uVar9 = uVar9 - 1 & uVar9;
      param_1[7] = iVar17;
      param_1[4] = uVar9;
      iVar5 = iVar13 + ((uint)LZCOUNT(uVar1 | (uVar10 & 0xff) << 0x10 | (uVar7 & 0xff) << 8 | uVar12
                                     ) >> 3) * -0xc;
      (**(code **)(*(int *)(iVar5 + -8) + 0xc))(*(undefined4 *)(iVar5 + -4));
    } while (iVar17 != 0);
  }
  iVar17 = 0;
  if (*param_1 != 0) {
    iVar17 = param_1[1];
  }
  if (*param_1 == 0 || iVar17 == 0) {
    return;
  }
  iVar17 = param_1[2];
  if (iVar17 == 0) {
    return;
  }
  iVar13 = FUN_016d3bc8();
  uVar9 = *(byte *)(iVar17 + -3) & 0x1f;
  if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar5 = uVar10 - 0x10, uVar10 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar17 + -3) >> 5);
  iVar14 = *(int *)(iVar13 + 8) + 0x10;
  iVar11 = iVar5 * uVar9 + iVar5 + -4;
  iVar5 = iVar14 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar10 = *(uint *)(iVar5 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar5 - iVar17) < uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar5 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar13 + 0x14);
  uVar10 = 1 << uVar9;
  *(undefined1 *)(iVar17 + -3) = 0xff;
  *(undefined2 *)(iVar17 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar13 + 0x10);
    uVar7 = *(uint *)(iVar13 + 0xc) | uVar12;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar13,uVar9);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar13 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar13 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar7 = *puVar15;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar4 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar4);
    *puVar15 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

