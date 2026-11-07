// FUN_0180a8e0 @ 0180a8e0 size=68 calls_out=1 calls_in=1
// strings: 

void FUN_0180a8e0(int *param_1)

{
  if (*param_1 == 2 || *param_1 == 0) {
    return;
  }
  if (param_1[1] == 0) {
    FUN_0187266c((char)param_1[2],param_1[3]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0180a914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x10))(param_1 + 4,param_1[2],param_1[3]);
  return;
}

