// FUN_00700f8c @ 00700f8c size=44 calls_out=0 calls_in=5
// strings: 

void FUN_00700f8c(int param_1)

{
  int iVar1;
  
  iVar1 = 7;
  if (*(int *)(param_1 + 0x10) < 0) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00700fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00700fb8 + *(int *)(&DAT_00700fb8 + iVar1 * 4)))();
  return;
}

