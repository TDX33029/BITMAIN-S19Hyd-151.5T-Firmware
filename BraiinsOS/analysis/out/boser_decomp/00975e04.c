// FUN_00975e04 @ 00975e04 size=60 calls_out=3 calls_in=0
// strings: 

void FUN_00975e04(int *param_1)

{
  if (param_1[0xb] != -0x80000000) {
    FUN_019bb7e0(param_1[0xb],param_1[0xc]);
  }
  FUN_01ad74cc(param_1 + 8);
  if (*param_1 == 0) {
    return;
  }
  FUN_01ada488(param_1);
  return;
}

