// FUN_005f2f60 @ 005f2f60 size=56 calls_out=1 calls_in=10
// strings: 

void FUN_005f2f60(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0x10))
              (param_1 + 0x1c,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  }
  FUN_00b76614(param_1);
  return;
}

