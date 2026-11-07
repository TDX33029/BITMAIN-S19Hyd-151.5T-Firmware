// FUN_0164352c @ 0164352c size=272 calls_out=3 calls_in=1
// strings: 

void FUN_0164352c(int *param_1)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar17 = param_1[7];
  if (iVar17 != 0) {
    iVar13 = param_1[3];
    uVar18 = param_1[4];
    puVar15 = (uint *)param_1[5];
    do {
      puVar16 = puVar15;
      if (uVar18 == 0) {
        do {
          puVar15 = puVar16 + 1;
          uVar18 = *puVar16;
          iVar13 = iVar13 + -0x40;
          puVar16 = puVar15;
        } while ((uVar18 & 0x80808080) == 0x80808080);
        uVar18 = uVar18 & 0x80808080 ^ 0x80808080;
        param_1[3] = iVar13;
        param_1[5] = (int)puVar15;
      }
      uVar11 = uVar18 >> 8;
      uVar8 = uVar18 >> 0x10;
      uVar12 = uVar18 >> 0x18;
      uVar1 = uVar18 << 0x18;
      iVar17 = iVar17 + -1;
      uVar18 = uVar18 - 1 & uVar18;
      param_1[7] = iVar17;
      iVar10 = iVar13 + (LZCOUNT(uVar1 | (uVar11 & 0xff) << 0x10 | (uVar8 & 0xff) << 8 | uVar12) &
                        0x38U) * -2;
      param_1[4] = uVar18;
      FUN_016dea68(*(undefined4 *)(iVar10 + -4));
      piVar5 = *(int **)(iVar10 + -0xc);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015e92c0(*(undefined4 *)(iVar10 + -0xc));
      }
      piVar5 = *(int **)(iVar10 + -8);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659070(*(undefined4 *)(iVar10 + -8));
      }
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
  uVar18 = *(byte *)(iVar17 + -3) & 0x1f;
  if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar10 = uVar11 - 0x10, uVar11 == 0)) {
    iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar11 = (uint)(*(byte *)(iVar17 + -3) >> 5);
  iVar14 = *(int *)(iVar13 + 8) + 0x10;
  iVar7 = iVar10 * uVar18 + iVar10 + -4;
  iVar10 = iVar14 + iVar7;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar11 = *(uint *)(iVar10 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar10 - iVar17) < uVar11) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar10 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar14 + iVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar4 = *(byte *)(iVar13 + 0x14);
  uVar11 = 1 << uVar18;
  *(undefined1 *)(iVar17 + -3) = 0xff;
  *(undefined2 *)(iVar17 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar13 + 0x10);
    uVar8 = *(uint *)(iVar13 + 0xc) | uVar12;
    if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar11 == (2 << (bVar4 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar13,uVar18);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar13 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar13 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar8 = *puVar15;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

