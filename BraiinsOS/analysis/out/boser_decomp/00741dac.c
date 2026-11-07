// FUN_00741dac @ 00741dac size=84 calls_out=3 calls_in=2
// strings: 

void FUN_00741dac(int *param_1)

{
  if (*param_1 == 0) {
    if (param_1[2] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[2],param_1[3]);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (param_1[2] == 0 && param_1[3] == 0) {
    FUN_014b1a5c(param_1 + 4);
    return;
  }
  FUN_00b91e68(param_1[4],param_1[5]);
  return;
}

