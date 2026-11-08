// FUN_010cedf4 @ 010cedf4 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_010cedf4(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x010cee24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_018b207c + (uint)*param_1 * 4),
             *(undefined4 *)(&DAT_004201a4 + (uint)*param_1 * 4));
  return;
}

