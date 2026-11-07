// FUN_00649418 @ 00649418 size=1128 calls_out=9 calls_in=2
// strings: 

void FUN_00649418(int *param_1)

{
  char cVar1;
  short sVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  short *psVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  bool bVar21;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 0) {
    piVar4 = (int *)param_1[0x16];
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar14 = *piVar4;
        bVar21 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar21);
      *piVar4 = iVar14 + -1;
      if (iVar14 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(param_1[0x16],param_1[0x17]);
      }
    }
    piVar4 = (int *)param_1[0x18];
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar4;
      bVar21 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar21);
    *piVar4 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01089b40(param_1[0x18]);
    }
    piVar4 = (int *)param_1[0x19];
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar4;
      bVar21 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar21);
    *piVar4 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0108a284(param_1[0x19]);
    }
    piVar11 = param_1 + 0x4d;
    FUN_006adf40(piVar11);
    piVar4 = (int *)*piVar11;
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar14 = *piVar4;
        bVar21 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar21);
      *piVar4 = iVar14 + -1;
      if (iVar14 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0105aee4(*piVar11);
      }
    }
    iVar14 = param_1[0x1c];
    if (iVar14 != -0x80000000) {
      iVar17 = param_1[0x1e];
      iVar18 = param_1[0x1d];
      if (iVar17 != 0) {
        psVar15 = (short *)(iVar18 + 0x24);
        do {
          iVar5 = 0;
          if (psVar15[-0x12] != 0) {
            iVar5 = *(int *)(psVar15 + -0x10);
          }
          if (psVar15[-0x12] != 0 && iVar5 != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(psVar15 + -0xe));
          }
          iVar5 = 0;
          if (*psVar15 != 0) {
            iVar5 = *(int *)(psVar15 + 2);
          }
          if (*psVar15 != 0 && iVar5 != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(psVar15 + 4));
          }
          psVar15 = psVar15 + 0x26;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
      if (iVar14 != 0) {
        thunk_FUN_016d3fb4(iVar18);
      }
      iVar18 = param_1[0x20];
      iVar17 = param_1[0x21] + 1;
      iVar14 = iVar18;
      while (iVar17 = iVar17 + -1, iVar17 != 0) {
        FUN_007b5fa0(iVar14);
        iVar14 = iVar14 + 0xe8;
      }
      if (param_1[0x1f] != 0) {
        thunk_FUN_016d3fb4(iVar18);
      }
      iVar18 = param_1[0x23];
      iVar17 = param_1[0x24] + 1;
      iVar14 = iVar18;
      while (iVar17 = iVar17 + -1, iVar17 != 0) {
        FUN_007b5fa0(iVar14);
        iVar14 = iVar14 + 0xe8;
      }
      if (param_1[0x22] != 0) {
        thunk_FUN_016d3fb4(iVar18);
      }
      iVar18 = param_1[0x26];
      iVar17 = param_1[0x27] + 1;
      iVar14 = iVar18;
      while (iVar17 = iVar17 + -1, iVar17 != 0) {
        FUN_007b5fa0(iVar14);
        iVar14 = iVar14 + 0xe8;
      }
      if (param_1[0x25] != 0) {
        thunk_FUN_016d3fb4(iVar18);
      }
      iVar18 = param_1[0x29];
      iVar17 = param_1[0x2a] + 1;
      iVar14 = iVar18;
      while (iVar17 = iVar17 + -1, iVar17 != 0) {
        FUN_007b5fa0(iVar14);
        iVar14 = iVar14 + 0xe8;
      }
      if (param_1[0x28] != 0) {
        thunk_FUN_016d3fb4(iVar18);
      }
      iVar14 = param_1[0x2b];
      if (iVar14 != -0x80000000) {
        iVar17 = param_1[0x2d];
        iVar18 = param_1[0x2c];
        if (iVar17 != 0) {
          piVar4 = (int *)(iVar18 + 8);
          do {
            bVar21 = (char)piVar4[-1] != '\0';
            iVar5 = 0;
            if (bVar21) {
              iVar5 = *piVar4;
            }
            if (bVar21 && iVar5 != 0) {
              thunk_FUN_016d3fb4(piVar4[1]);
            }
            piVar4 = piVar4 + 6;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        if (iVar14 != 0) {
          thunk_FUN_016d3fb4(iVar18);
        }
      }
      sVar2 = (short)param_1[0x36];
      if (sVar2 != 2) {
        iVar14 = 0;
        if (sVar2 != 0) {
          iVar14 = param_1[0x37];
        }
        if (sVar2 != 0 && iVar14 != 0) {
          thunk_FUN_016d3fb4(param_1[0x38]);
        }
        bVar21 = (short)param_1[0x3f] != 0;
        iVar14 = 0;
        if (bVar21) {
          iVar14 = param_1[0x40];
        }
        if (bVar21 && iVar14 != 0) {
          thunk_FUN_016d3fb4(param_1[0x41]);
        }
      }
      iVar14 = param_1[0x4c];
      DataMemoryBarrier(0xb);
      pcVar7 = (char *)(iVar14 + 0x24);
      *(undefined1 *)(iVar14 + 0x34) = 1;
      DataMemoryBarrier(0xb);
      do {
        cVar1 = *pcVar7;
        bVar21 = (bool)hasExclusiveAccess(pcVar7);
      } while (!bVar21);
      *pcVar7 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar1 == '\0') {
        iVar17 = *(int *)(iVar14 + 0x1c);
        *(undefined4 *)(iVar14 + 0x1c) = 0;
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar14 + 0x24) = 0;
        DataMemoryBarrier(0xb);
        if (iVar17 != 0) {
          (**(code **)(iVar17 + 4))(*(undefined4 *)(iVar14 + 0x20));
        }
      }
      pcVar7 = (char *)(iVar14 + 0x30);
      DataMemoryBarrier(0xb);
      do {
        cVar1 = *pcVar7;
        bVar21 = (bool)hasExclusiveAccess(pcVar7);
      } while (!bVar21);
      *pcVar7 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar1 == '\0') {
        iVar17 = *(int *)(iVar14 + 0x28);
        *(undefined4 *)(iVar14 + 0x28) = 0;
        if (iVar17 != 0) {
          (**(code **)(iVar17 + 0xc))(*(undefined4 *)(iVar14 + 0x2c));
        }
        DataMemoryBarrier(0xb);
        *pcVar7 = '\0';
        DataMemoryBarrier(0xb);
      }
      piVar4 = (int *)param_1[0x4c];
      DataMemoryBarrier(0xb);
      do {
        iVar14 = *piVar4;
        bVar21 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar21);
      *piVar4 = iVar14 + -1;
      if (iVar14 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0105a70c(param_1[0x4c]);
        return;
      }
    }
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  iVar14 = param_1[4];
  if (param_1[2] == 0 && param_1[3] == 0) {
    if (iVar14 != 0) {
      FUN_006495dc();
      return;
    }
  }
  else if (iVar14 != 0) {
    puVar9 = (undefined4 *)param_1[5];
    pcVar6 = (code *)*puVar9;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(iVar14);
    }
    if (puVar9[1] != 0) {
      if (iVar14 == 0) {
        return;
      }
      iVar17 = FUN_016d3bc8();
      uVar19 = *(byte *)(iVar14 + -3) & 0x1f;
      if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
         (uVar12 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar18 = uVar12 - 0x10, uVar12 == 0)) {
        iVar18 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar12 = (uint)(*(byte *)(iVar14 + -3) >> 5);
      iVar16 = *(int *)(iVar17 + 8) + 0x10;
      iVar5 = iVar18 * uVar19 + iVar18 + -4;
      iVar18 = iVar16 + iVar5;
      if (4 < uVar12) {
        if (uVar12 != 5) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar6)();
        }
        uVar12 = *(uint *)(iVar18 + -4);
        if (uVar12 < 5) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar6)();
        }
        if (*(char *)(iVar18 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar6)();
        }
      }
      if ((uint)(iVar18 - iVar14) < uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar6)();
      }
      if (*(char *)(iVar18 - uVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar6)();
      }
      if (*(char *)(iVar16 + iVar5) != '\0') {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar6)();
      }
      bVar3 = *(byte *)(iVar17 + 0x14);
      uVar12 = 1 << uVar19;
      *(undefined1 *)(iVar14 + -3) = 0xff;
      *(undefined2 *)(iVar14 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar17 + 0x10);
        uVar8 = *(uint *)(iVar17 + 0xc) | uVar13;
        if ((uVar12 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar6)();
        }
        if ((uVar13 == 0) || (uVar8 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar17,uVar19);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar9 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar9;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar9 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar17 + 0x10) = uVar12 + uVar13;
          return;
        }
        puVar20 = (uint *)(iVar17 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar20);
          uVar8 = *puVar20;
          if (uVar13 != uVar8) goto LAB_016d409c;
          bVar21 = (bool)hasExclusiveAccess(puVar20);
        } while (!bVar21);
        *puVar20 = uVar12 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

