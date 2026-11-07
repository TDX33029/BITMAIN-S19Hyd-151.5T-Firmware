// FUN_0191c9f0 @ 0191c9f0 size=52 calls_out=0 calls_in=2
// strings: 

void FUN_0191c9f0(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = 0xb;
  if (0x80000012 < *param_2) {
    iVar1 = *param_2 + 0x7fffffed;
  }
                    /* WARNING: Could not recover jumptable at 0x0191ca20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0191ca24 + *(int *)(&DAT_0191ca24 + iVar1 * 4)))();
  return;
}

