// FUN_01522638 @ 01522638 size=36 calls_out=0 calls_in=2
// strings: 

void FUN_01522638(uint *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (0x80000000 < *param_1) {
    iVar1 = *param_1 + 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x01522658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0152265c + *(int *)(&DAT_0152265c + iVar1 * 4)))();
  return;
}

