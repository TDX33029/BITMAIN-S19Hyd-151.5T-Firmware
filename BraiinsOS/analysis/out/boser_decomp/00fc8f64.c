// FUN_00fc8f64 @ 00fc8f64 size=44 calls_out=1 calls_in=1
// strings: 

void FUN_00fc8f64(int *param_1)

{
  if (*param_1 == 4 && param_1[1] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00fc8f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
    return;
  }
  FUN_01760ec4();
  return;
}

