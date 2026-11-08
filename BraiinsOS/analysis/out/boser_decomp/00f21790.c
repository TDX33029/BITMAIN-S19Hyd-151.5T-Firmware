// FUN_00f21790 @ 00f21790 size=48 calls_out=0 calls_in=2
// strings: 

void FUN_00f21790(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0x15;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00f217bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00f217c0 + *(int *)(&DAT_00f217c0 + iVar1 * 4)))();
  return;
}

