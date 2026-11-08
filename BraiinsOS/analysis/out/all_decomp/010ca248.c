// FUN_010ca248 @ 010ca248 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_010ca248(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x010ca278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_018b1fec)[*param_1],
             *(undefined4 *)(&DAT_00420114 + (uint)*param_1 * 4));
  return;
}

