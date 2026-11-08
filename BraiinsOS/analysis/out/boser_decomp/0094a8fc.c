// FUN_0094a8fc @ 0094a8fc size=64 calls_out=2 calls_in=2
// strings: 

void FUN_0094a8fc(int param_1)

{
  if (*(char *)(param_1 + 0x148) != '\x03') {
    return;
  }
  FUN_008b6720(param_1 + 0xb4);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  if (*(int *)(param_1 + 0x54) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  return;
}

