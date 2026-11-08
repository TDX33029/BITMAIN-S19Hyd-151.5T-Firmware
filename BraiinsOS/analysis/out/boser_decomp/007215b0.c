// FUN_007215b0 @ 007215b0 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_007215b0(int *param_1)

{
  if (*param_1 != 0) {
    return;
  }
  if (param_1[2] != 0) {
    thunk_FUN_01be4678(param_1[1]);
  }
  if (param_1[4] == 0) {
    return;
  }
  thunk_FUN_01be4678(param_1[3]);
  return;
}

