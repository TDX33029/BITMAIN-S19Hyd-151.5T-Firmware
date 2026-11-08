// FUN_00c89ca4 @ 00c89ca4 size=1528 calls_out=22 calls_in=2
// strings: 

void FUN_00c89ca4(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  if (*(char *)(param_1 + 0xc24) != '\0') {
    if (*(char *)(param_1 + 0xc24) == '\x03') {
      FUN_00887914(param_1 + 0xc08);
      return;
    }
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x469)) {
  case 0:
    piVar5 = *(int **)(param_1 + 0x458);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar5;
      bVar9 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar9);
    *piVar5 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d030dc(*(undefined4 *)(param_1 + 0x458));
    }
    piVar5 = *(int **)(param_1 + 0x45c);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar5;
      bVar9 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar9);
    *piVar5 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078d010(*(undefined4 *)(param_1 + 0x45c));
    }
    piVar5 = *(int **)(param_1 + 0x460);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar5;
      bVar9 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar9);
    *piVar5 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1a50(*(undefined4 *)(param_1 + 0x460));
    }
  default:
    goto switchD_00c89ce4_caseD_1;
  case 3:
    if (*(int *)(param_1 + 0x470) != 0) {
      FUN_00c81a4c(*(int *)(param_1 + 0x470),*(undefined4 *)(param_1 + 0x474),1);
    }
    goto LAB_00c8a23c;
  case 4:
    cVar1 = *(char *)(param_1 + 0x4a8);
    bVar9 = cVar1 == '\x03';
    if (bVar9) {
      cVar1 = *(char *)(param_1 + 0x485);
    }
    if (bVar9 && cVar1 == '\x04') {
      FUN_0163bdc0(param_1 + 0x488);
      if (*(int *)(param_1 + 0x498) != 0) {
        (**(code **)(*(int *)(param_1 + 0x498) + 0xc))(*(undefined4 *)(param_1 + 0x49c));
      }
      *(undefined1 *)(param_1 + 0x484) = 0;
    }
    goto LAB_00c8a1e0;
  case 5:
    if ((*(char *)(param_1 + 0x47c) == '\x03') && (*(int *)(param_1 + 0x474) != 0)) {
      FUN_00c8204c(*(int *)(param_1 + 0x474),*(undefined4 *)(param_1 + 0x478),1);
    }
    goto LAB_00c8a1bc;
  case 6:
    cVar1 = *(char *)(param_1 + 0x4dd);
    if (cVar1 == '\x05') {
      if (*(char *)(param_1 + 0x501) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x4f1);
        if (cVar1 == '\x05') {
          puVar8 = *(undefined4 **)(param_1 + 0x4f8);
          uVar7 = *(undefined4 *)(param_1 + 0x4f4);
          pcVar3 = (code *)*puVar8;
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(uVar7);
          }
          if (puVar8[1] != 0) {
            thunk_FUN_016d3fb4(uVar7);
          }
          FUN_00c822ec(*(undefined4 *)(param_1 + 0x4e8));
        }
        else {
          if (cVar1 != '\x04') {
            if ((cVar1 == '\x03') && (*(int *)(param_1 + 0x4f4) != 0)) {
              FUN_00c8204c(*(int *)(param_1 + 0x4f4),*(undefined4 *)(param_1 + 0x4f8),1);
            }
            break;
          }
          if (*(int *)(param_1 + 0x4f4) != 0) {
            FUN_00c8204c(*(int *)(param_1 + 0x4f4),*(undefined4 *)(param_1 + 0x4f8),1);
          }
        }
        FUN_00c822ec(*(undefined4 *)(param_1 + 0x4e0));
      }
    }
    else if (cVar1 == '\x04') {
      FUN_00c8a700(param_1 + 0x4f0);
      if (*(int *)(param_1 + 0x4e4) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4e8));
      }
    }
    else if (cVar1 == '\x03') {
      FUN_00c8a678(param_1 + 0x4e0);
    }
    break;
  case 7:
    if (*(char *)(param_1 + 0x48c) == '\x04') {
      FUN_00c8a700(param_1 + 0x498);
    }
    else if (*(char *)(param_1 + 0x48c) == '\x03') {
      FUN_00c8a678(param_1 + 0x490);
    }
    break;
  case 8:
    if (*(int *)(param_1 + 0x470) != 0) {
      FUN_00c81a4c(*(int *)(param_1 + 0x470),*(undefined4 *)(param_1 + 0x474),1);
    }
    goto LAB_00c8a180;
  case 9:
    if (*(int *)(param_1 + 0x470) != 0) {
      FUN_00c8204c(*(int *)(param_1 + 0x470),*(undefined4 *)(param_1 + 0x474),1);
    }
    goto LAB_00c8a16c;
  case 10:
    switch(*(undefined1 *)(param_1 + 0x4c8)) {
    case 3:
      if (*(int *)(param_1 + 0x4d0) != 0) {
        FUN_00c81a4c(*(int *)(param_1 + 0x4d0),*(undefined4 *)(param_1 + 0x4d4),1);
      }
      break;
    case 4:
      if (*(int *)(param_1 + 0x4d0) != 0) {
        FUN_00c81a4c(*(int *)(param_1 + 0x4d0),*(undefined4 *)(param_1 + 0x4d4),1);
      }
      goto LAB_00c8a150;
    case 5:
      if (*(char *)(param_1 + 0x5bc) == '\x03') {
        if (*(char *)(param_1 + 0x53c) == '\x04') {
          FUN_00d3e8cc(*(undefined4 *)(param_1 + 0x550));
          piVar5 = *(int **)(param_1 + 0x550);
          if (piVar5 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar2 = *piVar5;
              bVar9 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar9);
            *piVar5 = iVar2 + -1;
            if (iVar2 == 1) {
              DataMemoryBarrier(0xb);
              FUN_008f4380(*(undefined4 *)(param_1 + 0x550));
            }
          }
          FUN_00a07b4c(param_1 + 0x558);
          *(undefined2 *)(param_1 + 0x53d) = 0;
          *(undefined1 *)(param_1 + 0x540) = 0;
LAB_00c8a140:
          *(undefined1 *)(param_1 + 0x53f) = 0;
        }
        else if (*(char *)(param_1 + 0x53c) == '\x03') {
          if (*(int *)(param_1 + 0x548) != 0) {
            FUN_00c8204c(*(int *)(param_1 + 0x548),*(undefined4 *)(param_1 + 0x54c),1);
          }
          goto LAB_00c8a140;
        }
        *(undefined1 *)(param_1 + 0x5bd) = 0;
      }
      else if (*(char *)(param_1 + 0x5bc) == '\0') {
        FUN_00c822ec(*(undefined4 *)(param_1 + 0x5b4));
      }
LAB_00c8a150:
      *(undefined1 *)(param_1 + 0x4c9) = 0;
      break;
    case 6:
      switch(*(undefined1 *)(param_1 + 0x510)) {
      case 3:
        FUN_00c859b0(param_1 + 0x518);
        break;
      case 4:
        cVar1 = *(char *)(param_1 + 0x594);
        bVar9 = cVar1 == '\x03';
        if (bVar9) {
          cVar1 = *(char *)(param_1 + 0x591);
        }
        if (bVar9 && cVar1 == '\x03') {
          FUN_00c8315c(param_1 + 0x524);
        }
        piVar5 = *(int **)(param_1 + 0x51c);
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar5;
          bVar9 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar9);
        *piVar5 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f1030(*(undefined4 *)(param_1 + 0x51c));
        }
        break;
      case 5:
        FUN_00a07b4c(param_1 + 0x518);
        break;
      case 6:
        FUN_00c85450(param_1 + 0x518);
      }
    }
switchD_00c89ce4_caseD_b:
    if (*(int *)(param_1 + 0x48) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4c));
    }
LAB_00c8a16c:
    if (*(char *)(param_1 + 0x467) != '\0') {
      FUN_00c822ec(*(undefined4 *)(param_1 + 0x454));
    }
LAB_00c8a180:
    *(undefined1 *)(param_1 + 0x467) = 0;
    break;
  case 0xb:
    goto switchD_00c89ce4_caseD_b;
  }
  FUN_00ac8e24(param_1 + 0x160);
  if ((*(int *)(param_1 + 0x3b0) != 7 || *(int *)(param_1 + 0x3b4) != 0) &&
     ((*(uint *)(param_1 + 0x418) & 0x7fffffff) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x41c));
  }
LAB_00c8a1bc:
  uVar4 = *(uint *)(param_1 + 0x70);
  bVar9 = uVar4 != 2;
  if (bVar9) {
    uVar4 = (uint)*(byte *)(param_1 + 0x468);
  }
  if (bVar9 && uVar4 != 0) {
    FUN_00ac8e24();
  }
  *(undefined1 *)(param_1 + 0x468) = 0;
LAB_00c8a1e0:
  iVar2 = *(int *)(param_1 + 0x3a8);
  piVar5 = (int *)(iVar2 + 0x194);
  do {
    iVar6 = *piVar5;
    bVar9 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar9);
  *piVar5 = iVar6 + -1;
  if (iVar6 == 1) {
    FUN_0163b708(iVar2 + 0x88);
  }
  piVar5 = *(int **)(param_1 + 0x3a8);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar9 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar9);
  *piVar5 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f17d0(*(undefined4 *)(param_1 + 0x3a8));
  }
LAB_00c8a23c:
  piVar5 = *(int **)(param_1 + 0x430);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar9 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar9);
  *piVar5 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1a50(*(undefined4 *)(param_1 + 0x430));
  }
  piVar5 = *(int **)(param_1 + 0x42c);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar9 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar9);
  *piVar5 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078d010(*(undefined4 *)(param_1 + 0x42c));
  }
  piVar5 = *(int **)(param_1 + 0x428);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar9 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar9);
  *piVar5 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d030dc(*(undefined4 *)(param_1 + 0x428));
  }
switchD_00c89ce4_caseD_1:
  FUN_00ac9c30(param_1 + 0xc18);
  return;
}

