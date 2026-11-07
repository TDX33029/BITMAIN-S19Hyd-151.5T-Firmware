// FUN_007bda30 @ 007bda30 size=1124 calls_out=7 calls_in=2
// strings: 

void FUN_007bda30(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(char *)(param_1 + 0x51) != '\0') {
    if ((*(char *)(param_1 + 0x51) == '\x03') && (iVar12 = param_1[0x4a], iVar12 != 0)) {
      puVar14 = (undefined4 *)param_1[0x4b];
      pcVar5 = (code *)*puVar14;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(iVar12);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(iVar12);
      }
      iVar12 = param_1[0x4c];
      puVar14 = (undefined4 *)param_1[0x4d];
      pcVar5 = (code *)*puVar14;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(iVar12);
      }
      if (puVar14[1] != 0) {
        if (iVar12 == 0) {
          return;
        }
        iVar4 = FUN_016d3bc8();
        uVar15 = *(byte *)(iVar12 + -3) & 0x1f;
        if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
           (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
          iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar9 = (uint)(*(byte *)(iVar12 + -3) >> 5);
        iVar13 = *(int *)(iVar4 + 8) + 0x10;
        iVar10 = iVar6 * uVar15 + iVar6 + -4;
        iVar6 = iVar13 + iVar10;
        if (4 < uVar9) {
          if (uVar9 != 5) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar5)();
          }
          uVar9 = *(uint *)(iVar6 + -4);
          if (uVar9 < 5) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar5)();
          }
          if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar5 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar5)();
          }
        }
        if ((uint)(iVar6 - iVar12) < uVar9) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar5)();
        }
        if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar5)();
        }
        if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar5)();
        }
        bVar2 = *(byte *)(iVar4 + 0x14);
        uVar9 = 1 << uVar15;
        *(undefined1 *)(iVar12 + -3) = 0xff;
        *(undefined2 *)(iVar12 + -2) = 0;
        do {
          uVar11 = *(uint *)(iVar4 + 0x10);
          uVar7 = *(uint *)(iVar4 + 0xc) | uVar11;
          if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar5)();
          }
          if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar4,uVar15);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar14 = (undefined4 *)FUN_016d2bc8();
            uVar8 = *puVar14;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar14 = uVar8;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar4 + 0x10) = uVar9 + uVar11;
            return;
          }
          puVar16 = (uint *)(iVar4 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar16);
            uVar7 = *puVar16;
            if (uVar11 != uVar7) goto LAB_016d409c;
            bVar17 = (bool)hasExclusiveAccess(puVar16);
          } while (!bVar17);
          *puVar16 = uVar9 + uVar11;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar11 == uVar7) {
            return;
          }
        } while( true );
      }
    }
    return;
  }
  switch(*(undefined1 *)(param_1 + 2)) {
  case 0:
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089e240(*param_1);
    }
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar12 + -1;
    goto LAB_007bdc58;
  default:
    goto switchD_007bdad0_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x49) != '\x03') break;
    if (*(char *)(param_1 + 0x46) == '\0') {
      piVar3 = param_1 + 4;
LAB_007bdcec:
      if (*piVar3 != 0) {
        thunk_FUN_016d3fb4(piVar3[1]);
      }
      break;
    }
    if (*(char *)(param_1 + 0x46) != '\x03') break;
    switch(*(undefined1 *)(param_1 + 0x1c)) {
    case 0:
      piVar3 = param_1 + 0xe;
      goto LAB_007bdcec;
    default:
      goto switchD_007bdbd4_caseD_1;
    case 3:
      if (*(char *)(param_1 + 0x2c) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x2b);
        bVar17 = cVar1 == '\x03';
        if (bVar17) {
          cVar1 = *(char *)(param_1 + 0x22);
        }
        if (bVar17 && cVar1 == '\x04') {
          FUN_0163c790(param_1 + 0x23);
          if (param_1[0x24] != 0) {
            (**(code **)(param_1[0x24] + 0xc))(param_1[0x25]);
          }
        }
      }
      goto LAB_007bdea4;
    case 4:
      if (*(char *)((int)param_1 + 0xa9) == '\x04') {
        if (*(char *)(param_1 + 0x2e) == '\x04') {
          if (*(char *)((int)param_1 + 0xe1) == '\x03') {
            uVar8 = param_1[0x31];
            puVar14 = (undefined4 *)param_1[0x32];
            pcVar5 = (code *)*puVar14;
            if (pcVar5 != (code *)0x0) {
              (*pcVar5)(uVar8);
            }
            if (puVar14[1] != 0) {
              thunk_FUN_016d3fb4(uVar8);
            }
            *(undefined1 *)(param_1 + 0x38) = 0;
          }
        }
        else if (*(char *)(param_1 + 0x2e) == '\x03') {
          FUN_00a07b4c(param_1 + 0x30);
        }
        if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)param_1[0x28])();
        }
      }
      else {
        if (*(char *)((int)param_1 + 0xa9) != '\x03') break;
        if (*(char *)((int)param_1 + 0xd1) == '\x03') {
          uVar8 = param_1[0x2d];
          puVar14 = (undefined4 *)param_1[0x2e];
          pcVar5 = (code *)*puVar14;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(uVar8);
          }
          if (puVar14[1] != 0) {
            thunk_FUN_016d3fb4(uVar8);
          }
          *(undefined1 *)(param_1 + 0x34) = 0;
        }
      }
      *(undefined1 *)(param_1 + 0x2a) = 0;
      break;
    case 5:
      FUN_00a07b4c(param_1 + 0x1e);
      goto LAB_007bde9c;
    case 6:
      cVar1 = *(char *)(param_1 + 0x2e);
      bVar17 = cVar1 != '\x03';
      if (!bVar17) {
        cVar1 = *(char *)(param_1 + 0x2d);
      }
      if (bVar17 || cVar1 != '\x03') goto LAB_007bde9c;
      uVar8 = param_1[0x2b];
      puVar14 = (undefined4 *)param_1[0x2c];
      pcVar5 = (code *)*puVar14;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar8);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(uVar8);
      }
      iVar4 = param_1[0x26];
      iVar12 = 0x9c;
      goto LAB_007bde8c;
    case 7:
      FUN_00a07b4c(param_1 + 0x22);
    }
    iVar4 = param_1[0x1e];
    iVar12 = 0x7c;
LAB_007bde8c:
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)((int)param_1 + iVar12));
    }
LAB_007bde9c:
    FUN_008672e4(param_1[0x1b]);
LAB_007bdea4:
    bVar17 = *(char *)((int)param_1 + 0x71) != '\0';
    iVar12 = 0;
    if (bVar17) {
      iVar12 = param_1[0x2d];
    }
    if (bVar17 && iVar12 != 0) {
      thunk_FUN_016d3fb4(param_1[0x2e]);
    }
    *(undefined1 *)((int)param_1 + 0x71) = 0;
    break;
  case 4:
    if (*(char *)((int)param_1 + 0x6d) == '\x03') {
      cVar1 = *(char *)(param_1 + 10);
      if (cVar1 == '\x04') {
        uVar8 = param_1[0xe];
        puVar14 = (undefined4 *)param_1[0xf];
        pcVar5 = (code *)*puVar14;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar8);
        }
        if (puVar14[1] != 0) {
          thunk_FUN_016d3fb4(uVar8);
        }
        piVar3 = (int *)param_1[0xc];
        DataMemoryBarrier(0xb);
        do {
          iVar12 = *piVar3;
          bVar17 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar17);
        *piVar3 = iVar12 + -1;
        if (iVar12 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015614d8(param_1[0xc],param_1[0xd]);
        }
        thunk_FUN_016d3fb4(param_1[0xb]);
        FUN_008672e4(param_1[9]);
      }
      else {
        bVar17 = cVar1 == '\x03';
        if (bVar17) {
          cVar1 = *(char *)(param_1 + 0x19);
        }
        if (bVar17 && cVar1 == '\x03') {
          cVar1 = *(char *)(param_1 + 0x18);
          bVar17 = cVar1 == '\x03';
          if (bVar17) {
            cVar1 = *(char *)(param_1 + 0xf);
          }
          if (bVar17 && cVar1 == '\x04') {
            FUN_0163c790(param_1 + 0x10);
            if (param_1[0x11] != 0) {
              (**(code **)(param_1[0x11] + 0xc))(param_1[0x12]);
            }
          }
        }
      }
    }
    break;
  case 5:
    FUN_00a07b4c(param_1 + 4);
  }
switchD_007bdbd4_caseD_1:
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar12 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar12 + -1;
  if (iVar12 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089e240(*param_1);
  }
  piVar3 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar12 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar12 + -1;
LAB_007bdc58:
  if (iVar12 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089e240(param_1[1]);
  }
switchD_007bdad0_caseD_1:
  FUN_00b336f8(param_1 + 0x4e);
  return;
}

