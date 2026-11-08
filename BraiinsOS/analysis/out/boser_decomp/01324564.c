// FUN_01324564 @ 01324564 size=52 calls_out=0 calls_in=0
// strings: InvalidCharacter

void FUN_01324564(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01324594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_InvalidCharacter_01d31d4c)[*param_1],
             *(undefined4 *)(&DAT_00536654 + (uint)*param_1 * 4));
  return;
}

