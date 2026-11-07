// FUN_009cb76c @ 009cb76c size=56 calls_out=0 calls_in=0
// strings: WireTypeVarint

void FUN_009cb76c(byte *param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x009cb7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0xc))
            (param_2,(&PTR_s_WireTypeVarint_018b09ec)[*param_1],
             *(undefined4 *)(&DAT_0041ecf4 + (uint)*param_1 * 4));
  return;
}

