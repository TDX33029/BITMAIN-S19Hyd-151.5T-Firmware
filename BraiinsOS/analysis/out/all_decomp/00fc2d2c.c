// FUN_00fc2d2c @ 00fc2d2c size=1172 calls_out=5 calls_in=0
// strings: 

void FUN_00fc2d2c(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0x11;
  if (**(int **)*param_1 < 0) {
    iVar1 = **(int **)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00fc2d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00fc2d5c + *(int *)(&DAT_00fc2d5c + iVar1 * 4)))();
  return;
}

