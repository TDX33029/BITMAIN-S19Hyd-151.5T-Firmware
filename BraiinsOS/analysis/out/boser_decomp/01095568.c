// FUN_01095568 @ 01095568 size=60 calls_out=1 calls_in=0
// strings: 

void FUN_01095568(int *param_1)

{
  if (*param_1 == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x0109558c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)param_1[1])();
    return;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  FUN_019bb7e0(param_1[3],param_1[4]);
  return;
}

