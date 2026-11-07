// FUN_0152ca34 @ 0152ca34 size=340 calls_out=2 calls_in=0
// strings: 

void FUN_0152ca34(uint *param_1)

{
  int iVar1;
  
  iVar1 = 0xb;
  if (0x80000012 < *param_1) {
    iVar1 = *param_1 + 0x7fffffed;
  }
                    /* WARNING: Could not recover jumptable at 0x0152ca58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0152ca5c + *(int *)(&DAT_0152ca5c + iVar1 * 4)))();
  return;
}

