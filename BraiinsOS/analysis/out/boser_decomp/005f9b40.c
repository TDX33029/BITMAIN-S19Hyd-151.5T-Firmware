// FUN_005f9b40 @ 005f9b40 size=52 calls_out=2 calls_in=2
// strings: 

void FUN_005f9b40(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    FUN_00f80320(*param_1,param_1[1]);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

