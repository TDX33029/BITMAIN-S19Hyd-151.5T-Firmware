// FUN_00d3d6e8 @ 00d3d6e8 size=116 calls_out=2 calls_in=1
// strings: 

void FUN_00d3d6e8(int *param_1)

{
  if (*param_1 == 1) {
    FUN_00d32f14(param_1 + 2);
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if (param_1[2] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[2],param_1[3]);
  if (param_1[5] == 0) {
    FUN_019bb7e0(param_1[6],param_1[7]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d3d73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[5] + 0x10))(param_1 + 8,param_1[6],param_1[7]);
  return;
}

