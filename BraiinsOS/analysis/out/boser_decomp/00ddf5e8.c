// FUN_00ddf5e8 @ 00ddf5e8 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_00ddf5e8(int *param_1)

{
  if (param_1[10] != -0x80000000) {
    FUN_019bb7e0(param_1[10],param_1[0xb]);
  }
  if (param_1[0xd] != -0x80000000) {
    FUN_019bb7e0(param_1[0xd],param_1[0xe]);
  }
  if (param_1[0x10] != -0x80000000) {
    FUN_019bb7e0(param_1[0x10],param_1[0x11]);
  }
  if (*param_1 == -0x80000000) {
    return;
  }
  FUN_0132b958(*param_1,param_1[1],4,8);
  return;
}

