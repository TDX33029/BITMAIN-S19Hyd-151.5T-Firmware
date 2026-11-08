// FUN_01ae18b0 @ 01ae18b0 size=92 calls_out=4 calls_in=1
// strings: 

void FUN_01ae18b0(int *param_1)

{
  FUN_0134bd64(param_1[0x6c],param_1[0x6d]);
  if (param_1[0x6f] != -0x80000000) {
    FUN_0134bd64(param_1[0x6f],param_1[0x70]);
  }
  if (*param_1 != 8) {
    FUN_01ae0e6c(param_1);
  }
  FUN_01ad3410(param_1 + 0x5e);
  if (param_1[100] == 0) {
    return;
  }
  FUN_01ada488(param_1 + 100);
  return;
}

