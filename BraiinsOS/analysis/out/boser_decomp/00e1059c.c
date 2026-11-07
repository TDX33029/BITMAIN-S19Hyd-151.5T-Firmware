// FUN_00e1059c @ 00e1059c size=56 calls_out=1 calls_in=3
// strings: 

void FUN_00e1059c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x40) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x3c);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x38);
    }
    if (bVar2 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x14) == '\x04') {
        FUN_0193c3cc(param_1 + 0x18);
        return;
      }
      return;
    }
  }
  return;
}

