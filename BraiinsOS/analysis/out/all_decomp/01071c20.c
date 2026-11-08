// FUN_01071c20 @ 01071c20 size=288 calls_out=4 calls_in=0
// strings: 

void FUN_01071c20(int param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(undefined1 **)(param_1 + 0x10) == &DAT_3b9aca00) {
    FUN_006495dc(param_1 + 8);
  }
  else {
    bVar16 = *(short *)(param_1 + 0x20) != 0;
    iVar3 = 0;
    if (bVar16) {
      iVar3 = *(int *)(param_1 + 0x24);
    }
    if (bVar16 && iVar3 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x28));
    }
    bVar16 = *(short *)(param_1 + 0x44) != 0;
    iVar3 = 0;
    if (bVar16) {
      iVar3 = *(int *)(param_1 + 0x48);
    }
    if (bVar16 && iVar3 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4c));
    }
    piVar9 = *(int **)(param_1 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar9;
      bVar16 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar16);
    *piVar9 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01059b88(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    }
  }
  piVar9 = *(int **)(param_1 + 0x80);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar9;
    bVar16 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar16);
  *piVar9 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    piVar4 = (int *)piVar9[4];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar16 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar16);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0108a158(piVar9[4]);
    }
    thunk_FUN_016d3fb4(piVar9);
  }
  piVar9 = *(int **)(param_1 + 0x84);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar9;
    bVar16 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar16);
  *piVar9 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (piVar9 == (int *)0x0) {
    return;
  }
  iVar3 = FUN_016d3bc8();
  uVar14 = *(byte *)((int)piVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)piVar9 + -3) >> 5);
  iVar13 = *(int *)(iVar3 + 8) + 0x10;
  iVar11 = iVar6 * uVar14 + iVar6 + -4;
  iVar6 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar6 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar6 - (int)piVar9) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar3 + 0x14);
  uVar10 = 1 << uVar14;
  *(undefined1 *)((int)piVar9 + -3) = 0xff;
  *(undefined2 *)((int)piVar9 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar3 + 0x10);
    uVar7 = *(uint *)(iVar3 + 0xc) | uVar12;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar14);
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
      *(uint *)(iVar3 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar7 = *puVar15;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar16 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar16);
    *puVar15 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

