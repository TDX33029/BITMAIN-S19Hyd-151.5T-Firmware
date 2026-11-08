// FUN_0095b258 @ 0095b258 size=44 calls_out=1 calls_in=0
// strings: 

void FUN_0095b258(uint *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x0095b274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0095b278 + *(int *)(&DAT_0095b278 + iVar1 * 4)))();
  return;
}

