// FUN_015004cc @ 015004cc size=56 calls_out=0 calls_in=0
// strings: 

void FUN_015004cc(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01500500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_018b398c)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_004225cc + (uint)*(byte *)*param_1 * 4));
  return;
}

