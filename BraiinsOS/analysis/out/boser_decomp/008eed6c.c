// FUN_008eed6c @ 008eed6c size=108 calls_out=3 calls_in=1
// strings: 

void FUN_008eed6c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x6e5) != '\x03') {
      return;
    }
    FUN_008ee6d0(param_1 + 0x10);
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
      FUN_00ba638c(param_1 + 0x68);
    }
    FUN_0084f298(param_1 + 0x10);
    return;
  }
  return;
}

