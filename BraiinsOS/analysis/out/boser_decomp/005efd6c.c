// FUN_005efd6c @ 005efd6c size=68 calls_out=3 calls_in=2
// strings: 

void FUN_005efd6c(int param_1)

{
  if (*(char *)(param_1 + 0x2d) == '\x03') {
    FUN_005f0650(param_1 + 0x30);
  }
  else {
    if (*(char *)(param_1 + 0x2d) != '\x04') {
      return;
    }
    FUN_005f70b4(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  FUN_019c71c4(param_1 + 0x20);
  return;
}

