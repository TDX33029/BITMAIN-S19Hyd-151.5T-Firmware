// FUN_0094a660 @ 0094a660 size=84 calls_out=3 calls_in=1
// strings: 

void FUN_0094a660(int param_1)

{
  if (*(char *)(param_1 + 0x1b4) != '\x03') {
    return;
  }
  FUN_008b6720(param_1 + 0xf4);
  if (*(char *)(param_1 + 0xac) == '\x03') {
    FUN_00949900(param_1);
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8));
  if (*(int *)(param_1 + 0xd8) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc));
  return;
}

