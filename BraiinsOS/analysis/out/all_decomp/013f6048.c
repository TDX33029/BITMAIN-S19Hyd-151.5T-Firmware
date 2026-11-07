// FUN_013f6048 @ 013f6048 size=44 calls_out=0 calls_in=8
// strings: 

void FUN_013f6048(uint *param_1)

{
  if (*param_1 < 8) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x013f6070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_013f6074 + *(int *)(&DAT_013f6074 + (*param_1 - 8) * 4)))();
  return;
}

