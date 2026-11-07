// FUN_00bb7a58 @ 00bb7a58 size=84 calls_out=3 calls_in=10
// strings: 

void FUN_00bb7a58(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 8) != '\x03') {
    if (*(char *)(param_1 + 8) == '\x04') {
      FUN_00b99b94(param_1 + 0x18);
      FUN_0084ec48(param_1 + 0xc);
      return;
    }
    return;
  }
  cVar1 = *(char *)(param_1 + 0xd4);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xd0);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00b99500(param_1 + 0x14);
    return;
  }
  return;
}

