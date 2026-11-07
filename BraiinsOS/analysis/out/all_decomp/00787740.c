// FUN_00787740 @ 00787740 size=56 calls_out=0 calls_in=1
// strings: 

void FUN_00787740(byte *param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00787774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0xc))
            (param_2,(&PTR_DAT_018af9fc)[*param_1],
             *(undefined4 *)(&DAT_0041de58 + (uint)*param_1 * 4));
  return;
}

