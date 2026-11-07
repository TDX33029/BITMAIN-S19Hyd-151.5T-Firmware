// FUN_00e1ce80 @ 00e1ce80 size=204 calls_out=2 calls_in=2
// strings: 

void FUN_00e1ce80(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x48);
  if (cVar1 != '\x03') {
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x80) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x7c);
        bVar2 = cVar1 == '\x03';
        if (bVar2) {
          cVar1 = *(char *)(param_1 + 0x78);
        }
        if (bVar2 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0x58);
        }
      }
    }
    else {
      if (cVar1 != '\x05') {
        return;
      }
      if (*(char *)(param_1 + 0x9c) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x98);
        bVar2 = cVar1 == '\x03';
        if (bVar2) {
          cVar1 = *(char *)(param_1 + 0x94);
        }
        if (bVar2 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0x74);
        }
      }
      FUN_019f8c54(*(undefined4 *)(param_1 + 0x40),1);
    }
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x38),1);
    return;
  }
  if (*(char *)(param_1 + 0x80) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x7c);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x78);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x58);
      return;
    }
  }
  return;
}

