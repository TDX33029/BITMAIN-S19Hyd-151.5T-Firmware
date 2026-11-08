// FUN_00ca9e2c @ 00ca9e2c size=76 calls_out=2 calls_in=3
// strings: 

void FUN_00ca9e2c(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    if (param_1[3] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[3],param_1[4]);
    return;
  }
  if (*(char *)(param_1 + 0x12) == '\x03') {
    FUN_00ca9de0(param_1 + 8);
    return;
  }
  return;
}

