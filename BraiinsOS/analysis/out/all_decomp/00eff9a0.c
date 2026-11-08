// FUN_00eff9a0 @ 00eff9a0 size=44 calls_out=0 calls_in=1
// strings: 

void FUN_00eff9a0(uint *param_1)

{
  int iVar1;
  
  iVar1 = 3;
  if (1 < *param_1) {
    iVar1 = *param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00eff9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00eff9cc + *(int *)(&DAT_00eff9cc + iVar1 * 4)))();
  return;
}

