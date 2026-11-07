// FUN_00bad378 @ 00bad378 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_00bad378(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bad3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_018b0d38)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_00565d10 + (uint)*(byte *)*param_1 * 4));
  return;
}

