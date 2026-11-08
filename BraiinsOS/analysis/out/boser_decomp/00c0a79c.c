// FUN_00c0a79c @ 00c0a79c size=56 calls_out=1 calls_in=6
// strings: 

void FUN_00c0a79c(int param_1)

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
      if (*(char *)(param_1 + 0x34) == '\x03') {
        FUN_0193c3cc(param_1 + 0x14);
        return;
      }
      return;
    }
  }
  return;
}

