// FUN_013e60d8 @ 013e60d8 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_013e60d8(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x013e610c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_018b2e00)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_004219b4 + (uint)*(byte *)*param_1 * 4));
  return;
}

