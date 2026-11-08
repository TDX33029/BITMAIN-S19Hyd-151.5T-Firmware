// FUN_01129bd4 @ 01129bd4 size=76 calls_out=3 calls_in=2
// strings: 

void FUN_01129bd4(int *param_1)

{
  if (*param_1 == 1) {
    FUN_00b9391c((char)param_1[1],param_1[2]);
  }
  else if ((*param_1 == 0) && (param_1[2] != 0)) {
    thunk_FUN_01be4678(param_1[1]);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

