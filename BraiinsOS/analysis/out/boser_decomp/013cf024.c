// FUN_013cf024 @ 013cf024 size=84 calls_out=1 calls_in=1
// strings: 

void FUN_013cf024(int *param_1)

{
  if (*param_1 != 4) {
    FUN_013ced04(param_1);
  }
  if (param_1[5] != 0) {
    (**(code **)(param_1[5] + 0xc))(param_1[6]);
  }
  if (param_1[8] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x013cf070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[8] + 0xc))(param_1[9]);
  return;
}

