// FUN_00ca9de0 @ 00ca9de0 size=76 calls_out=2 calls_in=2
// strings: 

void FUN_00ca9de0(undefined4 *param_1)

{
  if (*(char *)(param_1 + 9) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    if (param_1[3] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[3],param_1[4]);
    return;
  }
  if (*(char *)(param_1 + 9) == '\x03') {
    FUN_00fe4378(param_1[7],param_1[8]);
    return;
  }
  return;
}

