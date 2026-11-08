// FUN_00c8df70 @ 00c8df70 size=1504 calls_out=19 calls_in=2
// strings: 

void FUN_00c8df70(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  
  switch(*(undefined1 *)(param_1 + 0x764)) {
  case 0:
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
      FUN_008f1a50(*(undefined4 *)(param_1 + 0x708));
    }
    FUN_00adbb98(param_1 + 0x328);
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
    }
    if (*(int *)(param_1 + 0x358) == 0) {
      piVar3 = *(int **)(param_1 + 0x35c);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659344(*(undefined4 *)(param_1 + 0x35c));
        return;
      }
      return;
    }
    piVar3 = *(int **)(param_1 + 0x35c);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016586fc(*(undefined4 *)(param_1 + 0x35c));
      return;
    }
    return;
  default:
    goto switchD_00c8df90_caseD_1;
  case 3:
    FUN_00c8ea38(param_1 + 0x778);
    goto LAB_00c8e2c8;
  case 4:
    puVar9 = *(undefined4 **)(param_1 + 0x784);
    uVar11 = *(undefined4 *)(param_1 + 0x780);
    pcVar5 = (code *)*puVar9;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar11);
    }
    if (puVar9[1] != 0) {
      thunk_FUN_016d3fb4(uVar11);
    }
    cVar1 = *(char *)(param_1 + 0x76c);
    break;
  case 5:
    FUN_00c8edf4(param_1 + 0x778);
    *(undefined1 *)(param_1 + 0x770) = 0;
    cVar1 = *(char *)(param_1 + 0x76c);
    break;
  case 6:
    if (*(char *)(param_1 + 0x7c4) == '\x03') {
      FUN_00c865f8(param_1 + 0x788);
      *(undefined1 *)(param_1 + 0x7c5) = 0;
    }
    else if ((*(char *)(param_1 + 0x7c4) == '\0') && (*(int *)(param_1 + 0x778) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x77c));
    }
    goto LAB_00c8e124;
  case 7:
    if (*(char *)(param_1 + 0x7c8) == '\x03') {
      FUN_00c865f8(param_1 + 0x78c);
      *(undefined1 *)(param_1 + 0x7c9) = 0;
      cVar1 = *(char *)(param_1 + 0x76b);
    }
    else {
      if ((*(char *)(param_1 + 0x7c8) != '\0') || (*(int *)(param_1 + 0x77c) == 0))
      goto LAB_00c8e0e0;
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x780));
      cVar1 = *(char *)(param_1 + 0x76b);
    }
    goto joined_r0x00c8e558;
  case 8:
    FUN_00c8f048(param_1 + 0x778);
    goto LAB_00c8e0e0;
  case 9:
    if (*(char *)(param_1 + 0x80c) == '\x03') {
      FUN_00c8f13c(param_1 + 0x788);
    }
LAB_00c8e0e0:
    cVar1 = *(char *)(param_1 + 0x76b);
joined_r0x00c8e558:
    if (cVar1 != '\0') {
      piVar3 = *(int **)(param_1 + 0x778);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1030(*(undefined4 *)(param_1 + 0x778));
      }
    }
    *(undefined1 *)(param_1 + 0x76b) = 0;
LAB_00c8e124:
    piVar3 = *(int **)(param_1 + 0x760);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1030(*(undefined4 *)(param_1 + 0x760));
    }
    *(undefined2 *)(param_1 + 0x76d) = 0;
    FUN_00adc0f8(param_1 + 0x744);
    *(undefined1 *)(param_1 + 0x76f) = 0;
    goto LAB_00c8e214;
  }
  if (cVar1 != '\0') {
    puVar9 = *(undefined4 **)(param_1 + 0x77c);
    uVar11 = *(undefined4 *)(param_1 + 0x778);
    pcVar5 = (code *)*puVar9;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar11);
    }
    if (puVar9[1] != 0) {
      thunk_FUN_016d3fb4(uVar11);
    }
  }
  *(undefined1 *)(param_1 + 0x76c) = 0;
  FUN_01242328(param_1 + 0x6c0);
LAB_00c8e214:
  piVar3 = *(int **)(param_1 + 0x73c);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f2e10(*(undefined4 *)(param_1 + 0x73c));
  }
  if (*(char *)(param_1 + 0x766) != '\0') {
    iVar4 = *(int *)(param_1 + 0x738);
    if (iVar4 != 0) {
      iVar10 = *(int *)(param_1 + 0x734);
      iVar7 = 0;
      do {
        piVar3 = *(int **)(iVar10 + iVar7 * 4);
        iVar8 = iVar7 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f31e8(*(undefined4 *)(iVar10 + iVar7 * 4));
        }
        iVar7 = iVar8;
      } while (iVar8 != iVar4);
    }
    if (*(int *)(param_1 + 0x730) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x734));
    }
  }
  *(undefined1 *)(param_1 + 0x766) = 0;
LAB_00c8e2c8:
  *(undefined1 *)(param_1 + 0x771) = 0;
  if (*(char *)(param_1 + 0x767) != '\0') {
    piVar3 = *(int **)(param_1 + 0x72c);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1420(*(undefined4 *)(param_1 + 0x72c));
    }
  }
  *(undefined1 *)(param_1 + 0x767) = 0;
  if (*(char *)(param_1 + 0x769) != '\0') {
    if (*(int *)(param_1 + 0x720) != 0) {
      iVar4 = 1 - *(int *)(param_1 + 0x720);
      puVar9 = (undefined4 *)(*(int *)(param_1 + 0x71c) + 4);
      do {
        uVar11 = puVar9[-1];
        puVar12 = (undefined4 *)*puVar9;
        pcVar5 = (code *)*puVar12;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar11);
        }
        if (puVar12[1] != 0) {
          thunk_FUN_016d3fb4(uVar11);
        }
        iVar4 = iVar4 + 1;
        puVar9 = puVar9 + 2;
      } while (iVar4 != 1);
    }
    if (*(int *)(param_1 + 0x718) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x71c));
    }
  }
  if (*(char *)(param_1 + 0x768) != '\0') {
    piVar3 = *(int **)(param_1 + 0x724);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*(undefined4 *)(param_1 + 0x724),*(undefined4 *)(param_1 + 0x728));
    }
  }
  *(undefined2 *)(param_1 + 0x768) = 0;
  if (*(int *)(param_1 + 0x6b8) == 0) {
    piVar3 = *(int **)(param_1 + 0x6bc);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659344(*(undefined4 *)(param_1 + 0x6bc));
    }
  }
  else {
    piVar3 = *(int **)(param_1 + 0x6bc);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016586fc(*(undefined4 *)(param_1 + 0x6bc));
    }
  }
  piVar3 = *(int **)(param_1 + 0x714);
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
  FUN_00adbb98(param_1 + 0x688);
  piVar3 = *(int **)(param_1 + 0x710);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1a50(*(undefined4 *)(param_1 + 0x710));
  }
  if (*(char *)(param_1 + 0x76a) != '\0') {
    FUN_00c8d7f8(param_1 + 0x360);
  }
  *(undefined1 *)(param_1 + 0x76a) = 0;
switchD_00c8df90_caseD_1:
  return;
}

