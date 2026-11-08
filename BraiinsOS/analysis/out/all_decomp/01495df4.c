// FUN_01495df4 @ 01495df4 size=340 calls_out=2 calls_in=0
// strings: 

void FUN_01495df4(uint *param_1)

{
  int iVar1;
  
  iVar1 = 0xb;
  if (0x80000012 < *param_1) {
    iVar1 = *param_1 + 0x7fffffed;
  }
                    /* WARNING: Could not recover jumptable at 0x01495e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01495e20 + *(int *)(&DAT_01495e20 + iVar1 * 4)))();
  return;
}

