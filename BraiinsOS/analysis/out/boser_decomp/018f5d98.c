// FUN_018f5d98 @ 018f5d98 size=108 calls_out=1 calls_in=0
// strings: 

void FUN_018f5d98(uint *param_1)

{
  int iVar1;
  
  iVar1 = 0xb;
  if (0x80000012 < *param_1) {
    iVar1 = *param_1 + 0x7fffffed;
  }
                    /* WARNING: Could not recover jumptable at 0x018f5dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_018f5dc0 + *(int *)(&DAT_018f5dc0 + iVar1 * 4)))();
  return;
}

