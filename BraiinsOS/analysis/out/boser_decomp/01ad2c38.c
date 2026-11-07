// FUN_01ad2c38 @ 01ad2c38 size=72 calls_out=2 calls_in=6
// strings: 

void FUN_01ad2c38(int *param_1)

{
  if (param_1[0xb] == -0x80000000) {
    return;
  }
  FUN_0134bd64(param_1[0xb],param_1[0xc]);
  if (param_1[8] != -0x80000000) {
    FUN_0134bd64(param_1[8],param_1[9]);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_01ada488(param_1);
  return;
}

