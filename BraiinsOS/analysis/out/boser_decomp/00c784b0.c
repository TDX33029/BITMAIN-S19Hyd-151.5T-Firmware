// FUN_00c784b0 @ 00c784b0 size=100 calls_out=3 calls_in=2
// strings: 

void FUN_00c784b0(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x5d0) == '\x03') {
      FUN_00bb7a58(param_1 + 0x10);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xa4);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x90);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00c423b8(param_1 + 0x38);
  }
  FUN_00b9a7e0(param_1 + 0xa8);
  return;
}

