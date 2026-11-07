// FUN_00c87620 @ 00c87620 size=72 calls_out=2 calls_in=1
// strings: 

void FUN_00c87620(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x05') {
    if (*(char *)(param_1 + 0xc) == '\x06') {
      FUN_00c875c8(param_1 + 0x10);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x1c) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xc4);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xb4);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00cdd114(param_1 + 0x48);
      return;
    }
  }
  return;
}

