// FUN_017109f8 @ 017109f8 size=104 calls_out=3 calls_in=11
// strings: 

void FUN_017109f8(int *param_1)

{
  if (((short)param_1[0x12] == 3) && (param_1[0x13] != 0)) {
    (**(code **)(param_1[0x13] + 0x10))(param_1 + 0x16,param_1[0x14],param_1[0x15]);
  }
  if (param_1[0x17] != 0) {
    FUN_01443048(param_1[0x17],param_1[0x18]);
  }
  if (*param_1 != 2) {
    FUN_019bb7e0(param_1[4],param_1[5]);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

