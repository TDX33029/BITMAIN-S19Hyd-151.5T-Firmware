// FUN_010e8cc8 @ 010e8cc8 size=540 calls_out=2 calls_in=1
// strings: 

void FUN_010e8cc8(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((*(uint *)(param_1 + 0x70) & 0x7fffffff) == 0) {
    uVar4 = *(uint *)(param_1 + 0x7c);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x74));
    uVar4 = *(uint *)(param_1 + 0x7c);
  }
  if ((uVar4 & 0x7fffffff) == 0) {
    uVar4 = *(uint *)(param_1 + 0x88);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x80));
    uVar4 = *(uint *)(param_1 + 0x88);
  }
  if ((uVar4 & 0x7fffffff) == 0) {
    uVar4 = *(uint *)(param_1 + 0x94);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8c));
    uVar4 = *(uint *)(param_1 + 0x94);
  }
  if ((uVar4 & 0x7fffffff) == 0) {
    uVar4 = *(uint *)(param_1 + 0xa0);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x98));
    uVar4 = *(uint *)(param_1 + 0xa0);
  }
  if ((uVar4 & 0x7fffffff) == 0) {
    uVar4 = *(uint *)(param_1 + 0xac);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa4));
    uVar4 = *(uint *)(param_1 + 0xac);
  }
  if ((uVar4 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb0));
  }
  iVar12 = *(int *)(param_1 + 0x68);
  iVar8 = iVar12;
  for (iVar14 = *(int *)(param_1 + 0x6c); iVar14 != 0; iVar14 = iVar14 + -1) {
    FUN_010e8ee4(iVar8);
    iVar8 = iVar8 + 0x74;
  }
  if (*(int *)(param_1 + 100) != 0) {
    thunk_FUN_016d3fb4(iVar12);
  }
  if ((*(uint *)(param_1 + 0xb8) & 0x7fffffff) == 0) {
    uVar4 = *(uint *)(param_1 + 0xc4);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbc));
    uVar4 = *(uint *)(param_1 + 0xc4);
  }
  if ((uVar4 & 0x7fffffff) == 0) {
    uVar4 = *(uint *)(param_1 + 0xd0);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 200));
    uVar4 = *(uint *)(param_1 + 0xd0);
  }
  if ((uVar4 & 0x7fffffff) == 0) {
    uVar4 = *(uint *)(param_1 + 0xdc);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd4));
    uVar4 = *(uint *)(param_1 + 0xdc);
  }
  if ((uVar4 & 0x7fffffff) == 0) {
    uVar4 = *(uint *)(param_1 + 0xe8);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe0));
    uVar4 = *(uint *)(param_1 + 0xe8);
  }
  if ((uVar4 & 0x7fffffff) == 0) {
    uVar4 = *(uint *)(param_1 + 0xf4);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xec));
    uVar4 = *(uint *)(param_1 + 0xf4);
  }
  if ((uVar4 & 0x7fffffff) == 0) {
    uVar4 = *(uint *)(param_1 + 0x100);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf8));
    uVar4 = *(uint *)(param_1 + 0x100);
  }
  if ((uVar4 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x104));
  }
  if ((*(uint *)(param_1 + 0x10c) & 0x7fffffff) == 0) {
    return;
  }
  iVar8 = *(int *)(param_1 + 0x110);
  if (iVar8 == 0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar4 = *(byte *)(iVar8 + -3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar12 = uVar9 - 0x10, uVar9 == 0)) {
    iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar9 = (uint)(*(byte *)(iVar8 + -3) >> 5);
  iVar13 = *(int *)(iVar14 + 8) + 0x10;
  iVar10 = iVar12 * uVar4 + iVar12 + -4;
  iVar12 = iVar13 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar12 + -4);
    if (uVar9 < 5) {
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
  if ((uint)(iVar12 - iVar8) < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar14 + 0x14);
  uVar9 = 1 << uVar4;
  *(undefined1 *)(iVar8 + -3) = 0xff;
  *(undefined2 *)(iVar8 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar14 + 0x10);
    uVar6 = *(uint *)(iVar14 + 0xc) | uVar11;
    if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar14,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar15 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar6 = *puVar15;
      if (uVar11 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar6) {
      return;
    }
  } while( true );
}

