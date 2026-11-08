// FUN_00f041f0 @ 00f041f0 size=48 calls_out=1 calls_in=0
// strings: 

void FUN_00f041f0(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00f0421c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)param_1[3])();
  return;
}

