// FUN_016de28a @ 016de28a size=24 calls_out=1 calls_in=3
// strings: 

void FUN_016de28a(undefined4 *param_1,int param_2)

{
  FUN_016de5de();
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x016de29e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(param_1[1]);
  return;
}

