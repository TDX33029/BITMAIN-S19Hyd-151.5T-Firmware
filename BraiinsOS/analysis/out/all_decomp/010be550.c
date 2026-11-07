// FUN_010be550 @ 010be550 size=56 calls_out=0 calls_in=1
// strings: 

void FUN_010be550(byte *param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x010be584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0xc))
            (param_2,(&PTR_DAT_018b1ee4)[*param_1],
             *(undefined4 *)(&DAT_0042003c + (uint)*param_1 * 4));
  return;
}

