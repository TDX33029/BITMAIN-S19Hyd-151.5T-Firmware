// FUN_00ab1a64 @ 00ab1a64 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_00ab1a64(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00ab1a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01d30d28 + (uint)*param_1 * 4),
             *(undefined4 *)(&DAT_00535280 + (uint)*param_1 * 4));
  return;
}

