// FUN_00d47b64 @ 00d47b64 size=76 calls_out=3 calls_in=6
// strings: 

void FUN_00d47b64(int *param_1)

{
  if (*param_1 == 1) {
    FUN_0185401c((char)param_1[1],param_1[2]);
  }
  else if ((*param_1 == 0) && (param_1[2] != 0)) {
    thunk_FUN_01be4678(param_1[1]);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

