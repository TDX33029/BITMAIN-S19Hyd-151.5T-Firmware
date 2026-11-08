// FUN_00740564 @ 00740564 size=52 calls_out=1 calls_in=23
// strings: 

void FUN_00740564(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x3c);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x39);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_005f53e0(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x38) = 0;
    return;
  }
  return;
}

