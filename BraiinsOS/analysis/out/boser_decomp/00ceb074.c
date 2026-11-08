// FUN_00ceb074 @ 00ceb074 size=56 calls_out=1 calls_in=1
// strings: 

void FUN_00ceb074(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x06') {
    cVar1 = *(char *)(param_1 + 0xb4);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xa4);
    }
    if (bVar2 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x90) == '\x03') {
        FUN_00c423b8(param_1 + 0x38);
        return;
      }
      return;
    }
  }
  return;
}

