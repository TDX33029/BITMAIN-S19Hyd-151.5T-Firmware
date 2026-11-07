// FUN_01ad7054 @ 01ad7054 size=80 calls_out=5 calls_in=1
// strings: 

void FUN_01ad7054(int *param_1)

{
  if (*param_1 != 8) {
    FUN_01ad70f8(param_1);
  }
  FUN_01ad3410(param_1 + 0x5e);
  FUN_01ad7110(param_1 + 0x6c);
  FUN_01ad71c4(param_1 + 0x6f);
  if (param_1[100] == 0) {
    return;
  }
  FUN_01ada488(param_1 + 100);
  return;
}

