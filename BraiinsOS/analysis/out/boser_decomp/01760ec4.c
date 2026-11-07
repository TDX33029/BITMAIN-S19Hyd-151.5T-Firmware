// FUN_01760ec4 @ 01760ec4 size=44 calls_out=1 calls_in=9
// strings: 

void FUN_01760ec4(int *param_1)

{
  if (*param_1 == 3 && param_1[1] == 0) {
                    /* WARNING: Could not recover jumptable at 0x01760ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
    return;
  }
  FUN_0142e6dc();
  return;
}

