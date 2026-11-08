// FUN_00a932e0 @ 00a932e0 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_00a932e0(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00a93310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01d30cd4 + (uint)*param_1 * 4),
             *(undefined4 *)(&DAT_00535220 + (uint)*param_1 * 4));
  return;
}

