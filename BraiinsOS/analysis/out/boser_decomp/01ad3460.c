// FUN_01ad3460 @ 01ad3460 size=64 calls_out=3 calls_in=4
// strings: 

void FUN_01ad3460(int *param_1)

{
  if (param_1[0xb] == -0x80000000) {
    return;
  }
  FUN_0134bd64(param_1[0xb],param_1[0xc]);
  FUN_019cf348(param_1 + 8);
  if (*param_1 == 0) {
    return;
  }
  FUN_01ada488(param_1);
  return;
}

