// FUN_019bb200 @ 019bb200 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_019bb200(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x019bb230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_01d34418)[*param_1],
             *(undefined4 *)(&DAT_005390e0 + (uint)*param_1 * 4));
  return;
}

