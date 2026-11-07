// FUN_018cd374 @ 018cd374 size=56 calls_out=0 calls_in=0
// strings: MalformedSct

void FUN_018cd374(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x018cd3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_MalformedSct_01d33ce0)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_00538900 + (uint)*(byte *)*param_1 * 4));
  return;
}

