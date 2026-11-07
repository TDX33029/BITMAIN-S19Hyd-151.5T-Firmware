// FUN_006d0c58 @ 006d0c58 size=56 calls_out=1 calls_in=1
// strings: 

void FUN_006d0c58(undefined4 *param_1)

{
  FUN_019bb7e0(*param_1,param_1[1]);
  if (param_1[3] != -0x80000000) {
    FUN_019bb7e0(param_1[3],param_1[4]);
  }
                    /* WARNING: Could not recover jumptable at 0x006d0c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[6] + 0x10))(param_1 + 9,param_1[7],param_1[8]);
  return;
}

