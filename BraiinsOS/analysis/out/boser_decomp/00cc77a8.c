// FUN_00cc77a8 @ 00cc77a8 size=876 calls_out=7 calls_in=1
// strings: 

void FUN_00cc77a8(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0xc)) {
  case 3:
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      if (*(char *)(param_1 + 0x44) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x40);
        bVar4 = cVar1 == '\x03';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 0x3c);
        }
        if (bVar4 && cVar1 == '\x03') {
          FUN_00fe4378(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
          return;
        }
      }
    }
    else if (*(char *)(param_1 + 0x1c) == '\x04') {
      cVar1 = *(char *)(param_1 + 0xbc);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xa8);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x50);
      }
      if (*(int *)(param_1 + 0x20) == -0x80000000) {
        return;
      }
      FUN_019bb7e0(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
      return;
    }
    return;
  case 4:
  case 5:
    break;
  case 6:
    if (*(char *)(param_1 + 0x1c) == '\x04') {
      if (*(char *)(param_1 + 200) == '\x03') {
        cVar1 = *(char *)(param_1 + 0xb4);
        bVar4 = cVar1 == '\x03';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 0xa0);
        }
        if (bVar4 && cVar1 == '\x03') {
          FUN_00c423b8(param_1 + 0x48);
        }
      }
      piVar2 = *(int **)(param_1 + 0x20);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar4 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar4);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_011772ac(*(undefined4 *)(param_1 + 0x20));
          return;
        }
        return;
      }
    }
    return;
  case 7:
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      if (*(char *)(param_1 + 0x69) == '\x03') {
        FUN_00cc7ec0(param_1 + 0x20);
        *(undefined1 *)(param_1 + 0x68) = 0;
      }
    }
    else if (*(char *)(param_1 + 0x1c) == '\x04') {
      cVar1 = *(char *)(param_1 + 0xbc);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xa8);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x50);
      }
      if (*(int *)(param_1 + 0x20) == -0x80000000) {
        return;
      }
      FUN_019bb7e0(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
      return;
    }
    return;
  case 8:
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      if (*(char *)(param_1 + 0x5d) != '\x03') {
        return;
      }
      FUN_00cc7e54(param_1 + 0x20);
      *(undefined1 *)(param_1 + 0x5c) = 0;
    }
    else if (*(char *)(param_1 + 0x1c) == '\x04') {
      cVar1 = *(char *)(param_1 + 0xc4);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xb0);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x58);
      }
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
      return;
    }
    return;
  case 9:
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      if (*(char *)(param_1 + 0x44) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x40);
        bVar4 = cVar1 == '\x03';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 0x34);
        }
        if (bVar4 && cVar1 == '\x03') {
          FUN_00fe4378(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
          return;
        }
      }
    }
    else if (*(char *)(param_1 + 0x1c) == '\x04') {
      cVar1 = *(char *)(param_1 + 0xbc);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xa8);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x50);
      }
      if (*(int *)(param_1 + 0x20) == -0x80000000) {
        return;
      }
      FUN_019bb7e0(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
      return;
    }
    return;
  case 10:
    cVar1 = *(char *)(param_1 + 0x1c);
    if (cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0xb0);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xac);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00ba6ec8(param_1 + 0x28);
        return;
      }
    }
    else {
      bVar4 = cVar1 == '\x04';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xb4);
      }
      if (bVar4 && cVar1 == '\x03') {
        if (*(char *)(param_1 + 0xa0) == '\x03') {
          FUN_00c423b8(param_1 + 0x48);
          return;
        }
        return;
      }
    }
    return;
  case 0xb:
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      if (*(char *)(param_1 + 0x5d) == '\x03') {
        FUN_00cc7e54(param_1 + 0x20);
        *(undefined1 *)(param_1 + 0x5c) = 0;
      }
    }
    else if (*(char *)(param_1 + 0x1c) == '\x04') {
      cVar1 = *(char *)(param_1 + 0xbc);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xa8);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x50);
      }
      if (*(int *)(param_1 + 0x20) == -0x80000000) {
        return;
      }
      FUN_019bb7e0(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
      return;
    }
    return;
  case 0xc:
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      if (*(char *)(param_1 + 0x609) == '\x03') {
        FUN_00cc7c80(param_1 + 0x20);
        *(undefined1 *)(param_1 + 0x608) = 0;
      }
    }
    else if (*(char *)(param_1 + 0x1c) == '\x04') {
      cVar1 = *(char *)(param_1 + 0xbc);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xa8);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x50);
      }
      if (*(int *)(param_1 + 0x20) == -0x80000000) {
        return;
      }
      FUN_019bb7e0(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
      return;
    }
    return;
  case 0xd:
  case 0xe:
    if (*(char *)(param_1 + 0x1c) != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xbc);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0xa8);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_00c423b8(param_1 + 0x50);
    }
    if (*(int *)(param_1 + 0x20) == -0x80000000) {
      return;
    }
    FUN_019bb7e0(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
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
    FUN_011772ac(*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}

