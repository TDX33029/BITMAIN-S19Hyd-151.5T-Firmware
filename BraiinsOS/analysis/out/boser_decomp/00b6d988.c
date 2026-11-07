// FUN_00b6d988 @ 00b6d988 size=116 calls_out=3 calls_in=2
// strings: 

void FUN_00b6d988(int param_1)

{
  if (*(char *)(param_1 + 0x14c) == '\x03') {
    FUN_00b6d924(param_1 + 0xe0);
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
  FUN_011f6f44(param_1);
  return;
}

