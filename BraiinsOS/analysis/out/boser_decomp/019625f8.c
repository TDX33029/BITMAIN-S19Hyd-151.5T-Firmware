// FUN_019625f8 @ 019625f8 size=40 calls_out=0 calls_in=1
// strings: 

void FUN_019625f8(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0x15;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x0196261c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01962620 + *(int *)(&DAT_01962620 + iVar1 * 4)))();
  return;
}

