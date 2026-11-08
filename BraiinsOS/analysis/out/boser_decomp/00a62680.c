// FUN_00a62680 @ 00a62680 size=140 calls_out=4 calls_in=2
// strings: 

void FUN_00a62680(int *param_1)

{
  if (*param_1 == 0) {
    if ((char)param_1[0x14] == '\0') {
      FUN_009df410(param_1[0x12]);
      FUN_009df188(param_1 + 2);
      return;
    }
    if ((char)param_1[0x14] != '\x03') {
      return;
    }
    if ((char)param_1[0x11] == '\x03') {
      FUN_009cdcac(param_1 + 0xb);
    }
    FUN_009df188(param_1 + 6);
    FUN_009df410(param_1[0x13]);
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

