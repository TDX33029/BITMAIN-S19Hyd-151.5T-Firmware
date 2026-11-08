// FUN_00e83fc8 @ 00e83fc8 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_00e83fc8(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x5d0) == '\x03') {
      FUN_00e834c4(param_1 + 0x10);
      return;
    }
    return;
  }
  bVar2 = cVar1 == '\x04';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xb8);
  }
  if (bVar2 && cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0xa4);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x90);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00ba638c(param_1 + 0x38);
      return;
    }
  }
  return;
}

