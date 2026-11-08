// FUN_006c1008 @ 006c1008 size=40 calls_out=0 calls_in=2
// strings: 

void FUN_006c1008(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 8;
  if (*(int *)(param_2 + 0x10) < 0) {
    iVar1 = *(int *)(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x006c102c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_006c1030 + *(int *)(&DAT_006c1030 + iVar1 * 4)))();
  return;
}

