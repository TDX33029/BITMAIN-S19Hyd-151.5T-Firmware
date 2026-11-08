// FUN_00df1b14 @ 00df1b14 size=56 calls_out=1 calls_in=0
// strings: 

void FUN_00df1b14(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0x10))
              (param_1 + 0x1c,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  }
  FUN_0077749c(param_1);
  return;
}

