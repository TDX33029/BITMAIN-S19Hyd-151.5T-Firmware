// FUN_015bb010 @ 015bb010 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_015bb010(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x015bb044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_018b52d8)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_00566850 + (uint)*(byte *)*param_1 * 4));
  return;
}

