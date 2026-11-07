// FUN_008f4e70 @ 008f4e70 size=108 calls_out=0 calls_in=1
// strings: 

void FUN_008f4e70(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5)

{
  int iVar1;
  
  if ((param_5 & 1) == 0) {
    iVar1 = *param_2 - 2;
    if (*param_2 < 2) {
      iVar1 = 3;
    }
                    /* WARNING: Could not recover jumptable at 0x008f4ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_008f4ef4 + *(int *)(&DAT_008f4ef4 + iVar1 * 4)))();
    return;
  }
  iVar1 = *param_2 - 2;
  if (*param_2 < 2) {
    iVar1 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x008f4eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_008f4ebc + *(int *)(&DAT_008f4ebc + iVar1 * 4)))();
  return;
}

