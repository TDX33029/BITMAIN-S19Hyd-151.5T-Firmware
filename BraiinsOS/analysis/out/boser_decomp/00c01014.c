// FUN_00c01014 @ 00c01014 size=56 calls_out=1 calls_in=1
// strings: 

void FUN_00c01014(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x5c) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x58);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x54);
    }
    if (bVar2 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x50) == '\x03') {
        FUN_0193c3cc(param_1 + 0x30);
        return;
      }
      return;
    }
  }
  return;
}

