// FUN_016b4730 @ 016b4730 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_016b4730(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x016b4760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_01d331c0)[*param_1],
             *(undefined4 *)(&DAT_00537cac + (uint)*param_1 * 4));
  return;
}

