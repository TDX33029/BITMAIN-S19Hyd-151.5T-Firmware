// FUN_00eae358 @ 00eae358 size=44 calls_out=1 calls_in=2
// strings: 

void FUN_00eae358(int *param_1)

{
  if (*param_1 == 3 && param_1[1] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00eae37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
    return;
  }
  FUN_0142e6dc();
  return;
}

