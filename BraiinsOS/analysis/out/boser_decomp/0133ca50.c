// FUN_0133ca50 @ 0133ca50 size=104 calls_out=0 calls_in=1
// strings: 

void FUN_0133ca50(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = 9;
  if (*param_3 < 0) {
    iVar1 = *param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0133cab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0133cab8 + *(int *)(&DAT_0133cab8 + iVar1 * 4)))();
  return;
}

