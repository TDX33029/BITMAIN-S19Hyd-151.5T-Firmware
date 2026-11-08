// FUN_016ce84c @ 016ce84c size=340 calls_out=2 calls_in=0
// strings: 

void FUN_016ce84c(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (*(int *)*param_1 < 0) {
    iVar1 = *(int *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x016ce870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_016ce874 + *(int *)(&DAT_016ce874 + iVar1 * 4)))();
  return;
}

