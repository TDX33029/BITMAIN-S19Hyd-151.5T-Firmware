// FUN_00cfcf98 @ 00cfcf98 size=332 calls_out=8 calls_in=1
// strings: 

void FUN_00cfcf98(int param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0xc)) {
  case 6:
    FUN_00cfcff4(param_1 + 0x10);
    return;
  case 7:
  case 8:
    break;
  case 9:
    if (*(char *)(param_1 + 0x1c) != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xd0);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xbc);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00cf32fc(param_1 + 0x50);
    }
    if (*(int *)(param_1 + 0x20) == -0x80000000) {
      return;
    }
    FUN_0132b958(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),4,4);
    return;
  case 10:
    FUN_00cfd168(param_1 + 0x10);
    return;
  case 0xb:
    if (*(char *)(param_1 + 0x1c) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xe0) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xcc);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0xb8);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x60);
      }
    }
    if (*(int *)(param_1 + 0x44) == 0 || *(int *)(param_1 + 0x44) == 3) {
      return;
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
    return;
  default:
    return;
  }
  if (*(char *)(param_1 + 0x1c) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xd0);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xbc);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00cfd268(param_1 + 0x50);
  }
  if (*(int *)(param_1 + 0x20) == -0x80000000) {
    return;
  }
  FUN_00be3f38((int *)(param_1 + 0x20));
  return;
}

