// FUN_00acda78 @ 00acda78 size=604 calls_out=9 calls_in=1
// strings: 

void FUN_00acda78(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar4 = *(int **)(param_1 + 0x2ec);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1030(*(undefined4 *)(param_1 + 0x2ec));
  }
  piVar4 = *(int **)(param_1 + 0x2f0);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1a50(*(undefined4 *)(param_1 + 0x2f0));
  }
  FUN_00acd988(param_1);
  iVar6 = *(int *)(param_1 + 0x2d0);
  if (iVar6 != 0) {
    iVar10 = *(int *)(param_1 + 0x2cc);
    iVar14 = 0;
    do {
      puVar5 = (undefined4 *)(iVar10 + iVar14 * 8);
      piVar4 = (int *)*puVar5;
      iVar14 = iVar14 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(*puVar5,puVar5[1]);
      }
    } while (iVar14 != iVar6);
  }
  if (*(int *)(param_1 + 0x2c8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2cc));
  }
  piVar4 = *(int **)(param_1 + 0x2f4);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d06258(*(undefined4 *)(param_1 + 0x2f4));
  }
  iVar6 = *(int *)(param_1 + 0x2c0);
  piVar4 = (int *)(iVar6 + 0xa4);
  do {
    iVar10 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar10 + -1;
  if (iVar10 == 1) {
    FUN_0163b708(iVar6 + 0x88);
  }
  piVar4 = *(int **)(param_1 + 0x2c0);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x2c0));
  }
  iVar6 = *(int *)(param_1 + 0x2dc);
  if (iVar6 != 0) {
    iVar14 = *(int *)(param_1 + 0x2d8);
    iVar10 = 0;
    do {
      iVar7 = iVar10 + 1;
      puVar5 = (undefined4 *)(iVar14 + iVar10 * 0x50 + 0x40);
      piVar4 = (int *)*puVar5;
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*puVar5);
      }
      iVar10 = iVar7;
    } while (iVar7 != iVar6);
  }
  if (*(int *)(param_1 + 0x2d4) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2d8));
  }
  iVar6 = *(int *)(param_1 + 0x2e8);
  if (iVar6 != 0) {
    iVar14 = *(int *)(param_1 + 0x2e4);
    iVar10 = 0;
    do {
      iVar7 = iVar10 + 1;
      puVar5 = (undefined4 *)(iVar14 + iVar10 * 0x50 + 0x40);
      piVar4 = (int *)*puVar5;
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*puVar5);
      }
      iVar10 = iVar7;
    } while (iVar7 != iVar6);
  }
  if (*(int *)(param_1 + 0x2e0) == 0) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x2e4);
  if (iVar6 == 0) {
    return;
  }
  iVar10 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar6 + -3) & 0x1f;
  if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar14 = uVar11 - 0x10, uVar11 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar11 = (uint)(*(byte *)(iVar6 + -3) >> 5);
  iVar13 = *(int *)(iVar10 + 8) + 0x10;
  iVar7 = iVar14 * uVar15 + iVar14 + -4;
  iVar14 = iVar13 + iVar7;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar14 + -4);
    if (uVar11 < 5) {
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
  if ((uint)(iVar14 - iVar6) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 + iVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar10 + 0x14);
  uVar11 = 1 << uVar15;
  *(undefined1 *)(iVar6 + -3) = 0xff;
  *(undefined2 *)(iVar6 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar10 + 0x10);
    uVar8 = *(uint *)(iVar10 + 0xc) | uVar12;
    if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar10,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar10 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar10 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

