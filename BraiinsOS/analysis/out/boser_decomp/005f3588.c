// FUN_005f3588 @ 005f3588 size=40 calls_out=1 calls_in=2
// strings: 

void FUN_005f3588(int *param_1)

{
  if (*param_1 != 0 || param_1[1] != 0) {
    FUN_00b91bd8();
    return;
  }
  if ((undefined4 *)param_1[2] == (undefined4 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005f35ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)param_1[2])();
  return;
}

