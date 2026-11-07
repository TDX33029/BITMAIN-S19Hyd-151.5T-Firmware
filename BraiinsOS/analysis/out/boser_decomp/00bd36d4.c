// FUN_00bd36d4 @ 00bd36d4 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_00bd36d4(int param_1)

{
  if (*(char *)(param_1 + 0x3d) == '\0') {
    FUN_005f76e0(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x3d) == '\x03') {
    FUN_00bd371c(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x3c) = 0;
    return;
  }
  return;
}

