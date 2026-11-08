// FUN_00d2f08c @ 00d2f08c size=600 calls_out=9 calls_in=1
// strings: 

void FUN_00d2f08c(int param_1)

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
  int *piVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
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
    iVar15 = 0;
    do {
      puVar5 = (undefined4 *)(iVar10 + iVar15 * 8);
      piVar4 = (int *)*puVar5;
      iVar15 = iVar15 + 1;
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
    } while (iVar15 != iVar6);
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
  piVar11 = *(int **)(param_1 + 0x2c0);
  piVar4 = piVar11 + 0x29;
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    FUN_0163b708(piVar11 + 0x22);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar11;
    bVar1 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar1);
  *piVar11 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x2c0));
  }
  iVar6 = *(int *)(param_1 + 0x2dc);
  if (iVar6 != 0) {
    iVar15 = *(int *)(param_1 + 0x2d8);
    iVar10 = 0;
    do {
      iVar7 = iVar10 + 1;
      puVar5 = (undefined4 *)(iVar15 + iVar10 * 0x50 + 0x40);
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
    iVar15 = *(int *)(param_1 + 0x2e4);
    iVar10 = 0;
    do {
      iVar7 = iVar10 + 1;
      puVar5 = (undefined4 *)(iVar15 + iVar10 * 0x50 + 0x40);
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
  uVar16 = *(byte *)(iVar6 + -3) & 0x1f;
  if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar15 = uVar12 - 0x10, uVar12 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar12 = (uint)(*(byte *)(iVar6 + -3) >> 5);
  iVar14 = *(int *)(iVar10 + 8) + 0x10;
  iVar7 = iVar15 * uVar16 + iVar15 + -4;
  iVar15 = iVar14 + iVar7;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar12 = *(uint *)(iVar15 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar15 - iVar6) < uVar12) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar10 + 0x14);
  uVar12 = 1 << uVar16;
  *(undefined1 *)(iVar6 + -3) = 0xff;
  *(undefined2 *)(iVar6 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar10 + 0x10);
    uVar8 = *(uint *)(iVar10 + 0xc) | uVar13;
    if ((uVar12 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar8 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar10,uVar16);
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
      *(uint *)(iVar10 + 0x10) = uVar12 + uVar13;
      return;
    }
    puVar17 = (uint *)(iVar10 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar8 = *puVar17;
      if (uVar13 != uVar8) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar1);
    *puVar17 = uVar12 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar8) {
      return;
    }
  } while( true );
}

