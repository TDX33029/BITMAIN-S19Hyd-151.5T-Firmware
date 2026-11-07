// FUN_008ab120 @ 008ab120 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_008ab120(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 == '\x04') {
    FUN_007eb59c(param_1 + 0x38);
    return;
  }
  bVar2 = cVar1 == '\x06';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xb4);
  }
  if (bVar2 && cVar1 == '\x03') {
    if (*(char *)(param_1 + 0xa4) == '\x03') {
      FUN_007c7b04(param_1 + 0x38);
      return;
    }
    return;
  }
  return;
}

