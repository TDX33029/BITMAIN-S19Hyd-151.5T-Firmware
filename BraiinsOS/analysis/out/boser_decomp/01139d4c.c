// FUN_01139d4c @ 01139d4c size=44 calls_out=1 calls_in=3
// strings: 

void FUN_01139d4c(int *param_1)

{
  if (*param_1 == 3 && param_1[1] == 0) {
                    /* WARNING: Could not recover jumptable at 0x01139d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
    return;
  }
  FUN_01139cd4();
  return;
}

