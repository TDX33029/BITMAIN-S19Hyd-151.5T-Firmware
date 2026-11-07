// FUN_00e9ed7c @ 00e9ed7c size=308 calls_out=2 calls_in=0
// strings: 

void FUN_00e9ed7c(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 8;
  if (*(int *)*param_1 < 0) {
    iVar1 = *(int *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00e9eda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00e9eda8 + *(int *)(&DAT_00e9eda8 + iVar1 * 4)))();
  return;
}

