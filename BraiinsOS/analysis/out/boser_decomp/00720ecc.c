// FUN_00720ecc @ 00720ecc size=68 calls_out=2 calls_in=2
// strings: 

void FUN_00720ecc(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 4);
  do {
    if (*piVar1 != 0) {
      thunk_FUN_01be4678(piVar1[-1]);
    }
    piVar1 = piVar1 + 6;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  thunk_FUN_01be4678(param_1);
  return;
}

