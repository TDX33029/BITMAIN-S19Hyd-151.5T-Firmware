// FUN_013106c0 @ 013106c0 size=44 calls_out=0 calls_in=1
// strings: 

void FUN_013106c0(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 3;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x013106e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_013106ec + *(int *)(&DAT_013106ec + iVar1 * 4)))();
  return;
}

