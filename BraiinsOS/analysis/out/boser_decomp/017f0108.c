// FUN_017f0108 @ 017f0108 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_017f0108(int *param_1)

{
  FUN_017c30a4(param_1 + 5);
  if (*param_1 == 0) {
    return;
  }
  if (param_1[1] == 0) {
    FUN_017ea70c((char)param_1[2],param_1[3]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x017f0168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x10))(param_1 + 4,param_1[2],param_1[3]);
  return;
}

