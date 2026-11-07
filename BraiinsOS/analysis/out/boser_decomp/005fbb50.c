// FUN_005fbb50 @ 005fbb50 size=76 calls_out=2 calls_in=5
// strings: 

void FUN_005fbb50(int *param_1)

{
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  FUN_019bb7e0(param_1[0x30],param_1[0x31]);
  FUN_00b8a16c(param_1 + 0x33);
  if (param_1[0x38] == 5 && param_1[0x39] == 0) {
    return;
  }
  FUN_019bb7e0(param_1[0x50],param_1[0x51]);
  return;
}

