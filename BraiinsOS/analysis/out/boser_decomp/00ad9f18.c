// FUN_00ad9f18 @ 00ad9f18 size=80 calls_out=0 calls_in=17
// strings: 

void FUN_00ad9f18(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined1 **)(param_1 + 0x18) = &DAT_80000008;
    return;
  }
  iVar1 = 8;
  if (*(int *)(param_2 + 0x18) < 0) {
    iVar1 = *(int *)(param_2 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00ad9f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00ad9f54 + *(int *)(&DAT_00ad9f54 + iVar1 * 4)))();
  return;
}

