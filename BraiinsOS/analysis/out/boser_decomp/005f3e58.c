// FUN_005f3e58 @ 005f3e58 size=168 calls_out=2 calls_in=5
// strings: 

void FUN_005f3e58(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == '\0') {
    FUN_006a41c0(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x58) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x54);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x50);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x30);
      }
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 100) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x60);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x5c);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x3c);
      }
    }
    FUN_006a41c0(param_1 + 0x24);
  }
  FUN_006a41c0(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}

