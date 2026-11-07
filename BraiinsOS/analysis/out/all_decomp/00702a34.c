// FUN_00702a34 @ 00702a34 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_00702a34(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00702a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_018af748 + (uint)*param_1 * 4),
             *(undefined4 *)(&DAT_0041dbc4 + (uint)*param_1 * 4));
  return;
}

