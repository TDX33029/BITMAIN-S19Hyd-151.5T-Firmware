// FUN_00788a88 @ 00788a88 size=328 calls_out=2 calls_in=0
// strings: 

void FUN_00788a88(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (1 < *(uint *)*param_1) {
    iVar1 = *(uint *)*param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00788ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00788ab4 + *(int *)(&DAT_00788ab4 + iVar1 * 4)))();
  return;
}

