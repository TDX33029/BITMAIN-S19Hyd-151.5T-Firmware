// FUN_00c0a664 @ 00c0a664 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_00c0a664(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0x5e0);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x5d0);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00c0a5d8(param_1 + 0x10);
      return;
    }
  }
  else {
    bVar2 = cVar1 == '\x04';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xd0);
    }
    if (!bVar2 || cVar1 != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xbc);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xa8);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00ba638c(param_1 + 0x50);
      return;
    }
  }
  return;
}

