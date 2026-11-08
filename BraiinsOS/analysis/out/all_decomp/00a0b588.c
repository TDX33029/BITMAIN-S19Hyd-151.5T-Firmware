// FUN_00a0b588 @ 00a0b588 size=200 calls_out=3 calls_in=5
// strings: 

void FUN_00a0b588(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(char *)(param_1 + 0xe0) == '\0') {
    piVar4 = *(int **)(param_1 + 0x88);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aad0bc(*(undefined4 *)(param_1 + 0x88));
    }
  }
  else {
    if (*(char *)(param_1 + 0xe0) != '\x03') {
      return;
    }
    FUN_00a07b4c(param_1 + 0x90);
    piVar4 = *(int **)(param_1 + 0x88);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aad0bc(*(undefined4 *)(param_1 + 0x88));
    }
  }
  if ((*(uint *)(param_1 + 0x68) & 0x7fffffff) == 0) {
    uVar5 = *(uint *)(param_1 + 0x74);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x6c));
    uVar5 = *(uint *)(param_1 + 0x74);
  }
  if ((uVar5 & 0x7fffffff) == 0) {
    return;
  }
  iVar8 = *(int *)(param_1 + 0x78);
  if (iVar8 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar5 = *(byte *)(iVar8 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar9 = uVar12 - 0x10, uVar12 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(iVar8 + -3) >> 5);
  iVar15 = *(int *)(iVar6 + 8) + 0x10;
  iVar13 = iVar9 * uVar5 + iVar9 + -4;
  iVar9 = iVar15 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar12 = *(uint *)(iVar9 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar9 - iVar8) < uVar12) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar9 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar6 + 0x14);
  uVar12 = 1 << uVar5;
  *(undefined1 *)(iVar8 + -3) = 0xff;
  *(undefined2 *)(iVar8 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar6 + 0x10);
    uVar10 = *(uint *)(iVar6 + 0xc) | uVar14;
    if ((uVar12 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar14 == 0) || (uVar10 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar7;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar7 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar16 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar10 = *puVar16;
      if (uVar14 != uVar10) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar10) {
      return;
    }
  } while( true );
}

