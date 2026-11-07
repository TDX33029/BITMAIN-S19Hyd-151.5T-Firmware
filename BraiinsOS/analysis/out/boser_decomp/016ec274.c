// FUN_016ec274 @ 016ec274 size=48 calls_out=0 calls_in=4
// strings: 

void FUN_016ec274(uint *param_1)

{
  if (*param_1 < 8) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x016ec298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_016ec29c + *(int *)(&DAT_016ec29c + (*param_1 - 8) * 4)))();
  return;
}

