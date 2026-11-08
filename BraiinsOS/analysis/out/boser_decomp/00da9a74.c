// FUN_00da9a74 @ 00da9a74 size=76 calls_out=4 calls_in=2
// strings: 

void FUN_00da9a74(int *param_1)

{
  if (*param_1 != 0 || param_1[1] != 0) {
    FUN_01ad7ee4(param_1 + 10);
    FUN_01ad8c98(param_1 + 0xd);
    FUN_01ad9bfc(param_1 + 0x10);
    if (param_1[2] != 0) {
      FUN_01ada488(param_1 + 2);
      return;
    }
  }
  return;
}

