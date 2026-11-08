// FUN_0156c8d8 @ 0156c8d8 size=292 calls_out=1 calls_in=1
// strings: 

void FUN_0156c8d8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0xe;
  if (*(int *)*param_1 < 0) {
    iVar1 = *(int *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0156c8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0156c900 + *(int *)(&DAT_0156c900 + iVar1 * 4)))();
  return;
}

