// FUN_00a85acc @ 00a85acc size=52 calls_out=0 calls_in=0
// strings: 

void FUN_00a85acc(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00a85afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01d30cc8 + (uint)*param_1 * 4),
             *(undefined4 *)(&DAT_00535214 + (uint)*param_1 * 4));
  return;
}

