// FUN_0064bf10 @ 0064bf10 size=80 calls_out=3 calls_in=6
// strings: 

void FUN_0064bf10(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0x10))
              (param_1 + 0x1c,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  }
  FUN_005e6cdc(param_1);
  if (*(int *)(param_1 + 0xc) != -1) {
    FUN_016dffb2();
  }
  FUN_00a414e8(param_1);
  return;
}

