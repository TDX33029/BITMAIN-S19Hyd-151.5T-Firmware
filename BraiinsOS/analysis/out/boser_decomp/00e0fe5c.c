// FUN_00e0fe5c @ 00e0fe5c size=76 calls_out=3 calls_in=59
// strings: 

void FUN_00e0fe5c(int *param_1)

{
  if (*param_1 == 1) {
    FUN_00df4bf0((char)param_1[1],param_1[2]);
  }
  else if ((*param_1 == 0) && (param_1[2] != 0)) {
    thunk_FUN_01be4678(param_1[1]);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

