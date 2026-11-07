// FUN_017dbb58 @ 017dbb58 size=68 calls_out=3 calls_in=1
// strings: 

void FUN_017dbb58(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_1[0x13] != 0) {
    FUN_01443048(param_1[0x13],param_1[0x14]);
  }
  if (*param_1 != 2) {
    FUN_019bb7e0(param_1[4],param_1[5]);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

