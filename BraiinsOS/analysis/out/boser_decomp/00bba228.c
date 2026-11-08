// FUN_00bba228 @ 00bba228 size=44 calls_out=1 calls_in=0
// strings: 

void FUN_00bba228(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x34);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x30);
  }
  if (bVar2 && cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x2c) == '\x03') {
      FUN_0193c3cc(param_1 + 0xc);
      return;
    }
    return;
  }
  return;
}

