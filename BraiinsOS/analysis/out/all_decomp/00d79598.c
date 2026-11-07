// FUN_00d79598 @ 00d79598 size=332 calls_out=2 calls_in=0
// strings: 

void FUN_00d79598(uint *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00d795bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00d795c0 + *(int *)(&DAT_00d795c0 + iVar1 * 4)))();
  return;
}

