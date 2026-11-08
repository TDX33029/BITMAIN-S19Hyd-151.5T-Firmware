// FUN_0111b830 @ 0111b830 size=56 calls_out=0 calls_in=0
// strings: Subscribe

void FUN_0111b830(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0111b864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_Subscribe_018b21b4)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_004202b4 + (uint)*(byte *)*param_1 * 4));
  return;
}

