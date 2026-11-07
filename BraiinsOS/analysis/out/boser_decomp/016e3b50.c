// FUN_016e3b50 @ 016e3b50 size=52 calls_out=2 calls_in=1
// strings: 

void FUN_016e3b50(int *param_1)

{
  if (*param_1 == -0x80000000) {
    FUN_016bedfc(param_1 + 1);
    return;
  }
  FUN_016bedfc(param_1);
  FUN_016e3b9c(param_1 + 9);
  return;
}

