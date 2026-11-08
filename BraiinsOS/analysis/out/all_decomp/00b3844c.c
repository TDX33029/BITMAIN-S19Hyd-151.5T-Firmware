// FUN_00b3844c @ 00b3844c size=1652 calls_out=23 calls_in=1
// strings: 

void FUN_00b3844c(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  switch(*(undefined1 *)(param_1 + 0x8a4)) {
  case 0:
    piVar3 = *(int **)(param_1 + 0x870);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d030dc(*(undefined4 *)(param_1 + 0x870));
    }
    FUN_00b40624(param_1 + 0x358);
    FUN_00b40204(param_1 + 0x874);
    piVar3 = *(int **)(param_1 + 0x880);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078d010(*(undefined4 *)(param_1 + 0x880));
    }
    FUN_00b40340(param_1 + 0x328);
    FUN_00adbed4(param_1);
    piVar3 = *(int **)(param_1 + 0x3a4);
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa7b14(*(undefined4 *)(param_1 + 0x3a4));
      }
    }
    piVar3 = *(int **)(param_1 + 0x3a0);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa6194(*(undefined4 *)(param_1 + 0x3a0));
    }
    FUN_00b351e8(param_1 + 0x3a8);
    iVar5 = *(int *)(param_1 + 0x3b8);
    piVar3 = (int *)(iVar5 + 0xfc);
    do {
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      FUN_0163b708(iVar5 + 0xe8);
    }
    piVar3 = *(int **)(param_1 + 0x3b8);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aad1e0(*(undefined4 *)(param_1 + 0x3b8));
      return;
    }
    return;
  default:
    goto switchD_00b38468_caseD_1;
  case 3:
    FUN_00b4088c(param_1 + 0x8b8);
    goto LAB_00b388f0;
  case 4:
    if ((*(char *)(param_1 + 0x8d0) == '\x03') && (*(int *)(param_1 + 0x8c8) != 0)) {
      FUN_00c81a4c(*(int *)(param_1 + 0x8c8),*(undefined4 *)(param_1 + 0x8cc),1);
    }
    goto LAB_00b388f0;
  case 5:
    FUN_00b43ea4(param_1 + 0x8c0);
    goto LAB_00b388e8;
  case 6:
    FUN_00b447f0(param_1 + 0x8b8);
    goto LAB_00b388d4;
  case 7:
    FUN_00b47e0c(param_1 + 0x8b8);
    goto LAB_00b388d4;
  case 8:
    cVar2 = *(char *)(param_1 + 0x904);
    if (cVar2 != '\x03') goto LAB_00b38768;
    FUN_00b335a4(param_1 + 0x8c8);
LAB_00b38ae4:
    *(undefined1 *)(param_1 + 0x905) = 0;
    cVar2 = *(char *)(param_1 + 0x8a5);
    break;
  case 9:
    if (*(char *)(param_1 + 0x8e0) == '\x03') {
      puVar8 = *(undefined4 **)(param_1 + 0x8d4);
      uVar7 = *(undefined4 *)(param_1 + 0x8d0);
      pcVar4 = (code *)*puVar8;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar7);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
        cVar2 = *(char *)(param_1 + 0x8a5);
        break;
      }
    }
    goto LAB_00b38860;
  case 10:
    cVar2 = *(char *)(param_1 + 0x904);
    if (cVar2 == '\x03') {
      FUN_00b335a4(param_1 + 0x8c8);
      goto LAB_00b38ae4;
    }
LAB_00b38768:
    if ((cVar2 != '\0') || (*(int *)(param_1 + 0x8b8) == 0)) goto LAB_00b38860;
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8bc));
    cVar2 = *(char *)(param_1 + 0x8a5);
    break;
  case 0xb:
    if (*(char *)(param_1 + 0x908) == '\x03') {
      FUN_00b335a4(param_1 + 0x8cc);
      *(undefined1 *)(param_1 + 0x909) = 0;
    }
    else if ((*(char *)(param_1 + 0x908) == '\0') && (*(int *)(param_1 + 0x8bc) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8c0));
    }
    piVar3 = *(int **)(param_1 + 0x8b8);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d06854(*(undefined4 *)(param_1 + 0x8b8));
    }
    *(undefined1 *)(param_1 + 0x8af) = 0;
LAB_00b38860:
    cVar2 = *(char *)(param_1 + 0x8a5);
    break;
  case 0xc:
    if (*(char *)(param_1 + 0x908) == '\x03') {
      iVar5 = 0x909;
      FUN_00b335a4(param_1 + 0x8cc);
LAB_00b387b8:
      *(undefined1 *)(param_1 + iVar5) = 0;
    }
    else if ((*(char *)(param_1 + 0x908) == '\0') && (*(int *)(param_1 + 0x8bc) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8c0));
    }
    goto LAB_00b387c0;
  case 0xd:
    if (*(char *)(param_1 + 0x904) == '\x03') {
      iVar5 = 0x905;
      FUN_00b335a4(param_1 + 0x8c8);
      goto LAB_00b387b8;
    }
    if ((*(char *)(param_1 + 0x904) == '\0') && (*(int *)(param_1 + 0x8b8) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8bc));
    }
    goto LAB_00b387c0;
  case 0xe:
    FUN_00b317ec(param_1 + 0x8b8);
LAB_00b387c0:
    if (*(char *)(param_1 + 0x8ad) != '\0') {
      piVar3 = *(int **)(param_1 + 0x8b8);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d030dc(*(undefined4 *)(param_1 + 0x8b8));
      }
    }
    *(undefined1 *)(param_1 + 0x8ad) = 0;
    cVar2 = *(char *)(param_1 + 0x8a5);
  }
  if (cVar2 != '\0') {
    piVar3 = *(int **)(param_1 + 0x8a0);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1a50(*(undefined4 *)(param_1 + 0x8a0));
    }
  }
  piVar3 = *(int **)(param_1 + 0x89c);
  *(undefined1 *)(param_1 + 0x8a5) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1030(*(undefined4 *)(param_1 + 0x89c));
  }
LAB_00b388d4:
  if (*(char *)(param_1 + 0x8ae) != '\0') {
    FUN_00b48248(param_1 + 0x780);
  }
LAB_00b388e8:
  *(undefined1 *)(param_1 + 0x8ae) = 0;
LAB_00b388f0:
  *(undefined1 *)(param_1 + 0x8b0) = 0;
  if (*(char *)(param_1 + 0x8a6) != '\0') {
    iVar5 = *(int *)(param_1 + 0x778);
    piVar3 = (int *)(iVar5 + 0xfc);
    do {
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      FUN_0163b708(iVar5 + 0xe8);
    }
    piVar3 = *(int **)(param_1 + 0x778);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aad1e0(*(undefined4 *)(param_1 + 0x778));
    }
  }
  *(undefined1 *)(param_1 + 0x8a6) = 0;
  if (*(char *)(param_1 + 0x8a7) != '\0') {
    FUN_00b351e8(param_1 + 0x768);
  }
  *(undefined1 *)(param_1 + 0x8a7) = 0;
  if (*(char *)(param_1 + 0x8a8) != '\0') {
    piVar3 = *(int **)(param_1 + 0x764);
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa7b14(*(undefined4 *)(param_1 + 0x764));
      }
    }
    piVar3 = *(int **)(param_1 + 0x760);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa6194(*(undefined4 *)(param_1 + 0x760));
    }
  }
  *(undefined1 *)(param_1 + 0x8a8) = 0;
  if (*(char *)(param_1 + 0x8a9) != '\0') {
    FUN_00adbed4(param_1 + 0x438);
  }
  *(undefined1 *)(param_1 + 0x8a9) = 0;
  if (*(char *)(param_1 + 0x8aa) != '\0') {
    FUN_00b40340(param_1 + 0x408);
  }
  *(undefined1 *)(param_1 + 0x8aa) = 0;
  if (*(char *)(param_1 + 0x8ab) != '\0') {
    piVar3 = *(int **)(param_1 + 0x894);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078d010(*(undefined4 *)(param_1 + 0x894));
    }
  }
  *(undefined1 *)(param_1 + 0x8ab) = 0;
  if (*(char *)(param_1 + 0x8ac) != '\0') {
    FUN_00b40204(param_1 + 0x888);
  }
  *(undefined1 *)(param_1 + 0x8ac) = 0;
  FUN_00b40624(param_1 + 0x3c0);
  piVar3 = *(int **)(param_1 + 0x884);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d030dc(*(undefined4 *)(param_1 + 0x884));
    return;
  }
switchD_00b38468_caseD_1:
  return;
}

