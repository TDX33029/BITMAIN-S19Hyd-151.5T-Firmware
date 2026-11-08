// FUN_0127e51c @ 0127e51c size=56 calls_out=0 calls_in=2
// strings: 

void FUN_0127e51c(undefined1 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_3 - 9U >> 1;
  if ((uVar1 | (param_3 - 9U) * -0x80000000) < 6) {
                    /* WARNING: Could not recover jumptable at 0x0127e53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0127e540 + *(int *)(&DAT_0127e540 + uVar1 * 4)))();
    return;
  }
  param_1[1] = 4;
  *param_1 = 0;
  return;
}

