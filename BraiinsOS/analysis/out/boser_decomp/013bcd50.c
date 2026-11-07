// FUN_013bcd50 @ 013bcd50 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_013bcd50(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x013bcd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_01d3215c)[*param_1],
             *(undefined4 *)(&DAT_00536a74 + (uint)*param_1 * 4));
  return;
}

