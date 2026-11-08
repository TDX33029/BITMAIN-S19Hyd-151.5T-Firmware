// FUN_00d6b0f4 @ 00d6b0f4 size=56 calls_out=2 calls_in=3
// strings: 

void FUN_00d6b0f4(int *param_1)

{
  if (*param_1 == 3) {
    return;
  }
  if (param_1[10] != -0x80000000) {
    FUN_019bb7e0(param_1[10],param_1[0xb]);
  }
  FUN_019bb7e0(param_1[4],param_1[5]);
  FUN_00b0db90(param_1 + 7);
  return;
}

