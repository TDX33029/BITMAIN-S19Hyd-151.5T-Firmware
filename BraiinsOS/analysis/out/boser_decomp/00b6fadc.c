// FUN_00b6fadc @ 00b6fadc size=72 calls_out=3 calls_in=1
// strings: 

void FUN_00b6fadc(int *param_1)

{
  if (*param_1 == 0) {
    if (param_1[1] == -0x7ffffffe) {
      FUN_0187266c((char)param_1[2],param_1[3]);
      return;
    }
    FUN_00b6fb24(param_1 + 1);
    return;
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_01443048(param_1[4],param_1[5]);
  return;
}

