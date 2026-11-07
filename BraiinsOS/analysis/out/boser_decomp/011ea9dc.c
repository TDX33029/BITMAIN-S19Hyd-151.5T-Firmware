// FUN_011ea9dc @ 011ea9dc size=76 calls_out=1 calls_in=2
// strings: 

void FUN_011ea9dc(int *param_1)

{
  if (*param_1 == 0) {
    if (param_1[2] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[2],param_1[3]);
    FUN_019bb7e0(param_1[5],param_1[6]);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (param_1[2] != 0 || param_1[3] != 0) {
    FUN_00b91e68(param_1[4],param_1[5]);
    return;
  }
  if ((char)param_1[4] == '\x04') {
    return;
  }
  FUN_011e9d50((char)param_1[4],param_1[5]);
  return;
}

