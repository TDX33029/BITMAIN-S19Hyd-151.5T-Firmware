// FUN_013814e0 @ 013814e0 size=56 calls_out=0 calls_in=0
// strings: DataQ;

void FUN_013814e0(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01381514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_DataQ__01d31ea8)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_005367b0 + (uint)*(byte *)*param_1 * 4));
  return;
}

