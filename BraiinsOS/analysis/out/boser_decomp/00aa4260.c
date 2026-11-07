// FUN_00aa4260 @ 00aa4260 size=52 calls_out=1 calls_in=6
// strings: 

void FUN_00aa4260(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x94) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x80);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x6c);
    }
    if (bVar2 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x58) == '\x03') {
        FUN_00ba638c();
        return;
      }
      return;
    }
  }
  return;
}

