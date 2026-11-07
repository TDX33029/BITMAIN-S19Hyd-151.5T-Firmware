// FUN_00d081f4 @ 00d081f4 size=1296 calls_out=9 calls_in=2
// strings: 

void FUN_00d081f4(int *param_1)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar4 = *(char *)((int)param_1 + 0x41);
  if (cVar4 == '\0') {
    iVar12 = param_1[2];
    if (iVar12 != 0) {
      iVar15 = param_1[1];
      iVar8 = 0;
      do {
        piVar7 = *(int **)(iVar15 + iVar8 * 4);
        iVar16 = iVar8 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar9 + -1;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f31e8(*(undefined4 *)(iVar15 + iVar8 * 4));
        }
        iVar8 = iVar16;
      } while (iVar16 != iVar12);
    }
    if (*param_1 != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    piVar7 = param_1 + 6;
    if (*piVar7 != 0) {
      FUN_016af0b0(piVar7);
      piVar5 = (int *)*piVar7;
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*piVar7);
      }
    }
    param_1 = param_1 + 4;
    FUN_016af0b0(param_1);
    piVar7 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*param_1);
      return;
    }
    return;
  }
  if (cVar4 == '\x03') {
    if (param_1[0x1c] == -0x80000000) {
      iVar8 = param_1[0x13];
      if (iVar8 == 0) goto LAB_00d08600;
      iVar12 = param_1[0x12];
      iVar15 = 0;
      do {
        if (*(int *)(iVar12 + iVar15) == 1) {
          iVar16 = *(int *)(iVar12 + iVar15 + 8);
          if (iVar16 == 0) {
            bVar1 = *(byte *)(iVar12 + iVar15 + 0x10);
            cVar4 = bVar1 - 4;
            if (bVar1 < 4) {
              cVar4 = '\x04';
            }
            iVar9 = 0xc;
            if ((cVar4 == '\x05') || (cVar4 == '\x04' && bVar1 == 3)) goto LAB_00d082a4;
          }
          else {
            iVar9 = 4;
            if (iVar16 == 2) {
LAB_00d082a4:
              (**(code **)**(undefined4 **)(iVar12 + iVar9 + iVar15 + 8))();
            }
          }
        }
        else if (*(int *)(iVar12 + iVar15) == 0) {
          FUN_00ced318(iVar12 + iVar15 + 8);
        }
        iVar15 = iVar15 + 0x490;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    else {
      piVar5 = param_1 + 0x16;
      FUN_00ced198(piVar5);
      piVar7 = (int *)*piVar5;
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d065f8(*piVar5);
      }
      iVar12 = param_1[0x1b];
      if (iVar12 != 0) {
        piVar7 = (int *)param_1[0x1a];
        do {
          if (*piVar7 == 0) {
            bVar1 = *(byte *)(piVar7 + 2);
            cVar4 = bVar1 - 4;
            if (bVar1 < 4) {
              cVar4 = '\x04';
            }
            iVar8 = 0xc;
            if ((cVar4 == '\x05') || (cVar4 == '\x04' && bVar1 == 3)) goto LAB_00d084b4;
          }
          else {
            iVar8 = 4;
            if (*piVar7 == 2) {
LAB_00d084b4:
              (**(code **)**(undefined4 **)((int)piVar7 + iVar8))();
            }
          }
          piVar7 = piVar7 + 10;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      if (param_1[0x19] != 0) {
        thunk_FUN_016d3fb4(param_1[0x1a]);
      }
      iVar12 = param_1[0x1e];
      if (iVar12 != 0) {
        piVar7 = (int *)param_1[0x1d];
        do {
          if (*piVar7 == 0) {
            bVar1 = *(byte *)(piVar7 + 2);
            cVar4 = bVar1 - 4;
            if (bVar1 < 4) {
              cVar4 = '\x04';
            }
            iVar8 = 0xc;
            if ((cVar4 == '\x05') || (cVar4 == '\x04' && bVar1 == 3)) goto LAB_00d08540;
          }
          else {
            iVar8 = 4;
            if (*piVar7 == 2) {
LAB_00d08540:
              (**(code **)**(undefined4 **)((int)piVar7 + iVar8))();
            }
          }
          piVar7 = piVar7 + 8;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      if (param_1[0x1c] == 0) goto LAB_00d08600;
      iVar12 = param_1[0x1d];
    }
    thunk_FUN_016d3fb4(iVar12);
    goto LAB_00d08600;
  }
  if (cVar4 != '\x04') {
    return;
  }
  FUN_00d08b28(param_1 + 0x1c);
  iVar12 = param_1[0x16];
  if (iVar12 != 0) {
    iVar15 = param_1[0x15];
    iVar8 = 0;
    do {
      piVar7 = *(int **)(iVar15 + iVar8 * 4);
      iVar16 = iVar8 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*(undefined4 *)(iVar15 + iVar8 * 4));
      }
      iVar8 = iVar16;
    } while (iVar16 != iVar12);
  }
  if (param_1[0x14] != 0) {
    thunk_FUN_016d3fb4(param_1[0x15]);
  }
  iVar12 = param_1[0x38];
  if (iVar12 == 0) {
    bVar1 = *(byte *)(param_1 + 0x3a);
    cVar4 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar4 = '\x04';
    }
    iVar8 = 0xc;
    if ((cVar4 == '\x05') || (cVar4 == '\x04' && bVar1 == 3)) goto LAB_00d085e8;
  }
  else {
    iVar8 = 4;
    if (iVar12 == 2) {
LAB_00d085e8:
      (**(code **)**(undefined4 **)((int)(param_1 + 0x38) + iVar8))();
    }
  }
  FUN_00ce2a54(param_1 + 0x17);
LAB_00d08600:
  piVar5 = param_1 + 0xe;
  *(undefined1 *)((int)param_1 + 0x43) = 0;
  FUN_016af0b0(piVar5);
  piVar7 = (int *)*piVar5;
  DataMemoryBarrier(0xb);
  do {
    iVar12 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar12 + -1;
  if (iVar12 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*piVar5);
  }
  piVar7 = param_1 + 0xc;
  if (*piVar7 != 0) {
    FUN_016af0b0(piVar7);
    piVar5 = (int *)*piVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar7);
    }
  }
  iVar12 = param_1[0xb];
  if (iVar12 != 0) {
    iVar15 = param_1[10];
    iVar8 = 0;
    do {
      piVar7 = *(int **)(iVar15 + iVar8 * 4);
      iVar16 = iVar8 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*(undefined4 *)(iVar15 + iVar8 * 4));
      }
      iVar8 = iVar16;
    } while (iVar16 != iVar12);
  }
  if (param_1[9] == 0) {
    return;
  }
  iVar12 = param_1[10];
  if (iVar12 == 0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar17 = *(byte *)(iVar12 + -3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar15 = uVar13 - 0x10, uVar13 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar13 = (uint)(*(byte *)(iVar12 + -3) >> 5);
  iVar9 = *(int *)(iVar8 + 8) + 0x10;
  iVar16 = iVar15 * uVar17 + iVar15 + -4;
  iVar15 = iVar9 + iVar16;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar13 = *(uint *)(iVar15 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar15 - iVar12) < uVar13) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar15 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar9 + iVar16) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar1 = *(byte *)(iVar8 + 0x14);
  uVar13 = 1 << uVar17;
  *(undefined1 *)(iVar12 + -3) = 0xff;
  *(undefined2 *)(iVar12 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar8 + 0x10);
    uVar10 = *(uint *)(iVar8 + 0xc) | uVar14;
    if ((uVar13 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar14 == 0) || (uVar10 + uVar13 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar8,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar8 + 0x10) = uVar13 + uVar14;
      return;
    }
    puVar18 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar10 = *puVar18;
      if (uVar14 != uVar10) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar2);
    *puVar18 = uVar13 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar10) {
      return;
    }
  } while( true );
}

