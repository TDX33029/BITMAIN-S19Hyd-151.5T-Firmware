// FUN_0064a6e4 @ 0064a6e4 size=532 calls_out=9 calls_in=2
// strings: 

void FUN_0064a6e4(int *param_1)

{
  char cVar1;
  short sVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r4;
  undefined4 *puVar11;
  undefined4 uVar12;
  int *piVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  short *psVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  int iVar21;
  uint *puVar22;
  bool bVar23;
  undefined4 uStack_28;
  
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      iVar18 = param_1[4];
      if (param_1[2] == 0 && param_1[3] == 0) {
        if (iVar18 != 0) {
          FUN_006495dc();
          return;
        }
      }
      else if (iVar18 != 0) {
        puVar11 = (undefined4 *)param_1[5];
        pcVar6 = (code *)*puVar11;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(iVar18);
        }
        if (puVar11[1] != 0) {
          if (iVar18 == 0) {
            return;
          }
          iVar7 = FUN_016d3bc8();
          uVar9 = *(byte *)(iVar18 + -3) & 0x1f;
          if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
             (uVar15 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar21 = uVar15 - 0x10, uVar15 == 0)) {
            iVar21 = (uint)*(ushort *)
                            (&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar15 = (uint)(*(byte *)(iVar18 + -3) >> 5);
          iVar19 = *(int *)(iVar7 + 8) + 0x10;
          iVar4 = iVar21 * uVar9 + iVar21 + -4;
          iVar21 = iVar19 + iVar4;
          if (4 < uVar15) {
            if (uVar15 != 5) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar6)();
            }
            uVar15 = *(uint *)(iVar21 + -4);
            if (uVar15 < 5) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar6)();
            }
            if (*(char *)(iVar21 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar6 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar6)();
            }
          }
          if ((uint)(iVar21 - iVar18) < uVar15) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar6)();
          }
          if (*(char *)(iVar21 - uVar15) != '\0') {
                    /* WARNING: Does not return */
            pcVar6 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar6)();
          }
          if (*(char *)(iVar19 + iVar4) != '\0') {
                    /* WARNING: Does not return */
            pcVar6 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar6)();
          }
          bVar3 = *(byte *)(iVar7 + 0x14);
          uVar15 = 1 << uVar9;
          *(undefined1 *)(iVar18 + -3) = 0xff;
          *(undefined2 *)(iVar18 + -2) = 0;
          do {
            uVar16 = *(uint *)(iVar7 + 0x10);
            uVar10 = *(uint *)(iVar7 + 0xc) | uVar16;
            if ((uVar15 & uVar10) != 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar6)();
            }
            if ((uVar16 == 0) || (uVar10 + uVar15 == (2 << (bVar3 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar7,uVar9);
              FUN_016dddc0(&DAT_018ddd48);
              if (unaff_r4 == 0) {
                return;
              }
              puVar11 = (undefined4 *)FUN_016d2bc8();
              uVar12 = *puVar11;
              FUN_016d6ac4(uStack_28,unaff_r4);
              *puVar11 = uVar12;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar7 + 0x10) = uVar15 + uVar16;
              return;
            }
            puVar22 = (uint *)(iVar7 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar22);
              uVar10 = *puVar22;
              if (uVar16 != uVar10) goto LAB_016d409c;
              bVar23 = (bool)hasExclusiveAccess(puVar22);
            } while (!bVar23);
            *puVar22 = uVar15 + uVar16;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar16 == uVar10) {
              return;
            }
          } while( true );
        }
      }
    }
    return;
  }
  FUN_005e6cdc(param_1 + 0x10);
  if (param_1[0x13] != -1) {
    FUN_016dffb2();
  }
  FUN_00a414e8(param_1 + 0x10);
  FUN_0064a9ec(param_1 + 0x14);
  iVar18 = param_1[0x26];
  if (iVar18 != -0x7ffffffe) {
    uVar9 = iVar18 + 0x80000001U & iVar18 >> 0x1f;
    if (uVar9 == 1) {
      iVar18 = param_1[0x27];
      iVar7 = 0x9c;
    }
    else {
      iVar7 = 0x98;
      if (uVar9 != 0) goto LAB_0064a7bc;
    }
    if (iVar18 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)((int)param_1 + iVar7 + 4));
    }
  }
LAB_0064a7bc:
  if ((param_1[0x22] & 0x7fffffffU) != 0) {
    thunk_FUN_016d3fb4(param_1[0x23]);
  }
  FUN_0064aaf8(param_1 + 0x33);
  iVar18 = param_1[7];
  if (iVar18 != 0) {
    iVar7 = param_1[9];
    if (iVar7 != 0) {
      puVar20 = (uint *)param_1[6];
      puVar22 = puVar20 + 1;
      uVar9 = ~*puVar20 & 0x80808080;
      do {
        puVar14 = puVar22;
        if (uVar9 == 0) {
          do {
            puVar22 = puVar14 + 1;
            uVar9 = *puVar14;
            puVar20 = puVar20 + -0x24;
            puVar14 = puVar22;
          } while ((uVar9 & 0x80808080) == 0x80808080);
          uVar9 = uVar9 & 0x80808080 ^ 0x80808080;
        }
        FUN_0074e820(puVar20 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                              (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) *
                               -9 + -8);
        iVar7 = iVar7 + -1;
        uVar9 = uVar9 - 1 & uVar9;
      } while (iVar7 != 0);
    }
    if (iVar18 * 0x25 != -0x29) {
      thunk_FUN_016d3fb4(param_1[6] + iVar18 * -0x24 + -0x24);
    }
  }
  piVar5 = (int *)param_1[0xe];
  if (piVar5 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar5;
      bVar23 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar23);
    *piVar5 = iVar18 + -1;
    if (iVar18 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(param_1[0xe],param_1[0xf]);
    }
  }
  piVar13 = param_1 + 0x71;
  FUN_006adf40(piVar13);
  piVar5 = (int *)*piVar13;
  if (piVar5 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar5;
      bVar23 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar23);
    *piVar5 = iVar18 + -1;
    if (iVar18 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0105aee4(*piVar13);
    }
  }
  iVar18 = param_1[0x40];
  if (iVar18 != -0x80000000) {
    iVar7 = param_1[0x42];
    iVar21 = param_1[0x41];
    if (iVar7 != 0) {
      psVar17 = (short *)(iVar21 + 0x24);
      do {
        iVar4 = 0;
        if (psVar17[-0x12] != 0) {
          iVar4 = *(int *)(psVar17 + -0x10);
        }
        if (psVar17[-0x12] != 0 && iVar4 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(psVar17 + -0xe));
        }
        iVar4 = 0;
        if (*psVar17 != 0) {
          iVar4 = *(int *)(psVar17 + 2);
        }
        if (*psVar17 != 0 && iVar4 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(psVar17 + 4));
        }
        psVar17 = psVar17 + 0x26;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (iVar18 != 0) {
      thunk_FUN_016d3fb4(iVar21);
    }
    iVar21 = param_1[0x44];
    iVar7 = param_1[0x45] + 1;
    iVar18 = iVar21;
    while (iVar7 = iVar7 + -1, iVar7 != 0) {
      FUN_007b5fa0(iVar18);
      iVar18 = iVar18 + 0xe8;
    }
    if (param_1[0x43] != 0) {
      thunk_FUN_016d3fb4(iVar21);
    }
    iVar21 = param_1[0x47];
    iVar7 = param_1[0x48] + 1;
    iVar18 = iVar21;
    while (iVar7 = iVar7 + -1, iVar7 != 0) {
      FUN_007b5fa0(iVar18);
      iVar18 = iVar18 + 0xe8;
    }
    if (param_1[0x46] != 0) {
      thunk_FUN_016d3fb4(iVar21);
    }
    iVar21 = param_1[0x4a];
    iVar7 = param_1[0x4b] + 1;
    iVar18 = iVar21;
    while (iVar7 = iVar7 + -1, iVar7 != 0) {
      FUN_007b5fa0(iVar18);
      iVar18 = iVar18 + 0xe8;
    }
    if (param_1[0x49] != 0) {
      thunk_FUN_016d3fb4(iVar21);
    }
    iVar21 = param_1[0x4d];
    iVar7 = param_1[0x4e] + 1;
    iVar18 = iVar21;
    while (iVar7 = iVar7 + -1, iVar7 != 0) {
      FUN_007b5fa0(iVar18);
      iVar18 = iVar18 + 0xe8;
    }
    if (param_1[0x4c] != 0) {
      thunk_FUN_016d3fb4(iVar21);
    }
    iVar18 = param_1[0x4f];
    if (iVar18 != -0x80000000) {
      iVar7 = param_1[0x51];
      iVar21 = param_1[0x50];
      if (iVar7 != 0) {
        piVar5 = (int *)(iVar21 + 8);
        do {
          bVar23 = (char)piVar5[-1] != '\0';
          iVar4 = 0;
          if (bVar23) {
            iVar4 = *piVar5;
          }
          if (bVar23 && iVar4 != 0) {
            thunk_FUN_016d3fb4(piVar5[1]);
          }
          piVar5 = piVar5 + 6;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (iVar18 != 0) {
        thunk_FUN_016d3fb4(iVar21);
      }
    }
    sVar2 = (short)param_1[0x5a];
    if (sVar2 != 2) {
      iVar18 = 0;
      if (sVar2 != 0) {
        iVar18 = param_1[0x5b];
      }
      if (sVar2 != 0 && iVar18 != 0) {
        thunk_FUN_016d3fb4(param_1[0x5c]);
      }
      bVar23 = (short)param_1[99] != 0;
      iVar18 = 0;
      if (bVar23) {
        iVar18 = param_1[100];
      }
      if (bVar23 && iVar18 != 0) {
        thunk_FUN_016d3fb4(param_1[0x65]);
      }
    }
    iVar18 = param_1[0x70];
    DataMemoryBarrier(0xb);
    pcVar8 = (char *)(iVar18 + 0x24);
    *(undefined1 *)(iVar18 + 0x34) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar8;
      bVar23 = (bool)hasExclusiveAccess(pcVar8);
    } while (!bVar23);
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar7 = *(int *)(iVar18 + 0x1c);
      *(undefined4 *)(iVar18 + 0x1c) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar18 + 0x24) = 0;
      DataMemoryBarrier(0xb);
      if (iVar7 != 0) {
        (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar18 + 0x20));
      }
    }
    pcVar8 = (char *)(iVar18 + 0x30);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar8;
      bVar23 = (bool)hasExclusiveAccess(pcVar8);
    } while (!bVar23);
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar7 = *(int *)(iVar18 + 0x28);
      *(undefined4 *)(iVar18 + 0x28) = 0;
      if (iVar7 != 0) {
        (**(code **)(iVar7 + 0xc))(*(undefined4 *)(iVar18 + 0x2c));
      }
      DataMemoryBarrier(0xb);
      *pcVar8 = '\0';
      DataMemoryBarrier(0xb);
    }
    piVar5 = (int *)param_1[0x70];
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar5;
      bVar23 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar23);
    *piVar5 = iVar18 + -1;
    if (iVar18 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0105a70c(param_1[0x70]);
      return;
    }
  }
  return;
}

