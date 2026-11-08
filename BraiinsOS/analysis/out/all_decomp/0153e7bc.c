// FUN_0153e7bc @ 0153e7bc size=312 calls_out=3 calls_in=0
// strings: 

void FUN_0153e7bc(int param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar3 = *(int **)(param_1 + 0xc4);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01561b24(*(undefined4 *)(param_1 + 0xc4));
  }
  if (*(int *)(param_1 + 100) != -0x80000000) {
    FUN_015376c0(param_1 + 0x40);
  }
  if ((*(char *)(param_1 + 0xcc) == '\0') && ((*(uint *)(param_1 + 0xd0) & 0x7fffffff) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd4));
    uVar11 = *(undefined4 *)(param_1 + 0xf4);
    puVar13 = *(undefined4 **)(param_1 + 0xf8);
    pcVar5 = (code *)*puVar13;
  }
  else {
    uVar11 = *(undefined4 *)(param_1 + 0xf4);
    puVar13 = *(undefined4 **)(param_1 + 0xf8);
    pcVar5 = (code *)*puVar13;
  }
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(uVar11);
  }
  if (puVar13[1] != 0) {
    thunk_FUN_016d3fb4(uVar11);
  }
  if ((*(uint *)(param_1 + 0xe0) & 0x7fffffff) == 0) {
    iVar4 = *(int *)(param_1 + 0x104);
    iVar14 = *(int *)(param_1 + 0x100);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe4));
    iVar4 = *(int *)(param_1 + 0x104);
    iVar14 = *(int *)(param_1 + 0x100);
  }
  if (iVar4 != 0) {
    puVar13 = (undefined4 *)(iVar14 + 4);
    do {
      if ((puVar13[-1] & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*puVar13);
      }
      puVar13 = puVar13 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (*(int *)(param_1 + 0xfc) == 0) {
    return;
  }
  if (iVar14 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar8 - 0x10, uVar8 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(iVar14 + -3) >> 5);
  iVar12 = *(int *)(iVar4 + 8) + 0x10;
  iVar9 = iVar6 * uVar15 + iVar6 + -4;
  iVar6 = iVar12 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar5)();
    }
    uVar8 = *(uint *)(iVar6 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar5)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar5)();
    }
  }
  if ((uint)(iVar6 - iVar14) < uVar8) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar5)();
  }
  if (*(char *)(iVar6 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar5)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar5)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar8 = 1 << uVar15;
  *(undefined1 *)(iVar14 + -3) = 0xff;
  *(undefined2 *)(iVar14 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar4 + 0x10);
    uVar7 = *(uint *)(iVar4 + 0xc) | uVar10;
    if ((uVar8 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar5)();
    }
    if ((uVar10 == 0) || (uVar7 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar13 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar13;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar13 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar16 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar7 = *puVar16;
      if (uVar10 != uVar7) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar7) {
      return;
    }
  } while( true );
}

