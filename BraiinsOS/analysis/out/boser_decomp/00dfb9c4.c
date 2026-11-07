// FUN_00dfb9c4 @ 00dfb9c4 size=44 calls_out=2 calls_in=4
// strings: 

void FUN_00dfb9c4(int *param_1)

{
  if (*param_1 != 2 || param_1[1] != 0) {
    FUN_0094a4d0();
    return;
  }
  if (param_1[2] < 0) {
    return;
  }
  FUN_019bb7e0(param_1[2],param_1[3]);
  return;
}

