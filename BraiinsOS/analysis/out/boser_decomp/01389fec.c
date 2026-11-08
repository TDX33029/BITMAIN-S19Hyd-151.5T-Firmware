// FUN_01389fec @ 01389fec size=56 calls_out=0 calls_in=0
// strings: inactive stream

void FUN_01389fec(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0138a020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_inactive_stream_01d31fa0)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_005368a8 + (uint)*(byte *)*param_1 * 4));
  return;
}

