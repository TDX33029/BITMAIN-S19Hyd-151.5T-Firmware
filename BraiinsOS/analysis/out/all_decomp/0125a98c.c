// FUN_0125a98c @ 0125a98c size=260 calls_out=2 calls_in=1
// strings: 

void FUN_0125a98c(int param_1)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  undefined4 uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 uStack_28;
  
  iVar15 = *(int *)(param_1 + 0x14);
  if (iVar15 != 0) {
    iVar16 = *(int *)(param_1 + 0x1c);
    if (iVar16 != 0) {
      puVar14 = *(uint **)(param_1 + 0x10);
      puVar18 = puVar14 + 1;
      uVar17 = ~*puVar14 & 0x80808080;
      do {
        puVar10 = puVar18;
        if (uVar17 == 0) {
          do {
            puVar18 = puVar10 + 1;
            uVar17 = *puVar10;
            puVar14 = puVar14 + -8;
            puVar10 = puVar18;
          } while ((uVar17 & 0x80808080) == 0x80808080);
          uVar17 = uVar17 & 0x80808080 ^ 0x80808080;
        }
        uVar11 = uVar17 >> 8;
        uVar8 = uVar17 >> 0x10;
        uVar12 = uVar17 >> 0x18;
        uVar1 = uVar17 << 0x18;
        uVar17 = uVar17 - 1 & uVar17;
        iVar16 = iVar16 + -1;
        piVar6 = *(int **)((int)puVar14 +
                          (-4 - (LZCOUNT(uVar1 | (uVar11 & 0xff) << 0x10 | (uVar8 & 0xff) << 8 |
                                         uVar12) & 0x38U)));
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_011dacac();
        }
      } while (iVar16 != 0);
    }
    if (iVar15 * 9 != -0xd) {
      thunk_FUN_016d3fb4(*(int *)(param_1 + 0x10) + iVar15 * -8 + -8);
    }
  }
  if ((param_1 == -1) ||
     (iVar15 = *(int *)(param_1 + 4) + -1, *(int *)(param_1 + 4) = iVar15, iVar15 != 0)) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  iVar15 = FUN_016d3bc8();
  uVar17 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar16 = uVar11 - 0x10, uVar11 == 0)) {
    iVar16 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar11 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar13 = *(int *)(iVar15 + 8) + 0x10;
  iVar7 = iVar16 * uVar17 + iVar16 + -4;
  iVar16 = iVar13 + iVar7;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar11 = *(uint *)(iVar16 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar16 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar16 - param_1) < uVar11) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar16 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar13 + iVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar4 = *(byte *)(iVar15 + 0x14);
  uVar11 = 1 << uVar17;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar15 + 0x10);
    uVar8 = *(uint *)(iVar15 + 0xc) | uVar12;
    if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar11 == (2 << (bVar4 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar15,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar15 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar18 = (uint *)(iVar15 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar8 = *puVar18;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar2);
    *puVar18 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

