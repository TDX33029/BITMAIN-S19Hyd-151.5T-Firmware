// FUN_01030870 @ 01030870 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_01030870(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x010308a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_018b1594)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_0041f6bc + (uint)*(byte *)*param_1 * 4));
  return;
}

