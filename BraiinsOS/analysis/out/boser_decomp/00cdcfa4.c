// FUN_00cdcfa4 @ 00cdcfa4 size=52 calls_out=1 calls_in=1
// strings: 

void FUN_00cdcfa4(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x90) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x7c);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x6c);
    }
    if (bVar2 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x58) == '\x03') {
        FUN_00c423b8();
        return;
      }
      return;
    }
  }
  return;
}

