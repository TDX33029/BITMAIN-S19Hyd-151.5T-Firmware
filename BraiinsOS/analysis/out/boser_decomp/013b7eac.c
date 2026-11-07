// FUN_013b7eac @ 013b7eac size=56 calls_out=0 calls_in=0
// strings: DataQ;

void FUN_013b7eac(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x013b7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_DataQ__01d320e8)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_00536a00 + (uint)*(byte *)*param_1 * 4));
  return;
}

