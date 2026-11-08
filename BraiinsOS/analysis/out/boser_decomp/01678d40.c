// FUN_01678d40 @ 01678d40 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_01678d40(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01678d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01d33190 + (uint)*(byte *)*param_1 * 4),
             *(undefined4 *)(&DAT_00537c7c + (uint)*(byte *)*param_1 * 4));
  return;
}

