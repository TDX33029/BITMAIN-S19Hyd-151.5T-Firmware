// FUN_01ae15e0 @ 01ae15e0 size=68 calls_out=3 calls_in=2
// strings: 

void FUN_01ae15e0(int *param_1)

{
  FUN_0134bd64(param_1[0x19],param_1[0x1a]);
  if (param_1[0x16] != -0x80000000) {
    FUN_0134bd64(param_1[0x16],param_1[0x17]);
  }
  FUN_01ad2c38(param_1 + 8);
  if (*param_1 == 0) {
    return;
  }
  FUN_01ada488(param_1);
  return;
}

