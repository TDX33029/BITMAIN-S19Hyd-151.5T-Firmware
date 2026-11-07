// FUN_008f0550 @ 008f0550 size=104 calls_out=3 calls_in=1
// strings: 

void FUN_008f0550(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0xbd) != '\x03') {
      return;
    }
    FUN_0084e5c8(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0xbc) = 0;
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xbc);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xa8);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00ba638c(param_1 + 0x50);
    }
    FUN_0084e5ec(param_1 + 0x10);
    return;
  }
  return;
}

