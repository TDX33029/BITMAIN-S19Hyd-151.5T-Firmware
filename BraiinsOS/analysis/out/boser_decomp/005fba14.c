// FUN_005fba14 @ 005fba14 size=120 calls_out=4 calls_in=8
// strings: 

void FUN_005fba14(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x1e);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x75) == '\x03') {
      FUN_00740564(param_1 + 0x20);
      *(undefined1 *)(param_1 + 0x74) = 0;
    }
  }
  else if (cVar1 == '\x04') {
    FUN_005f0f88(param_1 + 0x20);
  }
  else {
    if (cVar1 != '\x05') {
      return;
    }
    if (*(char *)(param_1 + 0x50) == '\x03') {
      FUN_00b6bb40(param_1 + 0x30);
    }
  }
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_019bb7e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  return;
}

