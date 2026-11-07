// FUN_017c11c8 @ 017c11c8 size=84 calls_out=2 calls_in=1
// strings: 

void FUN_017c11c8(int *param_1)

{
  FUN_01771fbc(param_1 + 5);
  if (*param_1 == 0) {
    return;
  }
  if (param_1[1] == 0) {
    FUN_018248cc(param_1 + 2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x017c1228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x10))(param_1 + 4,param_1[2],param_1[3]);
  return;
}

