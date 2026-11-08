// FUN_01386cac @ 01386cac size=52 calls_out=0 calls_in=0
// strings: 

void FUN_01386cac(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01386cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_01d31eec)[*param_1],
             *(undefined4 *)(&DAT_005367f4 + (uint)*param_1 * 4));
  return;
}

