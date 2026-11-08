// FUN_00f859dc @ 00f859dc size=84 calls_out=2 calls_in=1
// strings: 

void FUN_00f859dc(int *param_1)

{
  FUN_00cdce34(param_1 + 5);
  if (*param_1 == 0) {
    return;
  }
  if (param_1[1] == 0) {
    FUN_0183a528(param_1 + 2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00f85a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x10))(param_1 + 4,param_1[2],param_1[3]);
  return;
}

