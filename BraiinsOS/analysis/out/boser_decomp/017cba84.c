// FUN_017cba84 @ 017cba84 size=28 calls_out=1 calls_in=2
// strings: 

void FUN_017cba84(int *param_1)

{
  FUN_0177a2a4(param_1 + 5);
  if (*param_1 == 0) {
    return;
  }
  if (param_1[1] == 0) {
    FUN_0187266c((char)param_1[2],param_1[3]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00cdcf94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x10))(param_1 + 4,param_1[2],param_1[3]);
  return;
}

