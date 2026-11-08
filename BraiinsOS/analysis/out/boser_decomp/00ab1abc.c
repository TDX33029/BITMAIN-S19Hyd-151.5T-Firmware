// FUN_00ab1abc @ 00ab1abc size=28 calls_out=0 calls_in=0
// strings: 

void FUN_00ab1abc(uint *param_1)

{
  int iVar1;
  
  iVar1 = 3;
  if (6 < *param_1) {
    iVar1 = *param_1 - 7;
  }
                    /* WARNING: Could not recover jumptable at 0x00ab1ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00ab1ad8 + *(int *)(&DAT_00ab1ad8 + iVar1 * 4)))();
  return;
}

