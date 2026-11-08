// FUN_00e13434 @ 00e13434 size=144 calls_out=3 calls_in=3
// strings: 

void FUN_00e13434(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x10) != '\x03') {
    if (*(char *)(param_1 + 0x10) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x5c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x58);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x54);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x34);
      }
    }
    FUN_00b0db90(param_1 + 0x14);
    FUN_019f8c54(*(undefined4 *)(param_1 + 8),1);
    return;
  }
  if (*(char *)(param_1 + 0x48) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x44);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x40);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x20);
      return;
    }
  }
  return;
}

