// FUN_00f80d0c @ 00f80d0c size=128 calls_out=5 calls_in=0
// strings: 

void FUN_00f80d0c(int *param_1)

{
  FUN_00b19860(param_1[0x10],param_1[0x11]);
  if (*param_1 != 4 || param_1[1] != 0) {
    FUN_01760ec4(param_1);
  }
  if (param_1[0x14] != 0) {
    FUN_00f80320(param_1[0x14],param_1[0x15]);
  }
  if (param_1[0x18] != 0) {
    (**(code **)(param_1[0x18] + 0x10))(param_1 + 0x1b,param_1[0x19],param_1[0x1a]);
  }
  FUN_00f80f54(param_1[0x20]);
  if (*(byte *)(param_1 + 0x30) < 4) {
    FUN_0183a528(param_1 + 0x30);
    return;
  }
  return;
}

