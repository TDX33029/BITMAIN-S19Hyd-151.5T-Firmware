// FUN_006bcbe4 @ 006bcbe4 size=136 calls_out=1 calls_in=0
// strings: 

void FUN_006bcbe4(uint *param_1)

{
  int iVar1;
  
  iVar1 = 3;
  if (0x80000000 < *param_1) {
    iVar1 = *param_1 + 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x006bcc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_006bcc0c + *(int *)(&DAT_006bcc0c + iVar1 * 4)))();
  return;
}

