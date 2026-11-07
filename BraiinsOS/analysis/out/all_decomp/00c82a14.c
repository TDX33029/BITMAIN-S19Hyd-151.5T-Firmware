// FUN_00c82a14 @ 00c82a14 size=52 calls_out=0 calls_in=0
// strings: Inlet

void FUN_00c82a14(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00c82a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_Inlet_018b0ecc)[*param_1],
             *(undefined4 *)(&DAT_0041f050 + (uint)*param_1 * 4));
  return;
}

