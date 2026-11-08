// FUN_00ffefc0 @ 00ffefc0 size=100 calls_out=0 calls_in=1
// strings: 

void FUN_00ffefc0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = 9;
  if (*param_3 < 0) {
    iVar1 = *param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00fff020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00fff024 + *(int *)(&DAT_00fff024 + iVar1 * 4)))();
  return;
}

