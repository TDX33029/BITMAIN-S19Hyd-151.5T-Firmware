// FUN_00bef728 @ 00bef728 size=108 calls_out=3 calls_in=0
// strings: 

void FUN_00bef728(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x03') {
    if (*(char *)(param_1 + 0xc) != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xb4);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xa0);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00ba638c(param_1 + 0x48);
    }
    FUN_00befa70(param_1 + 0x34);
    return;
  }
  cVar1 = *(char *)(param_1 + 0x44);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x40);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00bef8d8(param_1 + 0x20);
    return;
  }
  return;
}

