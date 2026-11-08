// FUN_01480424 @ 01480424 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_01480424(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01480454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_018b3294 + (uint)*param_1 * 4),
             *(undefined4 *)(&DAT_00421ea4 + (uint)*param_1 * 4));
  return;
}

