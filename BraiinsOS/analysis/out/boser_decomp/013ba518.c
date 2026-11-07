// FUN_013ba518 @ 013ba518 size=56 calls_out=0 calls_in=0
// strings: inactive stream

void FUN_013ba518(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x013ba54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_inactive_stream_01d32114)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_00536a2c + (uint)*(byte *)*param_1 * 4));
  return;
}

