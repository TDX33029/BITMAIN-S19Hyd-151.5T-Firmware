// FUN_010035a0 @ 010035a0 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_010035a0(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x010035d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_018b1224)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_0041f33c + (uint)*(byte *)*param_1 * 4));
  return;
}

