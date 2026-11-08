// FUN_00b76bc4 @ 00b76bc4 size=72 calls_out=2 calls_in=2
// strings: 

void FUN_00b76bc4(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0xc0);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x84);
  }
  if (bVar2 && cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0xbc);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xb8);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_0121d24c(param_1 + 0x98);
    }
  }
  FUN_01431b40(param_1);
  return;
}

