// FUN_00740fe0 @ 00740fe0 size=52 calls_out=1 calls_in=2
// strings: 

void FUN_00740fe0(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x48);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x45);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_005f53e0(param_1 + 0x1c);
    *(undefined1 *)(param_1 + 0x44) = 0;
    return;
  }
  return;
}

