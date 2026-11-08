// FUN_00b99500 @ 00b99500 size=52 calls_out=1 calls_in=61
// strings: 

void FUN_00b99500(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0xb8);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xb6);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00b76614(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xb4) = 0;
    return;
  }
  return;
}

