// FUN_019617f4 @ 019617f4 size=56 calls_out=0 calls_in=0
// strings: major version number

void FUN_019617f4(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01961828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_major_version_number_01d3406c)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_00538d04 + (uint)*(byte *)*param_1 * 4));
  return;
}

