// FUN_00be9a48 @ 00be9a48 size=328 calls_out=2 calls_in=0
// strings: MinerErrorHashboardTemperatureInternalChipTemperatureInternalChipTemperatureRiseBrokenFansControlDecisionExplained

void FUN_00be9a48(uint *param_1)

{
  int iVar1;
  
  iVar1 = 3;
  if (6 < *param_1) {
    iVar1 = *param_1 - 7;
  }
                    /* WARNING: Could not recover jumptable at 0x00be9a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00be9a70 + *(int *)(&DAT_00be9a70 + iVar1 * 4)))();
  return;
}

