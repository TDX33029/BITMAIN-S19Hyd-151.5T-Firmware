// FUN_01621f9c @ 01621f9c size=36 calls_out=0 calls_in=2
// strings: 

void FUN_01621f9c(uint *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (0x80000007 < *param_1) {
    iVar1 = *param_1 + 0x7ffffff8;
  }
                    /* WARNING: Could not recover jumptable at 0x01621fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01621fc0 + *(int *)(&DAT_01621fc0 + iVar1 * 4)))();
  return;
}

