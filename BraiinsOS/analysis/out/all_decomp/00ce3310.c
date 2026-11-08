// FUN_00ce3310 @ 00ce3310 size=204 calls_out=1 calls_in=1
// strings: 

void FUN_00ce3310(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_r4;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  
  iVar14 = param_1[1];
  iVar4 = param_1[3];
  iVar11 = 0;
  while (iVar11 != ((uint)(iVar4 - iVar14) >> 4) * -0x33333333) {
    iVar5 = iVar14 + iVar11 * 0x50;
    iVar12 = *(int *)(iVar5 + 0x44);
    puVar8 = (undefined4 *)(iVar12 + 0x10);
    for (iVar15 = *(int *)(iVar5 + 0x48); iVar15 != 0; iVar15 = iVar15 + -1) {
      if (puVar8[-4] != 0) {
        thunk_FUN_016d3fb4(puVar8[-3]);
      }
      if (puVar8[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar8);
      }
      puVar8 = puVar8 + 6;
    }
    iVar11 = iVar11 + 1;
    if (*(int *)(iVar5 + 0x40) != 0) {
      thunk_FUN_016d3fb4(iVar12);
    }
  }
  if (param_1[2] == 0) {
    return;
  }
  iVar4 = *param_1;
  if (iVar4 == 0) {
    return;
  }
  iVar11 = FUN_016d3bc8();
  uVar13 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar14 = uVar9 - 0x10, uVar9 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar9 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar12 = *(int *)(iVar11 + 8) + 0x10;
  iVar5 = iVar14 * uVar13 + iVar14 + -4;
  iVar14 = iVar12 + iVar5;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar14 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar14 - iVar4) < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar5) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar11 + 0x14);
  uVar9 = 1 << uVar13;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar11 + 0x10);
    uVar6 = *(uint *)(iVar11 + 0xc) | uVar10;
    if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar6 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar11,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar8;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar8 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar11 + 0x10) = uVar9 + uVar10;
      return;
    }
    puVar16 = (uint *)(iVar11 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar6 = *puVar16;
      if (uVar10 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar9 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar6) {
      return;
    }
  } while( true );
}

