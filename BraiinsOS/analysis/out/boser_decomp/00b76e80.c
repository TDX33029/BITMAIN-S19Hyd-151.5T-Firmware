// FUN_00b76e80 @ 00b76e80 size=52 calls_out=1 calls_in=0
// strings: 

void FUN_00b76e80(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x234);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x221);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00b7a21c(param_1);
    *(undefined1 *)(param_1 + 0x220) = 0;
    return;
  }
  return;
}

