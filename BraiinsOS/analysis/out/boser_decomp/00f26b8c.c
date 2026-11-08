// FUN_00f26b8c @ 00f26b8c size=56 calls_out=1 calls_in=3
// strings: 

void FUN_00f26b8c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x58) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x1c);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x54);
    }
    if (bVar2 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x50) == '\x03') {
        FUN_0121d24c(param_1 + 0x30);
        return;
      }
      return;
    }
  }
  return;
}

