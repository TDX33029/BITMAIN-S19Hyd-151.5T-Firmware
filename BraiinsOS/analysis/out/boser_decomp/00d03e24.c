// FUN_00d03e24 @ 00d03e24 size=108 calls_out=3 calls_in=1
// strings: 

void FUN_00d03e24(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x03') {
    if (*(char *)(param_1 + 0xc) != '\x04') {
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
    FUN_00c39b3c(param_1 + 0x34);
    return;
  }
  cVar1 = *(char *)(param_1 + 0xf8);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xeb);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00c39ac4(param_1 + 0x10);
    return;
  }
  return;
}

