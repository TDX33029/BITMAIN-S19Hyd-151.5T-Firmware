// FUN_014209b0 @ 014209b0 size=1648 calls_out=13 calls_in=2
// strings: 

void FUN_014209b0(uint *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar5 = *param_1;
  iVar7 = uVar5 - 2;
  if (uVar5 < 2) {
    iVar7 = 0;
  }
  if (iVar7 == 0) {
    if (uVar5 == 2) {
      return;
    }
    if (param_1[0x30] != 3) {
      FUN_01420524();
    }
    FUN_01421e88(param_1 + 0x27);
    piVar4 = (int *)param_1[0x2e];
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143db38(param_1[0x2e]);
      }
    }
    piVar4 = (int *)param_1[0x18];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(param_1[0x18],param_1[0x19]);
    }
    piVar4 = (int *)param_1[0x1a];
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(param_1[0x1a],param_1[0x1b]);
      }
    }
    piVar4 = (int *)param_1[0x1c];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(param_1[0x1c],param_1[0x1d]);
      return;
    }
    return;
  }
  if (iVar7 != 1) {
    return;
  }
  cVar1 = (char)param_1[0xf];
  if (cVar1 == '\x02') {
    FUN_0147beec();
    return;
  }
  if (cVar1 == '\x03') {
    return;
  }
  if (cVar1 != '\x04') {
    FUN_01421640();
    return;
  }
  uVar5 = param_1[1];
  switch(*(undefined1 *)(uVar5 + 0xed)) {
  case 0:
    piVar4 = *(int **)(uVar5 + 0x60);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(uVar5 + 0x60),*(undefined4 *)(uVar5 + 100));
    }
    piVar4 = *(int **)(uVar5 + 0x68);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*(undefined4 *)(uVar5 + 0x68),*(undefined4 *)(uVar5 + 0x6c));
      }
    }
    uVar13 = *(undefined4 *)(uVar5 + 0xac);
    puVar9 = *(undefined4 **)(uVar5 + 0xb0);
    pcVar6 = (code *)*puVar9;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(uVar13);
    }
    if (puVar9[1] != 0) {
      thunk_FUN_016d3fb4(uVar13);
    }
    piVar4 = *(int **)(uVar5 + 0x80);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(uVar5 + 0x80),*(undefined4 *)(uVar5 + 0x84));
    }
    piVar4 = *(int **)(uVar5 + 0xd4);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143db38(*(undefined4 *)(uVar5 + 0xd4));
      }
    }
    FUN_01421e88(uVar5 + 0xb8);
    goto LAB_01420e44;
  default:
    goto switchD_01420a08_caseD_1;
  case 3:
    if (*(char *)(uVar5 + 0x350) == '\x03') {
      if (*(char *)(uVar5 + 0x330) == '\x03') {
        if (*(char *)(uVar5 + 0x2e4) == '\x03') {
          puVar9 = *(undefined4 **)(uVar5 + 0x2c8);
          uVar13 = *(undefined4 *)(uVar5 + 0x2c4);
          pcVar6 = (code *)*puVar9;
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(uVar13);
          }
          if (puVar9[1] != 0) {
            thunk_FUN_016d3fb4(uVar13);
          }
          *(undefined1 *)(uVar5 + 0x2e5) = 0;
        }
        else if (*(char *)(uVar5 + 0x2e4) == '\0') {
          puVar9 = *(undefined4 **)(uVar5 + 700);
          uVar13 = *(undefined4 *)(uVar5 + 0x2b8);
          pcVar6 = (code *)*puVar9;
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(uVar13);
          }
          if (puVar9[1] != 0) {
            thunk_FUN_016d3fb4(uVar13);
          }
        }
        piVar4 = *(int **)(uVar5 + 0x300);
        if (piVar4 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar7 = *piVar4;
            bVar2 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar2);
          *piVar4 = iVar7 + -1;
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0089ddfc(*(undefined4 *)(uVar5 + 0x300),*(undefined4 *)(uVar5 + 0x304));
          }
        }
        piVar4 = *(int **)(uVar5 + 0x2f8);
        *(undefined1 *)(uVar5 + 0x32c) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(*(undefined4 *)(uVar5 + 0x2f8),*(undefined4 *)(uVar5 + 0x2fc));
        }
        *(undefined1 *)(uVar5 + 0x32d) = 0;
        FUN_0141fdd4(uVar5 + 0x2f0);
        *(undefined2 *)(uVar5 + 0x32e) = 0;
      }
      else if (*(char *)(uVar5 + 0x330) == '\0') {
        puVar9 = *(undefined4 **)(uVar5 + 0x324);
        uVar13 = *(undefined4 *)(uVar5 + 800);
        pcVar6 = (code *)*puVar9;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(uVar13);
        }
        if (puVar9[1] != 0) {
          thunk_FUN_016d3fb4(uVar13);
        }
        FUN_0141fdd4(uVar5 + 0x308);
        piVar4 = *(int **)(uVar5 + 0x310);
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(*(undefined4 *)(uVar5 + 0x310),*(undefined4 *)(uVar5 + 0x314));
        }
        piVar4 = *(int **)(uVar5 + 0x2e8);
        if (piVar4 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar7 = *piVar4;
            bVar2 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar2);
          *piVar4 = iVar7 + -1;
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0089ddfc(*(undefined4 *)(uVar5 + 0x2e8),*(undefined4 *)(uVar5 + 0x2ec));
          }
        }
      }
      *(undefined1 *)(uVar5 + 0x351) = 0;
      FUN_014218e4(uVar5 + 0x344);
      *(undefined1 *)(uVar5 + 0x352) = 0;
    }
    else if (*(char *)(uVar5 + 0x350) == '\0') {
      puVar9 = *(undefined4 **)(uVar5 + 0x33c);
      uVar13 = *(undefined4 *)(uVar5 + 0x338);
      pcVar6 = (code *)*puVar9;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar13);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(uVar13);
      }
      piVar4 = *(int **)(uVar5 + 0x158);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*(undefined4 *)(uVar5 + 0x158),*(undefined4 *)(uVar5 + 0x15c));
      }
      piVar4 = *(int **)(uVar5 + 0x160);
      if (piVar4 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(*(undefined4 *)(uVar5 + 0x160),*(undefined4 *)(uVar5 + 0x164));
        }
      }
    }
    break;
  case 4:
    *(undefined1 *)(uVar5 + 0xf1) = 0;
    FUN_01421a74(uVar5 + 0x104);
    break;
  case 5:
    if (*(char *)(uVar5 + 0x127) == '\0') {
      puVar9 = *(undefined4 **)(uVar5 + 0x114);
      uVar13 = *(undefined4 *)(uVar5 + 0x110);
      pcVar6 = (code *)*puVar9;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar13);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(uVar13);
      }
    }
    break;
  case 6:
    FUN_01440f70(*(undefined4 *)(uVar5 + 0xf8));
    piVar4 = *(int **)(uVar5 + 0xf8);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143f388(*(undefined4 *)(uVar5 + 0xf8));
      }
    }
    *(undefined1 *)(uVar5 + 0xef) = 0;
    FUN_014218e4(uVar5 + 0xd8);
    goto LAB_01420d64;
  case 7:
    FUN_01440f70(*(undefined4 *)(uVar5 + 0xf8));
    piVar4 = *(int **)(uVar5 + 0xf8);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143f388(*(undefined4 *)(uVar5 + 0xf8));
      }
    }
    piVar4 = *(int **)(uVar5 + 0xe8);
    iVar7 = *piVar4;
    if (iVar7 != 0) {
      puVar9 = (undefined4 *)piVar4[1];
      pcVar6 = (code *)*puVar9;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(iVar7);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(iVar7);
      }
    }
    thunk_FUN_016d3fb4(piVar4);
    *(undefined2 *)(uVar5 + 0xee) = 0;
    FUN_014218e4(uVar5 + 0xd8);
LAB_01420d64:
    *(undefined1 *)(uVar5 + 0xf0) = 0;
  }
  piVar4 = *(int **)(uVar5 + 0x60);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(uVar5 + 0x60),*(undefined4 *)(uVar5 + 100));
  }
  piVar4 = *(int **)(uVar5 + 0x68);
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(uVar5 + 0x68),*(undefined4 *)(uVar5 + 0x6c));
    }
  }
  piVar4 = *(int **)(uVar5 + 0x80);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(uVar5 + 0x80),*(undefined4 *)(uVar5 + 0x84));
  }
  piVar4 = *(int **)(uVar5 + 0xd4);
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143db38(*(undefined4 *)(uVar5 + 0xd4));
    }
  }
  FUN_01421e88(uVar5 + 0xb8);
LAB_01420e44:
  FUN_014217b4(uVar5 + 0x70);
switchD_01420a08_caseD_1:
  if (uVar5 == 0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar15 = *(byte *)(uVar5 - 3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(uVar5 - 3) >> 5);
  iVar14 = *(int *)(iVar7 + 8) + 0x10;
  iVar11 = iVar8 * uVar15 + iVar8 + -4;
  iVar8 = iVar14 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar10 = *(uint *)(iVar8 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if (iVar8 - uVar5 < uVar10) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar8 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar3 = *(byte *)(iVar7 + 0x14);
  uVar10 = 1 << uVar15;
  *(undefined1 *)(uVar5 - 3) = 0xff;
  *(undefined2 *)(uVar5 - 2) = 0;
  do {
    uVar12 = *(uint *)(iVar7 + 0x10);
    uVar5 = *(uint *)(iVar7 + 0xc) | uVar12;
    if ((uVar10 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar12 == 0) || (uVar5 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar7,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar9;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar9 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar7 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar5 = *puVar16;
      if (uVar12 != uVar5) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar2);
    *puVar16 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar5) {
      return;
    }
  } while( true );
}

