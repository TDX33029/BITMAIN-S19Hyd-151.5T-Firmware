// FUN_01203240 @ 01203240 size=48 calls_out=1 calls_in=1
// strings: 

void FUN_01203240(int *param_1)

{
  if (*param_1 != -0x80000000) {
    FUN_019bb7e0(*param_1,param_1[1]);
  }
  if (param_1[3] < -0x7ffffffd) {
    return;
  }
  FUN_019bb7e0(param_1[3],param_1[4]);
  return;
}

