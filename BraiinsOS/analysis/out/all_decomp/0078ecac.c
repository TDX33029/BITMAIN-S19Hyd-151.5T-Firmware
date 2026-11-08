// FUN_0078ecac @ 0078ecac size=372 calls_out=7 calls_in=33
// strings: 

void FUN_0078ecac(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
  }
  piVar4 = *(int **)(param_1 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaeec(*(undefined4 *)(param_1 + 0x48));
  }
  piVar4 = *(int **)(param_1 + 0x4c);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaeec(*(undefined4 *)(param_1 + 0x4c));
  }
  iVar7 = *(int *)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  piVar4 = (int *)(iVar7 + 0x44);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  DataMemoryBarrier(0xb);
  if (iVar5 != 1) goto LAB_0078eda0;
  pcVar10 = (char *)(iVar7 + 0x10);
  if (*pcVar10 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar10);
    if (!bVar1) goto LAB_0078ed7c;
    *pcVar10 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0078ed7c:
    FUN_01280da8(pcVar10);
  }
  FUN_0128236c(pcVar10);
  *(undefined1 *)(iVar7 + 0x2c) = 1;
  FUN_0072a978(iVar7 + 8,pcVar10);
LAB_0078eda0:
  piVar4 = *(int **)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*(undefined4 *)(param_1 + 0x50));
  }
  FUN_0078eea8(param_1 + 0x1c);
  if (param_1 == -1) {
    return;
  }
  piVar4 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (param_1 == 0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar15 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar5 = uVar11 - 0x10, uVar11 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar14 = *(int *)(iVar7 + 8) + 0x10;
  iVar12 = iVar5 * uVar15 + iVar5 + -4;
  iVar5 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar5 + -4);
    if (uVar11 < 5) {
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
  if ((uint)(iVar5 - param_1) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar5 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar7 + 0x14);
  uVar11 = 1 << uVar15;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar7 + 0x10);
    uVar8 = *(uint *)(iVar7 + 0xc) | uVar13;
    if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar7,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar7 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar16 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar13 != uVar8) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar8) {
      return;
    }
  } while( true );
}

