// FUN_0083dd38 @ 0083dd38 size=44 calls_out=2 calls_in=1
// strings: 

void FUN_0083dd38(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 == '\b') {
    FUN_007eb59c(param_1 + 0x38);
    return;
  }
  bVar2 = cVar1 == '\n';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xd4);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_0083dcb8(param_1 + 0x38);
    return;
  }
  return;
}

