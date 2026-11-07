// FUN_00ed5490 @ 00ed5490 size=240 calls_out=2 calls_in=0
// strings: 

void FUN_00ed5490(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x30));
  }
  iVar13 = *(int *)(param_1 + 0x3c);
  iVar12 = *(int *)(param_1 + 0x40) + 1;
  iVar10 = iVar13;
  while (iVar12 = iVar12 + -1, iVar12 != 0) {
    FUN_00f1583c(iVar10);
    iVar10 = iVar10 + 0x28;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    thunk_FUN_016d3fb4(iVar13);
  }
  iVar10 = *(int *)(param_1 + 0x48);
  puVar6 = (undefined4 *)(iVar10 + 4);
  for (iVar12 = *(int *)(param_1 + 0x4c); iVar12 != 0; iVar12 = iVar12 + -1) {
    if (puVar6[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar6);
    }
    puVar6 = puVar6 + 3;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    thunk_FUN_016d3fb4(iVar10);
  }
  iVar13 = *(int *)(param_1 + 0x54);
  iVar12 = *(int *)(param_1 + 0x58) + 1;
  iVar10 = iVar13;
  while (iVar12 = iVar12 + -1, iVar12 != 0) {
    FUN_00f1583c(iVar10);
    iVar10 = iVar10 + 0x28;
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    return;
  }
  if (iVar13 == 0) {
    return;
  }
  iVar10 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar13 + -3) & 0x1f;
  if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar12 = uVar7 - 0x10, uVar7 == 0)) {
    iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar7 = (uint)(*(byte *)(iVar13 + -3) >> 5);
  iVar11 = *(int *)(iVar10 + 8) + 0x10;
  iVar8 = iVar12 * uVar14 + iVar12 + -4;
  iVar12 = iVar11 + iVar8;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar7 = *(uint *)(iVar12 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar12 - iVar13) < uVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 + iVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar10 + 0x14);
  uVar7 = 1 << uVar14;
  *(undefined1 *)(iVar13 + -3) = 0xff;
  *(undefined2 *)(iVar13 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar10 + 0x10);
    uVar4 = *(uint *)(iVar10 + 0xc) | uVar9;
    if ((uVar7 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar9 == 0) || (uVar4 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar10,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar5 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar5;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar10 + 0x10) = uVar7 + uVar9;
      return;
    }
    puVar15 = (uint *)(iVar10 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar4 = *puVar15;
      if (uVar9 != uVar4) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar7 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar4) {
      return;
    }
  } while( true );
}

