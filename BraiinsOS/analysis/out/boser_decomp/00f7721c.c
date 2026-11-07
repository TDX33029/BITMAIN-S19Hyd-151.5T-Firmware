// FUN_00f7721c @ 00f7721c size=52 calls_out=0 calls_in=0
// strings: 

void FUN_00f7721c(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00f7724c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01c1aab4 + (uint)*param_1 * 4),
             *(undefined4 *)(&DAT_003f30ac + (uint)*param_1 * 4));
  return;
}

