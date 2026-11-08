// FUN_009f6f84 @ 009f6f84 size=52 calls_out=1 calls_in=12
// strings: 

void FUN_009f6f84(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x8c) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x7c);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x6c);
    }
    if (bVar2 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x58) == '\x03') {
        FUN_009f6fb8();
        return;
      }
      return;
    }
  }
  return;
}

