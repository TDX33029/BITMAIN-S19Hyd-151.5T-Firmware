// FUN_008f1030 @ 008f1030 size=640 calls_out=10 calls_in=54
// strings: 

void FUN_008f1030(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar4 = *(int **)(param_1 + 0x3cc);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1420(*(undefined4 *)(param_1 + 0x3cc));
  }
  FUN_008f14dc(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0x3c8);
  if (iVar6 != 0) {
    iVar14 = *(int *)(param_1 + 0x3c4);
    iVar8 = 0;
    do {
      piVar4 = *(int **)(iVar14 + iVar8 * 4);
      iVar11 = iVar8 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*(undefined4 *)(iVar14 + iVar8 * 4));
      }
      iVar8 = iVar11;
    } while (iVar11 != iVar6);
  }
  if (*(int *)(param_1 + 0x3c0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c4));
  }
  iVar6 = *(int *)(param_1 + 0x338);
  piVar4 = (int *)(iVar6 + 0x194);
  do {
    iVar8 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar8 + -1;
  if (iVar8 == 1) {
    FUN_0163b708(iVar6 + 0x88);
  }
  piVar4 = *(int **)(param_1 + 0x338);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f17d0(*(undefined4 *)(param_1 + 0x338));
  }
  piVar4 = *(int **)(param_1 + 0x3d0);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1a50(*(undefined4 *)(param_1 + 0x3d0));
  }
  if (*(int *)(param_1 + 0x330) == 0) {
    piVar4 = *(int **)(param_1 + 0x334);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659344(*(undefined4 *)(param_1 + 0x334));
    }
  }
  else {
    piVar4 = *(int **)(param_1 + 0x334);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016586fc(*(undefined4 *)(param_1 + 0x334));
    }
  }
  FUN_008f1d48(param_1 + 0x340);
  uVar5 = (uint)*(byte *)(param_1 + 0x3a0);
  if (uVar5 < 10) {
    if ((1 << uVar5 & 0x27dU) != 0) goto LAB_008f1270;
    if (uVar5 != 1) goto LAB_008f1210;
    iVar6 = *(int *)(param_1 + 0x3a8);
    puVar15 = (undefined4 *)(iVar6 + 4);
    for (iVar8 = *(int *)(param_1 + 0x3ac); iVar8 != 0; iVar8 = iVar8 + -1) {
      if (puVar15[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar15);
      }
      puVar15 = puVar15 + 3;
    }
    if (*(int *)(param_1 + 0x3a4) == 0) goto LAB_008f1270;
  }
  else {
LAB_008f1210:
    if (*(int *)(param_1 + 0x3a4) == 0) goto LAB_008f1270;
    iVar6 = *(int *)(param_1 + 0x3a8);
  }
  thunk_FUN_016d3fb4(iVar6);
LAB_008f1270:
  if (param_1 != -1) {
    piVar4 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar6 = FUN_016d3bc8();
      uVar5 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
         (uVar12 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar12 - 0x10, uVar12 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar12 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar11 = *(int *)(iVar6 + 8) + 0x10;
      iVar14 = iVar8 * uVar5 + iVar8 + -4;
      iVar8 = iVar11 + iVar14;
      if (4 < uVar12) {
        if (uVar12 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar12 = *(uint *)(iVar8 + -4);
        if (uVar12 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar8 - param_1) < uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar8 - uVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar11 + iVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar6 + 0x14);
      uVar12 = 1 << uVar5;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar6 + 0x10);
        uVar9 = *(uint *)(iVar6 + 0xc) | uVar13;
        if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar13 == 0) || (uVar9 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar6,uVar5);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar15 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar15;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar15 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar6 + 0x10) = uVar12 + uVar13;
          return;
        }
        puVar16 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar9 = *puVar16;
          if (uVar13 != uVar9) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar1);
        *puVar16 = uVar12 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar9) {
          return;
        }
      } while( true );
    }
  }
  return;
}

