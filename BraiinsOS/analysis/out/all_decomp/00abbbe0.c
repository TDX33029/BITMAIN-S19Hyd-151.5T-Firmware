// FUN_00abbbe0 @ 00abbbe0 size=2828 calls_out=24 calls_in=1
// strings: 

void FUN_00abbbe0(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  char cVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int *piVar14;
  uint *puVar15;
  undefined4 *puVar16;
  int iVar17;
  bool bVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  switch(*(undefined1 *)(param_1 + 0x2d)) {
  case 3:
    if (*(char *)(param_1 + 0x95) == '\x03') {
      cVar5 = *(char *)(param_1 + 0x40);
      if (cVar5 == '\x04') {
        if (*(char *)(param_1 + 0x8a) == '\x03') {
          if ((*(char *)(param_1 + 0x5c) == '\x03') && (*(int *)(param_1 + 0x54) != 0)) {
            FUN_00aa0a58(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),1);
          }
          FUN_00a607ec(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
          if (*(int *)(param_1 + 0x78) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x7c));
          }
          *(undefined1 *)(param_1 + 0x88) = 0;
          FUN_00a6074c(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
          if (*(int *)(param_1 + 0x68) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x6c));
          }
          *(undefined1 *)(param_1 + 0x89) = 0;
        }
        iVar7 = *(int *)(param_1 + 0x4c);
        if (iVar7 != 0) {
          iVar10 = *(int *)(param_1 + 0x48);
          iVar2 = 0;
          do {
            piVar4 = *(int **)(iVar10 + iVar2 * 4);
            iVar17 = iVar2 + 1;
            DataMemoryBarrier(0xb);
            do {
              iVar8 = *piVar4;
              bVar18 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar18);
            *piVar4 = iVar8 + -1;
            if (iVar8 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0078ecac(*(undefined4 *)(iVar10 + iVar2 * 4));
            }
            iVar2 = iVar17;
          } while (iVar17 != iVar7);
        }
        if (*(int *)(param_1 + 0x44) != 0) {
          iVar7 = *(int *)(param_1 + 0x48);
          if (iVar7 == 0) {
            return;
          }
          iVar2 = FUN_016d3bc8();
          uVar3 = *(byte *)(iVar7 + -3) & 0x1f;
          if (((*(byte *)(iVar2 + 0x14) & 0x1f) != 0) ||
             (uVar11 = *(uint *)(iVar2 + 0x14) & 0xfffff000, iVar10 = uVar11 - 0x10, uVar11 == 0)) {
            iVar10 = (uint)*(ushort *)
                            (&DAT_0042567c + ((*(ushort *)(iVar2 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar11 = (uint)(*(byte *)(iVar7 + -3) >> 5);
          iVar8 = *(int *)(iVar2 + 8) + 0x10;
          iVar17 = iVar10 * uVar3 + iVar10 + -4;
          iVar10 = iVar8 + iVar17;
          if (4 < uVar11) {
            if (uVar11 != 5) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar6)();
            }
            uVar11 = *(uint *)(iVar10 + -4);
            if (uVar11 < 5) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar6)();
            }
            if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar6 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar6)();
            }
          }
          if ((uint)(iVar10 - iVar7) < uVar11) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar6)();
          }
          if (*(char *)(iVar10 - uVar11) != '\0') {
                    /* WARNING: Does not return */
            pcVar6 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar6)();
          }
          if (*(char *)(iVar8 + iVar17) != '\0') {
                    /* WARNING: Does not return */
            pcVar6 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar6)();
          }
          bVar1 = *(byte *)(iVar2 + 0x14);
          uVar11 = 1 << uVar3;
          *(undefined1 *)(iVar7 + -3) = 0xff;
          *(undefined2 *)(iVar7 + -2) = 0;
          do {
            uVar12 = *(uint *)(iVar2 + 0x10);
            uVar9 = *(uint *)(iVar2 + 0xc) | uVar12;
            if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar6)();
            }
            if ((uVar12 == 0) || (uVar9 + uVar11 == (2 << (bVar1 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar2,uVar3);
              FUN_016dddc0(&DAT_018ddd48);
              if (iStack_24 == 0) {
                return;
              }
              puVar16 = (undefined4 *)FUN_016d2bc8();
              uVar13 = *puVar16;
              FUN_016d6ac4(uStack_28,iStack_24);
              *puVar16 = uVar13;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar2 + 0x10) = uVar11 + uVar12;
              return;
            }
            puVar15 = (uint *)(iVar2 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar15);
              uVar9 = *puVar15;
              if (uVar12 != uVar9) goto LAB_016d409c;
              bVar18 = (bool)hasExclusiveAccess(puVar15);
            } while (!bVar18);
            *puVar15 = uVar11 + uVar12;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar12 == uVar9) {
              return;
            }
          } while( true );
        }
      }
      else {
        bVar18 = cVar5 == '\x03';
        if (bVar18) {
          cVar5 = *(char *)(param_1 + 0x50);
        }
        if ((bVar18 && cVar5 == '\x03') && (*(int *)(param_1 + 0x48) != 0)) {
          FUN_00aa190c(*(int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),1);
          return;
        }
      }
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0x7c) == '\x03') {
      FUN_00a091b0(param_1 + 0x3c);
    }
    goto LAB_00abc728;
  case 5:
    if (*(char *)(param_1 + 0x48) == '\x04') {
      FUN_00a9abbc(param_1 + 0x60);
      FUN_005c3320(param_1 + 0x60);
    }
    else if (*(char *)(param_1 + 0x48) == '\x03') {
      FUN_00a07b4c(param_1 + 0x50);
    }
    goto LAB_00abc728;
  case 6:
    cVar5 = *(char *)(param_1 + 0x44);
    if (cVar5 == '\x05') {
      cVar5 = *(char *)(param_1 + 0x5d);
      if (cVar5 == '\x04') {
        cVar5 = *(char *)(param_1 + 0x78);
        bVar18 = cVar5 == '\x03';
        if (bVar18) {
          cVar5 = *(char *)(param_1 + 0x74);
        }
        if ((bVar18 && cVar5 == '\x03') && (*(int *)(param_1 + 0x6c) != 0)) {
          FUN_00aa0a58(*(int *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),1);
        }
        piVar4 = *(int **)(param_1 + 0x60);
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar4;
          bVar18 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar18);
        *piVar4 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078e66c(*(undefined4 *)(param_1 + 0x60));
        }
        *(undefined1 *)(param_1 + 0x5c) = 0;
        FUN_00aa13c0(*(undefined4 *)(param_1 + 0x54));
        goto switchD_00abbd2c_default;
      }
LAB_00abbdb4:
      iVar7 = 0x60;
    }
    else {
      if (cVar5 == '\x04') {
        cVar5 = *(char *)(param_1 + 0x68);
        goto LAB_00abbdb4;
      }
      if (cVar5 != '\x03') goto switchD_00abbd2c_default;
      cVar5 = *(char *)(param_1 + 0x54);
      iVar7 = 0x4c;
    }
    if (cVar5 == '\x03') {
      iVar2 = *(int *)(param_1 + iVar7);
      if (iVar2 != 0) {
        FUN_00aa0a58(iVar2,((int *)(param_1 + iVar7))[1],1);
      }
    }
    goto switchD_00abbd2c_default;
  case 7:
    switch(*(undefined1 *)(param_1 + 0x5c)) {
    case 3:
      if (*(char *)(param_1 + 0xa0) != '\x03') goto LAB_00abc434;
      if (*(char *)(param_1 + 0x9c) == '\x03') {
        if (*(short *)(param_1 + 0x7c) == 3) {
          piVar4 = *(int **)(param_1 + 0x80);
          if (*piVar4 == 0xcc) {
            DataMemoryBarrier(0xb);
            bVar18 = (bool)hasExclusiveAccess(piVar4);
            if (bVar18) {
              *piVar4 = 0x84;
              goto LAB_00abc434;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          (**(code **)(piVar4[2] + 0x10))();
        }
        goto LAB_00abc434;
      }
      if ((*(char *)(param_1 + 0x9c) != '\0') || (*(int *)(param_1 + 0x70) == 0)) goto LAB_00abc434;
      piVar4 = (int *)(param_1 + 0x74);
      goto LAB_00abbf14;
    case 4:
      if ((*(char *)(param_1 + 0x6c) == '\x03') && (*(int *)(param_1 + 100) != 0)) {
        FUN_00aa190c(*(int *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),1);
      }
      goto LAB_00abc434;
    case 5:
      if ((*(char *)(param_1 + 0x6c) == '\x03') && (*(int *)(param_1 + 100) != 0)) {
        FUN_00aa0a58(*(int *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),1);
      }
      break;
    case 6:
      if (*(char *)(param_1 + 0xd4) == '\x03') {
        FUN_00abcd80(param_1 + 0x90);
        if (*(int *)(param_1 + 0x84) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x88));
        }
        if (*(int *)(param_1 + 0x78) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x7c));
        }
      }
      uVar13 = *(undefined4 *)(param_1 + 0x68);
      puVar16 = *(undefined4 **)(param_1 + 0x6c);
      pcVar6 = (code *)*puVar16;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar13);
      }
      if (puVar16[1] != 0) {
        thunk_FUN_016d3fb4(uVar13);
      }
      piVar4 = *(int **)(param_1 + 100);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar18 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar18);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078e66c(*(undefined4 *)(param_1 + 100));
      }
      FUN_00ce2c78(param_1 + 0xd8);
      break;
    default:
      goto switchD_00abbd2c_default;
    }
    piVar4 = (int *)(param_1 + 0x4c);
    iVar2 = *piVar4;
    iVar7 = *(int *)(param_1 + 0x50);
    if (iVar7 != 0) {
      iVar10 = 0;
      do {
        piVar14 = *(int **)(iVar2 + iVar10 * 4);
        iVar17 = iVar10 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar14;
          bVar18 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar18);
        *piVar14 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078ecac(*(undefined4 *)(iVar2 + iVar10 * 4));
        }
        iVar10 = iVar17;
      } while (iVar17 != iVar7);
    }
    if (*(int *)(param_1 + 0x48) != 0) {
LAB_00abbf14:
      thunk_FUN_016d3fb4(*piVar4);
    }
LAB_00abc434:
    puVar15 = (uint *)(*(int *)(param_1 + 0x40) + 0x10);
    for (iVar7 = *(int *)(param_1 + 0x44); iVar7 != 0; iVar7 = iVar7 + -1) {
      if ((*puVar15 & 0x7fffffff) == 0) {
        uVar3 = puVar15[-3];
      }
      else {
        thunk_FUN_016d3fb4(puVar15[1]);
        uVar3 = puVar15[-3];
      }
      if (uVar3 != 0) {
        thunk_FUN_016d3fb4(puVar15[-2]);
      }
      puVar15 = puVar15 + 9;
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x40));
    }
    goto switchD_00abbd2c_default;
  case 8:
    switch(*(undefined1 *)(param_1 + 0xe2)) {
    case 3:
      if ((*(char *)(param_1 + 0xf0) == '\x03') && (*(int *)(param_1 + 0xe8) != 0)) {
        FUN_00aa0a58(*(int *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec),1);
      }
      goto switchD_00abbd2c_default;
    case 4:
      goto switchD_00abbd2c_caseD_4;
    case 5:
      cVar5 = *(char *)(param_1 + 0x1c0);
      bVar18 = cVar5 == '\x03';
      if (bVar18) {
        cVar5 = *(char *)(param_1 + 0x1bd);
      }
      if (bVar18 && cVar5 == '\x03') {
        if (*(int *)(param_1 + 0x188) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x18c));
        }
        if (*(int *)(param_1 + 0x17c) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x180));
        }
        if (*(int *)(param_1 + 0x164) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x168));
        }
        if (*(int *)(param_1 + 0x158) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x15c));
        }
        piVar14 = (int *)(param_1 + 0x138);
        *(undefined1 *)(param_1 + 0x198) = 0;
        *(undefined1 *)(param_1 + 0x199) = 0;
        *(undefined1 *)(param_1 + 0x19a) = 0;
        *(undefined1 *)(param_1 + 0x19b) = 0;
        *(undefined1 *)(param_1 + 0x19c) = 0;
        *(undefined1 *)(param_1 + 0x19d) = 0;
        *(undefined1 *)(param_1 + 0x19e) = 0;
        *(undefined1 *)(param_1 + 0x19f) = 0;
        *(undefined1 *)(param_1 + 0x1a0) = 0;
        *(undefined1 *)(param_1 + 0x1a1) = 0;
        *(undefined1 *)(param_1 + 0x1a2) = 0;
        *(undefined1 *)(param_1 + 0x1a3) = 0;
        *(undefined1 *)(param_1 + 0x1a4) = 0;
        *(undefined1 *)(param_1 + 0x1a5) = 0;
        *(undefined1 *)(param_1 + 0x1a6) = 0;
        *(undefined1 *)(param_1 + 0x1a7) = 0;
        *(undefined1 *)(param_1 + 0x1a8) = 0;
        *(undefined1 *)(param_1 + 0x1a9) = 0;
        *(undefined1 *)(param_1 + 0x1aa) = 0;
        *(undefined1 *)(param_1 + 0x1ab) = 0;
        *(undefined1 *)(param_1 + 0x1ac) = 0;
        *(undefined1 *)(param_1 + 0x1ad) = 0;
        *(undefined1 *)(param_1 + 0x1ae) = 0;
        *(undefined1 *)(param_1 + 0x1af) = 0;
        *(undefined1 *)(param_1 + 0x1b0) = 0;
        *(undefined1 *)(param_1 + 0x1b1) = 0;
        *(undefined1 *)(param_1 + 0x1b2) = 0;
        *(undefined1 *)(param_1 + 0x1b3) = 0;
        *(undefined1 *)(param_1 + 0x1b4) = 0;
        *(undefined1 *)(param_1 + 0x1b5) = 0;
        *(undefined1 *)(param_1 + 0x1b6) = 0;
        *(undefined1 *)(param_1 + 0x1b7) = 0;
        *(undefined1 *)(param_1 + 0x1b8) = 0;
        *(undefined1 *)(param_1 + 0x1b9) = 0;
        *(undefined2 *)(param_1 + 0x1ba) = 0;
        FUN_00aa37ec(piVar14);
        piVar4 = (int *)*piVar14;
        if (piVar4 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar7 = *piVar4;
            bVar18 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar18);
          *piVar4 = iVar7 + -1;
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00f36f34(*piVar14);
          }
        }
        *(undefined1 *)(param_1 + 0x1bc) = 0;
        iVar7 = *(int *)(param_1 + 0x110);
      }
      else {
        iVar7 = *(int *)(param_1 + 0x110);
      }
      if (iVar7 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x114));
      }
      if (*(int *)(param_1 + 0x104) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x108));
      }
      if ((*(uint *)(param_1 + 0xf8) & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xfc));
      }
      if (*(int *)(param_1 + 0xec) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf0));
      }
      if ((*(uint *)(param_1 + 0x1c8) & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1cc));
      }
      break;
    case 6:
      iVar7 = 0xb8;
      switch(*(undefined1 *)(param_1 + 0x158)) {
      case 0:
switchD_00abc124_caseD_0:
        FUN_00b43a70(param_1 + 0x30 + iVar7);
        break;
      case 3:
        cVar5 = *(char *)(param_1 + 0x229);
        if (cVar5 == '\x04') {
          if (*(char *)(param_1 + 0x251) == '\x03') {
            if (*(char *)(param_1 + 0x245) == '\x03') {
              if (*(int *)(param_1 + 0x230) != 0) {
                FUN_00aa0a58(*(int *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x234),1);
              }
              FUN_00a90d64(*(undefined4 *)(param_1 + 0x238));
              piVar4 = *(int **)(param_1 + 0x238);
              DataMemoryBarrier(0xb);
              do {
                iVar7 = *piVar4;
                bVar18 = (bool)hasExclusiveAccess(piVar4);
              } while (!bVar18);
              *piVar4 = iVar7 + -1;
              if (iVar7 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0078205c(*(undefined4 *)(param_1 + 0x238));
              }
              *(undefined1 *)(param_1 + 0x244) = 0;
            }
            else if (*(char *)(param_1 + 0x245) == '\0') {
              FUN_00a90d64(*(undefined4 *)(param_1 + 0x240));
              piVar4 = *(int **)(param_1 + 0x240);
              DataMemoryBarrier(0xb);
              do {
                iVar7 = *piVar4;
                bVar18 = (bool)hasExclusiveAccess(piVar4);
              } while (!bVar18);
              *piVar4 = iVar7 + -1;
              if (iVar7 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0078205c(*(undefined4 *)(param_1 + 0x240));
              }
            }
            *(undefined1 *)(param_1 + 0x250) = 0;
          }
          else if (*(char *)(param_1 + 0x251) == '\0') {
            FUN_00a90d64(*(undefined4 *)(param_1 + 0x24c));
            piVar4 = *(int **)(param_1 + 0x24c);
            DataMemoryBarrier(0xb);
            do {
              iVar7 = *piVar4;
              bVar18 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar18);
            *piVar4 = iVar7 + -1;
            if (iVar7 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0078205c(*(undefined4 *)(param_1 + 0x24c));
            }
          }
        }
        else {
          if (cVar5 != '\x03') {
            iVar7 = 400;
            if (cVar5 == '\0') goto switchD_00abc124_caseD_0;
            break;
          }
          FUN_00a29d2c(param_1 + 0x230);
        }
        FUN_00b43a70(param_1 + 0x160);
        *(undefined1 *)(param_1 + 0x228) = 0;
        break;
      case 4:
        if (*(int *)(param_1 + 0x160) != 0) {
          FUN_00aa0a58(*(int *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x164),1);
        }
        goto LAB_00abc3b0;
      case 5:
        if (*(char *)(param_1 + 0x1a8) == '\x03') {
          FUN_00a091b0(param_1 + 0x168);
        }
        FUN_00aa13c0(*(undefined4 *)(param_1 + 0x154));
LAB_00abc3b0:
        if (*(char *)(param_1 + 0x159) != '\0') {
          FUN_0096e5e8(param_1 + 0x168);
        }
        piVar4 = *(int **)(param_1 + 0x150);
        *(undefined1 *)(param_1 + 0x159) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar4;
          bVar18 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar18);
        *piVar4 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078e66c(*(undefined4 *)(param_1 + 0x150));
        }
        *(undefined1 *)(param_1 + 0x15a) = 0;
      }
      break;
    case 7:
      if ((*(char *)(param_1 + 0x104) == '\x03') && (*(int *)(param_1 + 0xfc) != 0)) {
        FUN_00aa0a58(*(int *)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0x100),1);
      }
      piVar4 = *(int **)(param_1 + 0xc4);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar18 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar18);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078e66c(*(undefined4 *)(param_1 + 0xc4));
      }
      break;
    case 8:
      FUN_00a9abbc(param_1 + 0xe8);
      FUN_005c3320(param_1 + 0xe8);
      goto LAB_00abc6cc;
    default:
      goto switchD_00abbd2c_default;
    }
    piVar4 = *(int **)(param_1 + 0xc0);
    *(undefined1 *)(param_1 + 0xdb) = 0;
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar18 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar18);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078fcec(*(undefined4 *)(param_1 + 0xc0));
      }
    }
    piVar4 = *(int **)(param_1 + 0xbc);
    *(undefined1 *)(param_1 + 0xdc) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar18 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar18);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa7c3c(*(undefined4 *)(param_1 + 0xbc));
    }
    puVar15 = (uint *)(*(int *)(param_1 + 0x84) + 0x10);
    *(undefined1 *)(param_1 + 0xdf) = 0;
    *(undefined2 *)(param_1 + 0xdd) = 0;
    for (iVar7 = ((uint)(*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x84)) >> 2) * 0x38e38e39;
        iVar7 != 0; iVar7 = iVar7 + -1) {
      if ((*puVar15 & 0x7fffffff) == 0) {
        uVar3 = puVar15[-3];
      }
      else {
        thunk_FUN_016d3fb4(puVar15[1]);
        uVar3 = puVar15[-3];
      }
      if (uVar3 != 0) {
        thunk_FUN_016d3fb4(puVar15[-2]);
      }
      puVar15 = puVar15 + 9;
    }
    if (*(int *)(param_1 + 0x88) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x80));
    }
LAB_00abc6cc:
    FUN_00ce17a4(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
    if (*(int *)(param_1 + 0x74) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x78));
    }
    *(undefined1 *)(param_1 + 0xe0) = 0;
switchD_00abbd2c_caseD_4:
    *(undefined1 *)(param_1 + 0xe1) = 0;
switchD_00abbd2c_default:
    piVar4 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar18 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar18);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078ecac(*(undefined4 *)(param_1 + 0x20));
    }
LAB_00abc728:
    if (*(int *)(param_1 + 0x10) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x14));
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
    return;
  case 9:
    if (*(char *)(param_1 + 0x90) == '\x03') {
      FUN_00a29d2c(param_1 + 0x3c);
      return;
    }
  }
  return;
}

