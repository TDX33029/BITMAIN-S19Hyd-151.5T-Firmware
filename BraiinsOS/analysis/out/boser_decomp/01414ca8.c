// FUN_01414ca8 @ 01414ca8 size=56 calls_out=0 calls_in=0
// strings: InvalidUriChar

void FUN_01414ca8(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01414cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_InvalidUriChar_01d32434)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_00536dac + (uint)*(byte *)*param_1 * 4));
  return;
}

