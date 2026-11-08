// FUN_005f5ea8 @ 005f5ea8 size=48 calls_out=1 calls_in=2
// strings: 

void FUN_005f5ea8(int param_1)

{
  if (*(char *)(param_1 + 0x19) != '\x03') {
    return;
  }
  if (*(int *)(param_1 + 4) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}

