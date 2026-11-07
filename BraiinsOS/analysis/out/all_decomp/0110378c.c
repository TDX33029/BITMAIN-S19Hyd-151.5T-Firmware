// FUN_0110378c @ 0110378c size=56 calls_out=0 calls_in=1
// strings: WireTypeVarint

void FUN_0110378c(byte *param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x011037c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0xc))
            (param_2,(&PTR_s_WireTypeVarint_018b2138)[*param_1],
             *(undefined4 *)(&DAT_00420260 + (uint)*param_1 * 4));
  return;
}

