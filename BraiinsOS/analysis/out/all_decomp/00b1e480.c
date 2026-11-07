// FUN_00b1e480 @ 00b1e480 size=2420 calls_out=23 calls_in=2
// strings: 

void FUN_00b1e480(int *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  if (*param_1 != 0 || param_1[1] != 0) {
    return;
  }
  switch((char)param_1[0x26]) {
  case '\0':
    if ((-0x7ffffffe < param_1[10]) && (param_1[10] != 0)) {
      thunk_FUN_016d3fb4(param_1[0xb]);
    }
    param_1 = param_1 + 0xe;
    FUN_016af0b0(param_1);
    piVar4 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar9 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar9);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*param_1);
      return;
    }
    return;
  default:
    goto switchD_00b1e4a8_caseD_1;
  case '\x03':
    if ((char)param_1[0x3a] == '\x03') {
      if ((char)param_1[0x32] == '\x04') {
        if ((char)param_1[0x39] == '\x03') {
          iVar6 = param_1[0x37];
          puVar8 = (undefined4 *)param_1[0x38];
          pcVar5 = (code *)*puVar8;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(iVar6);
          }
          if (puVar8[1] != 0) {
            thunk_FUN_016d3fb4(iVar6);
          }
        }
        FUN_00c822ec(param_1[0x31]);
      }
      else if (((char)param_1[0x32] == '\x03') && (param_1[0x33] != 0)) {
        FUN_00c8204c(param_1[0x33],param_1[0x34],1);
      }
    }
    break;
  case '\x04':
    if ((char)param_1[0x35] == '\x03') {
      FUN_00b216bc(param_1 + 0x29);
    }
    break;
  case '\x05':
    switch((char)param_1[0x50]) {
    case '\0':
      if ((-0x7ffffffe < param_1[0x32]) && (param_1[0x32] != 0)) {
        thunk_FUN_016d3fb4(param_1[0x33]);
      }
      piVar7 = param_1 + 0x36;
      FUN_016af0b0(piVar7);
      piVar4 = (int *)*piVar7;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar9 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar9);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*piVar7);
      }
    default:
      goto switchD_00b1e58c_caseD_1;
    case '\x03':
      goto switchD_00b1e58c_caseD_3;
    case '\x04':
      cVar2 = (char)param_1[0x59];
      if (cVar2 == '\0') {
        iVar3 = param_1[0x52];
        iVar6 = 0x148;
LAB_00b1ea10:
        if (iVar3 != -0x80000000 && iVar3 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)((int)param_1 + iVar6 + 4));
        }
      }
      else {
        if (cVar2 == '\x03') {
          if ((char)param_1[0x61] == '\x04') {
            if ((char)param_1[0x67] == '\x03') {
              puVar8 = (undefined4 *)param_1[0x66];
              iVar6 = param_1[0x65];
              pcVar5 = (code *)*puVar8;
              if (pcVar5 != (code *)0x0) {
                (*pcVar5)(iVar6);
              }
              if (puVar8[1] != 0) {
                thunk_FUN_016d3fb4(iVar6);
              }
            }
            FUN_00c822ec(param_1[0x60]);
          }
          else if (((char)param_1[0x61] == '\x03') && (param_1[0x62] != 0)) {
            FUN_00c8204c(param_1[0x62],param_1[99],1);
          }
          if (param_1[0x6c] != 0) {
            thunk_FUN_016d3fb4(param_1[0x6a]);
          }
LAB_00b1ea08:
          iVar3 = param_1[0x56];
          iVar6 = 0x158;
          goto LAB_00b1ea10;
        }
        if (cVar2 == '\x04') {
          FUN_00a07b4c(param_1 + 0x5a);
          goto LAB_00b1ea08;
        }
      }
      goto LAB_00b1ecbc;
    case '\x05':
      switch((char)param_1[0x7a]) {
      case '\0':
        piVar7 = param_1 + 0x5c;
        FUN_016af0b0(piVar7);
        piVar4 = (int *)*piVar7;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar4;
          bVar9 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar9);
        *piVar4 = iVar6 + -1;
        goto LAB_00b1ec64;
      default:
        goto switchD_00b1e73c_caseD_1;
      case '\x03':
        if ((char)param_1[0x89] == '\x03') {
          FUN_00b216bc(param_1 + 0x7d);
        }
        goto LAB_00b1ec34;
      case '\x04':
        cVar2 = (char)param_1[0x94];
        bVar9 = cVar2 == '\x03';
        if (bVar9) {
          cVar2 = (char)param_1[0x91];
        }
        if (bVar9 && cVar2 == '\x03') {
          if ((char)param_1[0x88] == '\x04') {
            if ((char)param_1[0x8d] == '\x03') {
              puVar8 = (undefined4 *)param_1[0x8c];
              iVar6 = param_1[0x8b];
              pcVar5 = (code *)*puVar8;
              if (pcVar5 != (code *)0x0) {
                (*pcVar5)(iVar6);
              }
              if (puVar8[1] != 0) {
                thunk_FUN_016d3fb4(iVar6);
              }
            }
            FUN_00c822ec(param_1[0x87]);
          }
          else if (((char)param_1[0x88] == '\x03') && (param_1[0x89] != 0)) {
            FUN_00c8204c(param_1[0x89],param_1[0x8a],1);
          }
          piVar4 = (int *)param_1[0x90];
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar4;
            bVar9 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar9);
          *piVar4 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f31e8(param_1[0x90]);
          }
        }
        goto LAB_00b1ec34;
      case '\x05':
        if ((char)param_1[0x83] == '\x04') {
          if (*(char *)((int)param_1 + 0x261) == '\x03') {
            FUN_00b214e8(param_1 + 0x86);
            *(undefined1 *)(param_1 + 0x98) = 0;
          }
          else if ((*(char *)((int)param_1 + 0x261) == '\0') && ((param_1[0x95] & 0x7fffffffU) != 0)
                  ) {
            thunk_FUN_016d3fb4(param_1[0x96]);
          }
        }
        FUN_00ce1dd8(param_1[0x7d],param_1[0x7e]);
        if (param_1[0x7c] != 0) {
          thunk_FUN_016d3fb4(param_1[0x7d]);
        }
        break;
      case '\x06':
        FUN_00a07b4c(param_1 + 0x7e);
        piVar7 = param_1 + 0x92;
        FUN_016af0b0(piVar7);
        piVar4 = (int *)*piVar7;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar4;
          bVar9 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar9);
        *piVar4 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f4138(*piVar7);
        }
        break;
      case '\a':
        if ((char)param_1[0xa0] == '\x03') {
          if (*(char *)((int)param_1 + 0x219) == '\x04') {
            if (*(char *)((int)param_1 + 0x269) == '\x03') {
              puVar8 = (undefined4 *)param_1[0x97];
              iVar6 = param_1[0x96];
              pcVar5 = (code *)*puVar8;
              if (pcVar5 != (code *)0x0) {
                (*pcVar5)(iVar6);
              }
              if (puVar8[1] != 0) {
                thunk_FUN_016d3fb4(iVar6);
              }
              if (param_1[0x8c] != 0) {
                thunk_FUN_016d3fb4(param_1[0x8d]);
              }
            }
            FUN_00c822ec(param_1[0x84]);
          }
          else if ((*(char *)((int)param_1 + 0x219) == '\x03') && (param_1[0x87] != 0)) {
            FUN_00c8204c(param_1[0x87],param_1[0x88],1);
          }
          piVar4 = (int *)param_1[0x9e];
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar4;
            bVar9 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar9);
          *piVar4 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f31e8(param_1[0x9e]);
          }
        }
      }
      FUN_00c49364(param_1 + 0x77);
      FUN_00c49070(param_1 + 0x74);
      *(undefined1 *)((int)param_1 + 0x1ea) = 0;
LAB_00b1ec34:
      FUN_00c47f30(param_1 + 0x71);
      piVar7 = param_1 + 0x60;
      FUN_016af0b0(piVar7);
      piVar4 = (int *)*piVar7;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar9 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar9);
      *piVar4 = iVar6 + -1;
LAB_00b1ec64:
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*piVar7);
      }
switchD_00b1e73c_caseD_1:
      piVar7 = param_1 + 0x48;
      *(undefined1 *)((int)param_1 + 0x141) = 0;
      FUN_016af0b0(piVar7);
      piVar4 = (int *)*piVar7;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar9 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar9);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*piVar7);
      }
LAB_00b1ecbc:
      *(undefined1 *)(param_1 + 0x51) = 0;
      goto switchD_00b1e6b0_default;
    case '\x06':
      cVar2 = *(char *)((int)param_1 + 0x197);
      if (cVar2 == '\x04') {
        FUN_00ce1dd8(param_1[0x71],param_1[0x72]);
        if (param_1[0x70] != 0) {
          thunk_FUN_016d3fb4(param_1[0x71]);
        }
        if (param_1[0x6d] != 0) {
          thunk_FUN_016d3fb4(param_1[0x6e]);
        }
        *(undefined1 *)(param_1 + 0x65) = 0;
        FUN_00c48a0c(param_1 + 0x69);
        *(undefined1 *)((int)param_1 + 0x195) = 0;
        if (param_1[0x66] != 0) {
          thunk_FUN_016d3fb4(param_1[0x67]);
        }
        *(undefined1 *)((int)param_1 + 0x196) = 0;
LAB_00b1e878:
        iVar6 = 0x1c;
        FUN_00c487f4(param_1 + 0x60);
      }
      else {
        if (cVar2 == '\x03') {
          if (((char)param_1[0x73] == '\x03') && (param_1[0x71] != 0)) {
            FUN_00c81a4c(param_1[0x71],param_1[0x72],1);
          }
          goto LAB_00b1e878;
        }
        iVar6 = 4;
        if (cVar2 != '\0') goto switchD_00b1e73c_caseD_1;
      }
      FUN_00c49070((int)param_1 + iVar6 + 0x158);
      goto switchD_00b1e73c_caseD_1;
    }
  case '\x06':
    FUN_00b21fcc(param_1 + 0x70);
    iVar6 = 0x93;
    FUN_00ad1570(param_1 + 0x4c);
    goto LAB_00b1ed3c;
  }
  cVar2 = *(char *)((int)param_1 + 0x99);
  goto joined_r0x00b1ed58;
switchD_00b1e58c_caseD_3:
  switch(*(undefined1 *)((int)param_1 + 0x1fe)) {
  case 3:
    if ((char)param_1[0x89] == '\x04') {
      if (*(char *)((int)param_1 + 0x279) == '\x03') {
        FUN_00b214e8(param_1 + 0x8c);
        *(undefined1 *)(param_1 + 0x9e) = 0;
      }
      else if ((*(char *)((int)param_1 + 0x279) == '\0') && ((param_1[0x9b] & 0x7fffffffU) != 0)) {
        thunk_FUN_016d3fb4(param_1[0x9c]);
      }
    }
    FUN_00ce1dd8(param_1[0x81],param_1[0x82]);
    if (param_1[0x80] != 0) {
      thunk_FUN_016d3fb4(param_1[0x81]);
    }
    FUN_00c47f30(param_1 + 0x83);
    goto switchD_00b1e6b0_default;
  case 4:
    goto switchD_00b1e6b0_caseD_4;
  case 5:
    FUN_00ad235c(param_1 + 0x88);
    FUN_00c47f30(param_1 + 0x80);
    goto switchD_00b1e6b0_caseD_4;
  case 6:
    goto switchD_00b1e6b0_caseD_6;
  case 7:
    FUN_00b217e8(param_1 + 0x80);
    break;
  case 8:
    FUN_00b21ad8(param_1 + 0x80);
    break;
  case 9:
    FUN_00b21ad8(param_1 + 0x80);
    break;
  case 10:
    FUN_00b217e8(param_1 + 0x80);
    break;
  case 0xb:
    FUN_00a07b4c(param_1 + 0x80);
    break;
  case 0xc:
    FUN_00a07b4c(param_1 + 0x80);
    break;
  case 0xd:
    FUN_00b21ad8(param_1 + 0x80);
    goto switchD_00b1e6b0_caseD_6;
  case 0xe:
    FUN_00b217e8(param_1 + 0x86);
    FUN_00ce1dd8(param_1[0x81],param_1[0x82]);
    if (param_1[0x80] != 0) {
      thunk_FUN_016d3fb4(param_1[0x81]);
    }
    FUN_00c47f30(param_1 + 0x83);
    goto switchD_00b1e6b0_caseD_6;
  case 0xf:
    FUN_00b21ad8(param_1 + 0x80);
    goto switchD_00b1e6b0_caseD_6;
  case 0x10:
    cVar2 = *(char *)((int)param_1 + 0x21e);
    bVar9 = cVar2 == '\x03';
    if (bVar9) {
      cVar2 = *(char *)((int)param_1 + 0x20e);
    }
    if ((bVar9 && cVar2 == '\x03') && (param_1[0x80] != 0)) {
      FUN_00c8204c(param_1[0x80],param_1[0x81],1);
    }
    goto switchD_00b1e6b0_caseD_6;
  default:
    goto switchD_00b1e6b0_default;
  }
  FUN_00ce1dd8(param_1[0x7b],param_1[0x7c]);
  if (param_1[0x7a] != 0) {
    thunk_FUN_016d3fb4(param_1[0x7b]);
  }
  FUN_00c4849c(param_1 + 0x77);
  FUN_00c48f0c(param_1 + 0x74);
switchD_00b1e6b0_caseD_6:
  FUN_00c487f4(param_1 + 0x71);
  FUN_00c47f30(param_1 + 0x6e);
  FUN_00c47f30(param_1 + 0x6b);
switchD_00b1e6b0_caseD_4:
  if (param_1[0x68] != 0) {
    thunk_FUN_016d3fb4(param_1[0x69]);
  }
switchD_00b1e6b0_default:
  if (*(char *)((int)param_1 + 0x142) != '\0') {
    piVar7 = param_1 + 0x46;
    FUN_016af0b0(piVar7);
    piVar4 = (int *)*piVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar9 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar9);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar7);
    }
  }
  iVar3 = param_1[0x42];
  iVar6 = 0x13b;
  *(undefined1 *)((int)param_1 + 0x142) = 0;
  if (-1 < iVar3) {
    bVar1 = 0;
    if (iVar3 != 0) {
      bVar1 = *(byte *)((int)param_1 + 0x143);
    }
    if (iVar3 != 0 && (bVar1 & 1) != 0) {
      thunk_FUN_016d3fb4(param_1[0x43]);
    }
  }
LAB_00b1ed3c:
  *(undefined1 *)((int)param_1 + iVar6 + 8) = 0;
switchD_00b1e58c_caseD_1:
  *(undefined1 *)(param_1 + 0x27) = 0;
  cVar2 = *(char *)((int)param_1 + 0x99);
joined_r0x00b1ed58:
  if (cVar2 != '\0') {
    piVar7 = param_1 + 0x1c;
    FUN_016af0b0(piVar7);
    piVar4 = (int *)*piVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar9 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar9);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar7);
    }
  }
  *(undefined1 *)((int)param_1 + 0x99) = 0;
  if (((*(char *)((int)param_1 + 0x9a) != '\0') && (-0x7ffffffe < param_1[0x18])) &&
     (param_1[0x18] != 0)) {
    thunk_FUN_016d3fb4(param_1[0x19]);
  }
  *(undefined1 *)((int)param_1 + 0x9a) = 0;
switchD_00b1e4a8_caseD_1:
  return;
}

