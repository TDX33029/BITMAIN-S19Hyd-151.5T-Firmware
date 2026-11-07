// FUN_00e7c3e8 @ 00e7c3e8 size=64 calls_out=1 calls_in=1
// strings: 

void FUN_00e7c3e8(uint *param_1)

{
  if (*param_1 == 5) {
    FUN_01443048(param_1[1],param_1[2]);
    return;
  }
  if ((*param_1 < 4) || (param_1[1] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00e7c424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[1] + 0x10))(param_1 + 4,param_1[2],param_1[3]);
    return;
  }
  return;
}

