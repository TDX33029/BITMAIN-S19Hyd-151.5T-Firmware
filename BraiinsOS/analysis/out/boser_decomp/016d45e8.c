// FUN_016d45e8 @ 016d45e8 size=52 calls_out=2 calls_in=3
// strings: 

void FUN_016d45e8(int *param_1)

{
  if (*param_1 == -0x80000000) {
    FUN_016bedfc(param_1 + 1);
    return;
  }
  FUN_016bedfc(param_1);
  FUN_016d7f58(param_1 + 9);
  return;
}

