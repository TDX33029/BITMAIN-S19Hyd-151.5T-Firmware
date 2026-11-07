// FUN_01442f90 @ 01442f90 size=52 calls_out=0 calls_in=0
// strings: EmptyHost

void FUN_01442f90(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01442fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_EmptyHost_018b31d0)[*param_1],
             *(undefined4 *)(&DAT_00421de0 + (uint)*param_1 * 4));
  return;
}

