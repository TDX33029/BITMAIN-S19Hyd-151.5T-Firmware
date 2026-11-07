// FUN_01678d80 @ 01678d80 size=56 calls_out=0 calls_in=0
// strings: base should not have fragment

void FUN_01678d80(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01678db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_base_should_not_have_fragment_01d3319c)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_00537c88 + (uint)*(byte *)*param_1 * 4));
  return;
}

