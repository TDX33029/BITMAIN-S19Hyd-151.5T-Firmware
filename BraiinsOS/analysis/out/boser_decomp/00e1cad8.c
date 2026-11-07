// FUN_00e1cad8 @ 00e1cad8 size=260 calls_out=2 calls_in=2
// strings: 

void FUN_00e1cad8(int param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0x40)) {
  case 3:
    if (*(char *)(param_1 + 0x78) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x74);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x70);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x50);
      return;
    }
    return;
  case 4:
    if (*(char *)(param_1 + 0x78) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x74);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x70);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x50);
      }
    }
    goto LAB_00e1cbb8;
  case 5:
    if (*(char *)(param_1 + 0x78) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x74);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x70);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x50);
      }
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x78) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x74);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x70);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x50);
      }
    }
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x38),1);
    break;
  default:
    return;
  }
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x14),1);
LAB_00e1cbb8:
  FUN_019f8c54(*(undefined4 *)(param_1 + 0xc),1);
  return;
}

