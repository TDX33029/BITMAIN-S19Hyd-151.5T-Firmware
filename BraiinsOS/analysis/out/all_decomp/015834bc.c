// FUN_015834bc @ 015834bc size=56 calls_out=0 calls_in=0
// strings: 

void FUN_015834bc(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x015834f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_018b4954)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_004235f0 + (uint)*(byte *)*param_1 * 4));
  return;
}

