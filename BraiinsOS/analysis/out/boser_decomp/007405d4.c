// FUN_007405d4 @ 007405d4 size=108 calls_out=3 calls_in=2
// strings: 

void FUN_007405d4(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 != '\x03') {
    if (cVar1 != '\x04') {
      if (cVar1 != '\x05') {
        return;
      }
      FUN_00741144(param_1 + 0x10);
    }
    FUN_019f8c54(*(undefined4 *)(param_1 + 8),1);
    return;
  }
  if (*(char *)(param_1 + 0x48) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x44);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x20);
    }
    if (bVar2 && cVar1 == '\x04') {
      FUN_0193c3cc(param_1 + 0x24);
      return;
    }
  }
  return;
}

