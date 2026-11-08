// FUN_01807250 @ 01807250 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_01807250(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01807280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01d33700 + (uint)*param_1 * 4),
             *(undefined4 *)(&DAT_0053832c + (uint)*param_1 * 4));
  return;
}

