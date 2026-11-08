// FUN_00a9039c @ 00a9039c size=52 calls_out=1 calls_in=8
// strings: 

void FUN_00a9039c(int param_1)

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
        FUN_01192a14();
        return;
      }
      return;
    }
  }
  return;
}

