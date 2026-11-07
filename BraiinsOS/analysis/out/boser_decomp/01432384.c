// FUN_01432384 @ 01432384 size=44 calls_out=1 calls_in=1
// strings: 

void FUN_01432384(int *param_1)

{
  if (*param_1 == 0) {
    FUN_017851fc(param_1 + 1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014323a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1 + 3,param_1[1],param_1[2]);
  return;
}

