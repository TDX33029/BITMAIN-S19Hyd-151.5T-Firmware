// FUN_00712e44 @ 00712e44 size=64 calls_out=1 calls_in=1
// strings: 

void FUN_00712e44(int *param_1)

{
  if (*param_1 != 0 || param_1[1] != 0) {
    if (param_1[2] == 3 && param_1[3] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00712e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[4] + 0x10))(param_1 + 7,param_1[5],param_1[6]);
      return;
    }
  }
  FUN_0142e6dc(param_1 + 2);
  return;
}

