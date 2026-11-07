// FUN_011dd9c0 @ 011dd9c0 size=340 calls_out=2 calls_in=1
// strings: InvalidUriUnknownSpecificationspecificationCircularMetaschema

void FUN_011dd9c0(uint *param_1)

{
  int iVar1;
  
  iVar1 = 6;
  if (0x80000000 < *param_1) {
    iVar1 = *param_1 + 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x011dd9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_011dd9ec + *(int *)(&DAT_011dd9ec + iVar1 * 4)))();
  return;
}

