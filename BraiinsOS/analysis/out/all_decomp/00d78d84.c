// FUN_00d78d84 @ 00d78d84 size=84 calls_out=2 calls_in=0
// strings: 

void FUN_00d78d84(int param_1)

{
  if (*(char *)(param_1 + 0xbd) == '\0') {
    FUN_00d78e00(param_1);
    return;
  }
  if (*(char *)(param_1 + 0xbd) != '\x03') {
    return;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_00e44660(*(int *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4),1);
  }
  FUN_00d78e00(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0xbc) = 0;
  return;
}

