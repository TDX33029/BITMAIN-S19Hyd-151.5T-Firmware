// FUN_00b92374 @ 00b92374 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_00b92374(int *param_1)

{
  if (*param_1 != 0 || param_1[1] != 0) {
    return;
  }
  if (param_1[2] != 0 || param_1[3] != 0) {
    FUN_00b91e68(param_1[4],param_1[5]);
    return;
  }
  if ((char)param_1[4] == '\x04') {
    return;
  }
  FUN_0069d8a4((char)param_1[4],param_1[5]);
  return;
}

