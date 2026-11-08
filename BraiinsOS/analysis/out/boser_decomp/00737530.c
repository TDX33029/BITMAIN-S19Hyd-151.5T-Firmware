// FUN_00737530 @ 00737530 size=56 calls_out=2 calls_in=1
// strings: 

void FUN_00737530(int *param_1)

{
  if (*param_1 == 1) {
    FUN_014b14b8(param_1 + 2);
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if (param_1[2] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[2],param_1[3]);
  return;
}

