// FUN_01494580 @ 01494580 size=52 calls_out=0 calls_in=0
// strings: EmptyHost

void FUN_01494580(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x014945b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_EmptyHost_018b32f4)[*param_1],
             *(undefined4 *)(&DAT_00421f04 + (uint)*param_1 * 4));
  return;
}

