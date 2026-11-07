// FUN_014abf60 @ 014abf60 size=140 calls_out=4 calls_in=1
// strings: 

void FUN_014abf60(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x51);
  if (cVar1 == '\0') {
    param_1 = param_1 + 0x20;
  }
  else {
    if (cVar1 == '\x03') {
      if (*(byte *)(param_1 + 0x88) - 3 < 2) {
        FUN_01139b38(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(byte *)(param_1 + 0xbc) - 3 < 2) {
        FUN_01139b38(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4));
      }
      FUN_014ae850(param_1 + 0x60);
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
    FUN_0134aee0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),4,8);
  }
  FUN_00e0febc(param_1);
  return;
}

