// FUN_013c0148 @ 013c0148 size=272 calls_out=3 calls_in=1
// strings: 

void FUN_013c0148(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar9 = *(int *)(param_1 + 8);
  puVar5 = (undefined4 *)(iVar9 + 4);
  for (iVar12 = *(int *)(param_1 + 0xc); iVar12 != 0; iVar12 = iVar12 + -1) {
    if (puVar5[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar5);
    }
    puVar5 = puVar5 + 9;
  }
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_016d3fb4(iVar9);
  }
  iVar13 = *(int *)(param_1 + 0x18);
  iVar12 = *(int *)(param_1 + 0x1c) + 1;
  iVar9 = iVar13;
  while (iVar12 = iVar12 + -1, iVar12 != 0) {
    FUN_01363188(iVar9);
    iVar9 = iVar9 + 0x70;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    thunk_FUN_016d3fb4(iVar13);
  }
  uVar10 = *(undefined4 *)(param_1 + 0x28);
  FUN_013632c8(uVar10,*(undefined4 *)(param_1 + 0x2c));
  if (*(int *)(param_1 + 0x24) != 0) {
    thunk_FUN_016d3fb4(uVar10);
  }
  iVar9 = *(int *)(param_1 + 0x38);
  puVar5 = (undefined4 *)(iVar9 + 4);
  for (iVar12 = *(int *)(param_1 + 0x3c); iVar12 != 0; iVar12 = iVar12 + -1) {
    if (puVar5[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar5);
    }
    puVar5 = puVar5 + 10;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    thunk_FUN_016d3fb4(iVar9);
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    return;
  }
  iVar9 = *(int *)(param_1 + 0x48);
  if (iVar9 == 0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar6 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar13 = uVar6 - 0x10, uVar6 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar6 = (uint)(*(byte *)(iVar9 + -3) >> 5);
  iVar11 = *(int *)(iVar12 + 8) + 0x10;
  iVar7 = iVar13 * uVar14 + iVar13 + -4;
  iVar13 = iVar11 + iVar7;
  if (4 < uVar6) {
    if (uVar6 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar6 = *(uint *)(iVar13 + -4);
    if (uVar6 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar13 - iVar9) < uVar6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 - uVar6) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 + iVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar12 + 0x14);
  uVar6 = 1 << uVar14;
  *(undefined1 *)(iVar9 + -3) = 0xff;
  *(undefined2 *)(iVar9 + -2) = 0;
  do {
    uVar8 = *(uint *)(iVar12 + 0x10);
    uVar4 = *(uint *)(iVar12 + 0xc) | uVar8;
    if ((uVar6 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar8 == 0) || (uVar4 + uVar6 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar6 + uVar8;
      return;
    }
    puVar15 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar4 = *puVar15;
      if (uVar8 != uVar4) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar6 + uVar8;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar8 == uVar4) {
      return;
    }
  } while( true );
}

