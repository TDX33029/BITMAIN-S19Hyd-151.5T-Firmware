// FUN_00f3d728 @ 00f3d728 size=188 calls_out=2 calls_in=1
// strings: 

void FUN_00f3d728(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = *param_1;
  uVar6 = iVar4 + 0x80000001U & iVar4 >> 0x1f;
  if (uVar6 == 0) {
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    iVar4 = param_1[3];
    if (iVar4 == -0x80000000) {
      return;
    }
    iVar9 = param_1[4];
    for (iVar14 = param_1[5]; iVar14 != 0; iVar14 = iVar14 + -1) {
      FUN_00f3beb4(iVar9);
      iVar9 = iVar9 + 0x48;
    }
    iVar9 = 0xc;
  }
  else {
    if (uVar6 != 1) {
      return;
    }
    iVar4 = param_1[2];
    for (iVar9 = param_1[3]; iVar9 != 0; iVar9 = iVar9 + -1) {
      FUN_00f3beb4(iVar4);
      iVar4 = iVar4 + 0x48;
    }
    iVar4 = param_1[1];
    iVar9 = 4;
  }
  if (iVar4 == 0) {
    return;
  }
  iVar4 = *(int *)((int)param_1 + iVar9 + 4);
  if (iVar4 == 0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar6 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar14 = uVar10 - 0x10, uVar10 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar13 = *(int *)(iVar9 + 8) + 0x10;
  iVar11 = iVar14 * uVar6 + iVar14 + -4;
  iVar14 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar14 + -4);
    if (uVar10 < 5) {
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
  if ((uint)(iVar14 - iVar4) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar9 + 0x14);
  uVar10 = 1 << uVar6;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar9 + 0x10);
    uVar7 = *(uint *)(iVar9 + 0xc) | uVar12;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar9,uVar6);
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
      *(uint *)(iVar9 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar7 = *puVar15;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

