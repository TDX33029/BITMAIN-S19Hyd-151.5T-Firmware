// FUN_00ced318 @ 00ced318 size=3192 calls_out=22 calls_in=4
// strings: 

void FUN_00ced318(int *param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  cVar4 = (char)param_1[0x12];
  if (cVar4 == '\0') {
    if (*param_1 != 0) {
      FUN_016af0b0(param_1);
      piVar3 = (int *)*param_1;
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar3;
        bVar12 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar12);
      *piVar3 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*param_1);
      }
    }
    param_1 = param_1 + 0xc;
    FUN_016af0b0(param_1);
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar3;
      bVar12 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar12);
    *piVar3 = iVar8 + -1;
    goto LAB_00cedb74;
  }
  if (cVar4 != '\x03') {
    if (cVar4 != '\x04') {
      return;
    }
    FUN_00ac5d5c(param_1 + 0x1a);
    bVar1 = *(byte *)(param_1 + 0x14);
    cVar4 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar4 = '\x04';
    }
    if (cVar4 == '\x04') {
      if (bVar1 == 3) goto LAB_00ced4a8;
    }
    else if (cVar4 == '\x05') {
LAB_00ced4a8:
      (*(code *)**(undefined4 **)param_1[0x15])();
    }
    *(undefined1 *)((int)param_1 + 0x46) = 0;
    goto switchD_00ced380_caseD_1;
  }
  if (8 < *(byte *)((int)param_1 + 0x267)) goto switchD_00ced380_caseD_1;
  switch(*(byte *)((int)param_1 + 0x267)) {
  case 0:
    piVar3 = param_1 + 0x88;
    if (*piVar3 != 0) {
      FUN_016af0b0(piVar3);
      piVar2 = (int *)*piVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar2;
        bVar12 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar12);
      *piVar2 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*piVar3);
      }
    }
    piVar2 = param_1 + 0x92;
    FUN_016af0b0(piVar2);
    piVar3 = (int *)*piVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar3;
      bVar12 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar12);
    *piVar3 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar2);
    }
  default:
    goto switchD_00ced380_caseD_1;
  case 3:
    if (param_1[0x9e] != 0) {
      FUN_00c8204c(param_1[0x9e],param_1[0x9f],1);
    }
    goto LAB_00ceda58;
  case 4:
    if ((char)param_1[0x108] == '\0') {
      FUN_00ac89dc(param_1 + 0x9c);
      iVar8 = param_1[0xff];
      if (iVar8 != 0) {
        piVar3 = (int *)(iVar8 + 0x14);
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar12 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar12);
        *piVar3 = iVar5 + -1;
        DataMemoryBarrier(0xb);
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          if (0x7fffffff < *(uint *)(iVar8 + 0x10)) {
            puVar6 = (uint *)(iVar8 + 0x10);
            DataMemoryBarrier(0xb);
            do {
              bVar12 = (bool)hasExclusiveAccess(puVar6);
            } while (!bVar12);
            *puVar6 = *puVar6 & 0x7fffffff;
            DataMemoryBarrier(0xb);
          }
          puVar6 = (uint *)(iVar8 + 0x20);
          DataMemoryBarrier(0xb);
          do {
            uVar9 = *puVar6;
            bVar12 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar12);
          *puVar6 = uVar9 | 2;
          DataMemoryBarrier(0xb);
          if (uVar9 == 0) {
            iVar5 = *(int *)(iVar8 + 0x18);
            *(undefined4 *)(iVar8 + 0x18) = 0;
            DataMemoryBarrier(0xb);
            do {
              bVar12 = (bool)hasExclusiveAccess(puVar6);
            } while (!bVar12);
            *puVar6 = *puVar6 & 0xfffffffd;
            if (iVar5 != 0) {
              (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar8 + 0x1c));
            }
          }
        }
        piVar3 = (int *)param_1[0xff];
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar3;
          bVar12 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar12);
        *piVar3 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f23b4(param_1[0xff]);
        }
      }
      piVar3 = (int *)param_1[0x102];
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar3;
        bVar12 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar12);
      *piVar3 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1a50(param_1[0x102]);
      }
      piVar3 = (int *)param_1[0x103];
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar3;
        bVar12 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar12);
      *piVar3 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f2e10(param_1[0x103]);
      }
      piVar3 = param_1 + 0x100;
      if (*piVar3 != 0) {
        FUN_016af0b0(piVar3);
        piVar2 = (int *)*piVar3;
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar2;
          bVar12 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar12);
        *piVar2 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f4138(*piVar3);
        }
      }
      FUN_00ceebc8(param_1 + 0xf4);
      iVar8 = param_1[0x106];
      if (iVar8 != 0) {
        piVar3 = (int *)(iVar8 + 0x14);
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar12 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar12);
        *piVar3 = iVar5 + -1;
        DataMemoryBarrier(0xb);
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          if (0x7fffffff < *(uint *)(iVar8 + 0x10)) {
            puVar6 = (uint *)(iVar8 + 0x10);
            DataMemoryBarrier(0xb);
            do {
              bVar12 = (bool)hasExclusiveAccess(puVar6);
            } while (!bVar12);
            *puVar6 = *puVar6 & 0x7fffffff;
            DataMemoryBarrier(0xb);
          }
          puVar6 = (uint *)(iVar8 + 0x20);
          DataMemoryBarrier(0xb);
          do {
            uVar9 = *puVar6;
            bVar12 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar12);
          *puVar6 = uVar9 | 2;
          DataMemoryBarrier(0xb);
          if (uVar9 == 0) {
            iVar5 = *(int *)(iVar8 + 0x18);
            *(undefined4 *)(iVar8 + 0x18) = 0;
            DataMemoryBarrier(0xb);
            do {
              bVar12 = (bool)hasExclusiveAccess(puVar6);
            } while (!bVar12);
            *puVar6 = *puVar6 & 0xfffffffd;
            if (iVar5 != 0) {
              (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar8 + 0x1c));
            }
          }
        }
        piVar3 = (int *)param_1[0x106];
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar3;
          bVar12 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar12);
        *piVar3 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078459c(param_1[0x106]);
        }
      }
      piVar3 = (int *)param_1[0x104];
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar3;
        bVar12 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar12);
      *piVar3 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784894(param_1[0x104]);
      }
    }
    goto LAB_00ceda48;
  case 5:
    switch(*(undefined1 *)((int)param_1 + 0x28a)) {
    case 0:
      piVar2 = param_1 + 0x9c;
      FUN_016af0b0(piVar2);
      piVar3 = (int *)*piVar2;
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar3;
        bVar12 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar12);
      *piVar3 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*piVar2);
      }
    default:
switchD_00ced844_caseD_1:
      cVar4 = (char)param_1[0x99];
      goto joined_r0x00cedff0;
    case 3:
      puVar11 = (undefined4 *)param_1[0xa6];
      iVar8 = param_1[0xa5];
      if ((code *)*puVar11 != (code *)0x0) {
        (*(code *)*puVar11)(iVar8);
      }
      goto LAB_00cedc5c;
    case 4:
      if (0x11 < *(byte *)((int)param_1 + 0x2af)) goto switchD_00cedba8_caseD_1;
      break;
    case 5:
      puVar11 = (undefined4 *)param_1[0xa4];
      iVar8 = param_1[0xa3];
      if ((code *)*puVar11 != (code *)0x0) {
        (*(code *)*puVar11)(iVar8);
      }
LAB_00cedc5c:
      if (puVar11[1] != 0) {
        thunk_FUN_016d3fb4(iVar8);
      }
      goto switchD_00cedba8_caseD_1;
    case 6:
      if ((char)param_1[0xb6] == '\x03') {
        if (*(char *)((int)param_1 + 0x299) == '\x04') {
          puVar11 = (undefined4 *)param_1[0xa8];
          iVar8 = param_1[0xa7];
          pcVar7 = (code *)*puVar11;
          if (pcVar7 != (code *)0x0) {
            (*pcVar7)(iVar8);
          }
          if (puVar11[1] != 0) {
            thunk_FUN_016d3fb4(iVar8);
          }
          FUN_008672e4(param_1[0xa4]);
        }
        else {
          if (*(char *)((int)param_1 + 0x299) != '\x03') goto switchD_00cedba8_caseD_1;
          if ((char)param_1[0xb5] == '\x03') {
            cVar4 = (char)param_1[0xb4];
            bVar12 = cVar4 == '\x03';
            if (bVar12) {
              cVar4 = (char)param_1[0xab];
            }
            if (bVar12 && cVar4 == '\x04') {
              FUN_0163c790(param_1 + 0xac);
              if (param_1[0xad] != 0) {
                (**(code **)(param_1[0xad] + 0xc))(param_1[0xae]);
              }
            }
          }
        }
        *(undefined1 *)(param_1 + 0xa6) = 0;
      }
      goto switchD_00cedba8_caseD_1;
    }
    break;
  case 6:
    cVar4 = (char)param_1[0xa4];
    if (cVar4 == '\x05') {
      FUN_00cefb4c(param_1 + 0xa5);
    }
    else if (cVar4 == '\x04') {
      FUN_00a07b4c(param_1 + 0xa6);
    }
    else if (cVar4 == '\x03') {
      puVar11 = (undefined4 *)param_1[0xa6];
      iVar8 = param_1[0xa5];
      pcVar7 = (code *)*puVar11;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(iVar8);
      }
      if (puVar11[1] != 0) {
        thunk_FUN_016d3fb4(iVar8);
      }
    }
    bVar1 = *(byte *)(param_1 + 0x9c);
    cVar4 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar4 = '\x04';
    }
    if (cVar4 == '\x04') {
      if (bVar1 == 3) goto LAB_00ceda1c;
    }
    else if (cVar4 == '\x05') {
LAB_00ceda1c:
      (*(code *)**(undefined4 **)param_1[0x9d])();
    }
    *(undefined1 *)((int)param_1 + 0x262) = 0;
    goto switchD_00ced844_caseD_1;
  case 7:
    cVar4 = (char)param_1[0x9e];
    if (cVar4 == '\0') {
      piVar3 = param_1 + 0x9c;
      piVar2 = (int *)*piVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar2;
        bVar12 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar12);
      *piVar2 = iVar8 + -1;
    }
    else {
      if (cVar4 == '\x03') {
        FUN_00ceee6c(param_1 + 0x9f);
      }
      else {
        if (cVar4 != '\x04') goto LAB_00ced994;
        FUN_00ceee6c(param_1 + 0x9f);
      }
      piVar3 = param_1 + 0x9d;
      piVar2 = (int *)*piVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar2;
        bVar12 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar12);
      *piVar2 = iVar8 + -1;
    }
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f3984(*piVar3);
    }
    goto LAB_00ced994;
  case 8:
    if ((char)param_1[200] == '\0') {
      piVar2 = param_1 + 0x9c;
      FUN_016af0b0(piVar2);
      piVar3 = (int *)*piVar2;
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar3;
        bVar12 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar12);
      *piVar3 = iVar8 + -1;
    }
    else {
      if ((char)param_1[200] != '\x03') goto LAB_00ced994;
      FUN_00ac5d5c(param_1 + 0xa4);
      piVar2 = param_1 + 0x9e;
      FUN_016af0b0(piVar2);
      piVar3 = (int *)*piVar2;
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar3;
        bVar12 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar12);
      *piVar3 = iVar8 + -1;
    }
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar2);
    }
LAB_00ced994:
    piVar3 = (int *)param_1[0x96];
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar3;
      bVar12 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar12);
    *piVar3 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f3984(param_1[0x96]);
    }
    *(undefined1 *)((int)param_1 + 0x266) = 0;
    cVar4 = (char)param_1[0x99];
    goto joined_r0x00cedff0;
  }
  piVar3 = param_1 + 0xa4;
  switch(*(byte *)((int)param_1 + 0x2af)) {
  case 0:
    piVar3 = param_1 + 0xa6;
    FUN_016af0b0(piVar3);
    piVar2 = (int *)*piVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar2;
      bVar12 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar12);
    *piVar2 = iVar8 + -1;
    goto LAB_00cedf84;
  default:
    goto switchD_00cedba8_caseD_1;
  case 3:
    puVar11 = (undefined4 *)param_1[0xae];
    iVar8 = param_1[0xad];
    if ((code *)*puVar11 != (code *)0x0) {
      (*(code *)*puVar11)(iVar8);
    }
    goto LAB_00cedf4c;
  case 4:
    FUN_00ac5d5c(param_1 + 0xae);
    break;
  case 5:
    cVar4 = *(char *)((int)param_1 + 0x2d9);
    bVar12 = cVar4 == '\x03';
    if (bVar12) {
      cVar4 = (char)param_1[0xb3];
    }
    if (bVar12 && cVar4 == '\x03') {
      piVar10 = param_1 + 0xb1;
      FUN_016af0b0(piVar10);
      piVar2 = (int *)*piVar10;
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar2;
        bVar12 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar12);
      *piVar2 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*piVar10);
      }
    }
    break;
  case 6:
    if ((char)param_1[0xd5] == '\x03') {
      FUN_00ac5d5c(param_1 + 0xae);
    }
    break;
  case 7:
    puVar11 = (undefined4 *)param_1[0xae];
    iVar8 = param_1[0xad];
    if ((code *)*puVar11 != (code *)0x0) {
      (*(code *)*puVar11)(iVar8);
    }
    goto LAB_00cedf4c;
  case 8:
    if (param_1[0xad] != 0) {
      FUN_00c8204c(param_1[0xad],param_1[0xae],1);
    }
    goto LAB_00cede70;
  case 9:
    puVar11 = (undefined4 *)param_1[0xae];
    iVar8 = param_1[0xad];
    pcVar7 = (code *)*puVar11;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(iVar8);
    }
    if (puVar11[1] != 0) {
      thunk_FUN_016d3fb4(iVar8);
    }
    FUN_00c822ec(param_1[0xa9]);
LAB_00cede70:
    *(undefined1 *)((int)param_1 + 0x2ae) = 0;
    break;
  case 10:
    if ((char)param_1[0x120] == '\x03') {
      FUN_00ac5d5c(param_1 + 0xfa);
      FUN_00ac8e24(param_1 + 0xbe);
    }
    break;
  case 0xb:
    puVar11 = (undefined4 *)param_1[0xae];
    iVar8 = param_1[0xad];
    if ((code *)*puVar11 != (code *)0x0) {
      (*(code *)*puVar11)(iVar8);
    }
LAB_00cedf4c:
    if (puVar11[1] != 0) {
LAB_00cedf5c:
      thunk_FUN_016d3fb4(iVar8);
    }
    break;
  case 0xc:
    FUN_00ac5d5c(param_1 + 0xae);
    break;
  case 0xd:
    puVar11 = (undefined4 *)param_1[0xc3];
    iVar8 = param_1[0xc2];
    pcVar7 = (code *)*puVar11;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(iVar8);
    }
    if (puVar11[1] != 0) {
      thunk_FUN_016d3fb4(iVar8);
    }
    FUN_00a07b4c(param_1 + 0xae);
    break;
  case 0xe:
    cVar4 = (char)param_1[0xc0];
    bVar12 = cVar4 == '\x03';
    if (bVar12) {
      cVar4 = (char)param_1[0xbf];
    }
    if (bVar12 && cVar4 == '\x03') {
      cVar4 = (char)param_1[0xbe];
      bVar12 = cVar4 == '\x03';
      if (bVar12) {
        cVar4 = (char)param_1[0xb5];
      }
      if (bVar12 && cVar4 == '\x04') {
        FUN_0163c790(param_1 + 0xb6);
        if (param_1[0xb7] != 0) {
          (**(code **)(param_1[0xb7] + 0xc))(param_1[0xb8]);
        }
      }
    }
    break;
  case 0xf:
    if (param_1[0xad] != 0) {
      FUN_00c8204c(param_1[0xad],param_1[0xae],1);
    }
    break;
  case 0x10:
    FUN_00ac9060(param_1 + 0xb0);
    if (param_1[0xad] == 0) break;
    iVar8 = param_1[0xae];
    goto LAB_00cedf5c;
  case 0x11:
    if ((char)param_1[0xb3] == '\x03') {
      puVar11 = (undefined4 *)param_1[0xb2];
      iVar8 = param_1[0xb1];
      if ((code *)*puVar11 != (code *)0x0) {
        (*(code *)*puVar11)(iVar8);
      }
      goto LAB_00cedf4c;
    }
  }
  FUN_016af0b0(piVar3);
  piVar2 = (int *)*piVar3;
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar2;
    bVar12 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar12);
  *piVar2 = iVar8 + -1;
LAB_00cedf84:
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*piVar3);
  }
switchD_00cedba8_caseD_1:
  if (*(char *)((int)param_1 + 0x289) != '\0') {
    piVar2 = param_1 + 0xa3;
    FUN_016af0b0(piVar2);
    piVar3 = (int *)*piVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar3;
      bVar12 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar12);
    *piVar3 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar2);
    }
  }
  *(undefined1 *)((int)param_1 + 0x289) = 0;
  cVar4 = (char)param_1[0x99];
joined_r0x00cedff0:
  if (cVar4 != '\0') {
    FUN_00cef01c(param_1 + 0x14);
  }
LAB_00ceda48:
  *(undefined1 *)(param_1 + 0x99) = 0;
  FUN_00c822ec(param_1[0x95]);
LAB_00ceda58:
  if (*(char *)((int)param_1 + 0x265) != '\0') {
    piVar2 = param_1 + 0x8a;
    FUN_016af0b0(piVar2);
    piVar3 = (int *)*piVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar3;
      bVar12 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar12);
    *piVar3 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar2);
    }
  }
  *(undefined1 *)((int)param_1 + 0x265) = 0;
  if ((*(char *)((int)param_1 + 0x263) != '\0') && (piVar3 = param_1 + 0x9c, *piVar3 != 0)) {
    FUN_016af0b0(piVar3);
    piVar2 = (int *)*piVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar2;
      bVar12 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar12);
    *piVar2 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar3);
    }
  }
  *(undefined1 *)((int)param_1 + 0x263) = 0;
switchD_00ced380_caseD_1:
  piVar2 = param_1 + 4;
  *(undefined1 *)((int)param_1 + 0x47) = 0;
  FUN_016af0b0(piVar2);
  piVar3 = (int *)*piVar2;
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar3;
    bVar12 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar12);
  *piVar3 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*piVar2);
  }
  param_1 = param_1 + 2;
  if (*param_1 != 0) {
    FUN_016af0b0(param_1);
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar3;
      bVar12 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar12);
    *piVar3 = iVar8 + -1;
LAB_00cedb74:
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*param_1);
      return;
    }
  }
  return;
}

