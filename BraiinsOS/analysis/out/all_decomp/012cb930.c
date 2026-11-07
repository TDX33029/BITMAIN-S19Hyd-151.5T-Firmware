// FUN_012cb930 @ 012cb930 size=52 calls_out=0 calls_in=0
// strings: COUNTER

void FUN_012cb930(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x012cb960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_COUNTER_018b2bfc)[*param_1],
             *(undefined4 *)(&DAT_004216e4 + (uint)*param_1 * 4));
  return;
}

