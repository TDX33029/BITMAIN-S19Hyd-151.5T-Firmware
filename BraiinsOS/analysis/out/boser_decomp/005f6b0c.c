// FUN_005f6b0c @ 005f6b0c size=44 calls_out=2 calls_in=3
// strings: 

void FUN_005f6b0c(int param_1)

{
  if (*(int *)(param_1 + 0xc4) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200));
  }
  FUN_01a2affc(param_1);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
  return;
}

