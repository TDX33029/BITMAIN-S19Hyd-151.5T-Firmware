// FUN_008f7634 @ 008f7634 size=32 calls_out=0 calls_in=10
// strings: 

void FUN_008f7634(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0x15;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x008f7650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_008f7654 + *(int *)(&DAT_008f7654 + iVar1 * 4)))();
  return;
}

