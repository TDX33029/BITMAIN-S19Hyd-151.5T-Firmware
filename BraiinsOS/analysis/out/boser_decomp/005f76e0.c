// FUN_005f76e0 @ 005f76e0 size=44 calls_out=1 calls_in=7
// strings: 

void FUN_005f76e0(int *param_1)

{
  if (*param_1 == 0) {
    FUN_019bb7e0(param_1[1],param_1[2]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005f7700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1 + 3,param_1[1],param_1[2]);
  return;
}

