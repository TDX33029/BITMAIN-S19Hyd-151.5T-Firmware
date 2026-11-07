// FUN_00d24f24 @ 00d24f24 size=652 calls_out=11 calls_in=1
// strings: 

void FUN_00d24f24(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0xc)) {
  case 3:
    FUN_00d24f7c(param_1 + 0x10);
    return;
  case 4:
    break;
  case 5:
    if (*(char *)(param_1 + 0x1c) != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xb4);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0xa0);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_00c423b8(param_1 + 0x48);
    }
    piVar2 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01180e54(*(undefined4 *)(param_1 + 0x20));
      return;
    }
    return;
  case 6:
    if (*(char *)(param_1 + 0x1c) != '\x03') {
      if (*(char *)(param_1 + 0x1c) != '\x04') {
        return;
      }
      cVar1 = *(char *)(param_1 + 0xd4);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xc0);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x68);
      }
      FUN_00c058e0(param_1 + 0x20);
      return;
    }
    if (*(char *)(param_1 + 0x60) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x5d) != '\x03') {
      return;
    }
    FUN_00fe4378(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    piVar2 = *(int **)(param_1 + 0x4c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01180ffc(*(undefined4 *)(param_1 + 0x4c));
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    piVar2 = *(int **)(param_1 + 0x48);
    *(undefined1 *)(param_1 + 0x59) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0117fe74(*(undefined4 *)(param_1 + 0x48));
    }
    piVar2 = *(int **)(param_1 + 0x44);
    *(undefined1 *)(param_1 + 0x5a) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121d018(*(undefined4 *)(param_1 + 0x44));
    }
    piVar2 = *(int **)(param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x5b) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011772ac(*(undefined4 *)(param_1 + 0x40));
    }
    *(undefined1 *)(param_1 + 0x5c) = 0;
    return;
  case 7:
    if (*(char *)(param_1 + 0x1c) != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xb4);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0xa0);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_00c423b8(param_1 + 0x48);
    }
    piVar2 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01177340(*(undefined4 *)(param_1 + 0x20));
      return;
    }
    return;
  default:
    return;
  }
  if (*(char *)(param_1 + 0x1c) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xb4);
  bVar4 = cVar1 == '\x03';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0xa0);
  }
  if (bVar4 && cVar1 == '\x03') {
    FUN_00c423b8(param_1 + 0x48);
  }
  piVar2 = *(int **)(param_1 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a97218(*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}

