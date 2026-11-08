// FUN_0116bbec @ 0116bbec size=88 calls_out=2 calls_in=1
// strings: 

void FUN_0116bbec(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_2 == 0) {
    return;
  }
  do {
    param_2 = param_2 + -1;
    if (*piVar1 == 1) {
      FUN_00fe40e4(piVar1 + 2);
    }
    piVar1 = piVar1 + 0xe;
  } while (param_2 != 0);
  thunk_FUN_01be4678(param_1);
  return;
}

