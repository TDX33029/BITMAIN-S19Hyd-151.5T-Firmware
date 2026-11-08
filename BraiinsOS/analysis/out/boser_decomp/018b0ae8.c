// FUN_018b0ae8 @ 018b0ae8 size=104 calls_out=1 calls_in=0
// strings: 

void FUN_018b0ae8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(int *)*param_1 < 0) {
    iVar1 = *(int *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x018b0b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_018b0b14 + *(int *)(&DAT_018b0b14 + iVar1 * 4)))();
  return;
}

