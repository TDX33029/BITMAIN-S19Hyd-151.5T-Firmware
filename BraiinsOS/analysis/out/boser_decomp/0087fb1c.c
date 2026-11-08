// FUN_0087fb1c @ 0087fb1c size=92 calls_out=2 calls_in=1
// strings: 

void FUN_0087fb1c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0xb4) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xa4);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x90);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x38);
        return;
      }
    }
  }
  else {
    bVar2 = cVar1 == '\x06';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xb4);
    }
    if (bVar2 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0xa4) == '\x03') {
        FUN_00c785f4(param_1 + 0x38);
        return;
      }
      return;
    }
  }
  return;
}

