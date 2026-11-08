// FUN_0115e7b8 @ 0115e7b8 size=72 calls_out=2 calls_in=1
// strings: 

void FUN_0115e7b8(int *param_1,int param_2)

{
  for (param_2 = param_2 + 1; param_2 != 1; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    FUN_0115dd50(param_1 + 4);
    param_1 = param_1 + 0x2e;
  }
  return;
}

