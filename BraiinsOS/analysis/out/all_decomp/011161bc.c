// FUN_011161bc @ 011161bc size=52 calls_out=0 calls_in=1
// strings: 

void FUN_011161bc(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0x15;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x011161ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_011161f0 + *(int *)(&DAT_011161f0 + iVar1 * 4)))();
  return;
}

