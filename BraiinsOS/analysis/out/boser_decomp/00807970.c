// FUN_00807970 @ 00807970 size=176 calls_out=5 calls_in=1
// strings: 

void FUN_00807970(int param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0xc)) {
  case 4:
  case 6:
  case 8:
  case 10:
  case 0xc:
  case 0xe:
    if (*(char *)(param_1 + 0xec) == '\x03') {
      FUN_008079f8(param_1 + 0x38);
      return;
    }
  default:
    return;
  case 0x10:
    if (*(char *)(param_1 + 0xd4) == '\x03') {
      FUN_0083dcb8(param_1 + 0x38);
      return;
    }
    return;
  case 0x11:
    break;
  }
  if (*(char *)(param_1 + 0x1c) != '\x03') {
    if (*(char *)(param_1 + 0x1c) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xbc) == '\x03') {
      FUN_007c7b04(param_1 + 0x50);
    }
    FUN_00b5f0e4(param_1 + 0x20);
    return;
  }
  cVar1 = *(char *)(param_1 + 0x74);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x70);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00bba254(param_1 + 0x30);
    return;
  }
  return;
}

