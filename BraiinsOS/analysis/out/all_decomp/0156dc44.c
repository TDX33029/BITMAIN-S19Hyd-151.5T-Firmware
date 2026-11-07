// FUN_0156dc44 @ 0156dc44 size=100 calls_out=1 calls_in=0
// strings: 

void FUN_0156dc44(uint *param_1)

{
  int iVar1;
  
  iVar1 = 0xb;
  if (0x80000012 < *param_1) {
    iVar1 = *param_1 + 0x7fffffed;
  }
                    /* WARNING: Could not recover jumptable at 0x0156dc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0156dc6c + *(int *)(&DAT_0156dc6c + iVar1 * 4)))();
  return;
}

