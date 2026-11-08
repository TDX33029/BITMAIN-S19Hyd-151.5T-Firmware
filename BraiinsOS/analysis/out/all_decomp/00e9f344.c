// FUN_00e9f344 @ 00e9f344 size=68 calls_out=1 calls_in=0
// strings: 

void FUN_00e9f344(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 8;
  if (*(int *)*param_1 < 0) {
    iVar1 = *(int *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00e9f368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00e9f36c + *(int *)(&DAT_00e9f36c + iVar1 * 4)))();
  return;
}

