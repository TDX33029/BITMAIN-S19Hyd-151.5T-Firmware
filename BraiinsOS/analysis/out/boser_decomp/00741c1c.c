// FUN_00741c1c @ 00741c1c size=116 calls_out=3 calls_in=4
// strings: 

void FUN_00741c1c(int param_1)

{
  if (*(char *)(param_1 + 0x14c) == '\x03') {
    FUN_00b8c628(param_1 + 0xe0);
    *(undefined2 *)(param_1 + 0x14d) = 0;
    if (*(int *)(param_1 + 0xd0) != 2) {
      FUN_007372d8();
    }
    *(undefined1 *)(param_1 + 0x14f) = 0;
    if (*(int *)(param_1 + 0xc0) != 2) {
      FUN_007372d8();
    }
    *(undefined1 *)(param_1 + 0x150) = 0;
    param_1 = param_1 + 0x60;
  }
  else if (*(char *)(param_1 + 0x14c) != '\0') {
    return;
  }
  FUN_010a7ed4(param_1);
  return;
}

