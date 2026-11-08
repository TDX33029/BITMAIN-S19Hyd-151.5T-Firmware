// FUN_0125a754 @ 0125a754 size=224 calls_out=2 calls_in=1
// strings: 

void FUN_0125a754(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_r4;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  
  iVar14 = *(int *)(param_1 + 0x14);
  if (iVar14 != 0) {
    iVar15 = *(int *)(param_1 + 0x1c);
    if (iVar15 != 0) {
      puVar13 = *(uint **)(param_1 + 0x10);
      puVar16 = puVar13 + 1;
      uVar11 = ~*puVar13 & 0x80808080;
      do {
        puVar7 = puVar16;
        if (uVar11 == 0) {
          do {
            puVar16 = puVar7 + 1;
            uVar11 = *puVar7;
            puVar13 = puVar13 + -0x1c;
            puVar7 = puVar16;
          } while ((uVar11 & 0x80808080) == 0x80808080);
          uVar11 = uVar11 & 0x80808080 ^ 0x80808080;
        }
        FUN_011a4148(puVar13 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                              (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) *
                               -7 + -7);
        iVar15 = iVar15 + -1;
        uVar11 = uVar11 - 1 & uVar11;
      } while (iVar15 != 0);
    }
    if (iVar14 * 0x1d != -0x21) {
      thunk_FUN_016d3fb4(*(int *)(param_1 + 0x10) + iVar14 * -0x1c + -0x1c);
    }
  }
  if ((param_1 == -1) ||
     (iVar14 = *(int *)(param_1 + 4) + -1, *(int *)(param_1 + 4) = iVar14, iVar14 != 0)) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar11 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar15 = uVar8 - 0x10, uVar8 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar8 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar12 = *(int *)(iVar14 + 8) + 0x10;
  iVar9 = iVar15 * uVar11 + iVar15 + -4;
  iVar15 = iVar12 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar15 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar15 - param_1) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar14 + 0x14);
  uVar8 = 1 << uVar11;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar14 + 0x10);
    uVar5 = *(uint *)(iVar14 + 0xc) | uVar10;
    if ((uVar8 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar5 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar14,uVar11);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar4;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar4 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar16 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar5 = *puVar16;
      if (uVar10 != uVar5) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar5) {
      return;
    }
  } while( true );
}

