// FUN_010ba6cc @ 010ba6cc size=52 calls_out=0 calls_in=0
// strings: HeaderName

void FUN_010ba6cc(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x010ba6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_HeaderName_018b1ea0)[*param_1],
             *(undefined4 *)(&DAT_0041fff8 + (uint)*param_1 * 4));
  return;
}

