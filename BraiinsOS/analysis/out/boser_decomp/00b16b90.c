// FUN_00b16b90 @ 00b16b90 size=120 calls_out=4 calls_in=1
// strings: 

void FUN_00b16b90(int *param_1)

{
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      FUN_00db19c4(param_1 + 2);
      return;
    }
    return;
  }
  if ((char)param_1[0x67] != '\x03') {
    return;
  }
  FUN_008b6720(param_1 + 0x37);
  if ((char)param_1[0x25] == '\x03') {
    FUN_00b16c4c(param_1 + 2);
  }
  FUN_019bb7e0(param_1[0x33],param_1[0x34]);
  if (param_1[0x30] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x30],param_1[0x31]);
  return;
}

