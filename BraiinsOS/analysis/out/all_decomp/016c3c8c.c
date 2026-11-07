// FUN_016c3c8c @ 016c3c8c size=36 calls_out=0 calls_in=2
// strings: 

void FUN_016c3c8c(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 4;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x016c3cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_016c3cb0 + *(int *)(&DAT_016c3cb0 + iVar1 * 4)))();
  return;
}

