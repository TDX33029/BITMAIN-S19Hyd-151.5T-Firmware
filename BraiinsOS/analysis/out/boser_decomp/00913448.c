// FUN_00913448 @ 00913448 size=96 calls_out=3 calls_in=1
// strings: 

void FUN_00913448(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x03') {
    if (*(char *)(param_1 + 0xc) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xac) == '\x03') {
      FUN_008be1e4(param_1 + 0x40);
    }
    FUN_00b5f0e4(param_1 + 0x10);
    return;
  }
  cVar1 = *(char *)(param_1 + 100);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x60);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00bba254(param_1 + 0x20);
    return;
  }
  return;
}

