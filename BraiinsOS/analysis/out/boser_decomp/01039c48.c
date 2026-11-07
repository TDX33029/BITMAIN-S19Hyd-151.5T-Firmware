// FUN_01039c48 @ 01039c48 size=80 calls_out=2 calls_in=0
// strings: 

void FUN_01039c48(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0xa0);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x9c);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00ba6ec8(param_1 + 0x18);
      return;
    }
  }
  else {
    bVar2 = cVar1 == '\x04';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xa4);
    }
    if (bVar2 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x90) == '\x03') {
        FUN_0102bd74(param_1 + 0x38);
        return;
      }
      return;
    }
  }
  return;
}

