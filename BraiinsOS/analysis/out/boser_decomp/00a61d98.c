// FUN_00a61d98 @ 00a61d98 size=140 calls_out=4 calls_in=2
// strings: 

void FUN_00a61d98(int *param_1)

{
  if (*param_1 == 0) {
    if ((char)param_1[0x18] == '\0') {
      FUN_009df158(param_1 + 0x15);
      FUN_009df188(param_1 + 0xe);
      return;
    }
    if ((char)param_1[0x18] != '\x03') {
      return;
    }
    if ((char)param_1[9] == '\x03') {
      FUN_009cdcac(param_1 + 3);
    }
    FUN_009df188(param_1 + 10);
    FUN_009df158(param_1 + 0x12);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (param_1[2] == 0 && param_1[3] == 0) {
    return;
  }
  FUN_00b91e68(param_1[4],param_1[5]);
  return;
}

