// FUN_00ba809c @ 00ba809c size=52 calls_out=0 calls_in=0
// strings: MinerStatus

void FUN_00ba809c(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00ba80cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_MinerStatus_01c2088c)[*param_1],
             *(undefined4 *)(&DAT_00400f8c + (uint)*param_1 * 4));
  return;
}

