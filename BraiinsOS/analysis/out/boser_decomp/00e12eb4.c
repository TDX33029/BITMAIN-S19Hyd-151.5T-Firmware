// FUN_00e12eb4 @ 00e12eb4 size=84 calls_out=3 calls_in=4
// strings: 

void FUN_00e12eb4(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x98) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x84) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x80);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x7c);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x5c);
    }
  }
  FUN_015d1344(param_1 + 0x20);
  FUN_0118c3d0(param_1);
  return;
}

