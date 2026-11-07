// FUN_00ab0d6c @ 00ab0d6c size=44 calls_out=0 calls_in=17
// strings: 

void FUN_00ab0d6c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 8;
  if (*(int *)(param_2 + 0x10) < 0) {
    iVar1 = *(int *)(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00ab0d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00ab0d98 + *(int *)(&DAT_00ab0d98 + iVar1 * 4)))();
  return;
}

