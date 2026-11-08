// FUN_012733a4 @ 012733a4 size=40 calls_out=2 calls_in=3
// strings: 

void FUN_012733a4(int param_1)

{
  if (*(int *)(param_1 + 0x18) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  FUN_00e0febc(param_1);
  return;
}

