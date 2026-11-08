// FUN_013c182c @ 013c182c size=248 calls_out=2 calls_in=8
// strings: 

void FUN_013c182c(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar8 = *(int *)(param_1 + 0x148);
  if (iVar8 != 0) {
    piVar12 = (int *)(*(int *)(param_1 + 0x144) + 8);
    do {
      iVar4 = piVar12[-2];
      if (((iVar4 == 4 || iVar4 == 2) || (iVar4 == 1)) && (*piVar12 != 0)) {
        thunk_FUN_016d3fb4(piVar12[-1]);
      }
      piVar12 = piVar12 + 5;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (*(int *)(param_1 + 0x140) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x144));
  }
  if (*(int *)(param_1 + 0x14c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x150));
  }
  piVar12 = *(int **)(param_1 + 0x13c);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar12;
    bVar1 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar1);
  *piVar12 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013c0df4(*(undefined4 *)(param_1 + 0x13c));
  }
  if (param_1 == -1) {
    return;
  }
  piVar12 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar12;
    bVar1 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar1);
  *piVar12 = iVar8 + -1;
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
     (uVar9 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar4 = uVar9 - 0x10, uVar9 == 0)) {
    iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar13 = *(int *)(iVar8 + 8) + 0x10;
  iVar10 = iVar4 * uVar14 + iVar4 + -4;
  iVar4 = iVar13 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar9 = *(uint *)(iVar4 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar4 - param_1) < uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar4 - uVar9) != '\0') {
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
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar7;
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

