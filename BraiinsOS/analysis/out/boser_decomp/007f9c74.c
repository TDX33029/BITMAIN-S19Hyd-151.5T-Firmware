// FUN_007f9c74 @ 007f9c74 size=40 calls_out=1 calls_in=0
// strings: 

void FUN_007f9c74(int param_1)

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
      FUN_00c423b8();
      return;
    }
    return;
  }
  return;
}

