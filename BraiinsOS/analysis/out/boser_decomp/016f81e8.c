// FUN_016f81e8 @ 016f81e8 size=100 calls_out=2 calls_in=0
// strings: 

void FUN_016f81e8(int *param_1)

{
  if (((short)param_1[0x12] == 3) && (param_1[0x13] != 0)) {
    (**(code **)(param_1[0x13] + 0x10))(param_1 + 0x16,param_1[0x14],param_1[0x15]);
  }
  if (param_1[0x17] != 0) {
    FUN_00f80320(param_1[0x17],param_1[0x18]);
  }
  if (*param_1 == 2) {
    return;
  }
  FUN_019bb7e0(param_1[4],param_1[5]);
  return;
}

