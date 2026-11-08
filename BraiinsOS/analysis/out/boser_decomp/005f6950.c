// FUN_005f6950 @ 005f6950 size=72 calls_out=3 calls_in=3
// strings: 

void FUN_005f6950(int *param_1)

{
  if (*param_1 == 1) {
    FUN_0183a528(param_1 + 1);
  }
  else if ((*param_1 == 0) && (param_1[2] != 0)) {
    thunk_FUN_01be4678(param_1[1]);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

