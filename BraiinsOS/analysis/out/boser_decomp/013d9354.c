// FUN_013d9354 @ 013d9354 size=52 calls_out=3 calls_in=1
// strings: 

void FUN_013d9354(short *param_1)

{
  if (*(int *)(param_1 + 0x22) == -0x80000000) {
    FUN_013d7738();
    return;
  }
  if (*param_1 != 2) {
    FUN_013d76c0();
  }
  FUN_0074dd34(param_1 + 0x22);
  return;
}

