// FUN_01a6322c @ 01a6322c size=68 calls_out=1 calls_in=20
// strings: 

void FUN_01a6322c(int *param_1)

{
  if (*param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01a63268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[1] + 0x10))(param_1 + 4,param_1[2],param_1[3]);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (param_1[3] == 0) {
    return;
  }
  thunk_FUN_01be4678(param_1[2]);
  return;
}

