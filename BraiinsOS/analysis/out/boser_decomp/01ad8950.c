// FUN_01ad8950 @ 01ad8950 size=156 calls_out=5 calls_in=2
// strings: 

void FUN_01ad8950(int *param_1)

{
  if (param_1[0x268] != -0x80000000) {
    FUN_0134bd64(param_1[0x268],param_1[0x269]);
  }
  if (param_1[0x26b] != -0x80000000) {
    FUN_0134bd64(param_1[0x26b],param_1[0x26c]);
  }
  FUN_00da99c8(param_1 + 0x26e);
  FUN_0096c2c4(param_1 + 0x271);
  FUN_01ad8aa4(param_1 + 8);
  FUN_01ad8aa4(param_1 + 0x54);
  FUN_01ad8aa4(param_1 + 0xa0);
  FUN_01ad8aa4(param_1 + 0xec);
  FUN_01ad8aa4(param_1 + 0x138);
  FUN_01ad8aa4(param_1 + 0x184);
  FUN_01ad8aa4(param_1 + 0x1d0);
  FUN_01ad8aa4(param_1 + 0x21c);
  if (*param_1 == 0) {
    return;
  }
  FUN_01ada488(param_1);
  return;
}

