// FUN_00ba8eac @ 00ba8eac size=40 calls_out=1 calls_in=0
// strings: 

void FUN_00ba8eac(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x7c);
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
  return;
}

