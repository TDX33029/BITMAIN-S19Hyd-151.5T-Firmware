// FUN_014299f8 @ 014299f8 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_014299f8(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01429a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_018b3158 + (uint)*param_1 * 4),
             *(undefined4 *)(&DAT_00421d54 + (uint)*param_1 * 4));
  return;
}

