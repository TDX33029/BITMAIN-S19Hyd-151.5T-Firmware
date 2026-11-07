// FUN_00933abc @ 00933abc size=52 calls_out=0 calls_in=0
// strings: 

void FUN_00933abc(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00933aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_018b088c + (uint)*param_1 * 4),
             *(undefined4 *)(&DAT_0041ebcc + (uint)*param_1 * 4));
  return;
}

