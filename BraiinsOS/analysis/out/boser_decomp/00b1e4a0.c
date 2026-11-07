// FUN_00b1e4a0 @ 00b1e4a0 size=48 calls_out=0 calls_in=3
// strings: 

void FUN_00b1e4a0(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (1 < *param_2) {
    iVar1 = *param_2 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00b1e4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00b1e4d0 + *(int *)(&DAT_00b1e4d0 + iVar1 * 4)))();
  return;
}

