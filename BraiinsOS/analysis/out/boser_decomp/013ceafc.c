// FUN_013ceafc @ 013ceafc size=64 calls_out=2 calls_in=1
// strings: 

void FUN_013ceafc(int *param_1)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    do {
      piVar1 = (int *)param_1[0x1d];
      if (*param_1 != -0x7fffffff) {
        FUN_013ceb50(param_1);
      }
      thunk_FUN_01be4678(param_1);
      param_1 = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return;
}

