// FUN_01a80374 @ 01a80374 size=48 calls_out=1 calls_in=4
// strings: 

void FUN_01a80374(int *param_1)

{
  if (*param_1 == 4) {
    return;
  }
  if (*param_1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x01a8039c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[1] + 0x10))(param_1 + 4,param_1[2],param_1[3]);
    return;
  }
  FUN_01a803a4();
  return;
}

