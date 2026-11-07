// FUN_00e4d1e0 @ 00e4d1e0 size=1356 calls_out=10 calls_in=1
// strings: 

void FUN_00e4d1e0(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  
  if (*(char *)((int)param_1 + 0x20e) != '\x03') {
    if (*(char *)((int)param_1 + 0x20e) == '\0') {
      FUN_005c4e2c(param_1 + 0x80);
      FUN_005c471c(param_1 + 0x78);
      iVar2 = param_1[0x7e];
      piVar5 = (int *)(iVar2 + 0x104);
      do {
        iVar6 = *piVar5;
        bVar7 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar7);
      *piVar5 = iVar6 + -1;
      if (iVar6 == 1) {
        FUN_0163b708(iVar2 + 0x88);
      }
      piVar5 = (int *)param_1[0x7e];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar5;
        bVar7 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar7);
      *piVar5 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aac2e8(param_1[0x7e]);
        return;
      }
    }
    return;
  }
  if (*param_1 != 0) goto switchD_00e4d294_caseD_1;
  iVar2 = 0x30;
  switch((char)param_1[0x14]) {
  case '\0':
    goto switchD_00e4d294_caseD_0;
  default:
    goto switchD_00e4d294_caseD_1;
  case '\x03':
    if ((char)param_1[0x3e] == '\x03') {
      switch((char)param_1[0x25]) {
      case '\x03':
        if (*(char *)((int)param_1 + 0xed) == '\x03') {
          cVar1 = (char)param_1[0x35];
          bVar7 = cVar1 == '\x03';
          if (bVar7) {
            cVar1 = *(char *)((int)param_1 + 0xd1);
          }
          if (bVar7 && cVar1 == '\x03') {
            if ((char)param_1[0x31] == '\x03') {
              piVar5 = (int *)param_1[0x30];
              if (*piVar5 == 0xcc) {
                DataMemoryBarrier(0xb);
                bVar7 = (bool)hasExclusiveAccess(piVar5);
                if (bVar7) {
                  *piVar5 = 0x84;
                  goto LAB_00e4d634;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              (**(code **)(piVar5[2] + 0x10))();
            }
            else if (((char)param_1[0x31] == '\0') && (param_1[0x29] != 0)) {
              thunk_FUN_016d3fb4(param_1[0x2a]);
            }
LAB_00e4d634:
            *(undefined1 *)(param_1 + 0x34) = 0;
          }
          *(undefined1 *)(param_1 + 0x3b) = 0;
        }
        break;
      case '\x04':
        piVar5 = (int *)param_1[0x39];
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar5;
          bVar7 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar7);
        *piVar5 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_016592f4(param_1[0x39]);
        }
        iVar2 = param_1[0x30];
        if (iVar2 != -0x80000000) {
          if (iVar2 == -0x7fffffff) {
            piVar5 = (int *)param_1[0x31];
            if (*piVar5 == 0xcc) {
              DataMemoryBarrier(0xb);
              bVar7 = (bool)hasExclusiveAccess(piVar5);
              if (bVar7) {
                *piVar5 = 0x84;
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            (**(code **)(piVar5[2] + 0x10))();
          }
          else if (iVar2 != 0) {
            thunk_FUN_016d3fb4(param_1[0x31]);
          }
        }
        break;
      case '\x05':
        cVar1 = (char)param_1[0x32];
        bVar7 = cVar1 == '\x03';
        if (bVar7) {
          cVar1 = (char)param_1[0x31];
        }
        if (bVar7 && cVar1 == '\x03') {
          if ((char)param_1[0x30] == '\x03') {
            piVar5 = (int *)param_1[0x2f];
            if (*piVar5 == 0xcc) {
              DataMemoryBarrier(0xb);
              bVar7 = (bool)hasExclusiveAccess(piVar5);
              if (bVar7) {
                *piVar5 = 0x84;
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            (**(code **)(piVar5[2] + 0x10))();
          }
          else if (((char)param_1[0x30] == '\0') && (param_1[0x2c] != 0)) {
            thunk_FUN_016d3fb4(param_1[0x2d]);
          }
        }
        break;
      case '\x06':
        if ((char)param_1[0x34] == '\x03') {
          if ((char)param_1[0x33] == '\x03') {
            piVar5 = (int *)param_1[0x32];
            if (*piVar5 == 0xcc) {
              DataMemoryBarrier(0xb);
              bVar7 = (bool)hasExclusiveAccess(piVar5);
              if (bVar7) {
                *piVar5 = 0x84;
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            (**(code **)(piVar5[2] + 0x10))();
          }
          else if ((char)param_1[0x33] == '\0') {
            if (param_1[0x2c] != 0) {
              thunk_FUN_016d3fb4(param_1[0x2d]);
            }
            if (param_1[0x2f] != 0) {
              thunk_FUN_016d3fb4(param_1[0x30]);
            }
          }
        }
        break;
      default:
        goto switchD_00e4d2d8_default;
      }
      if (param_1[0x22] != 0) {
        thunk_FUN_016d3fb4(param_1[0x23]);
      }
    }
    break;
  case '\x04':
    FUN_005c1b5c(param_1 + 0x16);
    break;
  case '\x05':
    if ((char)param_1[0x27] == '\x03') {
      cVar1 = (char)param_1[0x26];
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)((int)param_1 + 0x75);
      }
      if (bVar7 && cVar1 == '\x04') {
        FUN_0163bdc0(param_1 + 0x1e);
        if (param_1[0x22] != 0) {
          (**(code **)(param_1[0x22] + 0xc))(param_1[0x23]);
        }
        *(undefined1 *)(param_1 + 0x1d) = 0;
      }
    }
    break;
  case '\x06':
    FUN_005c1b5c(param_1 + 0x18);
  }
switchD_00e4d2d8_default:
  iVar2 = 0x3c;
  uVar3 = param_1[8] + 0xc4653601;
  if ((uint)param_1[8] < 999999999) {
    uVar3 = 0;
  }
  if (1 < uVar3) {
    if (uVar3 == 2) {
      piVar5 = (int *)param_1[6];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar5;
        bVar7 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar7);
      *piVar5 = iVar6 + -1;
    }
    else {
      piVar5 = (int *)param_1[6];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar5;
        bVar7 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar7);
      *piVar5 = iVar6 + -1;
    }
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aac5b4(param_1[6]);
    }
  }
switchD_00e4d294_caseD_0:
  FUN_005c4e2c((int)param_1 + iVar2 + 8);
switchD_00e4d294_caseD_1:
  if (param_1[0x40] == 0) {
    FUN_00e44c9c(param_1 + 0x41);
  }
  if (param_1[0x60] != 0) {
    return;
  }
  piVar5 = param_1 + 0x61;
  if ((char)param_1[0x77] == '\0') {
    iVar2 = *piVar5;
    piVar4 = (int *)(iVar2 + 0x104);
    do {
      iVar6 = *piVar4;
      bVar7 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar7);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      FUN_0163b708(iVar2 + 0x88);
    }
    piVar4 = (int *)*piVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar7 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar7);
    *piVar4 = iVar2 + -1;
  }
  else {
    if ((char)param_1[0x77] != '\x03') {
      return;
    }
    if ((char)param_1[0x76] == '\x03') {
      cVar1 = (char)param_1[0x75];
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)((int)param_1 + 0x1b1);
      }
      if (bVar7 && cVar1 == '\x04') {
        FUN_0163bdc0(param_1 + 0x6d);
        if (param_1[0x71] != 0) {
          (**(code **)(param_1[0x71] + 0xc))(param_1[0x72]);
        }
        *(undefined1 *)(param_1 + 0x6c) = 0;
      }
    }
    piVar5 = param_1 + 99;
    iVar2 = *piVar5;
    piVar4 = (int *)(iVar2 + 0x104);
    do {
      iVar6 = *piVar4;
      bVar7 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar7);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      FUN_0163b708(iVar2 + 0x88);
    }
    piVar4 = (int *)*piVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar7 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar7);
    *piVar4 = iVar2 + -1;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aac2e8(*piVar5);
    return;
  }
  return;
}

