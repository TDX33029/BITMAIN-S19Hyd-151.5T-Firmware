// FUN_0084e208 @ 0084e208 size=108 calls_out=3 calls_in=1
// strings: 

void FUN_0084e208(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x03') {
    if (*(char *)(param_1 + 0xc) != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xd4);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xc0);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00c423b8(param_1 + 0x68);
    }
    FUN_0084f688(param_1 + 0x38);
    return;
  }
  cVar1 = *(char *)(param_1 + 0x74);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x70);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_0084f714(param_1 + 0x28);
    return;
  }
  return;
}

