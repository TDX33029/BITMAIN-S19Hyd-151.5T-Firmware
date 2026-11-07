// FUN_00c320c4 @ 00c320c4 size=132 calls_out=3 calls_in=0
// strings: 

void FUN_00c320c4(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x03') {
    if (*(char *)(param_1 + 0xc) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x100) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xec);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0xd8);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_00ba638c(param_1 + 0x80);
      }
    }
    FUN_00c32298(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 0x408) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x3f8);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x3ec);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00c32160(param_1 + 0x10);
      return;
    }
  }
  return;
}

