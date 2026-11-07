// FUN_00feaea0 @ 00feaea0 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_00feaea0(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00feaed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01c1d490 + (uint)*(byte *)*param_1 * 4),
             *(undefined4 *)(&DAT_003ff1d4 + (uint)*(byte *)*param_1 * 4));
  return;
}

