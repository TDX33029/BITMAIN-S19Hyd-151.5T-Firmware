// FUN_012c696c @ 012c696c size=76 calls_out=3 calls_in=6
// strings: 

void FUN_012c696c(int *param_1)

{
  if (*param_1 == 1) {
    FUN_0069d8a4((char)param_1[1],param_1[2]);
  }
  else if ((*param_1 == 0) && (param_1[2] != 0)) {
    thunk_FUN_01be4678(param_1[1]);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

