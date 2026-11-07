// FUN_006fc150 @ 006fc150 size=96 calls_out=1 calls_in=4
// strings: 

void FUN_006fc150(int *param_1)

{
  if (*param_1 == 0) {
    param_1[1] = 0;
    return;
  }
  if (param_1[4] != 0) {
    FUN_006fb2d8(param_1);
    param_1[4] = param_1[4] + -1;
  }
  return;
}

