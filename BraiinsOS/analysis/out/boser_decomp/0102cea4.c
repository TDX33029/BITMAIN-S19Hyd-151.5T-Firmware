// FUN_0102cea4 @ 0102cea4 size=64 calls_out=2 calls_in=0
// strings: 

void FUN_0102cea4(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xc4);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xb0);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_0102bd74(param_1 + 0x58);
  }
  FUN_0102ce80(param_1 + 0x10);
  return;
}

