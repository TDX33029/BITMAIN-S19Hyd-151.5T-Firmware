// FUN_00d33a34 @ 00d33a34 size=52 calls_out=2 calls_in=2
// strings: 

void FUN_00d33a34(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    FUN_01443048(*param_1,param_1[1]);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

