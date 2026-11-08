// FUN_006059c8 @ 006059c8 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_006059c8(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x006059fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_018af57c)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_0041da18 + (uint)*(byte *)*param_1 * 4));
  return;
}

