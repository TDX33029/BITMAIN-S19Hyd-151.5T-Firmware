// FUN_007243f0 @ 007243f0 size=68 calls_out=2 calls_in=2
// strings: 

void FUN_007243f0(int *param_1)

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

