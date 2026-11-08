// FUN_011f383c @ 011f383c size=340 calls_out=2 calls_in=0
// strings: 

void FUN_011f383c(uint *param_1)

{
  int iVar1;
  
  iVar1 = 0x22;
  if (0x80000009 < *param_1) {
    iVar1 = *param_1 + 0x7ffffff6;
  }
                    /* WARNING: Could not recover jumptable at 0x011f3860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_011f3864 + *(int *)(&DAT_011f3864 + iVar1 * 4)))();
  return;
}

