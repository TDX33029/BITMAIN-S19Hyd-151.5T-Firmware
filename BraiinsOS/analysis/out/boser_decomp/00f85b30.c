// FUN_00f85b30 @ 00f85b30 size=324 calls_out=3 calls_in=1
// strings: 

void FUN_00f85b30(int param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0x30)) {
  case 3:
    if (*(char *)(param_1 + 0x68) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 100);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x60);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x40);
      return;
    }
    return;
  case 4:
    if (*(char *)(param_1 + 0x68) == '\x03') {
      cVar1 = *(char *)(param_1 + 100);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x60);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x40);
      }
    }
    goto LAB_00f85c20;
  case 5:
    if (*(char *)(param_1 + 0x68) == '\x03') {
      cVar1 = *(char *)(param_1 + 100);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x60);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x40);
      }
    }
    goto LAB_00f85c14;
  case 6:
    if (*(char *)(param_1 + 0x68) == '\x03') {
      cVar1 = *(char *)(param_1 + 100);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x60);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x40);
      }
    }
    break;
  case 7:
    if (*(char *)(param_1 + 0x74) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x70);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x6c);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x4c);
      }
    }
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x28),1);
    break;
  default:
    return;
  }
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x20),1);
LAB_00f85c14:
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x18),1);
LAB_00f85c20:
  FUN_00f85cfc(param_1 + 0xc);
  FUN_019f8c54(*(undefined4 *)(param_1 + 4),1);
  return;
}

