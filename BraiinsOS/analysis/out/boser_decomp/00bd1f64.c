// FUN_00bd1f64 @ 00bd1f64 size=68 calls_out=3 calls_in=4
// strings: 

void FUN_00bd1f64(int param_1)

{
  if (*(char *)(param_1 + 0x2d) == '\x03') {
    FUN_005f0650(param_1 + 0x30);
  }
  else {
    if (*(char *)(param_1 + 0x2d) != '\x04') {
      return;
    }
    FUN_00b6fb24(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  FUN_019c71c4(param_1 + 0x20);
  return;
}

