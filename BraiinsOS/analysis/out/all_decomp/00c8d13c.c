// FUN_00c8d13c @ 00c8d13c size=880 calls_out=8 calls_in=2
// strings: 

void FUN_00c8d13c(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  switch(*(undefined1 *)(param_1 + 0x728)) {
  case 0:
    FUN_00adbb98(param_1 + 0x328);
    FUN_00c8d7f8(param_1);
    piVar3 = *(int **)(param_1 + 0x708);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x708));
    }
    piVar3 = *(int **)(param_1 + 0x70c);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x70c));
      return;
    }
    return;
  default:
    goto switchD_00c8d158_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x784) == '\x03') {
      FUN_00c865f8(param_1 + 0x748);
      *(undefined1 *)(param_1 + 0x785) = 0;
    }
    else if ((*(char *)(param_1 + 0x784) == '\0') && (*(int *)(param_1 + 0x738) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x73c));
    }
    break;
  case 4:
    FUN_00c8d994(param_1 + 0x738);
    break;
  case 5:
    if (*(char *)(param_1 + 0x780) == '\x03') {
      FUN_00c865f8(param_1 + 0x744);
      *(undefined1 *)(param_1 + 0x781) = 0;
      cVar1 = *(char *)(param_1 + 0x72b);
    }
    else {
      if ((*(char *)(param_1 + 0x780) != '\0') || (*(int *)(param_1 + 0x734) == 0))
      goto LAB_00c8d268;
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x738));
      cVar1 = *(char *)(param_1 + 0x72b);
    }
    goto joined_r0x00c8d2dc;
  case 6:
    FUN_00c8df70(param_1 + 0x730);
LAB_00c8d268:
    cVar1 = *(char *)(param_1 + 0x72b);
joined_r0x00c8d2dc:
    if (cVar1 != '\0') {
      piVar3 = *(int **)(param_1 + 0x730);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1a50(*(undefined4 *)(param_1 + 0x730));
      }
    }
    piVar3 = *(int **)(param_1 + 0x724);
    *(undefined1 *)(param_1 + 0x72b) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1a50(*(undefined4 *)(param_1 + 0x724));
    }
  }
  if (*(char *)(param_1 + 0x72c) != '\0') {
    piVar3 = *(int **)(param_1 + 0x734);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x734));
    }
  }
  piVar3 = *(int **)(param_1 + 0x720);
  *(undefined1 *)(param_1 + 0x72c) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x720));
  }
  piVar3 = *(int **)(param_1 + 0x71c);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x71c));
  }
  piVar3 = *(int **)(param_1 + 0x718);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x718));
  }
  if (*(char *)(param_1 + 0x72d) != '\0') {
    piVar3 = *(int **)(param_1 + 0x730);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x730));
    }
  }
  piVar3 = *(int **)(param_1 + 0x714);
  *(undefined1 *)(param_1 + 0x72d) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x714));
  }
  piVar3 = *(int **)(param_1 + 0x710);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x710));
  }
  if (*(char *)(param_1 + 0x729) != '\0') {
    FUN_00c8d7f8(param_1 + 0x388);
  }
  *(undefined1 *)(param_1 + 0x729) = 0;
  if (*(char *)(param_1 + 0x72a) != '\0') {
    FUN_00adbb98(param_1 + 0x358);
  }
  *(undefined1 *)(param_1 + 0x72a) = 0;
switchD_00c8d158_caseD_1:
  return;
}

