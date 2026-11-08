// FUN_00fdb0d0 @ 00fdb0d0 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_00fdb0d0(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00fdb104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_018b1150 + (uint)*(byte *)*param_1 * 4),
             *(undefined4 *)(&DAT_00564e50 + (uint)*(byte *)*param_1 * 4));
  return;
}

