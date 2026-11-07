// FUN_00b76dd0 @ 00b76dd0 size=52 calls_out=0 calls_in=0
// strings: MinerStatus

void FUN_00b76dd0(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00b76e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_MinerStatus_01d30e2c)[*param_1],
             *(undefined4 *)(&DAT_005353ac + (uint)*param_1 * 4));
  return;
}

