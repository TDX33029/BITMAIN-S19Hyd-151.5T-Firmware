// FUN_014442c8 @ 014442c8 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_014442c8(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x014442f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01d32774 + (uint)*param_1 * 4),
             *(undefined4 *)(&DAT_005370a0 + (uint)*param_1 * 4));
  return;
}

