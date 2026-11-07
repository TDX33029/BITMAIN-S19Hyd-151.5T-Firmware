// FUN_013fcb24 @ 013fcb24 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_013fcb24(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x013fcb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_018b2e1c)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_00421a18 + (uint)*(byte *)*param_1 * 4));
  return;
}

