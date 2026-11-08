// FUN_011e9dc8 @ 011e9dc8 size=124 calls_out=5 calls_in=2
// strings: 

void FUN_011e9dc8(int *param_1)

{
  if (*param_1 == 0) {
    if ((char)param_1[0x47] == '\0') {
      FUN_019bb7e0(param_1[0x44],param_1[0x45]);
      FUN_011e7820(param_1 + 0x42);
      FUN_005faf6c(param_1 + 0x43);
      return;
    }
    if ((char)param_1[0x47] == '\x03') {
      FUN_011e9b38(param_1 + 2);
      return;
    }
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

