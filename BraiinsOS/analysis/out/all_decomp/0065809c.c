// FUN_0065809c @ 0065809c size=808 calls_out=11 calls_in=2
// strings: 

void FUN_0065809c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  switch(*(undefined1 *)(param_1 + 0x558)) {
  case 0:
    FUN_006588d4();
    FUN_0064866c(param_1 + 0x208);
    piVar4 = (int *)(param_1 + 0x24c);
    FUN_006bf9f0(piVar4);
    piVar2 = (int *)*piVar4;
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0113b314(*piVar4);
      }
    }
    piVar4 = (int *)(param_1 + 0x250);
    FUN_006c0a90(piVar4);
    piVar2 = (int *)*piVar4;
    if (piVar2 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0113b19c(*piVar4);
      return;
    }
    return;
  default:
    goto switchD_006580b8_caseD_1;
  case 3:
    break;
  case 4:
    FUN_00658560(param_1 + 0x588);
    *(undefined1 *)(param_1 + 0x55b) = 0;
    if (*(int *)(param_1 + 0x560) != -0x7ffffff2) {
      *(undefined1 *)(param_1 + 0x55a) = 0;
    }
    *(undefined1 *)(param_1 + 0x55a) = 0;
    break;
  case 5:
    FUN_00658798(param_1 + 0x578);
    break;
  case 6:
    if (*(int *)(param_1 + 0x5c8) != 0) {
      if (*(int *)(param_1 + 0x5cc) == 0) {
        piVar2 = *(int **)(param_1 + 0x5d0);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015614d8(*(undefined4 *)(param_1 + 0x5d0),*(undefined4 *)(param_1 + 0x5d4));
        }
      }
      else {
        piVar2 = *(int **)(param_1 + 0x5d8);
        if (((uint)piVar2 & 1) == 0) {
          piVar4 = piVar2 + 4;
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar4;
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            if (*piVar2 != 0) {
              thunk_FUN_016d3fb4(piVar2[1]);
            }
            goto LAB_006581e8;
          }
        }
        else if (*(int *)(param_1 + 0x5d4) + ((uint)piVar2 >> 5) != 0) {
          piVar2 = (int *)(*(int *)(param_1 + 0x5cc) - ((uint)piVar2 >> 5));
LAB_006581e8:
          thunk_FUN_016d3fb4(piVar2);
        }
      }
    }
    FUN_00a07b4c(param_1 + 0x578);
  }
  piVar2 = *(int **)(param_1 + 0x528);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078da6c();
    }
  }
  FUN_00a07b4c(param_1 + 0x4c8);
  piVar2 = *(int **)(param_1 + 0x4c4);
  *(undefined1 *)(param_1 + 0x55c) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078da6c();
  }
  if (*(int *)(param_1 + 0x4b0) != 0) {
    if (*(int *)(param_1 + 0x4b4) == 0) {
      piVar2 = *(int **)(param_1 + 0x4b8);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(*(undefined4 *)(param_1 + 0x4b8),*(undefined4 *)(param_1 + 0x4bc));
      }
    }
    else {
      piVar2 = *(int **)(param_1 + 0x4c0);
      if (((uint)piVar2 & 1) == 0) {
        piVar4 = piVar2 + 4;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          if (*piVar2 != 0) {
            thunk_FUN_016d3fb4(piVar2[1]);
          }
          goto LAB_00658338;
        }
      }
      else if (*(int *)(param_1 + 0x4bc) + ((uint)piVar2 >> 5) != 0) {
        piVar2 = (int *)(*(int *)(param_1 + 0x4b4) - ((uint)piVar2 >> 5));
LAB_00658338:
        thunk_FUN_016d3fb4(piVar2);
      }
    }
  }
  FUN_006588d4(param_1 + 600);
  piVar4 = (int *)(param_1 + 0x4a4);
  FUN_006bf9f0(piVar4);
  piVar2 = (int *)*piVar4;
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0113b314(*piVar4);
    }
  }
  piVar4 = (int *)(param_1 + 0x4a8);
  FUN_006c0a90(piVar4);
  piVar2 = (int *)*piVar4;
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0113b19c(*piVar4);
    }
  }
  *(undefined1 *)(param_1 + 0x55d) = 0;
switchD_006580b8_caseD_1:
  return;
}

