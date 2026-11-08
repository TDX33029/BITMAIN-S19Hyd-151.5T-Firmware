// FUN_00db3aac @ 00db3aac size=52 calls_out=0 calls_in=1
// strings: 

void FUN_00db3aac(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0x15;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00db3adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00db3ae0 + *(int *)(&DAT_00db3ae0 + iVar1 * 4)))();
  return;
}

