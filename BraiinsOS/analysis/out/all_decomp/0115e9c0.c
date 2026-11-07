// FUN_0115e9c0 @ 0115e9c0 size=72 calls_out=2 calls_in=1
// strings: 

void FUN_0115e9c0(int *param_1,int param_2)

{
  for (param_2 = param_2 + 1; param_2 != 1; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    FUN_0115ccf0(param_1 + 3);
    param_1 = param_1 + 8;
  }
  return;
}

