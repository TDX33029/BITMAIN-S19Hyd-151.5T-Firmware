// FUN_00f5ce20 @ 00f5ce20 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_00f5ce20(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00f5ce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_018b0fec)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_0041f1cc + (uint)*(byte *)*param_1 * 4));
  return;
}

