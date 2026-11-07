// FUN_00711da4 @ 00711da4 size=68 calls_out=0 calls_in=1
// strings: 

void FUN_00711da4(int *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(*param_1 + 0x10))(param_1 + 3,param_1[1],param_1[2]);
  }
                    /* WARNING: Could not recover jumptable at 0x00711de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[4] + 0x10))(param_1 + 7,param_1[5],param_1[6]);
  return;
}

