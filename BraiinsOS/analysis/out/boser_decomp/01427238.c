// FUN_01427238 @ 01427238 size=44 calls_out=1 calls_in=2
// strings: 

void FUN_01427238(int *param_1)

{
  if (*param_1 == 0) {
    FUN_00f200ec(param_1[1]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01427258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1 + 3,param_1[1],param_1[2]);
  return;
}

