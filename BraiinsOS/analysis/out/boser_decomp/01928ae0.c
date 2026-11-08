// FUN_01928ae0 @ 01928ae0 size=116 calls_out=4 calls_in=1
// strings: 

void FUN_01928ae0(undefined4 *param_1)

{
  if (param_1[10] != -0x80000000) {
    FUN_0134bd64(param_1[10],param_1[0xb]);
  }
  if (param_1[0x18] != 0) {
    FUN_01139b38(param_1[0x18],param_1[0x19]);
  }
  FUN_0134bd64(*param_1,param_1[1]);
  FUN_01443048(param_1[0x16],param_1[0x17]);
  if ((*(char *)(param_1 + 0xf) == '\0') && (param_1[0x10] != -0x80000000)) {
    FUN_0134bd64(param_1[0x10],param_1[0x11]);
  }
  FUN_0134bd64(param_1[4],param_1[5]);
  FUN_0134aee0(param_1[7],param_1[8],2,4);
  return;
}

