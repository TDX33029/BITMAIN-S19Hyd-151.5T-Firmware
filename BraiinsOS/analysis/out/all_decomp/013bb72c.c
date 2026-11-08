// FUN_013bb72c @ 013bb72c size=636 calls_out=3 calls_in=0
// strings: Duplicate | pattern

void FUN_013bb72c(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (*(int *)*param_1 < 0) {
    iVar1 = *(int *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x013bb754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_013bb758 + *(int *)(&DAT_013bb758 + iVar1 * 4)))();
  return;
}

