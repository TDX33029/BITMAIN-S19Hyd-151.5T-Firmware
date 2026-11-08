// FUN_00ac5314 @ 00ac5314 size=1296 calls_out=15 calls_in=2
// strings: 

void FUN_00ac5314(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  bool bVar9;
  
  switch(*(undefined1 *)(param_1 + 0x134)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x120);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar2;
      bVar9 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar9);
    *piVar2 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1030(*(undefined4 *)(param_1 + 0x120));
    }
    FUN_00ac6b18(param_1);
    return;
  default:
    goto switchD_00ac5330_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x1c4) == '\x03') {
      FUN_00c8b4bc(param_1 + 0x140);
    }
    goto LAB_00ac5808;
  case 4:
    FUN_00ac5bb4(param_1 + 0x140);
    goto LAB_00ac5808;
  case 5:
    if (*(char *)(param_1 + 0x158) == '\x04') {
      FUN_00ac5e0c(param_1 + 0x160);
    }
    else if (*(char *)(param_1 + 0x158) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x198);
      if (cVar1 == '\a' || cVar1 == '\x06') {
        if (*(char *)(param_1 + 0x234) == '\x03') {
          FUN_00ac5d5c(param_1 + 0x1a0);
        }
      }
      else {
        bVar9 = cVar1 == '\x03';
        if (bVar9) {
          cVar1 = *(char *)(param_1 + 0x1b8);
        }
        if (bVar9 && cVar1 == '\x04') {
          FUN_00a07b4c(param_1 + 0x1c0);
        }
      }
    }
    goto LAB_00ac5608;
  case 6:
    FUN_00ac60b0(param_1 + 0x140);
LAB_00ac5608:
    if (*(char *)(param_1 + 0x137) != '\0') {
      puVar7 = (undefined4 *)(param_1 + 0xb0);
      FUN_016af0b0(puVar7);
      piVar2 = (int *)*puVar7;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar2;
        bVar9 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar9);
      *piVar2 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*puVar7);
      }
    }
    *(undefined1 *)(param_1 + 0x13c) = 0;
    *(undefined1 *)(param_1 + 0x137) = 0;
    if (*(char *)(param_1 + 0x138) != '\0') {
      iVar6 = *(int *)(param_1 + 0x148);
      if (iVar6 != 0) {
        iVar8 = *(int *)(param_1 + 0x144);
        iVar5 = 0;
        do {
          piVar2 = *(int **)(iVar8 + iVar5 * 4);
          iVar4 = iVar5 + 1;
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar2;
            bVar9 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar9);
          *piVar2 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f31e8(*(undefined4 *)(iVar8 + iVar5 * 4));
          }
          iVar5 = iVar4;
        } while (iVar4 != iVar6);
      }
      if (*(int *)(param_1 + 0x140) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x144));
      }
    }
    *(undefined1 *)(param_1 + 0x138) = 0;
    goto LAB_00ac57fc;
  case 7:
    FUN_00ac5bb4(param_1 + 0x140);
    goto LAB_00ac5704;
  case 8:
    if (*(char *)(param_1 + 0x148) == '\x04') {
      FUN_00ac5e0c(param_1 + 0x150);
    }
    else if (*(char *)(param_1 + 0x148) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x188);
      if (cVar1 == '\a' || cVar1 == '\x06') {
        if (*(char *)(param_1 + 0x224) == '\x03') {
          FUN_00ac5d5c(param_1 + 400);
        }
      }
      else {
        bVar9 = cVar1 == '\x03';
        if (bVar9) {
          cVar1 = *(char *)(param_1 + 0x1a8);
        }
        if (bVar9 && cVar1 == '\x04') {
          FUN_00a07b4c(param_1 + 0x1b0);
        }
      }
    }
    break;
  case 9:
    piVar2 = *(int **)(param_1 + 0x140);
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar9 = (bool)hasExclusiveAccess(piVar2);
      if (bVar9) {
        *piVar2 = 0x84;
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
    break;
  case 10:
    piVar2 = *(int **)(param_1 + 0x140);
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar9 = (bool)hasExclusiveAccess(piVar2);
      if (bVar9) {
        *piVar2 = 0x84;
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
    break;
  case 0xb:
    piVar2 = *(int **)(param_1 + 0x140);
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar9 = (bool)hasExclusiveAccess(piVar2);
      if (bVar9) {
        *piVar2 = 0x84;
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
    break;
  case 0xc:
    FUN_00ac5bb4(param_1 + 0x140);
    goto LAB_00ac57fc;
  case 0xd:
    cVar1 = *(char *)(param_1 + 0x15e);
    bVar9 = cVar1 == '\x03';
    if (bVar9) {
      cVar1 = *(char *)(param_1 + 0x14e);
    }
    if ((bVar9 && cVar1 == '\x03') && (*(int *)(param_1 + 0x140) != 0)) {
      FUN_00c8204c(*(int *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x144),1);
    }
    goto LAB_00ac558c;
  case 0xe:
    FUN_00ac68f8(param_1 + 0x150);
    iVar6 = *(int *)(param_1 + 0x148);
    if (iVar6 != 0) {
      iVar8 = *(int *)(param_1 + 0x144);
      iVar5 = 0;
      do {
        piVar2 = *(int **)(iVar8 + iVar5 * 4);
        iVar4 = iVar5 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar9 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar9);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f31e8(*(undefined4 *)(iVar8 + iVar5 * 4));
        }
        iVar5 = iVar4;
      } while (iVar4 != iVar6);
    }
    if (*(int *)(param_1 + 0x140) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x144));
    }
LAB_00ac558c:
    if (*(int *)(param_1 + 0x110) != -0x7ffffffe) {
      FUN_00ac6f0c();
    }
    goto LAB_00ac57fc;
  }
  if (*(int *)(param_1 + 0xe0) != -0x7ffffffe) {
    FUN_00ac6f0c();
  }
LAB_00ac5704:
  if (*(char *)(param_1 + 0x136) != '\0') {
    piVar2 = *(int **)(param_1 + 0x130);
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar9 = (bool)hasExclusiveAccess(piVar2);
      if (bVar9) {
        *piVar2 = 0x84;
        goto LAB_00ac5748;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
  }
LAB_00ac5748:
  piVar2 = *(int **)(param_1 + 300);
  *(undefined1 *)(param_1 + 0x136) = 0;
  *(undefined2 *)(param_1 + 0x139) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar2;
    bVar9 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar9);
  *piVar2 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*(undefined4 *)(param_1 + 300));
  }
  puVar7 = (undefined4 *)(param_1 + 0xd8);
  FUN_016af0b0(puVar7);
  piVar2 = (int *)*puVar7;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar2;
    bVar9 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar9);
  *piVar2 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*puVar7);
  }
  piVar2 = *(int **)(param_1 + 0x128);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar2;
    bVar9 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar9);
  *piVar2 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*(undefined4 *)(param_1 + 0x128));
  }
  *(undefined1 *)(param_1 + 0x13b) = 0;
LAB_00ac57fc:
  *(undefined2 *)(param_1 + 0x13d) = 0;
LAB_00ac5808:
  FUN_00ac6b18(param_1 + 0x40);
  piVar2 = *(int **)(param_1 + 0x124);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar2;
    bVar9 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar9);
  *piVar2 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1030(*(undefined4 *)(param_1 + 0x124));
    return;
  }
switchD_00ac5330_caseD_1:
  return;
}

