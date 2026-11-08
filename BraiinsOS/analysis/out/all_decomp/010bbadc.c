// FUN_010bbadc @ 010bbadc size=56 calls_out=0 calls_in=0
// strings: 

void FUN_010bbadc(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x010bbb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_018b1ed8 + (uint)*(byte *)*param_1 * 4),
             *(undefined4 *)(&DAT_00420030 + (uint)*(byte *)*param_1 * 4));
  return;
}

