// FUN_0084f298 @ 0084f298 size=80 calls_out=2 calls_in=7
// strings: 

void FUN_0084f298(int *param_1)

{
  if (*param_1 != -0x80000000) {
    FUN_0084f2e8(param_1);
    return;
  }
  FUN_019bb7e0(param_1[3],param_1[4]);
  if (param_1[6] != -0x80000000) {
    FUN_019bb7e0(param_1[6],param_1[7]);
  }
  if (param_1[9] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[9],param_1[10]);
  return;
}

