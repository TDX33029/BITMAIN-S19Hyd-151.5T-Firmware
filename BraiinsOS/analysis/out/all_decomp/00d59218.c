// FUN_00d59218 @ 00d59218 size=680 calls_out=9 calls_in=1
// strings: 

void FUN_00d59218(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar4 = *(int **)(param_1 + 0x2ec);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1030(*(undefined4 *)(param_1 + 0x2ec));
  }
  piVar4 = *(int **)(param_1 + 0x2f0);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1a50(*(undefined4 *)(param_1 + 0x2f0));
  }
  FUN_00d5020c(param_1 + 0x68);
  puVar12 = (undefined4 *)(*(int *)(param_1 + 0x21c) + 4);
  for (iVar5 = *(int *)(param_1 + 0x220); iVar5 != 0; iVar5 = iVar5 + -1) {
    if (puVar12[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar12);
    }
    puVar12 = puVar12 + 4;
  }
  if (*(int *)(param_1 + 0x218) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x21c));
  }
  iVar5 = *(int *)(param_1 + 0x2d0);
  if (iVar5 != 0) {
    iVar9 = *(int *)(param_1 + 0x2cc);
    iVar14 = 0;
    do {
      puVar12 = (undefined4 *)(iVar9 + iVar14 * 8);
      piVar4 = (int *)*puVar12;
      iVar14 = iVar14 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(*puVar12,puVar12[1]);
      }
    } while (iVar14 != iVar5);
  }
  if (*(int *)(param_1 + 0x2c8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2cc));
  }
  piVar4 = *(int **)(param_1 + 0x2f4);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d06258(*(undefined4 *)(param_1 + 0x2f4));
  }
  iVar5 = *(int *)(param_1 + 0x2c0);
  piVar4 = (int *)(iVar5 + 0xa4);
  do {
    iVar9 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar9 + -1;
  if (iVar9 == 1) {
    FUN_0163b708(iVar5 + 0x88);
  }
  piVar4 = *(int **)(param_1 + 0x2c0);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x2c0));
  }
  iVar5 = *(int *)(param_1 + 0x2dc);
  if (iVar5 != 0) {
    iVar14 = *(int *)(param_1 + 0x2d8);
    iVar9 = 0;
    do {
      iVar6 = iVar9 + 1;
      puVar12 = (undefined4 *)(iVar14 + iVar9 * 0x50 + 0x40);
      piVar4 = (int *)*puVar12;
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*puVar12);
      }
      iVar9 = iVar6;
    } while (iVar6 != iVar5);
  }
  if (*(int *)(param_1 + 0x2d4) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2d8));
  }
  iVar5 = *(int *)(param_1 + 0x2e8);
  if (iVar5 != 0) {
    iVar14 = *(int *)(param_1 + 0x2e4);
    iVar9 = 0;
    do {
      iVar6 = iVar9 + 1;
      puVar12 = (undefined4 *)(iVar14 + iVar9 * 0x50 + 0x40);
      piVar4 = (int *)*puVar12;
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*puVar12);
      }
      iVar9 = iVar6;
    } while (iVar6 != iVar5);
  }
  if (*(int *)(param_1 + 0x2e0) == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x2e4);
  if (iVar5 == 0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar14 = uVar10 - 0x10, uVar10 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar13 = *(int *)(iVar9 + 8) + 0x10;
  iVar6 = iVar14 * uVar15 + iVar14 + -4;
  iVar14 = iVar13 + iVar6;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar10 = *(uint *)(iVar14 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar14 - iVar5) < uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 + iVar6) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar9 + 0x14);
  uVar10 = 1 << uVar15;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar9 + 0x10);
    uVar7 = *(uint *)(iVar9 + 0xc) | uVar11;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar9,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar12 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar12;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar12 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar10 + uVar11;
      return;
    }
    puVar16 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar7 = *puVar16;
      if (uVar11 != uVar7) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar10 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

