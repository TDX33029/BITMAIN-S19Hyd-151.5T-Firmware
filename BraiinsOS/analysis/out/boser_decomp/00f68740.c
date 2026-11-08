// FUN_00f68740 @ 00f68740 size=96 calls_out=3 calls_in=4
// strings: 

void FUN_00f68740(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 4) != '\x03') {
    if (*(char *)(param_1 + 4) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x5bc) == '\x03') {
      FUN_00f68940(param_1 + 0x18);
    }
    FUN_0084ec48(param_1 + 8);
    return;
  }
  cVar1 = *(char *)(param_1 + 0xd0);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xcc);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00b99500(param_1 + 0x10);
    return;
  }
  return;
}

