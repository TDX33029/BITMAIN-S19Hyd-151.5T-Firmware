// FUN_00bba254 @ 00bba254 size=56 calls_out=1 calls_in=42
// strings: 

void FUN_00bba254(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x3c) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x38);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x34);
    }
    if (bVar2 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x30) == '\x03') {
        FUN_0193c3cc(param_1 + 0x10);
        return;
      }
      return;
    }
  }
  return;
}

