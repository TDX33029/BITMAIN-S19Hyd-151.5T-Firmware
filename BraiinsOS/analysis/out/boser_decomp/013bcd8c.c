// FUN_013bcd8c @ 013bcd8c size=56 calls_out=0 calls_in=0
// strings: 

void FUN_013bcd8c(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x013bcdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01d32204 + (uint)*(byte *)*param_1 * 4),
             *(undefined4 *)(&DAT_00536b1c + (uint)*(byte *)*param_1 * 4));
  return;
}

