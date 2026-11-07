// FUN_0084f714 @ 0084f714 size=56 calls_out=1 calls_in=3
// strings: 

void FUN_0084f714(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x44) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x40);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x3c);
    }
    if (bVar2 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x38) == '\x03') {
        FUN_0193c3cc(param_1 + 0x18);
        return;
      }
      return;
    }
  }
  return;
}

