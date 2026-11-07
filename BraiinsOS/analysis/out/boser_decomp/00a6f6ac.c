// FUN_00a6f6ac @ 00a6f6ac size=96 calls_out=3 calls_in=0
// strings: 

void FUN_00a6f6ac(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x03') {
    if (*(char *)(param_1 + 0xc) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x5c4) == '\x03') {
      FUN_00a7389c(param_1 + 0x20);
    }
    FUN_0084ec48(param_1 + 0x10);
    return;
  }
  cVar1 = *(char *)(param_1 + 0xd8);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xd4);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00b99500(param_1 + 0x18);
    return;
  }
  return;
}

