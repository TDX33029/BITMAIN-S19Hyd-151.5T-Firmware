// FUN_010e1dac @ 010e1dac size=52 calls_out=0 calls_in=0
// strings: 

void FUN_010e1dac(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x010e1ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_018b2088)[*param_1],
             *(undefined4 *)(&DAT_004201b0 + (uint)*param_1 * 4));
  return;
}

