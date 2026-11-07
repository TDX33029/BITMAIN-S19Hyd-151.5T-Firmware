// FUN_00c421d8 @ 00c421d8 size=100 calls_out=3 calls_in=2
// strings: 

void FUN_00c421d8(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x5c) == '\x03') {
      FUN_00c0a79c(param_1 + 0x18);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xf4);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xe0);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00c423b8(param_1 + 0x88);
  }
  FUN_00c42440(param_1 + 0x10);
  return;
}

