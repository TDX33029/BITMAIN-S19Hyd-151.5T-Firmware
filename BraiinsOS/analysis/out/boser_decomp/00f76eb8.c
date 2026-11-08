// FUN_00f76eb8 @ 00f76eb8 size=228 calls_out=1 calls_in=0
// strings: idlast_updatedlast_ticknext_tickran | Running | phaseRebootingCompletedFailed

void FUN_00f76eb8(uint *param_1)

{
  int iVar1;
  
  iVar1 = 3;
  if ((uint)(*param_1 < 3) <= -param_1[1]) {
    iVar1 = *param_1 - 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00f76edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00f76ee0 + *(int *)(&DAT_00f76ee0 + iVar1 * 4)))();
  return;
}

