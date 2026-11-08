// FUN_006c1c48 @ 006c1c48 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_006c1c48(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x006c1c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01d309a4 + (uint)*(byte *)*param_1 * 4),
             *(undefined4 *)((uint)*(byte *)*param_1 * 4 + 0x534cc8));
  return;
}

