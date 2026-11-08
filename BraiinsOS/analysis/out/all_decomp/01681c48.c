// FUN_01681c48 @ 01681c48 size=32 calls_out=1 calls_in=2
// strings: 

void FUN_01681c48(int *param_1)

{
  FUN_00919614(param_1 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x01681c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01681c68 + *(int *)(&DAT_01681c68 + *param_1 * 4)))();
  return;
}

