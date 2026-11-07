// FUN_00f0057c @ 00f0057c size=52 calls_out=0 calls_in=0
// strings: 

void FUN_00f0057c(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00f005ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_0187d03c + (uint)*param_1 * 4),
             *(undefined4 *)(&DAT_0035b620 + (uint)*param_1 * 4));
  return;
}

