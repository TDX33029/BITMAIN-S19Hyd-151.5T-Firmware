// FUN_0084e310 @ 0084e310 size=108 calls_out=3 calls_in=1
// strings: 

void FUN_0084e310(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x6e5) != '\x03') {
      return;
    }
    FUN_0084f23c(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x6e4) = 0;
    *(undefined4 *)(param_1 + 0x6e0) = 0;
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xd4);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xc0);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00c423b8(param_1 + 0x68);
    }
    FUN_0084f298(param_1 + 0x10);
    return;
  }
  return;
}

