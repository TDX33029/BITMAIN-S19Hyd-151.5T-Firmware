// FUN_00c8c198 @ 00c8c198 size=52 calls_out=1 calls_in=1
// strings: 

void FUN_00c8c198(int param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0xc)) {
  case 3:
    FUN_00c8b9c8(param_1 + 0x10);
    return;
  case 4:
  case 5:
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      if (*(char *)(param_1 + 0x44) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x40);
        bVar2 = cVar1 == '\x03';
        if (bVar2) {
          cVar1 = *(char *)(param_1 + 0x3c);
        }
        if (bVar2 && cVar1 == '\x03') {
          FUN_00fe4378(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
          return;
        }
      }
    }
    else if (*(char *)(param_1 + 0x1c) == '\x04') {
      cVar1 = *(char *)(param_1 + 0xbc);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0xa8);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x50);
      }
      if (*(int *)(param_1 + 0x20) == -0x80000000) {
        return;
      }
      FUN_019bb7e0(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
      return;
    }
    return;
  case 6:
    break;
  default:
    return;
  }
  if (*(char *)(param_1 + 0x1c) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xbc);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xa8);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00c423b8(param_1 + 0x50);
  }
  if (*(int *)(param_1 + 0x20) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  return;
}

