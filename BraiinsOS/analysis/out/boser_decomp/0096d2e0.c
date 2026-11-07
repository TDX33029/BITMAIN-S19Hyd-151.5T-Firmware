// FUN_0096d2e0 @ 0096d2e0 size=92 calls_out=5 calls_in=4
// strings: 

void FUN_0096d2e0(int *param_1)

{
  if (*param_1 != 8) {
    FUN_00964d04(param_1);
  }
  if ((char)param_1[0x5e] != '\x06') {
    FUN_00db4764();
  }
  FUN_01ad7110(param_1 + 0x6c);
  FUN_01ad71c4(param_1 + 0x6f);
  if (param_1[100] == 0) {
    return;
  }
  FUN_01ada488(param_1 + 100);
  return;
}

