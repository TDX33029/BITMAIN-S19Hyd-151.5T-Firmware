// FUN_01353720 @ 01353720 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_01353720(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01353754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01d31e70 + (uint)*(byte *)*param_1 * 4),
             *(undefined4 *)(&DAT_00536768 + (uint)*(byte *)*param_1 * 4));
  return;
}

