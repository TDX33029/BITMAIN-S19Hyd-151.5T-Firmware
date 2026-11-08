// FUN_00df4240 @ 00df4240 size=108 calls_out=3 calls_in=1
// strings: 

void FUN_00df4240(int param_1)

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
      FUN_00df41b8(param_1 + 0x48);
    }
    FUN_00df3d34(param_1 + 0x34);
    return;
  }
  cVar1 = *(char *)(param_1 + 0x68);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 100);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00c14bf0(param_1 + 0x20);
    return;
  }
  return;
}

