// FUN_00d030dc @ 00d030dc size=1672 calls_out=18 calls_in=23
// strings: internal error: entered unreachable code: invalid Once state

void FUN_00d030dc(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar14 = *(int *)(param_1 + 0x31c);
  if (iVar14 != 0) {
    piVar6 = *(int **)(param_1 + 0x318);
    do {
      iVar14 = iVar14 + -1;
      iVar4 = 0;
      if (*piVar6 != 0) {
        iVar4 = piVar6[1];
      }
      if (*piVar6 != 0 && iVar4 != 0) {
        (**(code **)(iVar4 + 0xc))(piVar6[2]);
      }
      piVar6 = piVar6 + 3;
    } while (iVar14 != 0);
  }
  if (*(int *)(param_1 + 0x314) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x318));
  }
  FUN_00d03c1c(param_1 + 0x328);
  iVar14 = *(int *)(param_1 + 0x4a8);
  if (iVar14 != 0) {
    iVar4 = *(int *)(param_1 + 0x4a4);
    iVar15 = 0;
    do {
      puVar5 = (undefined4 *)(iVar4 + iVar15 * 8);
      piVar6 = (int *)*puVar5;
      iVar15 = iVar15 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(*puVar5,puVar5[1]);
      }
    } while (iVar15 != iVar14);
  }
  if (*(int *)(param_1 + 0x4a0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4a4));
  }
  piVar6 = *(int **)(param_1 + 0x4ac);
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d03ce0(*(undefined4 *)(param_1 + 0x4ac));
  }
  piVar11 = *(int **)(param_1 + 0x2f0);
  piVar6 = piVar11 + 0x2f;
  do {
    iVar14 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar14 + -1;
  if (iVar14 == 1) {
    FUN_0163b708(piVar11 + 0x2a);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar11;
    bVar1 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar1);
  *piVar11 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x2f0));
  }
  FUN_00acd988(param_1 + 8);
  piVar6 = *(int **)(param_1 + 0x4b0);
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x4b0));
  }
  piVar6 = *(int **)(param_1 + 0x4b4);
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x4b4));
  }
  FUN_00d03e10(param_1 + 0x4c8);
  piVar11 = *(int **)(param_1 + 0x2f8);
  piVar6 = piVar11 + 0x29;
  do {
    iVar14 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar14 + -1;
  if (iVar14 == 1) {
    FUN_0163b708(piVar11 + 0x22);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar11;
    bVar1 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar1);
  *piVar11 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x2f8));
  }
  piVar6 = *(int **)(param_1 + 0x4b8);
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad0bc(*(undefined4 *)(param_1 + 0x4b8));
  }
  piVar6 = *(int **)(param_1 + 0x4f4);
  if (piVar6 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1a50(*(undefined4 *)(param_1 + 0x4f4));
    }
  }
  piVar6 = *(int **)(param_1 + 0x500);
  if (piVar6 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1030(*(undefined4 *)(param_1 + 0x500));
    }
  }
  if (1 < *(int *)(param_1 + 0x468) - 2U) {
    if (*(int *)(param_1 + 0x468) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,&DAT_018a9874
                  );
    }
    piVar6 = *(int **)(param_1 + 0x46c);
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078d010(*(undefined4 *)(param_1 + 0x46c));
    }
  }
  piVar11 = *(int **)(param_1 + 0x4bc);
  DataMemoryBarrier(0xb);
  piVar6 = piVar11 + 0x30;
  do {
    iVar14 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar14 + -1;
  DataMemoryBarrier(0xb);
  if (iVar14 == 1) {
    puVar16 = (uint *)(piVar11 + 0x2e);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = *puVar16 | 1;
    FUN_0163b708(piVar11 + 2);
    FUN_0163b708(piVar11 + 6);
    FUN_0163b708(piVar11 + 10);
    FUN_0163b708(piVar11 + 0xe);
    FUN_0163b708(piVar11 + 0x12);
    FUN_0163b708(piVar11 + 0x16);
    FUN_0163b708(piVar11 + 0x1a);
    FUN_0163b708(piVar11 + 0x1e);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar11;
    bVar1 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar1);
  *piVar11 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x4bc));
  }
  piVar11 = *(int **)(param_1 + 0x4c0);
  DataMemoryBarrier(0xb);
  piVar6 = piVar11 + 0x32;
  do {
    iVar14 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar14 + -1;
  DataMemoryBarrier(0xb);
  if (iVar14 == 1) {
    puVar16 = (uint *)(piVar11 + 0x30);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = *puVar16 | 1;
    FUN_0163b708(piVar11 + 2);
    FUN_0163b708(piVar11 + 6);
    FUN_0163b708(piVar11 + 10);
    FUN_0163b708(piVar11 + 0xe);
    FUN_0163b708(piVar11 + 0x12);
    FUN_0163b708(piVar11 + 0x16);
    FUN_0163b708(piVar11 + 0x1a);
    FUN_0163b708(piVar11 + 0x1e);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar11;
    bVar1 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar1);
  *piVar11 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x4c0));
  }
  piVar11 = *(int **)(param_1 + 0x300);
  piVar6 = piVar11 + 0x31;
  do {
    iVar14 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar14 + -1;
  if (iVar14 == 1) {
    FUN_0163b708(piVar11 + 0x22);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar11;
    bVar1 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar1);
  *piVar11 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x300));
  }
  iVar14 = *(int *)(param_1 + 0x484);
  if (iVar14 != 0) {
    piVar6 = *(int **)(param_1 + 0x480);
    do {
      iVar14 = iVar14 + -1;
      iVar4 = 0;
      if (*piVar6 != 0) {
        iVar4 = piVar6[1];
      }
      if (*piVar6 != 0 && iVar4 != 0) {
        (**(code **)(iVar4 + 0xc))(piVar6[2]);
      }
      piVar6 = piVar6 + 3;
    } while (iVar14 != 0);
  }
  if (*(int *)(param_1 + 0x47c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x480));
  }
  FUN_00d04380(param_1 + 0x490);
  piVar11 = *(int **)(param_1 + 0x4c4);
  DataMemoryBarrier(0xb);
  piVar6 = piVar11 + 0x21;
  do {
    iVar14 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar14 + -1;
  DataMemoryBarrier(0xb);
  if (iVar14 == 1) {
    FUN_00c74a60(piVar11 + 8);
    puVar16 = (uint *)(piVar11 + 0x12);
    DataMemoryBarrier(0xb);
    do {
      uVar7 = *puVar16;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar7 | 2;
    DataMemoryBarrier(0xb);
    if (uVar7 == 0) {
      iVar14 = piVar11[0x10];
      piVar11[0x10] = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar1);
      *puVar16 = 0;
      if (iVar14 != 0) {
        (**(code **)(iVar14 + 4))(piVar11[0x11]);
      }
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar11;
    bVar1 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar1);
  *piVar11 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d04674(*(undefined4 *)(param_1 + 0x4c4));
  }
  FUN_00d04794(param_1 + 0x504);
  if (param_1 != -1) {
    piVar6 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar14 = FUN_016d3bc8();
      uVar7 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
         (uVar12 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar4 = uVar12 - 0x10, uVar12 == 0)) {
        iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar12 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar8 = *(int *)(iVar14 + 8) + 0x10;
      iVar15 = iVar4 * uVar7 + iVar4 + -4;
      iVar4 = iVar8 + iVar15;
      if (4 < uVar12) {
        if (uVar12 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar12 = *(uint *)(iVar4 + -4);
        if (uVar12 < 5) {
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
      if ((uint)(iVar4 - param_1) < uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar4 - uVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar8 + iVar15) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar14 + 0x14);
      uVar12 = 1 << uVar7;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar14 + 0x10);
        uVar9 = *(uint *)(iVar14 + 0xc) | uVar13;
        if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar13 == 0) || (uVar9 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar14,uVar7);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar14 + 0x10) = uVar12 + uVar13;
          return;
        }
        puVar16 = (uint *)(iVar14 + 0x10);
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

