// FUN_005bd3f0 @ 005bd3f0 size=1020 calls_out=12 calls_in=4
// strings: 

void FUN_005bd3f0(int *param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (*(char *)((int)param_1 + 0x20e) == '\0') {
    FUN_005c4e2c(param_1 + 0x80);
    FUN_005c471c(param_1 + 0x78);
    iVar5 = param_1[0x7e];
    piVar3 = (int *)(iVar5 + 0x104);
    do {
      iVar4 = *piVar3;
      bVar6 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar6);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_0163b708(iVar5 + 0x88);
    }
    piVar3 = (int *)param_1[0x7e];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar6 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar6);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aac2e8(param_1[0x7e]);
      return;
    }
    return;
  }
  if (*(char *)((int)param_1 + 0x20e) != '\x03') {
    return;
  }
  if (*param_1 != 0) goto switchD_005bd430_caseD_1;
  iVar5 = 0x30;
  switch((char)param_1[0x14]) {
  case '\0':
    goto switchD_005bd430_caseD_0;
  default:
    goto switchD_005bd430_caseD_1;
  case '\x03':
    if ((char)param_1[0x3e] == '\x03') {
      switch((char)param_1[0x25]) {
      case '\x03':
        if (*(char *)((int)param_1 + 0xed) == '\x03') {
          cVar1 = (char)param_1[0x35];
          bVar6 = cVar1 == '\x03';
          if (bVar6) {
            cVar1 = *(char *)((int)param_1 + 0xd1);
          }
          if (bVar6 && cVar1 == '\x03') {
            if ((char)param_1[0x31] == '\x03') {
              piVar3 = (int *)param_1[0x30];
              if (*piVar3 == 0xcc) {
                DataMemoryBarrier(0xb);
                bVar6 = (bool)hasExclusiveAccess(piVar3);
                if (bVar6) {
                  *piVar3 = 0x84;
                  goto LAB_005bd80c;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              (**(code **)(piVar3[2] + 0x10))();
            }
            else if (((char)param_1[0x31] == '\0') && (param_1[0x29] != 0)) {
              thunk_FUN_016d3fb4(param_1[0x2a]);
            }
LAB_005bd80c:
            *(undefined1 *)(param_1 + 0x34) = 0;
          }
          *(undefined1 *)(param_1 + 0x3b) = 0;
        }
        break;
      case '\x04':
        piVar3 = (int *)param_1[0x39];
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar6 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar6);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_016592f4(param_1[0x39]);
        }
        iVar5 = param_1[0x30];
        if (iVar5 != -0x80000000) {
          if (iVar5 == -0x7fffffff) {
            piVar3 = (int *)param_1[0x31];
            if (*piVar3 == 0xcc) {
              DataMemoryBarrier(0xb);
              bVar6 = (bool)hasExclusiveAccess(piVar3);
              if (bVar6) {
                *piVar3 = 0x84;
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            (**(code **)(piVar3[2] + 0x10))();
          }
          else if (iVar5 != 0) {
            thunk_FUN_016d3fb4(param_1[0x31]);
          }
        }
        break;
      case '\x05':
        cVar1 = (char)param_1[0x32];
        bVar6 = cVar1 == '\x03';
        if (bVar6) {
          cVar1 = (char)param_1[0x31];
        }
        if (bVar6 && cVar1 == '\x03') {
          if ((char)param_1[0x30] == '\x03') {
            piVar3 = (int *)param_1[0x2f];
            if (*piVar3 == 0xcc) {
              DataMemoryBarrier(0xb);
              bVar6 = (bool)hasExclusiveAccess(piVar3);
              if (bVar6) {
                *piVar3 = 0x84;
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            (**(code **)(piVar3[2] + 0x10))();
          }
          else if (((char)param_1[0x30] == '\0') && (param_1[0x2c] != 0)) {
            thunk_FUN_016d3fb4(param_1[0x2d]);
          }
        }
        break;
      case '\x06':
        if ((char)param_1[0x34] == '\x03') {
          if ((char)param_1[0x33] == '\x03') {
            piVar3 = (int *)param_1[0x32];
            if (*piVar3 == 0xcc) {
              DataMemoryBarrier(0xb);
              bVar6 = (bool)hasExclusiveAccess(piVar3);
              if (bVar6) {
                *piVar3 = 0x84;
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            (**(code **)(piVar3[2] + 0x10))();
          }
          else if ((char)param_1[0x33] == '\0') {
            FUN_005c1758(param_1 + 0x2c);
          }
        }
        break;
      default:
        goto switchD_005bd474_default;
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
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)((int)param_1 + 0x75);
      }
      if (bVar6 && cVar1 == '\x04') {
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
switchD_005bd474_default:
  iVar5 = 0x3c;
  uVar2 = param_1[8] + 0xc4653601;
  if ((uint)param_1[8] < 999999999) {
    uVar2 = 0;
  }
  if (1 < uVar2) {
    if (uVar2 == 2) {
      piVar3 = (int *)param_1[6];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar6 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar6);
      *piVar3 = iVar4 + -1;
    }
    else {
      piVar3 = (int *)param_1[6];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar6 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar6);
      *piVar3 = iVar4 + -1;
    }
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aac5b4(param_1[6]);
    }
  }
switchD_005bd430_caseD_0:
  FUN_005c4e2c((int)param_1 + iVar5 + 8);
switchD_005bd430_caseD_1:
  FUN_005c0c4c(param_1 + 0x40);
  FUN_005c1390(param_1 + 0x60);
  return;
}

