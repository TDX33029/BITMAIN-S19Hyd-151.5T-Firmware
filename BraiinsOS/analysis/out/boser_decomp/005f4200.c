// FUN_005f4200 @ 005f4200 size=52 calls_out=3 calls_in=3
// strings: 

void FUN_005f4200(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00b91bd8(param_1 + 2);
    return;
  }
  if (param_1[1] == -0x80000000) {
    FUN_0183a528();
    return;
  }
  FUN_019bb7e0(param_1[1],param_1[2]);
  return;
}

