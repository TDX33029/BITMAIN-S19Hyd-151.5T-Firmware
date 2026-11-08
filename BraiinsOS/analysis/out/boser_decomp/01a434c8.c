// FUN_01a434c8 @ 01a434c8 size=292 calls_out=2 calls_in=0
// strings: Custom

void FUN_01a434c8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 5;
  if (*(int *)*param_1 < 0) {
    iVar1 = *(int *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x01a434f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01a434f4 + *(int *)(&DAT_01a434f4 + iVar1 * 4)))();
  return;
}

