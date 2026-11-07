// FUN_005f1a9c @ 005f1a9c size=680 calls_out=6 calls_in=3
// strings: 

void FUN_005f1a9c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x93)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x80);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(*(undefined4 *)(param_1 + 0x80));
    }
    piVar2 = *(int **)(param_1 + 0x84);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(*(undefined4 *)(param_1 + 0x84));
    }
    piVar2 = *(int **)(param_1 + 0x88);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38338(*(undefined4 *)(param_1 + 0x88));
    }
    piVar2 = *(int **)(param_1 + 0x8c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(*(undefined4 *)(param_1 + 0x8c));
      return;
    }
    return;
  default:
    goto switchD_005f1ab8_caseD_1;
  case 3:
    cVar1 = *(char *)(param_1 + 0xc0);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0xbc);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x9c);
    }
    break;
  case 4:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0xc0);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0xbc);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x9c);
    }
    break;
  case 6:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
    break;
  case 7:
    cVar1 = *(char *)(param_1 + 0xc0);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0xbc);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x9c);
    }
    goto LAB_005f1c78;
  case 8:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    goto LAB_005f1c78;
  case 9:
    cVar1 = *(char *)(param_1 + 0xc0);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0xbc);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x9c);
    }
    goto LAB_005f1c78;
  case 10:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78));
LAB_005f1c78:
    FUN_005f8b4c(param_1);
    *(undefined1 *)(param_1 + 0x92) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(*(undefined4 *)(param_1 + 0x48));
  }
  piVar2 = *(int **)(param_1 + 0x44);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38338(*(undefined4 *)(param_1 + 0x44));
  }
  if (*(char *)(param_1 + 0x90) != '\0') {
    piVar2 = *(int **)(param_1 + 0x40);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(*(undefined4 *)(param_1 + 0x40));
    }
  }
  *(undefined1 *)(param_1 + 0x90) = 0;
  if (*(char *)(param_1 + 0x91) != '\0') {
    piVar2 = *(int **)(param_1 + 0x3c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(*(undefined4 *)(param_1 + 0x3c));
    }
  }
  *(undefined1 *)(param_1 + 0x91) = 0;
switchD_005f1ab8_caseD_1:
  return;
}

