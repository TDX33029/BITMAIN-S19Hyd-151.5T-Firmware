// FUN_00da9b04 @ 00da9b04 size=72 calls_out=2 calls_in=5
// strings: 

void FUN_00da9b04(int *param_1)

{
  if (param_1[0xb] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0xb],param_1[0xc]);
  if (param_1[8] != -0x80000000) {
    FUN_019bb7e0(param_1[8],param_1[9]);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_01ada488(param_1);
  return;
}

