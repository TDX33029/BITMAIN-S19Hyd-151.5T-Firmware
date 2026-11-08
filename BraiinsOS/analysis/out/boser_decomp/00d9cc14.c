// FUN_00d9cc14 @ 00d9cc14 size=44 calls_out=2 calls_in=1
// strings: 

void FUN_00d9cc14(int *param_1)

{
  if (*param_1 != 0 || param_1[1] != 0) {
    FUN_00b91e68(param_1[2],param_1[3]);
    return;
  }
  if ((char)param_1[2] == '\x04') {
    return;
  }
  FUN_0185401c((char)param_1[2],param_1[3]);
  return;
}

