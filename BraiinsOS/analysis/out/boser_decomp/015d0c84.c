// FUN_015d0c84 @ 015d0c84 size=68 calls_out=1 calls_in=2
// strings: 

void FUN_015d0c84(int *param_1)

{
  if (*param_1 != 0) {
    if (param_1[1] != 0) {
      FUN_015faf74();
    }
    if (param_1[5] != 0) {
      FUN_015faf74(param_1 + 5);
      return;
    }
  }
  return;
}

