// FUN_00a6bf1c @ 00a6bf1c size=56 calls_out=0 calls_in=0
// strings: WireTypeVarint

void FUN_00a6bf1c(byte *param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00a6bf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0xc))
            (param_2,(&PTR_s_WireTypeVarint_018b0b90)[*param_1],
             *(undefined4 *)(&DAT_0041ee2c + (uint)*param_1 * 4));
  return;
}

