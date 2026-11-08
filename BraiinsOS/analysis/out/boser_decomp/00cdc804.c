// FUN_00cdc804 @ 00cdc804 size=60 calls_out=3 calls_in=2
// strings: 

void FUN_00cdc804(int *param_1)

{
  if (*param_1 == -0x80000000) {
    FUN_019bb7e0(param_1[1],param_1[2]);
    return;
  }
  if (*param_1 == -0x7fffffff) {
    return;
  }
  FUN_00bbabc0(param_1);
  FUN_014a632c(param_1 + 0x10);
  return;
}

