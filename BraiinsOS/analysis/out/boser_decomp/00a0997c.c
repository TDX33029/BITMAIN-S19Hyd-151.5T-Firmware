// FUN_00a0997c @ 00a0997c size=88 calls_out=2 calls_in=1
// strings: 

void FUN_00a0997c(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_2 == 0) {
    return;
  }
  do {
    param_2 = param_2 + -1;
    if (*piVar1 == 1) {
      FUN_00ba8128(piVar1 + 2);
    }
    piVar1 = piVar1 + 0x1a;
  } while (param_2 != 0);
  thunk_FUN_01be4678(param_1);
  return;
}

