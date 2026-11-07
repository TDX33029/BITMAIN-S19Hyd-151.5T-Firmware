// FUN_0152da3c @ 0152da3c size=232 calls_out=3 calls_in=0
// strings: 

void FUN_0152da3c(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int unaff_r4;
  int *piVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int *local_28;
  
  iVar18 = *(int *)(param_1 + 0x24);
  piVar7 = (int *)(param_1 + 0x10);
  if (iVar18 != 0) {
    iVar16 = *(int *)(param_1 + 0x2c);
    local_28 = piVar7;
    if (iVar16 != 0) {
      puVar9 = *(uint **)(param_1 + 0x20);
      puVar14 = puVar9 + 1;
      uVar17 = ~*puVar9 & 0x80808080;
      do {
        puVar13 = puVar14;
        if (uVar17 == 0) {
          do {
            puVar14 = puVar13 + 1;
            uVar17 = *puVar13;
            puVar9 = puVar9 + -0x90;
            puVar13 = puVar14;
          } while ((uVar17 & 0x80808080) == 0x80808080);
          uVar17 = uVar17 & 0x80808080 ^ 0x80808080;
        }
        FUN_015329e4(puVar9 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                             (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) *
                              -0x24 + -0x24);
        iVar16 = iVar16 + -1;
        uVar17 = uVar17 - 1 & uVar17;
      } while (iVar16 != 0);
    }
    piVar7 = local_28;
    if (iVar18 * 0x91 != -0x95) {
      thunk_FUN_016d3fb4(*(int *)(param_1 + 0x20) + iVar18 * -0x90 + -0x90);
    }
  }
  FUN_0156252c(piVar7);
  if (*piVar7 == 0) {
    return;
  }
  iVar18 = *(int *)(param_1 + 0x14);
  if (iVar18 == 0) {
    return;
  }
  iVar16 = FUN_016d3bc8();
  uVar17 = *(byte *)(iVar18 + -3) & 0x1f;
  if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar5 = uVar10 - 0x10, uVar10 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar18 + -3) >> 5);
  iVar15 = *(int *)(iVar16 + 8) + 0x10;
  iVar11 = iVar5 * uVar17 + iVar5 + -4;
  iVar5 = iVar15 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar5 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar5 - iVar18) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar5 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar16 + 0x14);
  uVar10 = 1 << uVar17;
  *(undefined1 *)(iVar18 + -3) = 0xff;
  *(undefined2 *)(iVar18 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar16 + 0x10);
    uVar6 = *(uint *)(iVar16 + 0xc) | uVar12;
    if ((uVar10 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar6 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar16,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar4;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar4 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar16 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar9 = (uint *)(iVar16 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar9);
      uVar6 = *puVar9;
      if (uVar12 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar3);
    *puVar9 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar6) {
      return;
    }
  } while( true );
}

