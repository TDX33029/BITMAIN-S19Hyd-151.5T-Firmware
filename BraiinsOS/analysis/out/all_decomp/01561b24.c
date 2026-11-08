// FUN_01561b24 @ 01561b24 size=532 calls_out=6 calls_in=44
// strings: 

void FUN_01561b24(int param_1)

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
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  puVar12 = (undefined4 *)(*(int *)(param_1 + 0x14) + 4);
  for (iVar8 = *(int *)(param_1 + 0x18); iVar8 != 0; iVar8 = iVar8 + -1) {
    if (puVar12[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar12);
    }
    puVar12 = puVar12 + 3;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x14));
  }
  piVar4 = *(int **)(param_1 + 0x78);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
  }
  piVar4 = *(int **)(param_1 + 0x84);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88));
  }
  piVar4 = *(int **)(param_1 + 0x8c);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
  }
  piVar4 = *(int **)(param_1 + 0x94);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
  }
  piVar4 = *(int **)(param_1 + 0x9c);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0156180c(*(undefined4 *)(param_1 + 0x9c));
  }
  piVar4 = *(int **)(param_1 + 0xa0);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c));
  }
  piVar4 = *(int **)(param_1 + 0xa8);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0156187c(*(undefined4 *)(param_1 + 0xa8));
  }
  FUN_01561ef8(param_1 + 0x34);
  if (param_1 == -1) {
    return;
  }
  piVar4 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar8 + -1;
  if (iVar8 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (param_1 == 0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar14 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar5 = uVar9 - 0x10, uVar9 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar13 = *(int *)(iVar8 + 8) + 0x10;
  iVar10 = iVar5 * uVar14 + iVar5 + -4;
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
  if ((uint)(iVar5 - param_1) < uVar9) {
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
  bVar3 = *(byte *)(iVar8 + 0x14);
  uVar9 = 1 << uVar14;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar8 + 0x10);
    uVar6 = *(uint *)(iVar8 + 0xc) | uVar11;
    if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar8,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar12 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar12;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar12 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar8 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar15 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar6 = *puVar15;
      if (uVar11 != uVar6) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar1);
    *puVar15 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar6) {
      return;
    }
  } while( true );
}

