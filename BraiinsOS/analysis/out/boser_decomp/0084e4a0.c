// FUN_0084e4a0 @ 0084e4a0 size=108 calls_out=3 calls_in=1
// strings: 

void FUN_0084e4a0(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x67a) != '\x03') {
      return;
    }
    FUN_0084e9a4(param_1 + 0x10);
    *(undefined2 *)(param_1 + 0x678) = 0;
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xb4);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xa0);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00c423b8(param_1 + 0x48);
    }
    FUN_0084e9cc(param_1 + 0x34);
    return;
  }
  return;
}

