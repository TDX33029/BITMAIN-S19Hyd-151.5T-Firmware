// FUN_013cf234 @ 013cf234 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_013cf234(int *param_1)

{
  int *piVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    piVar1 = (int *)param_1[0xb];
    if (*param_1 != -0x80000000) {
      FUN_019bb7e0(*param_1,param_1[1]);
    }
    thunk_FUN_01be4678(param_1);
    param_1 = piVar1;
  } while (piVar1 != (int *)0x0);
  return;
}

