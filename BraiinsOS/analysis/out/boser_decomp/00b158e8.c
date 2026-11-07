// FUN_00b158e8 @ 00b158e8 size=104 calls_out=4 calls_in=1
// strings: 

void FUN_00b158e8(int *param_1)

{
  FUN_019bb7e0(param_1[0x6c],param_1[0x6d]);
  if (param_1[0x6f] != -0x80000000) {
    FUN_019bb7e0(param_1[0x6f],param_1[0x70]);
  }
  if (*param_1 != 8) {
    FUN_00b15a78(param_1);
  }
  if ((char)param_1[0x5e] != '\x06') {
    FUN_00db4764();
  }
  if (param_1[100] == 0) {
    return;
  }
  FUN_01ada488(param_1 + 100);
  return;
}

