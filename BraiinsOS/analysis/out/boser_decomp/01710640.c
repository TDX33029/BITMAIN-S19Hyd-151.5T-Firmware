// FUN_01710640 @ 01710640 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_01710640(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01710670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01d33324 + (uint)*param_1 * 4),
             *(undefined4 *)(&DAT_00537f3c + (uint)*param_1 * 4));
  return;
}

