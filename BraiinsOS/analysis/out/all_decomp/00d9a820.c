// FUN_00d9a820 @ 00d9a820 size=64 calls_out=3 calls_in=1
// strings: 

void FUN_00d9a820(int param_1)

{
  if (*(char *)(param_1 + 0x9a) != '\x03') {
    return;
  }
  FUN_005e6cdc(param_1);
  if (*(int *)(param_1 + 0xc) != -1) {
    FUN_016dffb2();
  }
  FUN_00a414e8(param_1);
  *(undefined2 *)(param_1 + 0x98) = 0;
  return;
}

