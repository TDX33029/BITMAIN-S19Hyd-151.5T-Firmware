// FUN_0103b98c @ 0103b98c size=52 calls_out=1 calls_in=4
// strings: 

void FUN_0103b98c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x3c);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x39);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_0103bef0(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x38) = 0;
    return;
  }
  return;
}

