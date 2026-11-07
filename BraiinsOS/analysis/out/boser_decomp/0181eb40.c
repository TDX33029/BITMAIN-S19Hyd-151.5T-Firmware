// FUN_0181eb40 @ 0181eb40 size=44 calls_out=1 calls_in=21
// strings: 

void FUN_0181eb40(int *param_1)

{
  if (*param_1 == 0) {
    FUN_017ce5f0(param_1[1],param_1[2]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0181eb60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1 + 3,param_1[1],param_1[2]);
  return;
}

