// FUN_0084e434 @ 0084e434 size=84 calls_out=3 calls_in=1
// strings: 

void FUN_0084e434(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    FUN_0084ef48(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xb4);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xa0);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00c423b8(param_1 + 0x48);
  }
  FUN_0084e9cc(param_1 + 0x34);
  return;
}

