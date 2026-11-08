// FUN_015f01a0 @ 015f01a0 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_015f01a0(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x015f01d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01d32914 + (uint)*(byte *)*param_1 * 4),
             *(undefined4 *)(&DAT_005373ec + (uint)*(byte *)*param_1 * 4));
  return;
}

