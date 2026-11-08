// FUN_00f6dbd0 @ 00f6dbd0 size=124 calls_out=5 calls_in=1
// strings: 

void FUN_00f6dbd0(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x14);
  if (cVar1 != '\x03') {
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x5bc) == '\x03') {
        FUN_00f68940(param_1 + 0x18);
      }
    }
    else {
      if (cVar1 != '\x05') {
        return;
      }
      FUN_01139b38(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      FUN_00e83cdc(param_1 + 0x20);
    }
    FUN_0084ec48(param_1 + 8);
    return;
  }
  cVar1 = *(char *)(param_1 + 0xe0);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xdc);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00b99500(param_1 + 0x20);
    return;
  }
  return;
}

