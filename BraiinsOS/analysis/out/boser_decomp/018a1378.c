// FUN_018a1378 @ 018a1378 size=56 calls_out=0 calls_in=0
// strings: Empty

void FUN_018a1378(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x018a13ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_Empty_01d339ac)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_005385cc + (uint)*(byte *)*param_1 * 4));
  return;
}

