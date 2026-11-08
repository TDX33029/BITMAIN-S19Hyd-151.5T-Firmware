// FUN_00c76d10 @ 00c76d10 size=348 calls_out=2 calls_in=0
// strings: HwErrorExperiment interrupted by target switchExperiment interrupted by pauseExperiment interrupted by overheating

void FUN_00c76d10(uint *param_1)

{
  int iVar1;
  
  iVar1 = 5;
  if (6 < *param_1) {
    iVar1 = *param_1 - 7;
  }
                    /* WARNING: Could not recover jumptable at 0x00c76d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00c76d3c + *(int *)(&DAT_00c76d3c + iVar1 * 4)))();
  return;
}

