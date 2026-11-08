// FUN_00ac60b0 @ 00ac60b0 size=1188 calls_out=9 calls_in=2
// strings: 

void FUN_00ac60b0(int *param_1)

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
  int unaff_r4;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 uStack_28;
  
  cVar4 = *(char *)((int)param_1 + 0x41);
  if (cVar4 == '\0') {
    iVar15 = param_1[2];
    if (iVar15 != 0) {
      iVar16 = param_1[1];
      iVar8 = 0;
      do {
        piVar7 = *(int **)(iVar16 + iVar8 * 4);
        iVar12 = iVar8 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar9 + -1;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f31e8(*(undefined4 *)(iVar16 + iVar8 * 4));
        }
        iVar8 = iVar12;
      } while (iVar12 != iVar15);
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
        iVar15 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar15 + -1;
      if (iVar15 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*piVar7);
      }
    }
    param_1 = param_1 + 4;
    FUN_016af0b0(param_1);
    piVar7 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar15 + -1;
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*param_1);
      return;
    }
    return;
  }
  if (cVar4 == '\x03') {
    if (param_1[0x1c] == -0x80000000) {
      iVar15 = param_1[0x12];
      iVar12 = param_1[0x13];
      iVar16 = iVar12 + 1;
      iVar8 = iVar15;
      while (iVar16 = iVar16 + -1, iVar16 != 0) {
        FUN_00ac7290(iVar8);
        iVar8 = iVar8 + 0x490;
      }
      if (iVar12 == 0) goto LAB_00ac6448;
    }
    else {
      piVar5 = param_1 + 0x16;
      FUN_00ced198(piVar5);
      piVar7 = (int *)*piVar5;
      DataMemoryBarrier(0xb);
      do {
        iVar15 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar15 + -1;
      if (iVar15 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d065f8(*piVar5);
      }
      iVar15 = param_1[0x1b];
      if (iVar15 != 0) {
        piVar7 = (int *)param_1[0x1a];
        do {
          if (*piVar7 == 0) {
            bVar1 = *(byte *)(piVar7 + 2);
            cVar4 = bVar1 - 4;
            if (bVar1 < 4) {
              cVar4 = '\x04';
            }
            iVar8 = 0xc;
            if ((cVar4 == '\x05') || (cVar4 == '\x04' && bVar1 == 3)) goto LAB_00ac62f0;
          }
          else {
            iVar8 = 4;
            if (*piVar7 == 2) {
LAB_00ac62f0:
              (**(code **)**(undefined4 **)((int)piVar7 + iVar8))();
            }
          }
          piVar7 = piVar7 + 10;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      if (param_1[0x19] != 0) {
        thunk_FUN_016d3fb4(param_1[0x1a]);
      }
      iVar15 = param_1[0x1e];
      if (iVar15 != 0) {
        piVar7 = (int *)param_1[0x1d];
        do {
          if (*piVar7 == 0) {
            bVar1 = *(byte *)(piVar7 + 2);
            cVar4 = bVar1 - 4;
            if (bVar1 < 4) {
              cVar4 = '\x04';
            }
            iVar8 = 0xc;
            if ((cVar4 == '\x05') || (cVar4 == '\x04' && bVar1 == 3)) goto LAB_00ac637c;
          }
          else {
            iVar8 = 4;
            if (*piVar7 == 2) {
LAB_00ac637c:
              (**(code **)**(undefined4 **)((int)piVar7 + iVar8))();
            }
          }
          piVar7 = piVar7 + 8;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      if (param_1[0x1c] == 0) goto LAB_00ac6448;
      iVar15 = param_1[0x1d];
    }
    thunk_FUN_016d3fb4(iVar15);
    goto LAB_00ac6448;
  }
  if (cVar4 != '\x04') {
    return;
  }
  FUN_00ac68f8(param_1 + 0x1c);
  iVar15 = param_1[0x16];
  if (iVar15 != 0) {
    iVar16 = param_1[0x15];
    iVar8 = 0;
    do {
      piVar7 = *(int **)(iVar16 + iVar8 * 4);
      iVar12 = iVar8 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*(undefined4 *)(iVar16 + iVar8 * 4));
      }
      iVar8 = iVar12;
    } while (iVar12 != iVar15);
  }
  if (param_1[0x14] != 0) {
    thunk_FUN_016d3fb4(param_1[0x15]);
  }
  iVar15 = param_1[0x38];
  if (iVar15 == 0) {
    bVar1 = *(byte *)(param_1 + 0x3a);
    cVar4 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar4 = '\x04';
    }
    iVar8 = 0xc;
    if ((cVar4 == '\x05') || (cVar4 == '\x04' && bVar1 == 3)) goto LAB_00ac6430;
  }
  else {
    iVar8 = 4;
    if (iVar15 == 2) {
LAB_00ac6430:
      (**(code **)**(undefined4 **)((int)(param_1 + 0x38) + iVar8))();
    }
  }
  FUN_00ce2a54(param_1 + 0x17);
LAB_00ac6448:
  piVar5 = param_1 + 0xe;
  *(undefined1 *)((int)param_1 + 0x43) = 0;
  FUN_016af0b0(piVar5);
  piVar7 = (int *)*piVar5;
  DataMemoryBarrier(0xb);
  do {
    iVar15 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar15 + -1;
  if (iVar15 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*piVar5);
  }
  piVar7 = param_1 + 0xc;
  if (*piVar7 != 0) {
    FUN_016af0b0(piVar7);
    piVar5 = (int *)*piVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar15 + -1;
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar7);
    }
  }
  iVar15 = param_1[0xb];
  if (iVar15 != 0) {
    iVar16 = param_1[10];
    iVar8 = 0;
    do {
      piVar7 = *(int **)(iVar16 + iVar8 * 4);
      iVar12 = iVar8 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*(undefined4 *)(iVar16 + iVar8 * 4));
      }
      iVar8 = iVar12;
    } while (iVar12 != iVar15);
  }
  if (param_1[9] == 0) {
    return;
  }
  iVar15 = param_1[10];
  if (iVar15 == 0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar17 = *(byte *)(iVar15 + -3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar16 = uVar13 - 0x10, uVar13 == 0)) {
    iVar16 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar13 = (uint)(*(byte *)(iVar15 + -3) >> 5);
  iVar9 = *(int *)(iVar8 + 8) + 0x10;
  iVar12 = iVar16 * uVar17 + iVar16 + -4;
  iVar16 = iVar9 + iVar12;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar13 = *(uint *)(iVar16 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar16 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar16 - iVar15) < uVar13) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar16 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar9 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar1 = *(byte *)(iVar8 + 0x14);
  uVar13 = 1 << uVar17;
  *(undefined1 *)(iVar15 + -3) = 0xff;
  *(undefined2 *)(iVar15 + -2) = 0;
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
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar6;
      FUN_016d6ac4(uStack_28,unaff_r4);
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

