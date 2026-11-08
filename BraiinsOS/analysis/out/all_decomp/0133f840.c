// FUN_0133f840 @ 0133f840 size=224 calls_out=1 calls_in=0
// strings: 

void FUN_0133f840(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = param_1[7];
  while (iVar4 != 0) {
    iVar8 = param_1[3];
    uVar9 = param_1[4];
    if (uVar9 == 0) {
      puVar17 = (uint *)param_1[5];
      do {
        puVar6 = puVar17 + 1;
        uVar9 = *puVar17;
        iVar8 = iVar8 + -0x30;
        puVar17 = puVar6;
      } while ((uVar9 & 0x80808080) == 0x80808080);
      uVar9 = uVar9 & 0x80808080 ^ 0x80808080;
      param_1[3] = iVar8;
      param_1[5] = (int)puVar6;
    }
    param_1[7] = iVar4 + -1;
    iVar8 = iVar8 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                   (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) * -0xc;
    param_1[4] = uVar9 - 1 & uVar9;
    piVar7 = *(int **)(iVar8 + -0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013532e4(*(undefined4 *)(iVar8 + -0xc));
    }
    iVar4 = param_1[7];
  }
  iVar4 = 0;
  if (*param_1 != 0) {
    iVar4 = param_1[1];
  }
  if (*param_1 == 0 || iVar4 == 0) {
    return;
  }
  iVar4 = param_1[2];
  if (iVar4 == 0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar9 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar10 = uVar13 - 0x10, uVar13 == 0)) {
    iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar13 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar16 = *(int *)(iVar8 + 8) + 0x10;
  iVar14 = iVar10 * uVar9 + iVar10 + -4;
  iVar10 = iVar16 + iVar14;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar13 = *(uint *)(iVar10 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar10 - iVar4) < uVar13) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar10 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar16 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar8 + 0x14);
  uVar13 = 1 << uVar9;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar15 = *(uint *)(iVar8 + 0x10);
    uVar11 = *(uint *)(iVar8 + 0xc) | uVar15;
    if ((uVar13 & uVar11) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar15 == 0) || (uVar11 + uVar13 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar8,uVar9);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar8 + 0x10) = uVar13 + uVar15;
      return;
    }
    puVar17 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar11 = *puVar17;
      if (uVar15 != uVar11) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar1);
    *puVar17 = uVar13 + uVar15;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar15 == uVar11) {
      return;
    }
  } while( true );
}

