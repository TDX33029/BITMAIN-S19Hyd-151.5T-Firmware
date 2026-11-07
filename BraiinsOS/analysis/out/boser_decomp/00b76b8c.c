// FUN_00b76b8c @ 00b76b8c size=56 calls_out=1 calls_in=3
// strings: 

void FUN_00b76b8c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xb8) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x7c);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xb4);
    }
    if (bVar2 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0xb0) == '\x03') {
        FUN_0121d24c(param_1 + 0x90);
        return;
      }
      return;
    }
  }
  return;
}

