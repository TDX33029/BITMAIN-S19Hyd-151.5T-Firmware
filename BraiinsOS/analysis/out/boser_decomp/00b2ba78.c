// FUN_00b2ba78 @ 00b2ba78 size=52 calls_out=1 calls_in=4
// strings: 

void FUN_00b2ba78(int param_1)

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
        FUN_00b238c8();
        return;
      }
      return;
    }
  }
  return;
}

