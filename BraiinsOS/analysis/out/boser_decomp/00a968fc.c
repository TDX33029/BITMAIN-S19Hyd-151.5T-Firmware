// FUN_00a968fc @ 00a968fc size=92 calls_out=2 calls_in=1
// strings: 

void FUN_00a968fc(int *param_1)

{
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  FUN_006a41c0(param_1 + 0x2c);
  if (param_1[0xe] != -0x80000000) {
    FUN_019bb7e0(param_1[0xe],param_1[0xf]);
  }
  if (param_1[0x20] != -0x80000000) {
    FUN_019bb7e0(param_1[0x20],param_1[0x21]);
  }
  if (param_1[0x28] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x28],param_1[0x29]);
  return;
}

