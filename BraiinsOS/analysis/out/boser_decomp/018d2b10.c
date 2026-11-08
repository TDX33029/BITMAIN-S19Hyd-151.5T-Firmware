// FUN_018d2b10 @ 018d2b10 size=52 calls_out=0 calls_in=0
// strings: MalformedSct

void FUN_018d2b10(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x018d2b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_MalformedSct_01d33d40)[*param_1],
             *(undefined4 *)(&DAT_0053893c + (uint)*param_1 * 4));
  return;
}

