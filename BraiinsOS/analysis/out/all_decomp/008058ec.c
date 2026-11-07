// FUN_008058ec @ 008058ec size=1212 calls_out=10 calls_in=2
// strings: 

void FUN_008058ec(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(char *)(param_1 + 0x51) != '\0') {
    if ((*(char *)(param_1 + 0x51) == '\x03') && (iVar13 = param_1[0x4a], iVar13 != 0)) {
      puVar15 = (undefined4 *)param_1[0x4b];
      pcVar5 = (code *)*puVar15;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(iVar13);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(iVar13);
      }
      iVar13 = param_1[0x4c];
      puVar15 = (undefined4 *)param_1[0x4d];
      pcVar5 = (code *)*puVar15;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(iVar13);
      }
      if (puVar15[1] != 0) {
        if (iVar13 == 0) {
          return;
        }
        iVar4 = FUN_016d3bc8();
        uVar16 = *(byte *)(iVar13 + -3) & 0x1f;
        if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
           (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
          iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar10 = (uint)(*(byte *)(iVar13 + -3) >> 5);
        iVar14 = *(int *)(iVar4 + 8) + 0x10;
        iVar11 = iVar6 * uVar16 + iVar6 + -4;
        iVar6 = iVar14 + iVar11;
        if (4 < uVar10) {
          if (uVar10 != 5) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar5)();
          }
          uVar10 = *(uint *)(iVar6 + -4);
          if (uVar10 < 5) {
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
        if ((uint)(iVar6 - iVar13) < uVar10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar5)();
        }
        if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar5)();
        }
        if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar5)();
        }
        bVar2 = *(byte *)(iVar4 + 0x14);
        uVar10 = 1 << uVar16;
        *(undefined1 *)(iVar13 + -3) = 0xff;
        *(undefined2 *)(iVar13 + -2) = 0;
        do {
          uVar12 = *(uint *)(iVar4 + 0x10);
          uVar7 = *(uint *)(iVar4 + 0xc) | uVar12;
          if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar5)();
          }
          if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar4,uVar16);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar15 = (undefined4 *)FUN_016d2bc8();
            uVar8 = *puVar15;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar15 = uVar8;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
            return;
          }
          puVar17 = (uint *)(iVar4 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar17);
            uVar7 = *puVar17;
            if (uVar12 != uVar7) goto LAB_016d409c;
            bVar18 = (bool)hasExclusiveAccess(puVar17);
          } while (!bVar18);
          *puVar17 = uVar10 + uVar12;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar12 == uVar7) {
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
      iVar13 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089e240(*param_1);
    }
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar13 + -1;
    goto LAB_00805aec;
  default:
    goto switchD_0080598c_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x49) != '\x03') break;
    if (*(char *)(param_1 + 0x46) != '\x03') {
      if ((*(char *)(param_1 + 0x46) == '\0') && (param_1[4] != 0)) {
        thunk_FUN_016d3fb4(param_1[5]);
      }
      break;
    }
    switch(*(undefined1 *)(param_1 + 0x1c)) {
    case 0:
      if (param_1[0xe] != 0) {
        thunk_FUN_016d3fb4(param_1[0xf]);
      }
      break;
    case 3:
      if (*(char *)(param_1 + 0x2c) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x2b);
        bVar18 = cVar1 == '\x03';
        if (bVar18) {
          cVar1 = *(char *)(param_1 + 0x22);
        }
        if (bVar18 && cVar1 == '\x04') {
          FUN_0163c790(param_1 + 0x23);
          if (param_1[0x24] != 0) {
            (**(code **)(param_1[0x24] + 0xc))(param_1[0x25]);
          }
        }
      }
      goto LAB_00805db8;
    case 4:
      if (*(char *)((int)param_1 + 0xa9) == '\x04') {
        if (*(char *)(param_1 + 0x2e) == '\x04') {
          if (*(char *)((int)param_1 + 0xe1) == '\x03') {
            uVar8 = param_1[0x31];
            puVar15 = (undefined4 *)param_1[0x32];
            pcVar5 = (code *)*puVar15;
            if (pcVar5 != (code *)0x0) {
              (*pcVar5)(uVar8);
            }
            if (puVar15[1] != 0) {
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
        if (*(char *)((int)param_1 + 0xa9) != '\x03') goto LAB_00805d94;
        if (*(char *)((int)param_1 + 0xd1) == '\x03') {
          uVar8 = param_1[0x2d];
          puVar15 = (undefined4 *)param_1[0x2e];
          pcVar5 = (code *)*puVar15;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(uVar8);
          }
          if (puVar15[1] != 0) {
            thunk_FUN_016d3fb4(uVar8);
          }
          *(undefined1 *)(param_1 + 0x34) = 0;
        }
      }
      *(undefined1 *)(param_1 + 0x2a) = 0;
      goto LAB_00805d94;
    case 5:
      FUN_00a07b4c(param_1 + 0x1e);
      goto LAB_00805db0;
    case 6:
      cVar1 = *(char *)(param_1 + 0x2e);
      bVar18 = cVar1 != '\x03';
      if (!bVar18) {
        cVar1 = *(char *)(param_1 + 0x2d);
      }
      if (bVar18 || cVar1 != '\x03') goto LAB_00805db0;
      uVar8 = param_1[0x2b];
      puVar15 = (undefined4 *)param_1[0x2c];
      pcVar5 = (code *)*puVar15;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar8);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(uVar8);
      }
      iVar4 = param_1[0x26];
      iVar13 = 0x74;
      goto LAB_00805d9c;
    case 7:
      FUN_00a07b4c(param_1 + 0x22);
LAB_00805d94:
      iVar4 = param_1[0x1e];
      iVar13 = 0x54;
LAB_00805d9c:
      if (iVar4 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)((int)param_1 + iVar13 + 0x28));
      }
LAB_00805db0:
      FUN_008672e4(param_1[0x1b]);
LAB_00805db8:
      bVar18 = *(char *)((int)param_1 + 0x71) != '\0';
      iVar13 = 0;
      if (bVar18) {
        iVar13 = param_1[0x2d];
      }
      if (bVar18 && iVar13 != 0) {
        thunk_FUN_016d3fb4(param_1[0x2e]);
      }
      *(undefined1 *)((int)param_1 + 0x71) = 0;
    }
    break;
  case 4:
    if (*(char *)((int)param_1 + 0x6d) == '\x03') {
      cVar1 = *(char *)(param_1 + 10);
      if (cVar1 == '\x04') {
        uVar8 = param_1[0xe];
        puVar15 = (undefined4 *)param_1[0xf];
        pcVar5 = (code *)*puVar15;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar8);
        }
        if (puVar15[1] != 0) {
          thunk_FUN_016d3fb4(uVar8);
        }
        piVar3 = (int *)param_1[0xc];
        DataMemoryBarrier(0xb);
        do {
          iVar13 = *piVar3;
          bVar18 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar18);
        *piVar3 = iVar13 + -1;
        if (iVar13 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015614d8(param_1[0xc],param_1[0xd]);
        }
        thunk_FUN_016d3fb4(param_1[0xb]);
        pcVar9 = (char *)param_1[9];
        if (*pcVar9 == '\0') {
          bVar18 = (bool)hasExclusiveAccess(pcVar9);
          if (!bVar18) goto LAB_00805be8;
          *pcVar9 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_00805be8:
          FUN_01280da8(pcVar9);
        }
        FUN_0128236c(pcVar9);
        FUN_0163af68(pcVar9,1,pcVar9);
      }
      else {
        bVar18 = cVar1 == '\x03';
        if (bVar18) {
          cVar1 = *(char *)(param_1 + 0x19);
        }
        if (bVar18 && cVar1 == '\x03') {
          cVar1 = *(char *)(param_1 + 0x18);
          bVar18 = cVar1 == '\x03';
          if (bVar18) {
            cVar1 = *(char *)(param_1 + 0xf);
          }
          if (bVar18 && cVar1 == '\x04') {
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
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *piVar3;
    bVar18 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar18);
  *piVar3 = iVar13 + -1;
  if (iVar13 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089e240(*param_1);
  }
  piVar3 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *piVar3;
    bVar18 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar18);
  *piVar3 = iVar13 + -1;
LAB_00805aec:
  if (iVar13 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089e240(param_1[1]);
  }
switchD_0080598c_caseD_1:
  FUN_007e5878(param_1 + 0x4e);
  return;
}

