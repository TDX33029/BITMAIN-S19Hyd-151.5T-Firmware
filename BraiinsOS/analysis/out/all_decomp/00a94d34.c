// FUN_00a94d34 @ 00a94d34 size=28 calls_out=1 calls_in=1
// strings: 

void FUN_00a94d34(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x334);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x32c);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00a9166c(param_1 + 8);
    return;
  }
  return;
}

