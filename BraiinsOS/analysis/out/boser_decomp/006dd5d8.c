// FUN_006dd5d8 @ 006dd5d8 size=48 calls_out=0 calls_in=1
// strings: 

void FUN_006dd5d8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 8;
  if (*(int *)(param_2 + 0x10) < 0) {
    iVar1 = *(int *)(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x006dd604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_006dd608 + *(int *)(&DAT_006dd608 + iVar1 * 4)))();
  return;
}

