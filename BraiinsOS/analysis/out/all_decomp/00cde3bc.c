// FUN_00cde3bc @ 00cde3bc size=496 calls_out=3 calls_in=3
// strings: 

void FUN_00cde3bc(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 0x2d0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2d4));
  }
  if (*(int *)(param_1 + 0x288) != 5 || *(int *)(param_1 + 0x28c) != 0) {
    iVar8 = *(int *)(param_1 + 0x2c4);
    puVar14 = (undefined4 *)(iVar8 + 0x10);
    for (iVar12 = *(int *)(param_1 + 0x2c8); iVar12 != 0; iVar12 = iVar12 + -1) {
      if (puVar14[-4] != 0) {
        thunk_FUN_016d3fb4(puVar14[-3]);
      }
      if (puVar14[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar14);
      }
      puVar14 = puVar14 + 6;
    }
    if (*(int *)(param_1 + 0x2c0) != 0) {
      thunk_FUN_016d3fb4(iVar8);
    }
  }
  iVar8 = *(int *)(param_1 + 0x354);
  puVar14 = (undefined4 *)(iVar8 + 0x10);
  for (iVar12 = *(int *)(param_1 + 0x358); iVar12 != 0; iVar12 = iVar12 + -1) {
    if (puVar14[-4] != 0) {
      thunk_FUN_016d3fb4(puVar14[-3]);
    }
    if (puVar14[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar14);
    }
    puVar14 = puVar14 + 6;
  }
  if (*(int *)(param_1 + 0x350) != 0) {
    thunk_FUN_016d3fb4(iVar8);
  }
  iVar8 = *(int *)(param_1 + 0x36c);
  puVar14 = (undefined4 *)(iVar8 + 0x10);
  for (iVar12 = *(int *)(param_1 + 0x370); iVar12 != 0; iVar12 = iVar12 + -1) {
    if (puVar14[-4] != 0) {
      thunk_FUN_016d3fb4(puVar14[-3]);
    }
    if (puVar14[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar14);
    }
    puVar14 = puVar14 + 6;
  }
  if (*(int *)(param_1 + 0x368) != 0) {
    thunk_FUN_016d3fb4(iVar8);
  }
  if (*(int *)(param_1 + 0x3b8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3bc));
  }
  piVar4 = *(int **)(param_1 + 800);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f31e8(*(undefined4 *)(param_1 + 800));
  }
  FUN_00ccdda4(param_1 + 0x68);
  puVar14 = (undefined4 *)(*(int *)(param_1 + 0x21c) + 4);
  for (iVar8 = *(int *)(param_1 + 0x220); iVar8 != 0; iVar8 = iVar8 + -1) {
    if (puVar14[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar14);
    }
    puVar14 = puVar14 + 4;
  }
  if (*(int *)(param_1 + 0x218) == 0) {
    return;
  }
  iVar8 = *(int *)(param_1 + 0x21c);
  if (iVar8 == 0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar8 + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar5 = uVar9 - 0x10, uVar9 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar8 + -3) >> 5);
  iVar13 = *(int *)(iVar12 + 8) + 0x10;
  iVar10 = iVar5 * uVar15 + iVar5 + -4;
  iVar5 = iVar13 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar9 = *(uint *)(iVar5 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar5 - iVar8) < uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar5 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar12 + 0x14);
  uVar9 = 1 << uVar15;
  *(undefined1 *)(iVar8 + -3) = 0xff;
  *(undefined2 *)(iVar8 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar12 + 0x10);
    uVar6 = *(uint *)(iVar12 + 0xc) | uVar11;
    if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar14 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar14;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar14 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar16 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar6 = *puVar16;
      if (uVar11 != uVar6) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar6) {
      return;
    }
  } while( true );
}

