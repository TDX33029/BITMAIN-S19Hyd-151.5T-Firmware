// FUN_00fc5284 @ 00fc5284 size=112 calls_out=2 calls_in=0
// strings: 

void FUN_00fc5284(int param_1)

{
  if (*(char *)(param_1 + 6) == '\x03') {
    if (*(short *)(param_1 + 8) == 3) {
      FUN_0183a528(param_1 + 0xc);
    }
  }
  else {
    if (*(char *)(param_1 + 6) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x6c) == '\x03') {
      FUN_01a6bbbc(param_1 + 0x50);
    }
    if (*(char *)(param_1 + 8) != '\x04') {
      FUN_0183a528();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}

