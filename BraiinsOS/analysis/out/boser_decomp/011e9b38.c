// FUN_011e9b38 @ 011e9b38 size=164 calls_out=7 calls_in=2
// strings: 

void FUN_011e9b38(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x49)) {
  case 0:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
    FUN_011e7820(param_1 + 0x34);
    FUN_005faf6c(param_1 + 0x38);
    return;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0xe2) == '\x03') {
      FUN_00b76614(param_1 + 0x50);
      *(undefined2 *)(param_1 + 0xe0) = 0;
    }
    break;
  case 4:
    FUN_011e9c6c(param_1 + 0x60);
    FUN_011e9d50(*(undefined1 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    break;
  case 5:
    FUN_011e9c9c(param_1 + 0x50);
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  FUN_005faf6c(param_1 + 0x30);
  FUN_011e7820(param_1 + 0x2c);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  return;
}

