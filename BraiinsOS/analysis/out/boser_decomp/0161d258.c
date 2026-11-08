// FUN_0161d258 @ 0161d258 size=116 calls_out=1 calls_in=0
// strings: 

void FUN_0161d258(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0x1e;
  if (*(int *)*param_1 < 0) {
    iVar1 = *(int *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0161d28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0161d290 + *(int *)(&DAT_0161d290 + iVar1 * 4)))(*param_2);
  return;
}

