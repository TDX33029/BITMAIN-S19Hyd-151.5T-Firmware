// FUN_018b098c @ 018b098c size=56 calls_out=0 calls_in=0
// strings: 

void FUN_018b098c(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x018b09c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_01d33a3c)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_0053865c + (uint)*(byte *)*param_1 * 4));
  return;
}

