// FUN_00bd08a8 @ 00bd08a8 size=48 calls_out=2 calls_in=2
// strings: 

void FUN_00bd08a8(int param_1)

{
  if (*(char *)(param_1 + 0x2b5) == '\x03') {
    FUN_00bd0900(param_1 + 0x180);
    FUN_00bd2110(param_1);
    *(undefined1 *)(param_1 + 0x2b4) = 0;
    return;
  }
  return;
}

