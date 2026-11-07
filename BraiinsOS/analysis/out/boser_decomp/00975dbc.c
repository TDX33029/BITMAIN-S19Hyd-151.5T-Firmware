// FUN_00975dbc @ 00975dbc size=72 calls_out=3 calls_in=0
// strings: 

void FUN_00975dbc(int *param_1)

{
  FUN_019bb7e0(param_1[0xe],param_1[0xf]);
  if (param_1[8] != -0x80000000) {
    FUN_019bb7e0(param_1[8],param_1[9]);
  }
  if (param_1[0xb] != -0x80000000) {
    FUN_006a41c0();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_01ada488(param_1);
  return;
}

