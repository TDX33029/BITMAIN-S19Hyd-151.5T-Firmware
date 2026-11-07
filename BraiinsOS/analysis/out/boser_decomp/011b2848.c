// FUN_011b2848 @ 011b2848 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_011b2848(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xb4);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xa0);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_01192a14(param_1 + 0x48);
  }
  FUN_00c0555c(param_1 + 0x10);
  return;
}

