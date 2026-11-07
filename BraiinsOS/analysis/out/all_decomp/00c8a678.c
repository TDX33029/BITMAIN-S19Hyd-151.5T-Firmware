// FUN_00c8a678 @ 00c8a678 size=112 calls_out=2 calls_in=1
// strings: 

void FUN_00c8a678(undefined4 *param_1)

{
  if (*(char *)((int)param_1 + 0x19) == '\x03') {
    if (*(char *)((int)param_1 + 10) == '\x04') {
      if (param_1[3] != 0) {
        FUN_00c8204c(param_1[3],param_1[4],1);
      }
      FUN_00c822ec(*param_1);
      return;
    }
    if (*(char *)((int)param_1 + 10) != '\x03') {
      return;
    }
    if (param_1[3] != 0) {
      FUN_00c8204c(param_1[3],param_1[4],1);
      return;
    }
  }
  return;
}

