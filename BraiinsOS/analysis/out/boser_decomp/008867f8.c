// FUN_008867f8 @ 008867f8 size=100 calls_out=2 calls_in=1
// strings: 

void FUN_008867f8(int param_1)

{
  if (*(char *)(param_1 + 0x69c) != '\0') {
    if (*(char *)(param_1 + 0x69c) == '\x03') {
      FUN_00886630(param_1);
      return;
    }
    return;
  }
  if (*(int *)(param_1 + 0x678) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x678),*(undefined4 *)(param_1 + 0x67c));
  }
  if (*(int *)(param_1 + 0x684) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x684),*(undefined4 *)(param_1 + 0x688));
  }
  if (*(int *)(param_1 + 0x690) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x690),*(undefined4 *)(param_1 + 0x694));
  return;
}

