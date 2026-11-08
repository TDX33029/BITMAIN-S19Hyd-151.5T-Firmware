// FUN_00662208 @ 00662208 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_00662208(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00662238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_018af608 + (uint)*param_1 * 4),
             *(undefined4 *)(&DAT_0041da80 + (uint)*param_1 * 4));
  return;
}

