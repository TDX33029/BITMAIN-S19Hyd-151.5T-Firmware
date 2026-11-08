// FUN_010ba4f8 @ 010ba4f8 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_010ba4f8(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x010ba528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_018b1e6c)[*param_1],
             *(undefined4 *)(&DAT_0041ffc4 + (uint)*param_1 * 4));
  return;
}

