// FUN_00f9d158 @ 00f9d158 size=128 calls_out=4 calls_in=1
// strings: 

void FUN_00f9d158(uint *param_1)

{
  if ((*param_1 & 7) == 4) {
    return;
  }
  if (*param_1 != 3) {
    FUN_005f6588(param_1);
    return;
  }
  FUN_019bb7e0(param_1[4],param_1[5]);
  if (param_1[0xd] != 0x80000000) {
    FUN_019bb7e0(param_1[0xd],param_1[0xe]);
  }
  if (param_1[0x10] != 0x80000000) {
    FUN_019bb7e0(param_1[0x10],param_1[0x11]);
  }
  FUN_006a41c0(param_1 + 7);
  FUN_00b17058(param_1 + 10);
  if (param_1[0x13] == 0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x13],param_1[0x14]);
  return;
}

