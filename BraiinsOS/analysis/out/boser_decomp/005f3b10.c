// FUN_005f3b10 @ 005f3b10 size=260 calls_out=2 calls_in=2
// strings: 

void FUN_005f3b10(int param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0x1c)) {
  case 3:
    if (*(char *)(param_1 + 0x58) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x54);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x30);
    }
    if (bVar2 && cVar1 == '\x04') {
      FUN_0193c3cc(param_1 + 0x34);
      return;
    }
    return;
  case 4:
    if (*(char *)(param_1 + 0x54) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x50);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x4c);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x2c);
      }
    }
    goto LAB_005f3bf0;
  case 5:
    if (*(char *)(param_1 + 0x54) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x50);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x4c);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x2c);
      }
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x60) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x5c);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x58);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x38);
      }
    }
    FUN_019f8c54(*(undefined4 *)(param_1 + 0xc),1);
    break;
  default:
    return;
  }
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x14),1);
LAB_005f3bf0:
  FUN_019f8c54(*(undefined4 *)(param_1 + 8),1);
  return;
}

