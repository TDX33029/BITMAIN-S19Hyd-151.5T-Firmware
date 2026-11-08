// FUN_01438774 @ 01438774 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_01438774(int *param_1)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    do {
      piVar1 = (int *)param_1[5];
      if (*param_1 != 0) {
        FUN_01438218(param_1 + 1);
      }
      thunk_FUN_01be4678(param_1);
      param_1 = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return;
}

