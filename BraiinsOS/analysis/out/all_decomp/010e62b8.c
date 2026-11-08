// FUN_010e62b8 @ 010e62b8 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_010e62b8(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x010e62e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_018b20b8)[*param_1],
             *(undefined4 *)(&DAT_004201e0 + (uint)*param_1 * 4));
  return;
}

