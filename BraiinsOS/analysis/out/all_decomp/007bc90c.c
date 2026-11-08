// FUN_007bc90c @ 007bc90c size=88 calls_out=1 calls_in=1
// strings: 

void FUN_007bc90c(int *param_1)

{
  if (*param_1 != 0) {
    if (param_1[1] != 0) {
      FUN_007bbe60();
    }
    if (param_1[5] != 0) {
      FUN_007bbe60();
    }
  }
  if (param_1[9] == 0) {
    return;
  }
  FUN_007bbe60(param_1 + 9);
  return;
}

