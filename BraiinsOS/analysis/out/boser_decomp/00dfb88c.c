// FUN_00dfb88c @ 00dfb88c size=100 calls_out=3 calls_in=1
// strings: 

void FUN_00dfb88c(int param_1)

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
    FUN_00df41b8(param_1 + 0x88);
  }
  FUN_00c0a7d4(param_1 + 0x10);
  return;
}

